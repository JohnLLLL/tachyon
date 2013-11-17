#!/usr/bin/env python2.7

import tachyon
import subprocess

class TestCommandLineOptions(tachyon.TachyonTestCase):
	def setUp(self):
		self.tachyon = None
		self.tachyonTerminated = False

	def tearDown(self):
		if self.tachyon and not self.tachyonTerminated:
			self.tachyon.kill()

	def test_invalidOption(self):
		self.tachyon = subprocess.Popen('./tachyon -z', shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)

		self.waitForTermination()

		self.assertEqual(self.tachyon.returncode, 1)

