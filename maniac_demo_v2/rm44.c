/**
 * Maniac Mansion: V2 Demo
 * 
 * Room 44: Driveway
 */

// EN
[0000] (3C) stopSound(32);
[0002] (00) stopObjectCode();
END

// EX
[0000] (3C) stopSound(58);
[0002] (68) VAR_RESULT = isScriptRunning(12);
[0005] (48) if (VAR_RESULT == 1) {
[000B] (1C)   startSound(32);
[000D] (**) }
[000D] (42) startScript(168);
[000F] (00) stopObjectCode();
END

// Object 258: Path to House
Events:
   D - 0013
[0013] (24) loadRoomWithEgo(257,1,255,255);
[0019] (00) stopObjectCode();
END

// Object 278: Warning Sign
Events:
   C - 0017
[0017] (D8) printEgo("WARNING!!\x03Trespassers will be horribly mutilated.");
[0046] (00) stopObjectCode();
END
