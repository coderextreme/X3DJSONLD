unit StandardHumanoid;

interface

uses X3DNodes;

function CreateStandardHumanoid: TX3DRootNode;

implementation

uses CastleVectors;

function CreateStandardHumanoid: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
Transform12: TTransformNode;
Shape13: TShapeNode;
IndexedLineSet14: TIndexedLineSetNode;
Coordinate15: TCoordinateNode;
Color16: TColorNode;
Group17: TGroupNode;
Transform18: TTransformNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Sphere21: TSphereNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
LineSet26: TLineSetNode;
ColorRGBA27: TColorRGBANode;
Coordinate28: TCoordinateNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
IndexedFaceSet31: TIndexedFaceSetNode;
ColorRGBA32: TColorRGBANode;
Coordinate33: TCoordinateNode;
Appearance34: TAppearanceNode;
Material35: TMaterialNode;
NavigationInfo36: TNavigationInfoNode;
Viewpoint37: TViewpointNode;
HAnimHumanoid38: THAnimHumanoidNode;
HAnimJoint39: THAnimJointNode;
HAnimSegment40: THAnimSegmentNode;
Transform41: TTransformNode;
Transform42: TTransformNode;
TouchSensor43: TTouchSensorNode;
Shape44: TShapeNode;
TouchSensor45: TTouchSensorNode;
Shape46: TShapeNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Extrusion49: TExtrusionNode;
TouchSensor50: TTouchSensorNode;
Shape51: TShapeNode;
Appearance52: TAppearanceNode;
Material53: TMaterialNode;
Extrusion54: TExtrusionNode;
HAnimJoint55: THAnimJointNode;
HAnimSegment56: THAnimSegmentNode;
Transform57: TTransformNode;
Transform58: TTransformNode;
TouchSensor59: TTouchSensorNode;
Shape60: TShapeNode;
TouchSensor61: TTouchSensorNode;
Shape62: TShapeNode;
Appearance63: TAppearanceNode;
Material64: TMaterialNode;
Extrusion65: TExtrusionNode;
TouchSensor66: TTouchSensorNode;
Shape67: TShapeNode;
Appearance68: TAppearanceNode;
Material69: TMaterialNode;
Extrusion70: TExtrusionNode;
HAnimJoint71: THAnimJointNode;
HAnimSegment72: THAnimSegmentNode;
Transform73: TTransformNode;
Transform74: TTransformNode;
TouchSensor75: TTouchSensorNode;
Shape76: TShapeNode;
TouchSensor77: TTouchSensorNode;
Shape78: TShapeNode;
Appearance79: TAppearanceNode;
Material80: TMaterialNode;
Extrusion81: TExtrusionNode;
HAnimJoint82: THAnimJointNode;
HAnimSegment83: THAnimSegmentNode;
Transform84: TTransformNode;
Transform85: TTransformNode;
TouchSensor86: TTouchSensorNode;
Shape87: TShapeNode;
TouchSensor88: TTouchSensorNode;
Shape89: TShapeNode;
Appearance90: TAppearanceNode;
Material91: TMaterialNode;
Extrusion92: TExtrusionNode;
HAnimJoint93: THAnimJointNode;
HAnimSegment94: THAnimSegmentNode;
Transform95: TTransformNode;
Transform96: TTransformNode;
TouchSensor97: TTouchSensorNode;
Shape98: TShapeNode;
TouchSensor99: TTouchSensorNode;
Shape100: TShapeNode;
Appearance101: TAppearanceNode;
Material102: TMaterialNode;
Extrusion103: TExtrusionNode;
TouchSensor104: TTouchSensorNode;
Shape105: TShapeNode;
Appearance106: TAppearanceNode;
Material107: TMaterialNode;
Extrusion108: TExtrusionNode;
HAnimJoint109: THAnimJointNode;
HAnimSegment110: THAnimSegmentNode;
Transform111: TTransformNode;
Transform112: TTransformNode;
TouchSensor113: TTouchSensorNode;
Shape114: TShapeNode;
TouchSensor115: TTouchSensorNode;
Shape116: TShapeNode;
Appearance117: TAppearanceNode;
Material118: TMaterialNode;
Extrusion119: TExtrusionNode;
TouchSensor120: TTouchSensorNode;
Shape121: TShapeNode;
Appearance122: TAppearanceNode;
Material123: TMaterialNode;
Extrusion124: TExtrusionNode;
TouchSensor125: TTouchSensorNode;
Shape126: TShapeNode;
Appearance127: TAppearanceNode;
Material128: TMaterialNode;
Extrusion129: TExtrusionNode;
HAnimJoint130: THAnimJointNode;
HAnimSegment131: THAnimSegmentNode;
Transform132: TTransformNode;
Transform133: TTransformNode;
TouchSensor134: TTouchSensorNode;
Shape135: TShapeNode;
TouchSensor136: TTouchSensorNode;
Shape137: TShapeNode;
Appearance138: TAppearanceNode;
Material139: TMaterialNode;
Extrusion140: TExtrusionNode;
HAnimJoint141: THAnimJointNode;
HAnimSegment142: THAnimSegmentNode;
Transform143: TTransformNode;
Transform144: TTransformNode;
TouchSensor145: TTouchSensorNode;
Shape146: TShapeNode;
TouchSensor147: TTouchSensorNode;
Shape148: TShapeNode;
Appearance149: TAppearanceNode;
Material150: TMaterialNode;
Extrusion151: TExtrusionNode;
HAnimJoint152: THAnimJointNode;
HAnimSegment153: THAnimSegmentNode;
Transform154: TTransformNode;
Transform155: TTransformNode;
TouchSensor156: TTouchSensorNode;
Shape157: TShapeNode;
TouchSensor158: TTouchSensorNode;
Shape159: TShapeNode;
Appearance160: TAppearanceNode;
Material161: TMaterialNode;
Extrusion162: TExtrusionNode;
HAnimJoint163: THAnimJointNode;
HAnimJoint164: THAnimJointNode;
HAnimSegment165: THAnimSegmentNode;
Transform166: TTransformNode;
Transform167: TTransformNode;
TouchSensor168: TTouchSensorNode;
Shape169: TShapeNode;
TouchSensor170: TTouchSensorNode;
Shape171: TShapeNode;
Appearance172: TAppearanceNode;
Material173: TMaterialNode;
Extrusion174: TExtrusionNode;
HAnimJoint175: THAnimJointNode;
HAnimSegment176: THAnimSegmentNode;
Transform177: TTransformNode;
Transform178: TTransformNode;
TouchSensor179: TTouchSensorNode;
Shape180: TShapeNode;
TouchSensor181: TTouchSensorNode;
Shape182: TShapeNode;
Appearance183: TAppearanceNode;
Material184: TMaterialNode;
Extrusion185: TExtrusionNode;
HAnimJoint186: THAnimJointNode;
HAnimSegment187: THAnimSegmentNode;
Transform188: TTransformNode;
Transform189: TTransformNode;
TouchSensor190: TTouchSensorNode;
Shape191: TShapeNode;
TouchSensor192: TTouchSensorNode;
Shape193: TShapeNode;
Appearance194: TAppearanceNode;
Material195: TMaterialNode;
Extrusion196: TExtrusionNode;
HAnimJoint197: THAnimJointNode;
HAnimSegment198: THAnimSegmentNode;
Transform199: TTransformNode;
Transform200: TTransformNode;
TouchSensor201: TTouchSensorNode;
Shape202: TShapeNode;
TouchSensor203: TTouchSensorNode;
Shape204: TShapeNode;
Appearance205: TAppearanceNode;
Material206: TMaterialNode;
Extrusion207: TExtrusionNode;
HAnimJoint208: THAnimJointNode;
HAnimJoint209: THAnimJointNode;
HAnimSegment210: THAnimSegmentNode;
Transform211: TTransformNode;
Transform212: TTransformNode;
TouchSensor213: TTouchSensorNode;
Shape214: TShapeNode;
TouchSensor215: TTouchSensorNode;
Shape216: TShapeNode;
Appearance217: TAppearanceNode;
Material218: TMaterialNode;
Extrusion219: TExtrusionNode;
HAnimJoint220: THAnimJointNode;
HAnimSegment221: THAnimSegmentNode;
Transform222: TTransformNode;
Transform223: TTransformNode;
TouchSensor224: TTouchSensorNode;
Shape225: TShapeNode;
TouchSensor226: TTouchSensorNode;
Shape227: TShapeNode;
Appearance228: TAppearanceNode;
Material229: TMaterialNode;
Extrusion230: TExtrusionNode;
HAnimJoint231: THAnimJointNode;
HAnimSegment232: THAnimSegmentNode;
Transform233: TTransformNode;
Transform234: TTransformNode;
TouchSensor235: TTouchSensorNode;
Shape236: TShapeNode;
TouchSensor237: TTouchSensorNode;
Shape238: TShapeNode;
Appearance239: TAppearanceNode;
Material240: TMaterialNode;
Extrusion241: TExtrusionNode;
HAnimJoint242: THAnimJointNode;
HAnimSegment243: THAnimSegmentNode;
Transform244: TTransformNode;
Transform245: TTransformNode;
TouchSensor246: TTouchSensorNode;
Shape247: TShapeNode;
TouchSensor248: TTouchSensorNode;
Shape249: TShapeNode;
Appearance250: TAppearanceNode;
Material251: TMaterialNode;
Extrusion252: TExtrusionNode;
HAnimJoint253: THAnimJointNode;
HAnimJoint254: THAnimJointNode;
HAnimSegment255: THAnimSegmentNode;
Transform256: TTransformNode;
Transform257: TTransformNode;
TouchSensor258: TTouchSensorNode;
Shape259: TShapeNode;
TouchSensor260: TTouchSensorNode;
Shape261: TShapeNode;
Appearance262: TAppearanceNode;
Material263: TMaterialNode;
Extrusion264: TExtrusionNode;
HAnimJoint265: THAnimJointNode;
HAnimSegment266: THAnimSegmentNode;
Transform267: TTransformNode;
Transform268: TTransformNode;
TouchSensor269: TTouchSensorNode;
Shape270: TShapeNode;
TouchSensor271: TTouchSensorNode;
Shape272: TShapeNode;
Appearance273: TAppearanceNode;
Material274: TMaterialNode;
Extrusion275: TExtrusionNode;
TouchSensor276: TTouchSensorNode;
Shape277: TShapeNode;
Appearance278: TAppearanceNode;
Material279: TMaterialNode;
Extrusion280: TExtrusionNode;
HAnimJoint281: THAnimJointNode;
HAnimSegment282: THAnimSegmentNode;
Transform283: TTransformNode;
Transform284: TTransformNode;
TouchSensor285: TTouchSensorNode;
Shape286: TShapeNode;
TouchSensor287: TTouchSensorNode;
Shape288: TShapeNode;
Appearance289: TAppearanceNode;
Material290: TMaterialNode;
Extrusion291: TExtrusionNode;
HAnimJoint292: THAnimJointNode;
HAnimSegment293: THAnimSegmentNode;
Transform294: TTransformNode;
Transform295: TTransformNode;
TouchSensor296: TTouchSensorNode;
Shape297: TShapeNode;
TouchSensor298: TTouchSensorNode;
Shape299: TShapeNode;
Appearance300: TAppearanceNode;
Material301: TMaterialNode;
Extrusion302: TExtrusionNode;
HAnimJoint303: THAnimJointNode;
HAnimSegment304: THAnimSegmentNode;
Transform305: TTransformNode;
Transform306: TTransformNode;
TouchSensor307: TTouchSensorNode;
Shape308: TShapeNode;
TouchSensor309: TTouchSensorNode;
Shape310: TShapeNode;
Appearance311: TAppearanceNode;
Material312: TMaterialNode;
Extrusion313: TExtrusionNode;
HAnimJoint314: THAnimJointNode;
HAnimJoint315: THAnimJointNode;
HAnimSegment316: THAnimSegmentNode;
Transform317: TTransformNode;
Transform318: TTransformNode;
TouchSensor319: TTouchSensorNode;
Shape320: TShapeNode;
TouchSensor321: TTouchSensorNode;
Shape322: TShapeNode;
Appearance323: TAppearanceNode;
Material324: TMaterialNode;
Extrusion325: TExtrusionNode;
HAnimJoint326: THAnimJointNode;
HAnimSegment327: THAnimSegmentNode;
Transform328: TTransformNode;
Transform329: TTransformNode;
TouchSensor330: TTouchSensorNode;
Shape331: TShapeNode;
TouchSensor332: TTouchSensorNode;
Shape333: TShapeNode;
Appearance334: TAppearanceNode;
Material335: TMaterialNode;
Extrusion336: TExtrusionNode;
HAnimJoint337: THAnimJointNode;
HAnimSegment338: THAnimSegmentNode;
Transform339: TTransformNode;
Transform340: TTransformNode;
TouchSensor341: TTouchSensorNode;
Shape342: TShapeNode;
TouchSensor343: TTouchSensorNode;
Shape344: TShapeNode;
Appearance345: TAppearanceNode;
Material346: TMaterialNode;
Extrusion347: TExtrusionNode;
HAnimJoint348: THAnimJointNode;
HAnimJoint349: THAnimJointNode;
HAnimSegment350: THAnimSegmentNode;
Transform351: TTransformNode;
Transform352: TTransformNode;
TouchSensor353: TTouchSensorNode;
Shape354: TShapeNode;
TouchSensor355: TTouchSensorNode;
Shape356: TShapeNode;
Appearance357: TAppearanceNode;
Material358: TMaterialNode;
Extrusion359: TExtrusionNode;
HAnimJoint360: THAnimJointNode;
HAnimSegment361: THAnimSegmentNode;
Transform362: TTransformNode;
Transform363: TTransformNode;
TouchSensor364: TTouchSensorNode;
Shape365: TShapeNode;
TouchSensor366: TTouchSensorNode;
Shape367: TShapeNode;
Appearance368: TAppearanceNode;
Material369: TMaterialNode;
Extrusion370: TExtrusionNode;
HAnimJoint371: THAnimJointNode;
HAnimSegment372: THAnimSegmentNode;
Transform373: TTransformNode;
Transform374: TTransformNode;
TouchSensor375: TTouchSensorNode;
Shape376: TShapeNode;
TouchSensor377: TTouchSensorNode;
Shape378: TShapeNode;
Appearance379: TAppearanceNode;
Material380: TMaterialNode;
Extrusion381: TExtrusionNode;
TouchSensor382: TTouchSensorNode;
Shape383: TShapeNode;
Appearance384: TAppearanceNode;
Material385: TMaterialNode;
Extrusion386: TExtrusionNode;
HAnimJoint387: THAnimJointNode;
HAnimSegment388: THAnimSegmentNode;
Transform389: TTransformNode;
Transform390: TTransformNode;
TouchSensor391: TTouchSensorNode;
Shape392: TShapeNode;
TouchSensor393: TTouchSensorNode;
Shape394: TShapeNode;
Appearance395: TAppearanceNode;
Material396: TMaterialNode;
Extrusion397: TExtrusionNode;
TouchSensor398: TTouchSensorNode;
Shape399: TShapeNode;
Appearance400: TAppearanceNode;
Material401: TMaterialNode;
Extrusion402: TExtrusionNode;
TouchSensor403: TTouchSensorNode;
Shape404: TShapeNode;
Appearance405: TAppearanceNode;
Material406: TMaterialNode;
Extrusion407: TExtrusionNode;
HAnimJoint408: THAnimJointNode;
HAnimSegment409: THAnimSegmentNode;
Transform410: TTransformNode;
Transform411: TTransformNode;
TouchSensor412: TTouchSensorNode;
Shape413: TShapeNode;
TouchSensor414: TTouchSensorNode;
Shape415: TShapeNode;
Appearance416: TAppearanceNode;
Material417: TMaterialNode;
Extrusion418: TExtrusionNode;
HAnimJoint419: THAnimJointNode;
HAnimSegment420: THAnimSegmentNode;
Transform421: TTransformNode;
Transform422: TTransformNode;
TouchSensor423: TTouchSensorNode;
Shape424: TShapeNode;
TouchSensor425: TTouchSensorNode;
Shape426: TShapeNode;
Appearance427: TAppearanceNode;
Material428: TMaterialNode;
Extrusion429: TExtrusionNode;
HAnimJoint430: THAnimJointNode;
HAnimSegment431: THAnimSegmentNode;
Transform432: TTransformNode;
Transform433: TTransformNode;
TouchSensor434: TTouchSensorNode;
Shape435: TShapeNode;
TouchSensor436: TTouchSensorNode;
Shape437: TShapeNode;
Appearance438: TAppearanceNode;
Material439: TMaterialNode;
Extrusion440: TExtrusionNode;
HAnimJoint441: THAnimJointNode;
HAnimJoint442: THAnimJointNode;
HAnimSegment443: THAnimSegmentNode;
Transform444: TTransformNode;
Transform445: TTransformNode;
TouchSensor446: TTouchSensorNode;
Shape447: TShapeNode;
TouchSensor448: TTouchSensorNode;
Shape449: TShapeNode;
Appearance450: TAppearanceNode;
Material451: TMaterialNode;
Extrusion452: TExtrusionNode;
HAnimJoint453: THAnimJointNode;
HAnimSegment454: THAnimSegmentNode;
Transform455: TTransformNode;
Transform456: TTransformNode;
TouchSensor457: TTouchSensorNode;
Shape458: TShapeNode;
TouchSensor459: TTouchSensorNode;
Shape460: TShapeNode;
Appearance461: TAppearanceNode;
Material462: TMaterialNode;
Extrusion463: TExtrusionNode;
HAnimJoint464: THAnimJointNode;
HAnimSegment465: THAnimSegmentNode;
Transform466: TTransformNode;
Transform467: TTransformNode;
TouchSensor468: TTouchSensorNode;
Shape469: TShapeNode;
TouchSensor470: TTouchSensorNode;
Shape471: TShapeNode;
Appearance472: TAppearanceNode;
Material473: TMaterialNode;
Extrusion474: TExtrusionNode;
HAnimJoint475: THAnimJointNode;
HAnimSegment476: THAnimSegmentNode;
Transform477: TTransformNode;
Transform478: TTransformNode;
TouchSensor479: TTouchSensorNode;
Shape480: TShapeNode;
TouchSensor481: TTouchSensorNode;
Shape482: TShapeNode;
Appearance483: TAppearanceNode;
Material484: TMaterialNode;
Extrusion485: TExtrusionNode;
HAnimJoint486: THAnimJointNode;
HAnimJoint487: THAnimJointNode;
HAnimSegment488: THAnimSegmentNode;
Transform489: TTransformNode;
Transform490: TTransformNode;
TouchSensor491: TTouchSensorNode;
Shape492: TShapeNode;
TouchSensor493: TTouchSensorNode;
Shape494: TShapeNode;
Appearance495: TAppearanceNode;
Material496: TMaterialNode;
Extrusion497: TExtrusionNode;
HAnimJoint498: THAnimJointNode;
HAnimSegment499: THAnimSegmentNode;
Transform500: TTransformNode;
Transform501: TTransformNode;
TouchSensor502: TTouchSensorNode;
Shape503: TShapeNode;
TouchSensor504: TTouchSensorNode;
Shape505: TShapeNode;
Appearance506: TAppearanceNode;
Material507: TMaterialNode;
Extrusion508: TExtrusionNode;
HAnimJoint509: THAnimJointNode;
HAnimSegment510: THAnimSegmentNode;
Transform511: TTransformNode;
Transform512: TTransformNode;
TouchSensor513: TTouchSensorNode;
Shape514: TShapeNode;
TouchSensor515: TTouchSensorNode;
Shape516: TShapeNode;
Appearance517: TAppearanceNode;
Material518: TMaterialNode;
Extrusion519: TExtrusionNode;
HAnimJoint520: THAnimJointNode;
HAnimSegment521: THAnimSegmentNode;
Transform522: TTransformNode;
Transform523: TTransformNode;
TouchSensor524: TTouchSensorNode;
Shape525: TShapeNode;
TouchSensor526: TTouchSensorNode;
Shape527: TShapeNode;
Appearance528: TAppearanceNode;
Material529: TMaterialNode;
Extrusion530: TExtrusionNode;
HAnimJoint531: THAnimJointNode;
HAnimJoint532: THAnimJointNode;
HAnimSegment533: THAnimSegmentNode;
Transform534: TTransformNode;
Transform535: TTransformNode;
TouchSensor536: TTouchSensorNode;
Shape537: TShapeNode;
TouchSensor538: TTouchSensorNode;
Shape539: TShapeNode;
Appearance540: TAppearanceNode;
Material541: TMaterialNode;
Extrusion542: TExtrusionNode;
HAnimJoint543: THAnimJointNode;
HAnimSegment544: THAnimSegmentNode;
Transform545: TTransformNode;
Transform546: TTransformNode;
TouchSensor547: TTouchSensorNode;
Shape548: TShapeNode;
TouchSensor549: TTouchSensorNode;
Shape550: TShapeNode;
Appearance551: TAppearanceNode;
Material552: TMaterialNode;
Extrusion553: TExtrusionNode;
TouchSensor554: TTouchSensorNode;
Shape555: TShapeNode;
Appearance556: TAppearanceNode;
Material557: TMaterialNode;
Extrusion558: TExtrusionNode;
HAnimJoint559: THAnimJointNode;
HAnimSegment560: THAnimSegmentNode;
Transform561: TTransformNode;
Transform562: TTransformNode;
TouchSensor563: TTouchSensorNode;
Shape564: TShapeNode;
TouchSensor565: TTouchSensorNode;
Shape566: TShapeNode;
Appearance567: TAppearanceNode;
Material568: TMaterialNode;
Extrusion569: TExtrusionNode;
HAnimJoint570: THAnimJointNode;
HAnimSegment571: THAnimSegmentNode;
Transform572: TTransformNode;
Transform573: TTransformNode;
TouchSensor574: TTouchSensorNode;
Shape575: TShapeNode;
TouchSensor576: TTouchSensorNode;
Shape577: TShapeNode;
Appearance578: TAppearanceNode;
Material579: TMaterialNode;
Extrusion580: TExtrusionNode;
HAnimJoint581: THAnimJointNode;
HAnimSegment582: THAnimSegmentNode;
Transform583: TTransformNode;
Transform584: TTransformNode;
TouchSensor585: TTouchSensorNode;
Shape586: TShapeNode;
TouchSensor587: TTouchSensorNode;
Shape588: TShapeNode;
Appearance589: TAppearanceNode;
Material590: TMaterialNode;
Extrusion591: TExtrusionNode;
HAnimJoint592: THAnimJointNode;
HAnimJoint593: THAnimJointNode;
HAnimSegment594: THAnimSegmentNode;
Transform595: TTransformNode;
Transform596: TTransformNode;
TouchSensor597: TTouchSensorNode;
Shape598: TShapeNode;
TouchSensor599: TTouchSensorNode;
Shape600: TShapeNode;
Appearance601: TAppearanceNode;
Material602: TMaterialNode;
Extrusion603: TExtrusionNode;
HAnimJoint604: THAnimJointNode;
HAnimSegment605: THAnimSegmentNode;
Transform606: TTransformNode;
Transform607: TTransformNode;
TouchSensor608: TTouchSensorNode;
Shape609: TShapeNode;
TouchSensor610: TTouchSensorNode;
Shape611: TShapeNode;
Appearance612: TAppearanceNode;
Material613: TMaterialNode;
Extrusion614: TExtrusionNode;
HAnimJoint615: THAnimJointNode;
HAnimSegment616: THAnimSegmentNode;
Transform617: TTransformNode;
Transform618: TTransformNode;
TouchSensor619: TTouchSensorNode;
Shape620: TShapeNode;
TouchSensor621: TTouchSensorNode;
Shape622: TShapeNode;
Appearance623: TAppearanceNode;
Material624: TMaterialNode;
Extrusion625: TExtrusionNode;
HAnimJoint626: THAnimJointNode;
HAnimJoint627: THAnimJointNode;
HAnimSegment628: THAnimSegmentNode;
Transform629: TTransformNode;
Transform630: TTransformNode;
TouchSensor631: TTouchSensorNode;
Shape632: TShapeNode;
TouchSensor633: TTouchSensorNode;
Shape634: TShapeNode;
Appearance635: TAppearanceNode;
Material636: TMaterialNode;
Extrusion637: TExtrusionNode;
HAnimJoint638: THAnimJointNode;
HAnimSegment639: THAnimSegmentNode;
Transform640: TTransformNode;
Transform641: TTransformNode;
TouchSensor642: TTouchSensorNode;
Shape643: TShapeNode;
TouchSensor644: TTouchSensorNode;
Shape645: TShapeNode;
Appearance646: TAppearanceNode;
Material647: TMaterialNode;
Extrusion648: TExtrusionNode;
HAnimJoint649: THAnimJointNode;
HAnimSegment650: THAnimSegmentNode;
Transform651: TTransformNode;
Transform652: TTransformNode;
TouchSensor653: TTouchSensorNode;
Shape654: TShapeNode;
TouchSensor655: TTouchSensorNode;
Shape656: TShapeNode;
Appearance657: TAppearanceNode;
Material658: TMaterialNode;
Extrusion659: TExtrusionNode;
HAnimJoint660: THAnimJointNode;
HAnimSegment661: THAnimSegmentNode;
Transform662: TTransformNode;
Transform663: TTransformNode;
TouchSensor664: TTouchSensorNode;
Shape665: TShapeNode;
TouchSensor666: TTouchSensorNode;
Shape667: TShapeNode;
Appearance668: TAppearanceNode;
Material669: TMaterialNode;
Extrusion670: TExtrusionNode;
HAnimJoint671: THAnimJointNode;
HAnimSegment672: THAnimSegmentNode;
Transform673: TTransformNode;
Transform674: TTransformNode;
TouchSensor675: TTouchSensorNode;
Shape676: TShapeNode;
TouchSensor677: TTouchSensorNode;
Shape678: TShapeNode;
Appearance679: TAppearanceNode;
Material680: TMaterialNode;
Extrusion681: TExtrusionNode;
HAnimJoint682: THAnimJointNode;
HAnimSegment683: THAnimSegmentNode;
Transform684: TTransformNode;
Transform685: TTransformNode;
TouchSensor686: TTouchSensorNode;
Shape687: TShapeNode;
TouchSensor688: TTouchSensorNode;
Shape689: TShapeNode;
Appearance690: TAppearanceNode;
Material691: TMaterialNode;
Extrusion692: TExtrusionNode;
HAnimJoint693: THAnimJointNode;
HAnimSegment694: THAnimSegmentNode;
Transform695: TTransformNode;
Transform696: TTransformNode;
TouchSensor697: TTouchSensorNode;
Shape698: TShapeNode;
TouchSensor699: TTouchSensorNode;
Shape700: TShapeNode;
Appearance701: TAppearanceNode;
Material702: TMaterialNode;
Extrusion703: TExtrusionNode;
HAnimJoint704: THAnimJointNode;
HAnimSegment705: THAnimSegmentNode;
Transform706: TTransformNode;
Transform707: TTransformNode;
TouchSensor708: TTouchSensorNode;
Shape709: TShapeNode;
TouchSensor710: TTouchSensorNode;
Shape711: TShapeNode;
Appearance712: TAppearanceNode;
Material713: TMaterialNode;
Extrusion714: TExtrusionNode;
HAnimJoint715: THAnimJointNode;
HAnimSegment716: THAnimSegmentNode;
Transform717: TTransformNode;
Transform718: TTransformNode;
TouchSensor719: TTouchSensorNode;
Shape720: TShapeNode;
TouchSensor721: TTouchSensorNode;
Shape722: TShapeNode;
Appearance723: TAppearanceNode;
Material724: TMaterialNode;
Extrusion725: TExtrusionNode;
HAnimJoint726: THAnimJointNode;
HAnimSegment727: THAnimSegmentNode;
Transform728: TTransformNode;
Transform729: TTransformNode;
TouchSensor730: TTouchSensorNode;
Shape731: TShapeNode;
TouchSensor732: TTouchSensorNode;
Shape733: TShapeNode;
Appearance734: TAppearanceNode;
Material735: TMaterialNode;
Extrusion736: TExtrusionNode;
HAnimJoint737: THAnimJointNode;
HAnimSegment738: THAnimSegmentNode;
Transform739: TTransformNode;
Transform740: TTransformNode;
TouchSensor741: TTouchSensorNode;
Shape742: TShapeNode;
TouchSensor743: TTouchSensorNode;
Shape744: TShapeNode;
Appearance745: TAppearanceNode;
Material746: TMaterialNode;
Extrusion747: TExtrusionNode;
HAnimJoint748: THAnimJointNode;
HAnimSegment749: THAnimSegmentNode;
Transform750: TTransformNode;
Transform751: TTransformNode;
TouchSensor752: TTouchSensorNode;
Shape753: TShapeNode;
TouchSensor754: TTouchSensorNode;
Shape755: TShapeNode;
Appearance756: TAppearanceNode;
Material757: TMaterialNode;
Extrusion758: TExtrusionNode;
HAnimJoint759: THAnimJointNode;
HAnimSegment760: THAnimSegmentNode;
Transform761: TTransformNode;
Transform762: TTransformNode;
TouchSensor763: TTouchSensorNode;
Shape764: TShapeNode;
TouchSensor765: TTouchSensorNode;
Shape766: TShapeNode;
Appearance767: TAppearanceNode;
Material768: TMaterialNode;
Extrusion769: TExtrusionNode;
HAnimJoint770: THAnimJointNode;
HAnimSegment771: THAnimSegmentNode;
Transform772: TTransformNode;
Transform773: TTransformNode;
TouchSensor774: TTouchSensorNode;
Shape775: TShapeNode;
TouchSensor776: TTouchSensorNode;
Shape777: TShapeNode;
Appearance778: TAppearanceNode;
Material779: TMaterialNode;
Extrusion780: TExtrusionNode;
HAnimJoint781: THAnimJointNode;
HAnimSegment782: THAnimSegmentNode;
Transform783: TTransformNode;
Transform784: TTransformNode;
TouchSensor785: TTouchSensorNode;
Shape786: TShapeNode;
TouchSensor787: TTouchSensorNode;
Shape788: TShapeNode;
Appearance789: TAppearanceNode;
Material790: TMaterialNode;
Extrusion791: TExtrusionNode;
HAnimJoint792: THAnimJointNode;
HAnimSegment793: THAnimSegmentNode;
Transform794: TTransformNode;
Transform795: TTransformNode;
TouchSensor796: TTouchSensorNode;
Shape797: TShapeNode;
TouchSensor798: TTouchSensorNode;
Shape799: TShapeNode;
Appearance800: TAppearanceNode;
Material801: TMaterialNode;
Extrusion802: TExtrusionNode;
HAnimJoint803: THAnimJointNode;
HAnimSegment804: THAnimSegmentNode;
Transform805: TTransformNode;
Transform806: TTransformNode;
TouchSensor807: TTouchSensorNode;
Shape808: TShapeNode;
TouchSensor809: TTouchSensorNode;
Shape810: TShapeNode;
Appearance811: TAppearanceNode;
Material812: TMaterialNode;
Extrusion813: TExtrusionNode;
TouchSensor814: TTouchSensorNode;
Shape815: TShapeNode;
Appearance816: TAppearanceNode;
Material817: TMaterialNode;
Extrusion818: TExtrusionNode;
TouchSensor819: TTouchSensorNode;
Shape820: TShapeNode;
Appearance821: TAppearanceNode;
Material822: TMaterialNode;
Extrusion823: TExtrusionNode;
HAnimJoint824: THAnimJointNode;
HAnimSegment825: THAnimSegmentNode;
Transform826: TTransformNode;
Transform827: TTransformNode;
TouchSensor828: TTouchSensorNode;
Shape829: TShapeNode;
TouchSensor830: TTouchSensorNode;
Shape831: TShapeNode;
Appearance832: TAppearanceNode;
Material833: TMaterialNode;
Extrusion834: TExtrusionNode;
HAnimJoint835: THAnimJointNode;
HAnimSegment836: THAnimSegmentNode;
Transform837: TTransformNode;
Transform838: TTransformNode;
TouchSensor839: TTouchSensorNode;
Shape840: TShapeNode;
TouchSensor841: TTouchSensorNode;
Shape842: TShapeNode;
Appearance843: TAppearanceNode;
Material844: TMaterialNode;
Extrusion845: TExtrusionNode;
HAnimJoint846: THAnimJointNode;
HAnimSegment847: THAnimSegmentNode;
Transform848: TTransformNode;
Transform849: TTransformNode;
TouchSensor850: TTouchSensorNode;
Shape851: TShapeNode;
TouchSensor852: TTouchSensorNode;
Shape853: TShapeNode;
Appearance854: TAppearanceNode;
Material855: TMaterialNode;
Extrusion856: TExtrusionNode;
HAnimJoint857: THAnimJointNode;
HAnimSegment858: THAnimSegmentNode;
Transform859: TTransformNode;
Transform860: TTransformNode;
TouchSensor861: TTouchSensorNode;
Shape862: TShapeNode;
TouchSensor863: TTouchSensorNode;
Shape864: TShapeNode;
Appearance865: TAppearanceNode;
Material866: TMaterialNode;
Extrusion867: TExtrusionNode;
HAnimJoint868: THAnimJointNode;
HAnimSegment869: THAnimSegmentNode;
Transform870: TTransformNode;
Transform871: TTransformNode;
TouchSensor872: TTouchSensorNode;
Shape873: TShapeNode;
TouchSensor874: TTouchSensorNode;
Shape875: TShapeNode;
Appearance876: TAppearanceNode;
Material877: TMaterialNode;
Extrusion878: TExtrusionNode;
HAnimJoint879: THAnimJointNode;
HAnimSegment880: THAnimSegmentNode;
Transform881: TTransformNode;
Transform882: TTransformNode;
TouchSensor883: TTouchSensorNode;
Shape884: TShapeNode;
TouchSensor885: TTouchSensorNode;
Shape886: TShapeNode;
Appearance887: TAppearanceNode;
Material888: TMaterialNode;
Extrusion889: TExtrusionNode;
HAnimJoint890: THAnimJointNode;
HAnimSegment891: THAnimSegmentNode;
Transform892: TTransformNode;
Transform893: TTransformNode;
TouchSensor894: TTouchSensorNode;
Shape895: TShapeNode;
TouchSensor896: TTouchSensorNode;
Shape897: TShapeNode;
Appearance898: TAppearanceNode;
Material899: TMaterialNode;
Extrusion900: TExtrusionNode;
HAnimJoint901: THAnimJointNode;
HAnimSegment902: THAnimSegmentNode;
Transform903: TTransformNode;
Transform904: TTransformNode;
TouchSensor905: TTouchSensorNode;
Shape906: TShapeNode;
TouchSensor907: TTouchSensorNode;
Shape908: TShapeNode;
Appearance909: TAppearanceNode;
Material910: TMaterialNode;
Extrusion911: TExtrusionNode;
TouchSensor912: TTouchSensorNode;
Shape913: TShapeNode;
Appearance914: TAppearanceNode;
Material915: TMaterialNode;
Extrusion916: TExtrusionNode;
TouchSensor917: TTouchSensorNode;
Shape918: TShapeNode;
Appearance919: TAppearanceNode;
Material920: TMaterialNode;
Extrusion921: TExtrusionNode;
TouchSensor922: TTouchSensorNode;
Shape923: TShapeNode;
Appearance924: TAppearanceNode;
Material925: TMaterialNode;
Extrusion926: TExtrusionNode;
TouchSensor927: TTouchSensorNode;
Shape928: TShapeNode;
Appearance929: TAppearanceNode;
Material930: TMaterialNode;
Extrusion931: TExtrusionNode;
TouchSensor932: TTouchSensorNode;
Shape933: TShapeNode;
Appearance934: TAppearanceNode;
Material935: TMaterialNode;
Extrusion936: TExtrusionNode;
TouchSensor937: TTouchSensorNode;
Shape938: TShapeNode;
Appearance939: TAppearanceNode;
Material940: TMaterialNode;
Extrusion941: TExtrusionNode;
HAnimJoint942: THAnimJointNode;
HAnimJoint943: THAnimJointNode;
HAnimJoint944: THAnimJointNode;
HAnimJoint945: THAnimJointNode;
HAnimJoint946: THAnimJointNode;
HAnimJoint947: THAnimJointNode;
HAnimJoint948: THAnimJointNode;
HAnimJoint949: THAnimJointNode;
HAnimSegment950: THAnimSegmentNode;
Transform951: TTransformNode;
Transform952: TTransformNode;
TouchSensor953: TTouchSensorNode;
Shape954: TShapeNode;
TouchSensor955: TTouchSensorNode;
Shape956: TShapeNode;
Appearance957: TAppearanceNode;
Material958: TMaterialNode;
Extrusion959: TExtrusionNode;
HAnimJoint960: THAnimJointNode;
HAnimSegment961: THAnimSegmentNode;
Transform962: TTransformNode;
Transform963: TTransformNode;
TouchSensor964: TTouchSensorNode;
Shape965: TShapeNode;
TouchSensor966: TTouchSensorNode;
Shape967: TShapeNode;
Appearance968: TAppearanceNode;
Material969: TMaterialNode;
Extrusion970: TExtrusionNode;
HAnimJoint971: THAnimJointNode;
HAnimSegment972: THAnimSegmentNode;
Transform973: TTransformNode;
Transform974: TTransformNode;
TouchSensor975: TTouchSensorNode;
Shape976: TShapeNode;
TouchSensor977: TTouchSensorNode;
Shape978: TShapeNode;
Appearance979: TAppearanceNode;
Material980: TMaterialNode;
Extrusion981: TExtrusionNode;
HAnimJoint982: THAnimJointNode;
HAnimSegment983: THAnimSegmentNode;
Transform984: TTransformNode;
Transform985: TTransformNode;
TouchSensor986: TTouchSensorNode;
Shape987: TShapeNode;
TouchSensor988: TTouchSensorNode;
Shape989: TShapeNode;
Appearance990: TAppearanceNode;
Material991: TMaterialNode;
Extrusion992: TExtrusionNode;
HAnimJoint993: THAnimJointNode;
HAnimSegment994: THAnimSegmentNode;
Transform995: TTransformNode;
Transform996: TTransformNode;
TouchSensor997: TTouchSensorNode;
Shape998: TShapeNode;
TouchSensor999: TTouchSensorNode;
Shape1000: TShapeNode;
Appearance1001: TAppearanceNode;
Material1002: TMaterialNode;
Extrusion1003: TExtrusionNode;
TouchSensor1004: TTouchSensorNode;
Shape1005: TShapeNode;
Appearance1006: TAppearanceNode;
Material1007: TMaterialNode;
Extrusion1008: TExtrusionNode;
TouchSensor1009: TTouchSensorNode;
Shape1010: TShapeNode;
Appearance1011: TAppearanceNode;
Material1012: TMaterialNode;
Extrusion1013: TExtrusionNode;
TouchSensor1014: TTouchSensorNode;
Shape1015: TShapeNode;
Appearance1016: TAppearanceNode;
Material1017: TMaterialNode;
Extrusion1018: TExtrusionNode;
HAnimJoint1019: THAnimJointNode;
HAnimSegment1020: THAnimSegmentNode;
Transform1021: TTransformNode;
Transform1022: TTransformNode;
TouchSensor1023: TTouchSensorNode;
Shape1024: TShapeNode;
TouchSensor1025: TTouchSensorNode;
Shape1026: TShapeNode;
Appearance1027: TAppearanceNode;
Material1028: TMaterialNode;
Extrusion1029: TExtrusionNode;
HAnimJoint1030: THAnimJointNode;
HAnimSegment1031: THAnimSegmentNode;
Transform1032: TTransformNode;
Transform1033: TTransformNode;
TouchSensor1034: TTouchSensorNode;
Shape1035: TShapeNode;
TouchSensor1036: TTouchSensorNode;
Shape1037: TShapeNode;
Appearance1038: TAppearanceNode;
Material1039: TMaterialNode;
Extrusion1040: TExtrusionNode;
HAnimJoint1041: THAnimJointNode;
HAnimSegment1042: THAnimSegmentNode;
Transform1043: TTransformNode;
Transform1044: TTransformNode;
TouchSensor1045: TTouchSensorNode;
Shape1046: TShapeNode;
TouchSensor1047: TTouchSensorNode;
Shape1048: TShapeNode;
Appearance1049: TAppearanceNode;
Material1050: TMaterialNode;
Extrusion1051: TExtrusionNode;
HAnimJoint1052: THAnimJointNode;
HAnimJoint1053: THAnimJointNode;
HAnimSegment1054: THAnimSegmentNode;
Transform1055: TTransformNode;
Transform1056: TTransformNode;
TouchSensor1057: TTouchSensorNode;
Shape1058: TShapeNode;
TouchSensor1059: TTouchSensorNode;
Shape1060: TShapeNode;
Appearance1061: TAppearanceNode;
Material1062: TMaterialNode;
Extrusion1063: TExtrusionNode;
HAnimJoint1064: THAnimJointNode;
HAnimSegment1065: THAnimSegmentNode;
Transform1066: TTransformNode;
Transform1067: TTransformNode;
TouchSensor1068: TTouchSensorNode;
Shape1069: TShapeNode;
TouchSensor1070: TTouchSensorNode;
Shape1071: TShapeNode;
Appearance1072: TAppearanceNode;
Material1073: TMaterialNode;
Extrusion1074: TExtrusionNode;
HAnimJoint1075: THAnimJointNode;
HAnimSegment1076: THAnimSegmentNode;
Transform1077: TTransformNode;
Transform1078: TTransformNode;
TouchSensor1079: TTouchSensorNode;
Shape1080: TShapeNode;
TouchSensor1081: TTouchSensorNode;
Shape1082: TShapeNode;
Appearance1083: TAppearanceNode;
Material1084: TMaterialNode;
Extrusion1085: TExtrusionNode;
HAnimJoint1086: THAnimJointNode;
HAnimSegment1087: THAnimSegmentNode;
Transform1088: TTransformNode;
Transform1089: TTransformNode;
TouchSensor1090: TTouchSensorNode;
Shape1091: TShapeNode;
TouchSensor1092: TTouchSensorNode;
Shape1093: TShapeNode;
Appearance1094: TAppearanceNode;
Material1095: TMaterialNode;
Extrusion1096: TExtrusionNode;
HAnimJoint1097: THAnimJointNode;
HAnimJoint1098: THAnimJointNode;
HAnimSegment1099: THAnimSegmentNode;
Transform1100: TTransformNode;
Transform1101: TTransformNode;
TouchSensor1102: TTouchSensorNode;
Shape1103: TShapeNode;
TouchSensor1104: TTouchSensorNode;
Shape1105: TShapeNode;
Appearance1106: TAppearanceNode;
Material1107: TMaterialNode;
Extrusion1108: TExtrusionNode;
HAnimJoint1109: THAnimJointNode;
HAnimSegment1110: THAnimSegmentNode;
Transform1111: TTransformNode;
Transform1112: TTransformNode;
TouchSensor1113: TTouchSensorNode;
Shape1114: TShapeNode;
TouchSensor1115: TTouchSensorNode;
Shape1116: TShapeNode;
Appearance1117: TAppearanceNode;
Material1118: TMaterialNode;
Extrusion1119: TExtrusionNode;
HAnimJoint1120: THAnimJointNode;
HAnimSegment1121: THAnimSegmentNode;
Transform1122: TTransformNode;
Transform1123: TTransformNode;
TouchSensor1124: TTouchSensorNode;
Shape1125: TShapeNode;
TouchSensor1126: TTouchSensorNode;
Shape1127: TShapeNode;
Appearance1128: TAppearanceNode;
Material1129: TMaterialNode;
Extrusion1130: TExtrusionNode;
HAnimJoint1131: THAnimJointNode;
HAnimSegment1132: THAnimSegmentNode;
Transform1133: TTransformNode;
Transform1134: TTransformNode;
TouchSensor1135: TTouchSensorNode;
Shape1136: TShapeNode;
TouchSensor1137: TTouchSensorNode;
Shape1138: TShapeNode;
Appearance1139: TAppearanceNode;
Material1140: TMaterialNode;
Extrusion1141: TExtrusionNode;
HAnimJoint1142: THAnimJointNode;
HAnimJoint1143: THAnimJointNode;
HAnimSegment1144: THAnimSegmentNode;
Transform1145: TTransformNode;
Transform1146: TTransformNode;
TouchSensor1147: TTouchSensorNode;
Shape1148: TShapeNode;
TouchSensor1149: TTouchSensorNode;
Shape1150: TShapeNode;
Appearance1151: TAppearanceNode;
Material1152: TMaterialNode;
Extrusion1153: TExtrusionNode;
TouchSensor1154: TTouchSensorNode;
Shape1155: TShapeNode;
Appearance1156: TAppearanceNode;
Material1157: TMaterialNode;
Extrusion1158: TExtrusionNode;
HAnimJoint1159: THAnimJointNode;
HAnimSegment1160: THAnimSegmentNode;
Transform1161: TTransformNode;
Transform1162: TTransformNode;
TouchSensor1163: TTouchSensorNode;
Shape1164: TShapeNode;
TouchSensor1165: TTouchSensorNode;
Shape1166: TShapeNode;
Appearance1167: TAppearanceNode;
Material1168: TMaterialNode;
Extrusion1169: TExtrusionNode;
HAnimJoint1170: THAnimJointNode;
HAnimSegment1171: THAnimSegmentNode;
Transform1172: TTransformNode;
Transform1173: TTransformNode;
TouchSensor1174: TTouchSensorNode;
Shape1175: TShapeNode;
TouchSensor1176: TTouchSensorNode;
Shape1177: TShapeNode;
Appearance1178: TAppearanceNode;
Material1179: TMaterialNode;
Extrusion1180: TExtrusionNode;
HAnimJoint1181: THAnimJointNode;
HAnimSegment1182: THAnimSegmentNode;
Transform1183: TTransformNode;
Transform1184: TTransformNode;
TouchSensor1185: TTouchSensorNode;
Shape1186: TShapeNode;
TouchSensor1187: TTouchSensorNode;
Shape1188: TShapeNode;
Appearance1189: TAppearanceNode;
Material1190: TMaterialNode;
Extrusion1191: TExtrusionNode;
HAnimJoint1192: THAnimJointNode;
HAnimJoint1193: THAnimJointNode;
HAnimSegment1194: THAnimSegmentNode;
Transform1195: TTransformNode;
Transform1196: TTransformNode;
TouchSensor1197: TTouchSensorNode;
Shape1198: TShapeNode;
TouchSensor1199: TTouchSensorNode;
Shape1200: TShapeNode;
Appearance1201: TAppearanceNode;
Material1202: TMaterialNode;
Extrusion1203: TExtrusionNode;
HAnimJoint1204: THAnimJointNode;
HAnimSegment1205: THAnimSegmentNode;
Transform1206: TTransformNode;
Transform1207: TTransformNode;
TouchSensor1208: TTouchSensorNode;
Shape1209: TShapeNode;
TouchSensor1210: TTouchSensorNode;
Shape1211: TShapeNode;
Appearance1212: TAppearanceNode;
Material1213: TMaterialNode;
Extrusion1214: TExtrusionNode;
HAnimJoint1215: THAnimJointNode;
HAnimSegment1216: THAnimSegmentNode;
Transform1217: TTransformNode;
Transform1218: TTransformNode;
TouchSensor1219: TTouchSensorNode;
Shape1220: TShapeNode;
TouchSensor1221: TTouchSensorNode;
Shape1222: TShapeNode;
Appearance1223: TAppearanceNode;
Material1224: TMaterialNode;
Extrusion1225: TExtrusionNode;
HAnimJoint1226: THAnimJointNode;
HAnimJoint1227: THAnimJointNode;
HAnimSegment1228: THAnimSegmentNode;
Transform1229: TTransformNode;
Transform1230: TTransformNode;
TouchSensor1231: TTouchSensorNode;
Shape1232: TShapeNode;
TouchSensor1233: TTouchSensorNode;
Shape1234: TShapeNode;
Appearance1235: TAppearanceNode;
Material1236: TMaterialNode;
Extrusion1237: TExtrusionNode;
HAnimJoint1238: THAnimJointNode;
HAnimSegment1239: THAnimSegmentNode;
Transform1240: TTransformNode;
Transform1241: TTransformNode;
TouchSensor1242: TTouchSensorNode;
Shape1243: TShapeNode;
TouchSensor1244: TTouchSensorNode;
Shape1245: TShapeNode;
Appearance1246: TAppearanceNode;
Material1247: TMaterialNode;
Extrusion1248: TExtrusionNode;
HAnimJoint1249: THAnimJointNode;
HAnimSegment1250: THAnimSegmentNode;
Transform1251: TTransformNode;
Transform1252: TTransformNode;
TouchSensor1253: TTouchSensorNode;
Shape1254: TShapeNode;
TouchSensor1255: TTouchSensorNode;
Shape1256: TShapeNode;
Appearance1257: TAppearanceNode;
Material1258: TMaterialNode;
Extrusion1259: TExtrusionNode;
HAnimJoint1260: THAnimJointNode;
HAnimSegment1261: THAnimSegmentNode;
Transform1262: TTransformNode;
Transform1263: TTransformNode;
TouchSensor1264: TTouchSensorNode;
Shape1265: TShapeNode;
TouchSensor1266: TTouchSensorNode;
Shape1267: TShapeNode;
Appearance1268: TAppearanceNode;
Material1269: TMaterialNode;
Extrusion1270: TExtrusionNode;
HAnimJoint1271: THAnimJointNode;
HAnimSegment1272: THAnimSegmentNode;
Transform1273: TTransformNode;
Transform1274: TTransformNode;
TouchSensor1275: TTouchSensorNode;
Shape1276: TShapeNode;
TouchSensor1277: TTouchSensorNode;
Shape1278: TShapeNode;
Appearance1279: TAppearanceNode;
Material1280: TMaterialNode;
Extrusion1281: TExtrusionNode;
TouchSensor1282: TTouchSensorNode;
Shape1283: TShapeNode;
Appearance1284: TAppearanceNode;
Material1285: TMaterialNode;
Extrusion1286: TExtrusionNode;
TouchSensor1287: TTouchSensorNode;
Shape1288: TShapeNode;
Appearance1289: TAppearanceNode;
Material1290: TMaterialNode;
Extrusion1291: TExtrusionNode;
TouchSensor1292: TTouchSensorNode;
Shape1293: TShapeNode;
Appearance1294: TAppearanceNode;
Material1295: TMaterialNode;
Extrusion1296: TExtrusionNode;
HAnimJoint1297: THAnimJointNode;
HAnimSegment1298: THAnimSegmentNode;
Transform1299: TTransformNode;
Transform1300: TTransformNode;
TouchSensor1301: TTouchSensorNode;
Shape1302: TShapeNode;
TouchSensor1303: TTouchSensorNode;
Shape1304: TShapeNode;
Appearance1305: TAppearanceNode;
Material1306: TMaterialNode;
Extrusion1307: TExtrusionNode;
HAnimJoint1308: THAnimJointNode;
HAnimSegment1309: THAnimSegmentNode;
Transform1310: TTransformNode;
Transform1311: TTransformNode;
TouchSensor1312: TTouchSensorNode;
Shape1313: TShapeNode;
TouchSensor1314: TTouchSensorNode;
Shape1315: TShapeNode;
Appearance1316: TAppearanceNode;
Material1317: TMaterialNode;
Extrusion1318: TExtrusionNode;
HAnimJoint1319: THAnimJointNode;
HAnimSegment1320: THAnimSegmentNode;
Transform1321: TTransformNode;
Transform1322: TTransformNode;
TouchSensor1323: TTouchSensorNode;
Shape1324: TShapeNode;
TouchSensor1325: TTouchSensorNode;
Shape1326: TShapeNode;
Appearance1327: TAppearanceNode;
Material1328: TMaterialNode;
Extrusion1329: TExtrusionNode;
HAnimJoint1330: THAnimJointNode;
HAnimJoint1331: THAnimJointNode;
HAnimSegment1332: THAnimSegmentNode;
Transform1333: TTransformNode;
Transform1334: TTransformNode;
TouchSensor1335: TTouchSensorNode;
Shape1336: TShapeNode;
TouchSensor1337: TTouchSensorNode;
Shape1338: TShapeNode;
Appearance1339: TAppearanceNode;
Material1340: TMaterialNode;
Extrusion1341: TExtrusionNode;
HAnimJoint1342: THAnimJointNode;
HAnimSegment1343: THAnimSegmentNode;
Transform1344: TTransformNode;
Transform1345: TTransformNode;
TouchSensor1346: TTouchSensorNode;
Shape1347: TShapeNode;
TouchSensor1348: TTouchSensorNode;
Shape1349: TShapeNode;
Appearance1350: TAppearanceNode;
Material1351: TMaterialNode;
Extrusion1352: TExtrusionNode;
HAnimJoint1353: THAnimJointNode;
HAnimSegment1354: THAnimSegmentNode;
Transform1355: TTransformNode;
Transform1356: TTransformNode;
TouchSensor1357: TTouchSensorNode;
Shape1358: TShapeNode;
TouchSensor1359: TTouchSensorNode;
Shape1360: TShapeNode;
Appearance1361: TAppearanceNode;
Material1362: TMaterialNode;
Extrusion1363: TExtrusionNode;
HAnimJoint1364: THAnimJointNode;
HAnimSegment1365: THAnimSegmentNode;
Transform1366: TTransformNode;
Transform1367: TTransformNode;
TouchSensor1368: TTouchSensorNode;
Shape1369: TShapeNode;
TouchSensor1370: TTouchSensorNode;
Shape1371: TShapeNode;
Appearance1372: TAppearanceNode;
Material1373: TMaterialNode;
Extrusion1374: TExtrusionNode;
HAnimJoint1375: THAnimJointNode;
HAnimJoint1376: THAnimJointNode;
HAnimSegment1377: THAnimSegmentNode;
Transform1378: TTransformNode;
Transform1379: TTransformNode;
TouchSensor1380: TTouchSensorNode;
Shape1381: TShapeNode;
TouchSensor1382: TTouchSensorNode;
Shape1383: TShapeNode;
Appearance1384: TAppearanceNode;
Material1385: TMaterialNode;
Extrusion1386: TExtrusionNode;
HAnimJoint1387: THAnimJointNode;
HAnimSegment1388: THAnimSegmentNode;
Transform1389: TTransformNode;
Transform1390: TTransformNode;
TouchSensor1391: TTouchSensorNode;
Shape1392: TShapeNode;
TouchSensor1393: TTouchSensorNode;
Shape1394: TShapeNode;
Appearance1395: TAppearanceNode;
Material1396: TMaterialNode;
Extrusion1397: TExtrusionNode;
HAnimJoint1398: THAnimJointNode;
HAnimSegment1399: THAnimSegmentNode;
Transform1400: TTransformNode;
Transform1401: TTransformNode;
TouchSensor1402: TTouchSensorNode;
Shape1403: TShapeNode;
TouchSensor1404: TTouchSensorNode;
Shape1405: TShapeNode;
Appearance1406: TAppearanceNode;
Material1407: TMaterialNode;
Extrusion1408: TExtrusionNode;
HAnimJoint1409: THAnimJointNode;
HAnimSegment1410: THAnimSegmentNode;
Transform1411: TTransformNode;
Transform1412: TTransformNode;
TouchSensor1413: TTouchSensorNode;
Shape1414: TShapeNode;
TouchSensor1415: TTouchSensorNode;
Shape1416: TShapeNode;
Appearance1417: TAppearanceNode;
Material1418: TMaterialNode;
Extrusion1419: TExtrusionNode;
HAnimJoint1420: THAnimJointNode;
HAnimJoint1421: THAnimJointNode;
HAnimSegment1422: THAnimSegmentNode;
Transform1423: TTransformNode;
Transform1424: TTransformNode;
TouchSensor1425: TTouchSensorNode;
Shape1426: TShapeNode;
TouchSensor1427: TTouchSensorNode;
Shape1428: TShapeNode;
Appearance1429: TAppearanceNode;
Material1430: TMaterialNode;
Extrusion1431: TExtrusionNode;
TouchSensor1432: TTouchSensorNode;
Shape1433: TShapeNode;
Appearance1434: TAppearanceNode;
Material1435: TMaterialNode;
Extrusion1436: TExtrusionNode;
HAnimJoint1437: THAnimJointNode;
HAnimSegment1438: THAnimSegmentNode;
Transform1439: TTransformNode;
Transform1440: TTransformNode;
TouchSensor1441: TTouchSensorNode;
Shape1442: TShapeNode;
TouchSensor1443: TTouchSensorNode;
Shape1444: TShapeNode;
Appearance1445: TAppearanceNode;
Material1446: TMaterialNode;
Extrusion1447: TExtrusionNode;
HAnimJoint1448: THAnimJointNode;
HAnimSegment1449: THAnimSegmentNode;
Transform1450: TTransformNode;
Transform1451: TTransformNode;
TouchSensor1452: TTouchSensorNode;
Shape1453: TShapeNode;
TouchSensor1454: TTouchSensorNode;
Shape1455: TShapeNode;
Appearance1456: TAppearanceNode;
Material1457: TMaterialNode;
Extrusion1458: TExtrusionNode;
HAnimJoint1459: THAnimJointNode;
HAnimSegment1460: THAnimSegmentNode;
Transform1461: TTransformNode;
Transform1462: TTransformNode;
TouchSensor1463: TTouchSensorNode;
Shape1464: TShapeNode;
TouchSensor1465: TTouchSensorNode;
Shape1466: TShapeNode;
Appearance1467: TAppearanceNode;
Material1468: TMaterialNode;
Extrusion1469: TExtrusionNode;
HAnimJoint1470: THAnimJointNode;
HAnimJoint1471: THAnimJointNode;
HAnimSegment1472: THAnimSegmentNode;
Transform1473: TTransformNode;
Transform1474: TTransformNode;
TouchSensor1475: TTouchSensorNode;
Shape1476: TShapeNode;
TouchSensor1477: TTouchSensorNode;
Shape1478: TShapeNode;
Appearance1479: TAppearanceNode;
Material1480: TMaterialNode;
Extrusion1481: TExtrusionNode;
HAnimJoint1482: THAnimJointNode;
HAnimSegment1483: THAnimSegmentNode;
Transform1484: TTransformNode;
Transform1485: TTransformNode;
TouchSensor1486: TTouchSensorNode;
Shape1487: TShapeNode;
TouchSensor1488: TTouchSensorNode;
Shape1489: TShapeNode;
Appearance1490: TAppearanceNode;
Material1491: TMaterialNode;
Extrusion1492: TExtrusionNode;
HAnimJoint1493: THAnimJointNode;
HAnimSegment1494: THAnimSegmentNode;
Transform1495: TTransformNode;
Transform1496: TTransformNode;
TouchSensor1497: TTouchSensorNode;
Shape1498: TShapeNode;
TouchSensor1499: TTouchSensorNode;
Shape1500: TShapeNode;
Appearance1501: TAppearanceNode;
Material1502: TMaterialNode;
Extrusion1503: TExtrusionNode;
HAnimJoint1504: THAnimJointNode;
HAnimJoint1505: THAnimJointNode;
HAnimJoint1506: THAnimJointNode;
HAnimJoint1507: THAnimJointNode;
HAnimJoint1508: THAnimJointNode;
HAnimJoint1509: THAnimJointNode;
HAnimJoint1510: THAnimJointNode;
HAnimJoint1511: THAnimJointNode;
HAnimJoint1512: THAnimJointNode;
HAnimJoint1513: THAnimJointNode;
HAnimJoint1514: THAnimJointNode;
HAnimJoint1515: THAnimJointNode;
HAnimJoint1516: THAnimJointNode;
HAnimJoint1517: THAnimJointNode;
HAnimJoint1518: THAnimJointNode;
HAnimJoint1519: THAnimJointNode;
HAnimJoint1520: THAnimJointNode;
HAnimJoint1521: THAnimJointNode;
HAnimJoint1522: THAnimJointNode;
HAnimJoint1523: THAnimJointNode;
HAnimJoint1524: THAnimJointNode;
HAnimJoint1525: THAnimJointNode;
HAnimJoint1526: THAnimJointNode;
HAnimJoint1527: THAnimJointNode;
HAnimJoint1528: THAnimJointNode;
HAnimJoint1529: THAnimJointNode;
HAnimJoint1530: THAnimJointNode;
HAnimJoint1531: THAnimJointNode;
HAnimJoint1532: THAnimJointNode;
HAnimJoint1533: THAnimJointNode;
HAnimJoint1534: THAnimJointNode;
HAnimJoint1535: THAnimJointNode;
HAnimJoint1536: THAnimJointNode;
HAnimJoint1537: THAnimJointNode;
HAnimJoint1538: THAnimJointNode;
HAnimJoint1539: THAnimJointNode;
HAnimJoint1540: THAnimJointNode;
HAnimJoint1541: THAnimJointNode;
HAnimJoint1542: THAnimJointNode;
HAnimJoint1543: THAnimJointNode;
HAnimJoint1544: THAnimJointNode;
HAnimJoint1545: THAnimJointNode;
HAnimJoint1546: THAnimJointNode;
HAnimJoint1547: THAnimJointNode;
HAnimJoint1548: THAnimJointNode;
HAnimJoint1549: THAnimJointNode;
HAnimJoint1550: THAnimJointNode;
HAnimJoint1551: THAnimJointNode;
HAnimJoint1552: THAnimJointNode;
HAnimJoint1553: THAnimJointNode;
HAnimJoint1554: THAnimJointNode;
HAnimJoint1555: THAnimJointNode;
HAnimJoint1556: THAnimJointNode;
HAnimJoint1557: THAnimJointNode;
HAnimJoint1558: THAnimJointNode;
HAnimJoint1559: THAnimJointNode;
HAnimJoint1560: THAnimJointNode;
HAnimJoint1561: THAnimJointNode;
HAnimJoint1562: THAnimJointNode;
HAnimJoint1563: THAnimJointNode;
HAnimJoint1564: THAnimJointNode;
HAnimJoint1565: THAnimJointNode;
HAnimJoint1566: THAnimJointNode;
HAnimJoint1567: THAnimJointNode;
HAnimJoint1568: THAnimJointNode;
HAnimJoint1569: THAnimJointNode;
HAnimJoint1570: THAnimJointNode;
HAnimJoint1571: THAnimJointNode;
HAnimJoint1572: THAnimJointNode;
HAnimJoint1573: THAnimJointNode;
HAnimJoint1574: THAnimJointNode;
HAnimJoint1575: THAnimJointNode;
HAnimJoint1576: THAnimJointNode;
HAnimJoint1577: THAnimJointNode;
HAnimJoint1578: THAnimJointNode;
HAnimJoint1579: THAnimJointNode;
HAnimJoint1580: THAnimJointNode;
HAnimJoint1581: THAnimJointNode;
HAnimJoint1582: THAnimJointNode;
HAnimJoint1583: THAnimJointNode;
HAnimJoint1584: THAnimJointNode;
HAnimJoint1585: THAnimJointNode;
HAnimJoint1586: THAnimJointNode;
HAnimJoint1587: THAnimJointNode;
HAnimJoint1588: THAnimJointNode;
HAnimJoint1589: THAnimJointNode;
HAnimJoint1590: THAnimJointNode;
HAnimJoint1591: THAnimJointNode;
HAnimJoint1592: THAnimJointNode;
HAnimJoint1593: THAnimJointNode;
HAnimJoint1594: THAnimJointNode;
HAnimJoint1595: THAnimJointNode;
HAnimJoint1596: THAnimJointNode;
HAnimJoint1597: THAnimJointNode;
HAnimJoint1598: THAnimJointNode;
HAnimJoint1599: THAnimJointNode;
HAnimJoint1600: THAnimJointNode;
HAnimJoint1601: THAnimJointNode;
HAnimJoint1602: THAnimJointNode;
HAnimJoint1603: THAnimJointNode;
HAnimJoint1604: THAnimJointNode;
HAnimJoint1605: THAnimJointNode;
HAnimJoint1606: THAnimJointNode;
HAnimJoint1607: THAnimJointNode;
HAnimJoint1608: THAnimJointNode;
HAnimJoint1609: THAnimJointNode;
HAnimJoint1610: THAnimJointNode;
HAnimJoint1611: THAnimJointNode;
HAnimJoint1612: THAnimJointNode;
HAnimJoint1613: THAnimJointNode;
HAnimJoint1614: THAnimJointNode;
HAnimJoint1615: THAnimJointNode;
HAnimJoint1616: THAnimJointNode;
HAnimJoint1617: THAnimJointNode;
HAnimJoint1618: THAnimJointNode;
HAnimJoint1619: THAnimJointNode;
HAnimJoint1620: THAnimJointNode;
HAnimJoint1621: THAnimJointNode;
HAnimJoint1622: THAnimJointNode;
HAnimJoint1623: THAnimJointNode;
HAnimJoint1624: THAnimJointNode;
HAnimJoint1625: THAnimJointNode;
HAnimJoint1626: THAnimJointNode;
HAnimJoint1627: THAnimJointNode;
HAnimJoint1628: THAnimJointNode;
HAnimJoint1629: THAnimJointNode;
HAnimJoint1630: THAnimJointNode;
HAnimJoint1631: THAnimJointNode;
HAnimJoint1632: THAnimJointNode;
HAnimJoint1633: THAnimJointNode;
HAnimJoint1634: THAnimJointNode;
HAnimJoint1635: THAnimJointNode;
HAnimJoint1636: THAnimJointNode;
HAnimJoint1637: THAnimJointNode;
HAnimJoint1638: THAnimJointNode;
HAnimJoint1639: THAnimJointNode;
HAnimJoint1640: THAnimJointNode;
HAnimJoint1641: THAnimJointNode;
HAnimJoint1642: THAnimJointNode;
HAnimJoint1643: THAnimJointNode;
HAnimJoint1644: THAnimJointNode;
HAnimJoint1645: THAnimJointNode;
HAnimJoint1646: THAnimJointNode;
HAnimJoint1647: THAnimJointNode;
HAnimJoint1648: THAnimJointNode;
HAnimJoint1649: THAnimJointNode;
HAnimJoint1650: THAnimJointNode;
HAnimSegment1651: THAnimSegmentNode;
HAnimSegment1652: THAnimSegmentNode;
HAnimSegment1653: THAnimSegmentNode;
HAnimSegment1654: THAnimSegmentNode;
HAnimSegment1655: THAnimSegmentNode;
HAnimSegment1656: THAnimSegmentNode;
HAnimSegment1657: THAnimSegmentNode;
HAnimSegment1658: THAnimSegmentNode;
HAnimSegment1659: THAnimSegmentNode;
HAnimSegment1660: THAnimSegmentNode;
HAnimSegment1661: THAnimSegmentNode;
HAnimSegment1662: THAnimSegmentNode;
HAnimSegment1663: THAnimSegmentNode;
HAnimSegment1664: THAnimSegmentNode;
HAnimSegment1665: THAnimSegmentNode;
HAnimSegment1666: THAnimSegmentNode;
HAnimSegment1667: THAnimSegmentNode;
HAnimSegment1668: THAnimSegmentNode;
HAnimSegment1669: THAnimSegmentNode;
HAnimSegment1670: THAnimSegmentNode;
HAnimSegment1671: THAnimSegmentNode;
HAnimSegment1672: THAnimSegmentNode;
HAnimSegment1673: THAnimSegmentNode;
HAnimSegment1674: THAnimSegmentNode;
HAnimSegment1675: THAnimSegmentNode;
HAnimSegment1676: THAnimSegmentNode;
HAnimSegment1677: THAnimSegmentNode;
HAnimSegment1678: THAnimSegmentNode;
HAnimSegment1679: THAnimSegmentNode;
HAnimSegment1680: THAnimSegmentNode;
HAnimSegment1681: THAnimSegmentNode;
HAnimSegment1682: THAnimSegmentNode;
HAnimSegment1683: THAnimSegmentNode;
HAnimSegment1684: THAnimSegmentNode;
HAnimSegment1685: THAnimSegmentNode;
HAnimSegment1686: THAnimSegmentNode;
HAnimSegment1687: THAnimSegmentNode;
HAnimSegment1688: THAnimSegmentNode;
HAnimSegment1689: THAnimSegmentNode;
HAnimSegment1690: THAnimSegmentNode;
HAnimSegment1691: THAnimSegmentNode;
HAnimSegment1692: THAnimSegmentNode;
HAnimSegment1693: THAnimSegmentNode;
HAnimSegment1694: THAnimSegmentNode;
HAnimSegment1695: THAnimSegmentNode;
HAnimSegment1696: THAnimSegmentNode;
HAnimSegment1697: THAnimSegmentNode;
HAnimSegment1698: THAnimSegmentNode;
HAnimSegment1699: THAnimSegmentNode;
HAnimSegment1700: THAnimSegmentNode;
HAnimSegment1701: THAnimSegmentNode;
HAnimSegment1702: THAnimSegmentNode;
HAnimSegment1703: THAnimSegmentNode;
HAnimSegment1704: THAnimSegmentNode;
HAnimSegment1705: THAnimSegmentNode;
HAnimSegment1706: THAnimSegmentNode;
HAnimSegment1707: THAnimSegmentNode;
HAnimSegment1708: THAnimSegmentNode;
HAnimSegment1709: THAnimSegmentNode;
HAnimSegment1710: THAnimSegmentNode;
HAnimSegment1711: THAnimSegmentNode;
HAnimSegment1712: THAnimSegmentNode;
HAnimSegment1713: THAnimSegmentNode;
HAnimSegment1714: THAnimSegmentNode;
HAnimSegment1715: THAnimSegmentNode;
HAnimSegment1716: THAnimSegmentNode;
HAnimSegment1717: THAnimSegmentNode;
HAnimSegment1718: THAnimSegmentNode;
HAnimSegment1719: THAnimSegmentNode;
HAnimSegment1720: THAnimSegmentNode;
HAnimSegment1721: THAnimSegmentNode;
HAnimSegment1722: THAnimSegmentNode;
HAnimSegment1723: THAnimSegmentNode;
HAnimSegment1724: THAnimSegmentNode;
HAnimSegment1725: THAnimSegmentNode;
HAnimSegment1726: THAnimSegmentNode;
HAnimSegment1727: THAnimSegmentNode;
HAnimSegment1728: THAnimSegmentNode;
HAnimSegment1729: THAnimSegmentNode;
HAnimSegment1730: THAnimSegmentNode;
HAnimSegment1731: THAnimSegmentNode;
HAnimSegment1732: THAnimSegmentNode;
HAnimSegment1733: THAnimSegmentNode;
HAnimSegment1734: THAnimSegmentNode;
HAnimSegment1735: THAnimSegmentNode;
HAnimSegment1736: THAnimSegmentNode;
HAnimSegment1737: THAnimSegmentNode;
HAnimSegment1738: THAnimSegmentNode;
HAnimSegment1739: THAnimSegmentNode;
HAnimSegment1740: THAnimSegmentNode;
HAnimSegment1741: THAnimSegmentNode;
HAnimSegment1742: THAnimSegmentNode;
HAnimSegment1743: THAnimSegmentNode;
HAnimSegment1744: THAnimSegmentNode;
HAnimSegment1745: THAnimSegmentNode;
HAnimSegment1746: THAnimSegmentNode;
HAnimSegment1747: THAnimSegmentNode;
HAnimSegment1748: THAnimSegmentNode;
HAnimSegment1749: THAnimSegmentNode;
HAnimSegment1750: THAnimSegmentNode;
HAnimSegment1751: THAnimSegmentNode;
HAnimSegment1752: THAnimSegmentNode;
HAnimSegment1753: THAnimSegmentNode;
HAnimSegment1754: THAnimSegmentNode;
HAnimSegment1755: THAnimSegmentNode;
HAnimSegment1756: THAnimSegmentNode;
HAnimSegment1757: THAnimSegmentNode;
HAnimSegment1758: THAnimSegmentNode;
HAnimSegment1759: THAnimSegmentNode;
HAnimSegment1760: THAnimSegmentNode;
HAnimSegment1761: THAnimSegmentNode;
HAnimSegment1762: THAnimSegmentNode;
HAnimSegment1763: THAnimSegmentNode;
HAnimSegment1764: THAnimSegmentNode;
HAnimSegment1765: THAnimSegmentNode;
HAnimSegment1766: THAnimSegmentNode;
HAnimSegment1767: THAnimSegmentNode;
HAnimSegment1768: THAnimSegmentNode;
HAnimSegment1769: THAnimSegmentNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'JohnBoy.x3d';
X3D0.Meta['identifier'] := 'http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d';
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
X3D0.Meta['generator'] := 'h2.pl';
X3D0.Meta['modified'] := '14 Jan 2023';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '9 November 2020';
X3D0.Meta['license'] := '../license.html';
Group11 := TGroupNode.Create;
Transform12 := TTransformNode.Create;
{ DEF for markerfor XYZ axes }
Shape13 := TShapeNode.Create;
{ RGB lines showing XYZ axes }
IndexedLineSet14 := TIndexedLineSetNode.Create;
IndexedLineSet14.SetColorIndex([0,1,2]);
IndexedLineSet14.ColorPerVertex := False;
IndexedLineSet14.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate15 := TCoordinateNode.Create;
Coordinate15.SetPoint([Vector3(0,0,0),Vector3(0.1,0,0),Vector3(0,0.1,0),Vector3(0,0,0.1)]);
{ .SetCoord }
IndexedLineSet14.Coord := Coordinate15;
Color16 := TColorNode.Create;
Color16.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet14.Color := Color16;
{ .SetGeometry }
Shape13.Geometry := IndexedLineSet14;
{ .AddChild }
Transform12.AddChildren([Shape13]);
{ .AddChildren }
Group11.AddChildren([Transform12]);
Group17 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform18 := TTransformNode.Create;
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(0,2.1,0);
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.04;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Transform18.AddChildren([Transform19]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,2.05,0);
Shape25 := TShapeNode.Create;
LineSet26 := TLineSetNode.Create;
LineSet26.SetVertexCount([2]);
ColorRGBA27 := TColorRGBANode.Create;
ColorRGBA27.SetColor([Vector4(0,0,1,1),Vector4(0,0,1,1)]);
{ .SetColor }
LineSet26.Color := ColorRGBA27;
Coordinate28 := TCoordinateNode.Create;
Coordinate28.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ .SetCoord }
LineSet26.Coord := Coordinate28;
{ .SetGeometry }
Shape25.Geometry := LineSet26;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Transform18.AddChildren([Transform24]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0,2.1,0);
Shape30 := TShapeNode.Create;
IndexedFaceSet31 := TIndexedFaceSetNode.Create;
IndexedFaceSet31.CreaseAngle := 0.5;
IndexedFaceSet31.Solid := False;
IndexedFaceSet31.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA32 := TColorRGBANode.Create;
ColorRGBA32.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1),Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
IndexedFaceSet31.Color := ColorRGBA32;
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(0,0.01,0),Vector3(-0.01,0,0),Vector3(0,0,0.01),Vector3(0.01,0,0),Vector3(0,0,-0.01),Vector3(0,-0.01,0)]);
{ .SetCoord }
IndexedFaceSet31.Coord := Coordinate33;
{ .SetGeometry }
Shape30.Geometry := IndexedFaceSet31;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
Material35.DiffuseColor := Vector3(1,1,1);
Material35.Transparency := 1;
{ .SetMaterial }
Appearance34.Material := Material35;
{ .SetAppearance }
Shape30.Appearance := Appearance34;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Transform18.AddChildren([Transform29]);
{ .AddChildren }
Group17.AddChildren([Transform18]);
{ .AddChildren }
Group11.AddChildren([Group17]);
NavigationInfo36 := TNavigationInfoNode.Create;
NavigationInfo36.Speed := 1.5;
{ .AddChildren }
Group11.AddChildren([NavigationInfo36]);
Viewpoint37 := TViewpointNode.Create;
Viewpoint37.Position := Vector3(0,1,3);
Viewpoint37.CenterOfRotation := Vector3(0,1,0);
Viewpoint37.Description := 'default';
{ .AddChildren }
Group11.AddChildren([Viewpoint37]);
HAnimHumanoid38 := THAnimHumanoidNode.Create;
HAnimHumanoid38.NameField := 'HAnim';
HAnimHumanoid38.SetInfo(['humanoidVersion=2.0']);
HAnimHumanoid38.Version := '2.0';
{ <LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene) }
{ <Shape DEF='SkinShape' containerField='skin'> <IndexedFaceSet coordIndex='0 9 5 -1 0 7 9 -1 0 5 1 -1 1 5 2 -1 1 3 7 -1 2 4 3 -1 0 1 7 -1 1 2 3 -1 5 6 2 -1 7 3 8 -1 6 4 2 -1 3 4 8 -1 9 6 5 -1 9 7 8 -1 4 6 10 -1 4 10 12 -1 4 12 8 -1 10 11 12 -1 9 75 24 -1 9 24 74 -1 9 8 75 -1 9 74 6 -1 10 6 74 -1 12 75 8 -1 74 24 29 -1 24 77 29 -1 10 74 29 -1 77 32 29 -1 32 78 29 -1 78 30 29 -1 30 10 29 -1 41 24 75 -1 41 75 12 -1 41 12 42 -1 41 42 80 -1 41 80 44 -1 41 44 79 -1 41 79 24 -1 81 24 79 -1 81 77 24 -1 81 25 77 -1 81 79 25 -1 25 79 44 -1 25 32 77 -1 25 83 32 -1 25 26 83 -1 25 27 26 -1 25 84 27 -1 25 44 84 -1 11 10 30 -1 11 30 13 -1 11 13 15 -1 11 15 14 -1 11 14 42 -1 11 42 12 -1 15 13 16 -1 15 18 14 -1 15 16 76 -1 15 76 18 -1 76 16 17 -1 76 17 82 -1 76 82 19 -1 76 19 18 -1 22 18 19 -1 22 87 18 -1 22 27 84 -1 22 84 87 -1 87 84 85 -1 85 84 44 -1 85 42 14 -1 87 14 18 -1 87 85 14 -1 20 83 26 -1 20 17 16 -1 20 16 88 -1 20 88 83 -1 88 16 13 -1 88 13 86 -1 88 86 83 -1 86 13 30 -1 86 32 83 -1 23 89 22 -1 89 27 22 -1 89 91 27 -1 91 26 27 -1 91 20 26 -1 21 20 91 -1 21 17 20 -1 21 92 17 -1 82 17 92 -1 82 90 19 -1 23 22 19 -1 23 19 90 -1 82 92 101 -1 82 101 99 -1 82 99 93 -1 82 93 95 -1 82 95 97 -1 82 97 90 -1 23 90 97 -1 23 97 94 -1 23 94 89 -1 89 94 96 -1 89 96 95 -1 89 95 93 -1 89 93 91 -1 91 93 99 -1 91 99 100 -1 91 100 98 -1 21 91 98 -1 21 98 101 -1 21 101 92 -1 85 105 42 -1 85 103 105 -1 85 44 103 -1 103 44 104 -1 80 42 105 -1 80 105 102 -1 80 102 104 -1 80 104 44 -1 105 109 102 -1 102 109 47 -1 47 104 102 -1 104 47 45 -1 104 45 103 -1 103 45 46 -1 103 46 109 -1 103 109 105 -1 109 112 110 -1 109 110 47 -1 47 110 111 -1 47 111 45 -1 45 111 113 -1 113 46 45 -1 46 113 112 -1 112 109 46 -1 112 118 110 -1 110 118 115 -1 110 115 111 -1 111 115 117 -1 111 117 113 -1 113 117 116 -1 113 116 112 -1 112 116 118 -1 115 118 119 -1 119 118 122 -1 118 116 122 -1 122 116 120 -1 116 117 120 -1 120 117 121 -1 117 115 121 -1 115 119 121 -1 119 127 123 -1 119 122 127 -1 122 126 127 -1 122 128 126 -1 122 120 128 -1 120 124 128 -1 120 121 124 -1 121 125 124 -1 121 119 125 -1 119 123 125 -1 127 129 123 -1 127 126 129 -1 129 126 141 -1 141 126 143 -1 126 142 143 -1 126 128 142 -1 128 124 130 -1 142 128 130 -1 124 132 130 -1 124 134 132 -1 125 134 124 -1 125 136 134 -1 125 137 136 -1 125 135 137 -1 125 133 135 -1 125 123 133 -1 123 131 133 -1 123 129 131 -1 131 129 138 -1 129 141 138 -1 138 141 144 -1 141 143 144 -1 143 146 144 -1 142 146 143 -1 142 145 146 -1 139 145 142 -1 130 139 142 -1 139 130 132 -1 139 132 154 -1 132 157 154 -1 132 159 157 -1 132 134 159 -1 134 136 159 -1 136 161 159 -1 136 137 161 -1 137 162 161 -1 160 162 137 -1 135 160 137 -1 133 160 135 -1 133 158 160 -1 131 158 133 -1 156 158 131 -1 153 156 131 -1 131 138 153 -1 138 155 153 -1 140 155 138 -1 138 144 140 -1 144 147 140 -1 140 147 145 -1 140 145 139 -1 139 155 140 -1 154 155 139 -1 146 149 144 -1 146 151 149 -1 145 151 146 -1 150 151 145 -1 145 152 150 -1 147 152 145 -1 147 149 152 -1 147 144 149 -1 148 149 151 -1 148 152 149 -1 148 150 152 -1 148 151 150 -1 160 207 162 -1 160 205 207 -1 165 208 205 -1 160 165 205 -1 158 165 160 -1 161 162 207 -1 161 207 206 -1 165 206 208 -1 206 165 161 -1 161 165 159 -1 207 209 211 -1 205 209 207 -1 205 212 209 -1 205 208 212 -1 206 212 208 -1 206 210 212 -1 206 207 210 -1 207 211 210 -1 209 212 213 -1 212 216 213 -1 212 214 216 -1 210 214 212 -1 210 215 214 -1 210 211 215 -1 209 215 211 -1 209 213 215 -1 217 213 216 -1 217 215 213 -1 217 214 215 -1 217 216 214 -1 158 194 165 -1 192 194 158 -1 164 195 192 -1 158 164 192 -1 156 164 158 -1 159 194 165 -1 159 194 193 -1 159 193 195 -1 159 195 164 -1 159 164 157 -1 157 164 180 -1 192 198 194 -1 192 196 198 -1 192 195 196 -1 195 199 196 -1 196 199 200 -1 199 203 200 -1 193 199 195 -1 193 197 199 -1 193 198 197 -1 193 194 198 -1 199 201 203 -1 197 201 199 -1 197 198 201 -1 198 202 201 -1 196 202 198 -1 200 202 196 -1 204 202 200 -1 204 201 202 -1 204 203 201 -1 204 200 203 -1 156 181 164 -1 156 179 181 -1 156 182 179 -1 156 163 182 -1 163 180 182 -1 157 180 163 -1 164 181 180 -1 179 182 183 -1 182 186 183 -1 182 184 186 -1 180 184 182 -1 180 181 184 -1 181 185 184 -1 179 185 181 -1 183 185 179 -1 183 186 187 -1 186 190 187 -1 184 190 186 -1 184 188 190 -1 184 185 188 -1 185 189 188 -1 185 183 189 -1 183 187 189 -1 191 189 187 -1 191 188 189 -1 191 190 188 -1 191 187 190 -1 153 163 156 -1 153 168 163 -1 153 166 168 -1 153 169 166 -1 155 169 153 -1 155 167 169 -1 154 167 155 -1 154 163 167 -1 154 157 163 -1 163 168 167 -1 166 169 170 -1 169 173 170 -1 169 171 173 -1 169 167 171 -1 167 168 171 -1 168 172 171 -1 168 170 172 -1 170 168 166 -1 170 173 174 -1 173 177 174 -1 173 175 177 -1 173 171 175 -1 171 172 175 -1 172 176 175 -1 172 174 176 -1 170 174 172 -1 178 176 174 -1 178 175 176 -1 178 177 175 -1 178 174 177 -1 86 30 221 -1 86 221 219 -1 86 219 32 -1 32 219 220 -1 78 32 220 -1 78 220 218 -1 78 218 221 -1 78 221 30 -1 221 225 219 -1 219 225 35 -1 35 33 219 -1 33 220 219 -1 33 34 220 -1 220 34 218 -1 221 218 34 -1 34 225 221 -1 225 226 228 -1 225 228 35 -1 35 228 229 -1 35 229 33 -1 33 229 227 -1 33 227 34 -1 34 227 226 -1 34 226 225 -1 226 234 228 -1 228 234 232 -1 232 229 228 -1 232 233 229 -1 229 233 227 -1 227 233 231 -1 227 231 226 -1 226 231 234 -1 231 235 234 -1 235 238 234 -1 234 238 232 -1 238 236 232 -1 232 236 233 -1 236 237 233 -1 233 237 231 -1 231 237 235 -1 235 239 243 -1 235 243 238 -1 238 243 242 -1 238 242 244 -1 238 244 236 -1 236 244 240 -1 236 240 237 -1 237 240 241 -1 237 241 235 -1 235 241 239 -1 243 239 245 -1 243 245 242 -1 245 257 242 -1 257 259 242 -1 242 259 258 -1 242 258 244 -1 244 246 240 -1 258 246 244 -1 240 246 248 -1 240 248 250 -1 241 240 250 -1 241 250 252 -1 241 252 253 -1 241 253 251 -1 241 251 249 -1 241 249 239 -1 239 249 247 -1 239 247 245 -1 247 254 245 -1 245 254 257 -1 254 260 257 -1 257 260 259 -1 259 260 262 -1 258 259 262 -1 258 262 261 -1 255 258 261 -1 246 258 255 -1 255 248 246 -1 255 270 248 -1 248 270 273 -1 248 273 275 -1 248 275 250 -1 250 275 252 -1 252 275 277 -1 252 277 253 -1 253 277 278 -1 276 253 278 -1 251 253 276 -1 249 251 276 -1 249 276 274 -1 247 249 274 -1 272 247 274 -1 269 247 272 -1 247 269 254 -1 254 269 271 -1 256 254 271 -1 254 256 260 -1 260 256 263 -1 256 261 263 -1 256 255 261 -1 255 256 271 -1 270 255 271 -1 262 260 265 -1 262 265 267 -1 261 262 267 -1 266 261 267 -1 261 266 268 -1 263 261 268 -1 263 268 265 -1 263 265 260 -1 264 267 265 -1 264 265 268 -1 264 268 266 -1 264 266 267 -1 276 278 323 -1 276 323 321 -1 281 321 324 -1 276 321 281 -1 274 276 281 -1 277 323 278 -1 277 322 323 -1 281 324 322 -1 322 277 281 -1 277 275 281 -1 323 327 325 -1 321 323 325 -1 321 325 328 -1 321 328 324 -1 322 324 328 -1 322 328 326 -1 322 326 323 -1 323 326 327 -1 325 329 328 -1 328 329 332 -1 328 332 330 -1 326 328 330 -1 326 330 331 -1 326 331 327 -1 325 327 331 -1 325 331 329 -1 333 332 329 -1 333 329 331 -1 333 331 330 -1 333 330 332 -1 274 281 310 -1 308 274 310 -1 280 308 311 -1 274 308 280 -1 272 274 280 -1 275 310 281 -1 275 309 310 -1 275 311 309 -1 275 280 311 -1 275 273 280 -1 273 296 280 -1 308 310 314 -1 308 314 312 -1 308 312 311 -1 311 312 315 -1 312 316 315 -1 315 316 319 -1 309 311 315 -1 309 315 313 -1 309 313 314 -1 309 314 310 -1 315 319 317 -1 313 315 317 -1 313 317 314 -1 314 317 318 -1 312 314 318 -1 316 312 318 -1 320 316 318 -1 320 318 317 -1 320 317 319 -1 320 319 316 -1 272 280 297 -1 272 297 295 -1 272 295 298 -1 272 298 279 -1 279 298 296 -1 273 279 296 -1 280 296 297 -1 295 299 298 -1 298 299 302 -1 298 302 300 -1 296 298 300 -1 296 300 297 -1 297 300 301 -1 295 297 301 -1 299 295 301 -1 299 303 302 -1 302 303 306 -1 300 302 306 -1 300 306 304 -1 300 304 301 -1 301 304 305 -1 301 305 299 -1 299 305 303 -1 307 303 305 -1 307 305 304 -1 307 304 306 -1 307 306 303 -1 269 272 279 -1 269 279 284 -1 269 284 282 -1 269 282 285 -1 271 269 285 -1 271 285 283 -1 270 271 283 -1 270 283 279 -1 270 279 273 -1 279 283 284 -1 282 286 285 -1 285 286 289 -1 285 289 287 -1 285 287 283 -1 283 287 284 -1 284 287 288 -1 284 288 286 -1 286 282 284 -1 286 290 289 -1 289 290 293 -1 289 293 291 -1 289 291 287 -1 287 291 288 -1 288 291 292 -1 288 292 290 -1 286 288 290 -1 294 290 292 -1 294 292 291 -1 294 291 293 -1 294 293 290 -1 97 334 336 -1 97 336 94 -1 94 336 96 -1 336 335 96 -1 96 335 95 -1 95 335 337 -1 95 337 334 -1 95 334 97 -1 334 341 336 -1 336 341 338 -1 336 338 335 -1 335 338 340 -1 335 340 337 -1 337 340 339 -1 337 339 334 -1 334 339 341 -1 341 345 342 -1 341 342 338 -1 338 342 340 -1 340 342 344 -1 340 344 339 -1 339 344 343 -1 339 343 345 -1 339 345 341 -1 345 349 342 -1 342 349 351 -1 342 351 346 -1 342 346 344 -1 71 346 348 -1 71 344 346 -1 71 348 347 -1 71 347 344 -1 344 347 343 -1 343 347 352 -1 343 352 349 -1 343 349 345 -1 349 352 356 -1 349 356 353 -1 349 353 355 -1 349 355 351 -1 354 356 352 -1 354 352 350 -1 354 350 351 -1 354 351 355 -1 353 356 357 -1 353 357 358 -1 353 358 359 -1 353 359 360 -1 353 360 361 -1 353 361 355 -1 354 357 356 -1 350 346 351 -1 348 346 347 -1 350 347 346 -1 350 352 347 -1 354 358 357 -1 354 359 358 -1 354 360 359 -1 354 361 360 -1 354 355 361 -1 101 362 365 -1 101 365 99 -1 99 365 100 -1 100 365 363 -1 100 363 98 -1 98 363 364 -1 98 364 101 -1 101 364 362 -1 362 369 367 -1 362 367 365 -1 365 367 363 -1 363 367 368 -1 363 367 368 -1 363 368 366 -1 363 366 364 -1 364 366 362 -1 362 366 369 -1 369 373 371 -1 369 371 367 -1 367 371 368 -1 368 371 372 -1 368 372 366 -1 366 372 370 -1 366 370 369 -1 369 370 373 -1 373 377 380 -1 373 380 375 -1 373 375 371 -1 371 375 372 -1 372 375 376 -1 372 376 374 -1 372 374 370 -1 370 374 379 -1 373 370 379 -1 373 379 377 -1 377 379 383 -1 377 383 381 -1 377 381 384 -1 377 384 380 -1 381 383 389 -1 381 389 388 -1 381 388 387 -1 381 387 386 -1 381 386 385 -1 381 385 384 -1 376 375 374 -1 378 379 374 -1 378 374 375 -1 378 375 380 -1 382 386 387 -1 382 387 388 -1 382 388 389 -1 382 389 383 -1 382 383 379 -1 382 379 378 -1 382 378 380 -1 382 380 384 -1 382 384 385 -1 382 385 386 -1' creaseAngle='3.1'> <Coordinate DEF='TheSkinCoord' point='0 1.77 0 0 1.665 0.09 -0.033 1.62 0.087 0.033 1.62 0.087 0 1.55 0.097 -0.077 1.64 -0.01 -0.0527 1.58 0.015 0.077 1.64 -0.01 0.0527 1.58 0.015 0 1.625 -0.0925 -0.03 1.46 0.035 0 1.44 0.03 0.03 1.46 0.035 -0.1135 1.318 0.095 0.1135 1.318 0.095 0 1.25 0.113 -0.087 1.19 0.09 -0.0935 1.03 0.075 0.087 1.19 0.09 0.0935 1.03 0.075 -0.1425 1.065 0.0033 -0.15 0.9 -0.01 0.1425 1.065 0.0033 0.15 0.9 -0.01 0 1.53 -0.084 0.0049 1.1908 -0.1113 -0.0773 1.019 -0.12 0.0773 1.019 -0.12 0.005 1.0915 -0.1091 -0.178 1.4825 -0.0625 -0.17 1.38 0.007 -0.1884 0.8676 -0.036 -0.16 1.38 -0.127 -0.2 1.1388 -0.08 -0.244 1.1388 -0.04 -0.165 1.1388 -0.04 -0.23 1.133 -0.055 -0.1977 0.8169 -0.0177 -0.1941 0.6772 -0.0423 -0.2117 0.8562 -0.0584 -0.1929 0.789 -0.1064 0.175 1.4825 -0.06 0.17 1.38 0.007 0.1901 0.8645 -0.0415 0.16 1.38 -0.125 0.2 1.1388 -0.08 0.165 1.1388 -0.04 0.244 1.1388 -0.04 0.23 1.133 -0.055 0.2009 0.8139 -0.0237 0.2056 0.6743 -0.0482 0.2142 0.8529 -0.0648 0.1929 0.786 -0.1122 -0.1 0.4913 -0.03 -0.17 0.466 0 -0.05 0.466 0 -0.165 0.01 0.12 -0.15 0.07 0 -0.085 0.086 0.0125 -0.09 0.056 0.0125 -0.115 0.02 0.122 -0.115 0.04 -0.055 -0.11 0.011 0.19 0.0993 0.4881 -0.0309 0.17 0.466 0 0.05 0.4867 0 0.165 0.01 0.12 0.15 0.07 0 0.085 0.086 0.0125 0.09 0.056 0.0125 0.115 0.02 0.122 0.115 0.04 -0.055 0.11 0.011 0.19 0 0.875 0 -0.0646 1.5149 -0.038 0.0646 1.5149 -0.038 0 1.07225 0.09 -0.11 1.427 -0.1375 -0.235 1.42 -0.0625 0.11 1.427 -0.1375 0.235 1.42 -0.0625 0 1.41 -0.145 0 0.925 0.08 -0.087 1.19 -0.09 0.087 1.19 -0.09 0.172 1.32 -0.03 -0.172 1.32 -0.03 0.15 1.23 -0.015 -0.15 1.23 -0.015 0.079 0.92 -0.14 0.1 0.9 0.077 -0.079 0.92 -0.14 -0.1 0.9 0.075 0 0.87 0 0.171 0.65 0 0.02 0.65 0 0.1 0.65 -0.08 0.1 0.65 0.07 -0.171 0.65 0 -0.02 0.65 0 -0.1 0.65 -0.08 -0.1 0.65 0.07 0.25 1.27 -0.04 0.17 1.27 -0.04 0.2 1.27 -0.09 0.2 1.27 0.02 0.244 1.1388 -0.04 0.165 1.1388 -0.04 0.2 1.1388 -0.08 0.2 1.1388 -0.013 0.225 1 -0.01 0.225 1 -0.07 0.185 1 -0.01 0.185 1 -0.07 0.2 1.1388 -0.04 0.225 0.92 -0.04 0.175 0.92 -0.04 0.2 0.92 -0.065 0.2 0.92 -0.015 0.225 0.89 -0.04 0.175 0.89 -0.04 0.2 0.89 -0.065 0.2 0.89 -0.015 0.218 0.86 -0.04 0.184 0.86 -0.04 0.2 0.87 -0.07 0.2 0.87 0 0.21 0.85 0 0.1854 0.85 0 0.212 0.84 -0.015 0.183 0.84 -0.015 0.213 0.835 -0.04 0.19 0.835 -0.04 0.211 0.835 -0.065 0.192 0.835 -0.065 0.208 0.84 -0.085 0.19 0.84 -0.085 0.2 0.84 -0.095 0.215 0.82 0 0.193 0.815 0.005 0.198 0.8 0.012 0.21 0.82 0.03 0.19 0.82 0.03 0.2 0.835 0.039 0.212 0.8 0.05 0.188 0.8 0.05 0.2 0.807 0.057 0.2 0.793 0.035 0.2 0.774 0.076 0.212 0.78 0.07 0.188 0.78 0.07 0.2 0.785 0.075 0.2 0.77 0.062 0.215 0.793 -0.015 0.187 0.793 -0.015 0.2 0.793 -0.005 0.215 0.788 -0.04 0.187 0.788 -0.04 0.215 0.793 -0.065 0.187 0.793 -0.065 0.21 0.79 -0.085 0.19 0.79 -0.085 0.2 0.79 -0.095 0.19 0.77 -0.0275 0.19 0.77 -0.0525 0.19 0.78 -0.0775 0.212 0.745 -0.015 0.188 0.745 -0.02 0.2 0.745 -0.0255 0.2 0.745 -0.0045 0.211 0.72 -0.015 0.189 0.72 -0.015 0.2 0.72 -0.0252 0.2 0.72 -0.0048 0.21 0.695 -0.015 0.19 0.695 -0.015 0.2 0.695 -0.025 0.2 0.695 -0.005 0.2 0.685 -0.015 0.215 0.74 -0.04 0.185 0.74 -0.04 0.2 0.74 -0.055 0.2 0.74 -0.025 0.21 0.7142 -0.04 0.19 0.7142 -0.04 0.2 0.7142 -0.053 0.2 0.7142 -0.027 0.21 0.68 -0.04 0.19 0.68 -0.04 0.2 0.68 -0.05 0.2 0.68 -0.03 0.2 0.67 -0.04 0.212 0.74 -0.065 0.188 0.74 -0.065 0.2 0.74 -0.0756 0.2 0.74 -0.0542 0.21 0.7177 -0.065 0.19 0.7177 -0.065 0.2 0.7177 -0.0751 0.2 0.7177 -0.0549 0.21 0.695 -0.065 0.19 0.695 -0.065 0.2 0.695 -0.075 0.2 0.695 -0.055 0.2 0.685 -0.065 0.211 0.755 -0.085 0.189 0.755 -0.085 0.2 0.755 -0.0952 0.2 0.755 -0.0748 0.21 0.735 -0.085 0.19 0.735 -0.085 0.2 0.735 -0.0951 0.2 0.735 -0.0749 0.21 0.72 -0.085 0.19 0.72 -0.085 0.2 0.72 -0.095 0.2 0.72 -0.075 0.2 0.71 -0.085 -0.23 1.23 -0.04 -0.16 1.23 -0.04 -0.2 1.235 -0.105 -0.2 1.235 0.02 -0.244 1.1388 -0.04 -0.165 1.1388 -0.04 -0.2 1.1388 -0.08 -0.2 1.1388 0.013 -0.225 1 -0.01 -0.225 1 -0.07 -0.185 1 -0.01 -0.185 1 -0.07 -0.2 1.1388 -0.04 -0.225 0.92 -0.04 -0.175 0.92 -0.04 -0.2 0.92 -0.065 -0.2 0.92 -0.015 -0.225 0.89 -0.04 -0.175 0.89 -0.04 -0.2 0.89 -0.065 -0.2 0.89 -0.015 -0.218 0.86 -0.04 -0.184 0.86 -0.04 -0.2 0.87 -0.07 -0.2 0.87 0 -0.21 0.85 0 -0.1854 0.85 0 -0.212 0.84 -0.015 -0.183 0.84 -0.015 -0.213 0.835 -0.04 -0.19 0.835 -0.04 -0.211 0.835 -0.065 -0.192 0.835 -0.065 -0.208 0.84 -0.085 -0.19 0.84 -0.085 -0.2 0.84 -0.095 -0.215 0.82 0 -0.193 0.815 0.005 -0.198 0.8 0.012 -0.21 0.82 0.03 -0.19 0.82 0.03 -0.2 0.835 0.039 -0.212 0.8 0.05 -0.188 0.8 0.05 -0.2 0.807 0.057 -0.2 0.793 0.035 -0.2 0.774 0.076 -0.212 0.78 0.07 -0.188 0.78 0.07 -0.2 0.785 0.075 -0.2 0.77 0.062 -0.215 0.793 -0.015 -0.187 0.793 -0.015 -0.2 0.793 -0.005 -0.215 0.788 -0.04 -0.187 0.788 -0.04 -0.215 0.793 -0.065 -0.187 0.793 -0.065 -0.21 0.79 -0.085 -0.19 0.79 -0.085 -0.2 0.79 -0.095 -0.19 0.77 -0.0275 -0.19 0.77 -0.0525 -0.19 0.78 -0.0775 -0.212 0.745 -0.015 -0.188 0.745 -0.02 -0.2 0.745 -0.0255 -0.2 0.745 -0.0045 -0.211 0.72 -0.015 -0.189 0.72 -0.015 -0.2 0.72 -0.0252 -0.2 0.72 -0.0048 -0.21 0.695 -0.015 -0.19 0.695 -0.015 -0.2 0.695 -0.025 -0.2 0.695 -0.005 -0.2 0.685 -0.015 -0.215 0.74 -0.04 -0.185 0.74 -0.04 -0.2 0.74 -0.055 -0.2 0.74 -0.025 -0.21 0.7142 -0.04 -0.19 0.7142 -0.04 -0.2 0.7142 -0.053 -0.2 0.7142 -0.027 -0.21 0.68 -0.04 -0.19 0.68 -0.04 -0.2 0.68 -0.05 -0.2 0.68 -0.03 -0.2 0.67 -0.04 -0.212 0.74 -0.065 -0.188 0.74 -0.065 -0.2 0.74 -0.0756 -0.2 0.74 -0.0542 -0.21 0.7177 -0.065 -0.19 0.7177 -0.065 -0.2 0.7177 -0.0751 -0.2 0.7177 -0.0549 -0.21 0.695 -0.065 -0.19 0.695 -0.065 -0.2 0.695 -0.075 -0.2 0.695 -0.055 -0.2 0.685 -0.065 -0.211 0.755 -0.085 -0.189 0.755 -0.085 -0.2 0.755 -0.0952 -0.2 0.755 -0.0748 -0.21 0.735 -0.085 -0.19 0.735 -0.085 -0.2 0.735 -0.0951 -0.2 0.735 -0.0749 -0.21 0.72 -0.085 -0.19 0.72 -0.085 -0.2 0.72 -0.095 -0.2 0.72 -0.075 -0.2 0.71 -0.085 0.115 0.466 0.06 0.115 0.466 -0.055 0.15 0.466 0 0.05 0.466 0 0.17 0.3 0 0.06 0.3 0 0.1 0.3 -0.05 0.1 0.3 0.05 0.15 0.07 0 0.085 0.086 0.0125 0.115 0.069 -0.045 0.117 0.0975 0.0615 0.1375 0.006 -0.03 0.095 0.006 -0.03 0.115 0.015 -0.045 0.115 0.06 0.1 0.115 0 0.07 0.165 0 0.07 0.095 0 0.07 0.115 0.04 0.13 0.125 0 0.12 0.165 0 0.12 0.087 0 0.122 0.09 0.012 0.188 0.11 0.011 0.19 0.128 0.011 0.185 0.142 0.011 0.178 0.154 0.01 0.168 -0.115 0.466 0.06 -0.115 0.466 -0.055 -0.17 0.466 0 -0.05 0.466 0 -0.17 0.3 0 -0.06 0.3 0 -0.1 0.3 -0.05 -0.1 0.3 0.05 -0.15 0.07 0 -0.085 0.086 0.0125 -0.115 0.069 -0.045 -0.117 0.0975 0.0615 -0.1375 0.006 -0.03 -0.095 0.006 -0.03 -0.095 0.006 -0.03 -0.115 0.06 0.1 -0.115 0 0.07 -0.165 0 0.07 -0.095 0 0.07 -0.115 0.04 0.13 -0.125 0 0.12 -0.165 0 0.12 -0.087 0 0.122 -0.09 0.012 0.188 -0.11 0.011 0.19 -0.128 0.011 0.185 -0.142 0.011 0.178 -0.154 0.01 0.168'/> <Color color='1 0 0 0 1 1 0 1 0 1 1 0 1 1 0 1 0 0 0 1 0 0 0 1 0 1 1 0 1 1 1 1 0 1 1 0 1 1 0 1 1 0 0 1 0 0 0 1 0 1 0 1 0 0 0 1 0 1 0 1 1 0 0 1 0 0 1 1 0 1 1 0 1 1 1 1 0 0 0 1 0 0 1 0 1 1 0 0 1 0 1 1 0 1 1 1 0 1 0 1 1 0 0 1 0 1 1 0 0 1 0 1 0 0 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 0 0 1 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 1 0 0 0 1 1 1 0 0 1 0 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 0 1 0 0 1 0 0 1 0 1 0 0 0 1 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 0 1 0 0 1 0 1 0 1 1 0 0 1 0 1 1 0 1 1 0 0 1 0 1 1 0 0 0 1 1 1 0 0 0 1 0 0 1 0 0 1 1 1 0 0 1 0 0 0 1 1 1 0 1 1 0 0 0 1 0 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 1 0 1 1 0 1 1 0 0 1 0 1 1 0 1 0 1 1 1 0 0 1 0 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 0 0 1 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 1 0 1 1 0 1 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 1 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 1 0 0 1 0 1 0 1 0 0 0 0 1 1 0 0 0 1 0 0 0 1 0 1 1 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 1 1 0 1 0 0 0 0 1 0 1 1 1 0 0 1 0 1 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 1 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 0 1 0 0 0 1 0 1 0 1 1 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 1 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 1 0 1 0 0 0 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 1 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 1 0 0 1 0 1 1 0 1 0 1 1 1 0 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 1 0 0 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 1 0 0 0 1 1 1 0 1 0 1 1 0 1 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 1 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 1 0 0 1 0 1 0 1 0 0 0 0 1 1 0 0 0 1 0 0 0 1 0 1 1 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 0 0 1 1 1 0 1 0 0 0 0 1 0 1 1 1 0 0 1 0 1 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 1 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 0 1 0 0 0 1 0 1 0 1 1 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 1 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 1 0 1 0 0 0 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 1 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 1 0 1 1 1 0 0 0 1 0 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 0 0 1 1 0 1 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 1 1 0 0 0 1 0 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 0 1 1 1 0 0 1 0 0 0 1 1 0 1 0 1 0 1 1 0 0 1 0 1 1 0 0 0 1 0 1 0 1 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 1 0 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 1 1 0 0 1 0 1 1 0 0 1 0 1 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 1 1 1'/> </IndexedFaceSet> <Appearance DEF='SkinAppearance'> <ImageTexture DEF='zBlueSpiralBkg2' description='Blue Spiral Pattern' url='"../data/zBlueSpiralBkg2.gif" "zBlueSpiralBkg2.gif" "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"'/> <Material DEF='SkinMaterial' ambientIntensity='0.6' diffuseColor='1 1 1' shininess='0.6' transparency='1'/> </Appearance> </Shape> }
{ </LOD> }
{ <Coordinate USE='TheSkinCoord' containerField='skinCoord'/> }
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.NameField := 'humanoid_root';
HAnimJoint39.Center := Vector3(0,0.824,0.0277);
HAnimSegment40 := THAnimSegmentNode.Create;
HAnimSegment40.NameField := 'sacrum';
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(0,0.824,0.0277);
Transform42 := TTransformNode.Create;
{ Empty Transform }
TouchSensor43 := TTouchSensorNode.Create;
TouchSensor43.Description := 'Joint humanoid_root';
{ .AddChildren }
Transform42.AddChildren([TouchSensor43]);
Shape44 := Shape20;
{ .AddChild }
Transform42.AddChildren([Shape44]);
{ .AddChildren }
Transform41.AddChildren([Transform42]);
{ .AddChildren }
HAnimSegment40.AddChildren([Transform41]);
TouchSensor45 := TTouchSensorNode.Create;
TouchSensor45.Description := 'Segment sacrum';
{ .AddChildren }
HAnimSegment40.AddChildren([TouchSensor45]);
Shape46 := TShapeNode.Create;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance47.Material := Material48;
{ .SetAppearance }
Shape46.Appearance := Appearance47;
Extrusion49 := TExtrusionNode.Create;
Extrusion49.SetSpine([Vector3(0,0.824,0.0277),Vector3(0,0.9149,0.0016)]);
Extrusion49.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape46.Geometry := Extrusion49;
{ .AddChildren }
HAnimSegment40.AddChildren([Shape46]);
TouchSensor50 := TTouchSensorNode.Create;
TouchSensor50.Description := 'Segment sacrum';
{ .AddChildren }
HAnimSegment40.AddChildren([TouchSensor50]);
Shape51 := TShapeNode.Create;
Appearance52 := TAppearanceNode.Create;
Material53 := TMaterialNode.Create;
Material53.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance52.Material := Material53;
{ .SetAppearance }
Shape51.Appearance := Appearance52;
Extrusion54 := TExtrusionNode.Create;
Extrusion54.SetSpine([Vector3(0,0.824,0.0277),Vector3(0.0028,1.0568,-0.0776)]);
Extrusion54.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape51.Geometry := Extrusion54;
{ .AddChildren }
HAnimSegment40.AddChildren([Shape51]);
{ .AddChildren }
HAnimJoint39.AddChildren([HAnimSegment40]);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'sacroiliac';
HAnimJoint55.Center := Vector3(0,0.9149,0.0016);
HAnimSegment56 := THAnimSegmentNode.Create;
HAnimSegment56.NameField := 'pelvis';
Transform57 := TTransformNode.Create;
Transform57.Translation := Vector3(0,0.9149,0.0016);
Transform58 := TTransformNode.Create;
{ Empty Transform }
TouchSensor59 := TTouchSensorNode.Create;
TouchSensor59.Description := 'Joint sacroiliac';
{ .AddChildren }
Transform58.AddChildren([TouchSensor59]);
Shape60 := Shape20;
{ .AddChild }
Transform58.AddChildren([Shape60]);
{ .AddChildren }
Transform57.AddChildren([Transform58]);
{ .AddChildren }
HAnimSegment56.AddChildren([Transform57]);
TouchSensor61 := TTouchSensorNode.Create;
TouchSensor61.Description := 'Segment pelvis';
{ .AddChildren }
HAnimSegment56.AddChildren([TouchSensor61]);
Shape62 := TShapeNode.Create;
Appearance63 := TAppearanceNode.Create;
Material64 := TMaterialNode.Create;
Material64.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance63.Material := Material64;
{ .SetAppearance }
Shape62.Appearance := Appearance63;
Extrusion65 := TExtrusionNode.Create;
Extrusion65.SetSpine([Vector3(0,0.9149,0.0016),Vector3(0.0961,0.9124,-0.0001)]);
Extrusion65.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape62.Geometry := Extrusion65;
{ .AddChildren }
HAnimSegment56.AddChildren([Shape62]);
TouchSensor66 := TTouchSensorNode.Create;
TouchSensor66.Description := 'Segment pelvis';
{ .AddChildren }
HAnimSegment56.AddChildren([TouchSensor66]);
Shape67 := TShapeNode.Create;
Appearance68 := TAppearanceNode.Create;
Material69 := TMaterialNode.Create;
Material69.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance68.Material := Material69;
{ .SetAppearance }
Shape67.Appearance := Appearance68;
Extrusion70 := TExtrusionNode.Create;
Extrusion70.SetSpine([Vector3(0,0.9149,0.0016),Vector3(-0.095,0.9171,0.0029)]);
Extrusion70.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape67.Geometry := Extrusion70;
{ .AddChildren }
HAnimSegment56.AddChildren([Shape67]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimSegment56]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'l_hip';
HAnimJoint71.Center := Vector3(0.0961,0.9124,-0.0001);
HAnimSegment72 := THAnimSegmentNode.Create;
HAnimSegment72.NameField := 'l_thigh';
Transform73 := TTransformNode.Create;
Transform73.Translation := Vector3(0.0961,0.9124,-0.0001);
Transform74 := TTransformNode.Create;
{ Empty Transform }
TouchSensor75 := TTouchSensorNode.Create;
TouchSensor75.Description := 'Joint l_hip';
{ .AddChildren }
Transform74.AddChildren([TouchSensor75]);
Shape76 := Shape20;
{ .AddChild }
Transform74.AddChildren([Shape76]);
{ .AddChildren }
Transform73.AddChildren([Transform74]);
{ .AddChildren }
HAnimSegment72.AddChildren([Transform73]);
TouchSensor77 := TTouchSensorNode.Create;
TouchSensor77.Description := 'Segment l_thigh';
{ .AddChildren }
HAnimSegment72.AddChildren([TouchSensor77]);
Shape78 := TShapeNode.Create;
Appearance79 := TAppearanceNode.Create;
Material80 := TMaterialNode.Create;
Material80.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance79.Material := Material80;
{ .SetAppearance }
Shape78.Appearance := Appearance79;
Extrusion81 := TExtrusionNode.Create;
Extrusion81.SetSpine([Vector3(0.0961,0.9124,-0.0001),Vector3(0.104,0.4867,0.0308)]);
Extrusion81.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape78.Geometry := Extrusion81;
{ .AddChildren }
HAnimSegment72.AddChildren([Shape78]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimSegment72]);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'l_knee';
HAnimJoint82.Center := Vector3(0.104,0.4867,0.0308);
HAnimSegment83 := THAnimSegmentNode.Create;
HAnimSegment83.NameField := 'l_calf';
Transform84 := TTransformNode.Create;
Transform84.Translation := Vector3(0.104,0.4867,0.0308);
Transform85 := TTransformNode.Create;
{ Empty Transform }
TouchSensor86 := TTouchSensorNode.Create;
TouchSensor86.Description := 'Joint l_knee';
{ .AddChildren }
Transform85.AddChildren([TouchSensor86]);
Shape87 := Shape20;
{ .AddChild }
Transform85.AddChildren([Shape87]);
{ .AddChildren }
Transform84.AddChildren([Transform85]);
{ .AddChildren }
HAnimSegment83.AddChildren([Transform84]);
TouchSensor88 := TTouchSensorNode.Create;
TouchSensor88.Description := 'Segment l_calf';
{ .AddChildren }
HAnimSegment83.AddChildren([TouchSensor88]);
Shape89 := TShapeNode.Create;
Appearance90 := TAppearanceNode.Create;
Material91 := TMaterialNode.Create;
Material91.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance90.Material := Material91;
{ .SetAppearance }
Shape89.Appearance := Appearance90;
Extrusion92 := TExtrusionNode.Create;
Extrusion92.SetSpine([Vector3(0.104,0.4867,0.0308),Vector3(0.1101,0.0656,-0.0736)]);
Extrusion92.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape89.Geometry := Extrusion92;
{ .AddChildren }
HAnimSegment83.AddChildren([Shape89]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimSegment83]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'l_talocrural';
HAnimJoint93.Center := Vector3(0.1101,0.0656,-0.0736);
HAnimSegment94 := THAnimSegmentNode.Create;
HAnimSegment94.NameField := 'l_talus';
Transform95 := TTransformNode.Create;
Transform95.Scale := Vector3(0.15,0.15,0.15);
Transform95.Translation := Vector3(0.08,0.06,-0.025);
Transform95.Rotation := Vector4(1,0,0,-1.57);
{ Transform left foot }
Transform96 := TTransformNode.Create;
{ Empty Transform left foot }
TouchSensor97 := TTouchSensorNode.Create;
TouchSensor97.Description := 'Joint l_talocrural';
{ .AddChildren }
Transform96.AddChildren([TouchSensor97]);
Shape98 := Shape20;
{ .AddChild }
Transform96.AddChildren([Shape98]);
{ .AddChildren }
Transform95.AddChildren([Transform96]);
{ .AddChildren }
HAnimSegment94.AddChildren([Transform95]);
TouchSensor99 := TTouchSensorNode.Create;
TouchSensor99.Description := 'Segment l_talus';
{ .AddChildren }
HAnimSegment94.AddChildren([TouchSensor99]);
Shape100 := TShapeNode.Create;
Appearance101 := TAppearanceNode.Create;
Material102 := TMaterialNode.Create;
Material102.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance101.Material := Material102;
{ .SetAppearance }
Shape100.Appearance := Appearance101;
Extrusion103 := TExtrusionNode.Create;
Extrusion103.SetSpine([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0781,0.0283,-0.097)]);
Extrusion103.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape100.Geometry := Extrusion103;
{ .AddChildren }
HAnimSegment94.AddChildren([Shape100]);
TouchSensor104 := TTouchSensorNode.Create;
TouchSensor104.Description := 'Segment l_talus';
{ .AddChildren }
HAnimSegment94.AddChildren([TouchSensor104]);
Shape105 := TShapeNode.Create;
Appearance106 := TAppearanceNode.Create;
Material107 := TMaterialNode.Create;
Material107.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance106.Material := Material107;
{ .SetAppearance }
Shape105.Appearance := Appearance106;
Extrusion108 := TExtrusionNode.Create;
Extrusion108.SetSpine([Vector3(0.1101,0.0656,-0.0736),Vector3(0.0889,0.0494,-0.1278)]);
Extrusion108.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape105.Geometry := Extrusion108;
{ .AddChildren }
HAnimSegment94.AddChildren([Shape105]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimSegment94]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.NameField := 'l_talocalcaneonavicular';
HAnimJoint109.Center := Vector3(0.0781,0.0283,-0.097);
HAnimSegment110 := THAnimSegmentNode.Create;
HAnimSegment110.NameField := 'l_navicular';
Transform111 := TTransformNode.Create;
Transform111.Translation := Vector3(0.0781,0.0283,-0.097);
Transform112 := TTransformNode.Create;
{ Empty Transform }
TouchSensor113 := TTouchSensorNode.Create;
TouchSensor113.Description := 'Joint l_talocalcaneonavicular';
{ .AddChildren }
Transform112.AddChildren([TouchSensor113]);
Shape114 := Shape20;
{ .AddChild }
Transform112.AddChildren([Shape114]);
{ .AddChildren }
Transform111.AddChildren([Transform112]);
{ .AddChildren }
HAnimSegment110.AddChildren([Transform111]);
TouchSensor115 := TTouchSensorNode.Create;
TouchSensor115.Description := 'Segment l_navicular';
{ .AddChildren }
HAnimSegment110.AddChildren([TouchSensor115]);
Shape116 := TShapeNode.Create;
Appearance117 := TAppearanceNode.Create;
Material118 := TMaterialNode.Create;
Material118.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance117.Material := Material118;
{ .SetAppearance }
Shape116.Appearance := Appearance117;
Extrusion119 := TExtrusionNode.Create;
Extrusion119.SetSpine([Vector3(0.0781,0.0283,-0.097),Vector3(0.0672,0.0235,-0.0835)]);
Extrusion119.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape116.Geometry := Extrusion119;
{ .AddChildren }
HAnimSegment110.AddChildren([Shape116]);
TouchSensor120 := TTouchSensorNode.Create;
TouchSensor120.Description := 'Segment l_navicular';
{ .AddChildren }
HAnimSegment110.AddChildren([TouchSensor120]);
Shape121 := TShapeNode.Create;
Appearance122 := TAppearanceNode.Create;
Material123 := TMaterialNode.Create;
Material123.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance122.Material := Material123;
{ .SetAppearance }
Shape121.Appearance := Appearance122;
Extrusion124 := TExtrusionNode.Create;
Extrusion124.SetSpine([Vector3(0.0781,0.0283,-0.097),Vector3(0.0812,0.025,-0.0805)]);
Extrusion124.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape121.Geometry := Extrusion124;
{ .AddChildren }
HAnimSegment110.AddChildren([Shape121]);
TouchSensor125 := TTouchSensorNode.Create;
TouchSensor125.Description := 'Segment l_navicular';
{ .AddChildren }
HAnimSegment110.AddChildren([TouchSensor125]);
Shape126 := TShapeNode.Create;
Appearance127 := TAppearanceNode.Create;
Material128 := TMaterialNode.Create;
Material128.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance127.Material := Material128;
{ .SetAppearance }
Shape126.Appearance := Appearance127;
Extrusion129 := TExtrusionNode.Create;
Extrusion129.SetSpine([Vector3(0.0781,0.0283,-0.097),Vector3(0.0928,0.0248,-0.0821)]);
Extrusion129.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape126.Geometry := Extrusion129;
{ .AddChildren }
HAnimSegment110.AddChildren([Shape126]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimSegment110]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.NameField := 'l_cuneonavicular_1';
HAnimJoint130.Center := Vector3(0.0672,0.0235,-0.0835);
HAnimSegment131 := THAnimSegmentNode.Create;
HAnimSegment131.NameField := 'l_cuneiform_1';
Transform132 := TTransformNode.Create;
Transform132.Translation := Vector3(0.0672,0.0235,-0.0835);
Transform133 := TTransformNode.Create;
{ Empty Transform }
TouchSensor134 := TTouchSensorNode.Create;
TouchSensor134.Description := 'Joint l_cuneonavicular_1';
{ .AddChildren }
Transform133.AddChildren([TouchSensor134]);
Shape135 := Shape20;
{ .AddChild }
Transform133.AddChildren([Shape135]);
{ .AddChildren }
Transform132.AddChildren([Transform133]);
{ .AddChildren }
HAnimSegment131.AddChildren([Transform132]);
TouchSensor136 := TTouchSensorNode.Create;
TouchSensor136.Description := 'Segment l_cuneiform_1';
{ .AddChildren }
HAnimSegment131.AddChildren([TouchSensor136]);
Shape137 := TShapeNode.Create;
Appearance138 := TAppearanceNode.Create;
Material139 := TMaterialNode.Create;
Material139.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance138.Material := Material139;
{ .SetAppearance }
Shape137.Appearance := Appearance138;
Extrusion140 := TExtrusionNode.Create;
Extrusion140.SetSpine([Vector3(0.0672,0.0235,-0.0835),Vector3(0.0644,0.0147,-0.0577)]);
Extrusion140.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape137.Geometry := Extrusion140;
{ .AddChildren }
HAnimSegment131.AddChildren([Shape137]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimSegment131]);
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141.NameField := 'l_tarsometatarsal_1';
HAnimJoint141.Center := Vector3(0.0644,0.0147,-0.0577);
HAnimSegment142 := THAnimSegmentNode.Create;
HAnimSegment142.NameField := 'l_metatarsal_1';
Transform143 := TTransformNode.Create;
Transform143.Translation := Vector3(0.0644,0.0147,-0.0577);
Transform144 := TTransformNode.Create;
{ Empty Transform }
TouchSensor145 := TTouchSensorNode.Create;
TouchSensor145.Description := 'Joint l_tarsometatarsal_1';
{ .AddChildren }
Transform144.AddChildren([TouchSensor145]);
Shape146 := Shape20;
{ .AddChild }
Transform144.AddChildren([Shape146]);
{ .AddChildren }
Transform143.AddChildren([Transform144]);
{ .AddChildren }
HAnimSegment142.AddChildren([Transform143]);
TouchSensor147 := TTouchSensorNode.Create;
TouchSensor147.Description := 'Segment l_metatarsal_1';
{ .AddChildren }
HAnimSegment142.AddChildren([TouchSensor147]);
Shape148 := TShapeNode.Create;
Appearance149 := TAppearanceNode.Create;
Material150 := TMaterialNode.Create;
Material150.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance149.Material := Material150;
{ .SetAppearance }
Shape148.Appearance := Appearance149;
Extrusion151 := TExtrusionNode.Create;
Extrusion151.SetSpine([Vector3(0.0644,0.0147,-0.0577),Vector3(0.0619,0.0059,-0.0083)]);
Extrusion151.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape148.Geometry := Extrusion151;
{ .AddChildren }
HAnimSegment142.AddChildren([Shape148]);
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimSegment142]);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.NameField := 'l_metatarsophalangeal_1';
HAnimJoint152.Center := Vector3(0.0619,0.0059,-0.0083);
HAnimSegment153 := THAnimSegmentNode.Create;
HAnimSegment153.NameField := 'l_tarsal_proximal_phalanx_1';
Transform154 := TTransformNode.Create;
Transform154.Translation := Vector3(0.0619,0.0059,-0.0083);
Transform155 := TTransformNode.Create;
{ Empty Transform }
TouchSensor156 := TTouchSensorNode.Create;
TouchSensor156.Description := 'Joint l_metatarsophalangeal_1';
{ .AddChildren }
Transform155.AddChildren([TouchSensor156]);
Shape157 := Shape20;
{ .AddChild }
Transform155.AddChildren([Shape157]);
{ .AddChildren }
Transform154.AddChildren([Transform155]);
{ .AddChildren }
HAnimSegment153.AddChildren([Transform154]);
TouchSensor158 := TTouchSensorNode.Create;
TouchSensor158.Description := 'Segment l_tarsal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment153.AddChildren([TouchSensor158]);
Shape159 := TShapeNode.Create;
Appearance160 := TAppearanceNode.Create;
Material161 := TMaterialNode.Create;
Material161.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance160.Material := Material161;
{ .SetAppearance }
Shape159.Appearance := Appearance160;
Extrusion162 := TExtrusionNode.Create;
Extrusion162.SetSpine([Vector3(0.0619,0.0059,-0.0083),Vector3(0.0619,0.0059,-0.0083)]);
Extrusion162.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape159.Geometry := Extrusion162;
{ .AddChildren }
HAnimSegment153.AddChildren([Shape159]);
{ .AddChildren }
HAnimJoint152.AddChildren([HAnimSegment153]);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.NameField := 'l_tarsal_interphalangeal_1';
{ .AddChildren }
HAnimJoint152.AddChildren([HAnimJoint163]);
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimJoint152]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimJoint141]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimJoint130]);
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164.NameField := 'l_cuneonavicular_2';
HAnimJoint164.Center := Vector3(0.0812,0.025,-0.0805);
HAnimSegment165 := THAnimSegmentNode.Create;
HAnimSegment165.NameField := 'l_cuneiform_2';
Transform166 := TTransformNode.Create;
Transform166.Translation := Vector3(0.0812,0.025,-0.0805);
Transform167 := TTransformNode.Create;
{ Empty Transform }
TouchSensor168 := TTouchSensorNode.Create;
TouchSensor168.Description := 'Joint l_cuneonavicular_2';
{ .AddChildren }
Transform167.AddChildren([TouchSensor168]);
Shape169 := Shape20;
{ .AddChild }
Transform167.AddChildren([Shape169]);
{ .AddChildren }
Transform166.AddChildren([Transform167]);
{ .AddChildren }
HAnimSegment165.AddChildren([Transform166]);
TouchSensor170 := TTouchSensorNode.Create;
TouchSensor170.Description := 'Segment l_cuneiform_2';
{ .AddChildren }
HAnimSegment165.AddChildren([TouchSensor170]);
Shape171 := TShapeNode.Create;
Appearance172 := TAppearanceNode.Create;
Material173 := TMaterialNode.Create;
Material173.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance172.Material := Material173;
{ .SetAppearance }
Shape171.Appearance := Appearance172;
Extrusion174 := TExtrusionNode.Create;
Extrusion174.SetSpine([Vector3(0.0812,0.025,-0.0805),Vector3(0.08,0.0175,-0.0608)]);
Extrusion174.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape171.Geometry := Extrusion174;
{ .AddChildren }
HAnimSegment165.AddChildren([Shape171]);
{ .AddChildren }
HAnimJoint164.AddChildren([HAnimSegment165]);
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175.NameField := 'l_tarsometatarsal_2';
HAnimJoint175.Center := Vector3(0.08,0.0175,-0.0608);
HAnimSegment176 := THAnimSegmentNode.Create;
HAnimSegment176.NameField := 'l_metatarsal_2';
Transform177 := TTransformNode.Create;
Transform177.Translation := Vector3(0.08,0.0175,-0.0608);
Transform178 := TTransformNode.Create;
{ Empty Transform }
TouchSensor179 := TTouchSensorNode.Create;
TouchSensor179.Description := 'Joint l_tarsometatarsal_2';
{ .AddChildren }
Transform178.AddChildren([TouchSensor179]);
Shape180 := Shape20;
{ .AddChild }
Transform178.AddChildren([Shape180]);
{ .AddChildren }
Transform177.AddChildren([Transform178]);
{ .AddChildren }
HAnimSegment176.AddChildren([Transform177]);
TouchSensor181 := TTouchSensorNode.Create;
TouchSensor181.Description := 'Segment l_metatarsal_2';
{ .AddChildren }
HAnimSegment176.AddChildren([TouchSensor181]);
Shape182 := TShapeNode.Create;
Appearance183 := TAppearanceNode.Create;
Material184 := TMaterialNode.Create;
Material184.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance183.Material := Material184;
{ .SetAppearance }
Shape182.Appearance := Appearance183;
Extrusion185 := TExtrusionNode.Create;
Extrusion185.SetSpine([Vector3(0.08,0.0175,-0.0608),Vector3(0.0824,0.0064,-0.004)]);
Extrusion185.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape182.Geometry := Extrusion185;
{ .AddChildren }
HAnimSegment176.AddChildren([Shape182]);
{ .AddChildren }
HAnimJoint175.AddChildren([HAnimSegment176]);
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186.NameField := 'l_metatarsophalangeal_2';
HAnimJoint186.Center := Vector3(0.0824,0.0064,-0.004);
HAnimSegment187 := THAnimSegmentNode.Create;
HAnimSegment187.NameField := 'l_tarsal_proximal_phalanx_2';
Transform188 := TTransformNode.Create;
Transform188.Translation := Vector3(0.0824,0.0064,-0.004);
Transform189 := TTransformNode.Create;
{ Empty Transform }
TouchSensor190 := TTouchSensorNode.Create;
TouchSensor190.Description := 'Joint l_metatarsophalangeal_2';
{ .AddChildren }
Transform189.AddChildren([TouchSensor190]);
Shape191 := Shape20;
{ .AddChild }
Transform189.AddChildren([Shape191]);
{ .AddChildren }
Transform188.AddChildren([Transform189]);
{ .AddChildren }
HAnimSegment187.AddChildren([Transform188]);
TouchSensor192 := TTouchSensorNode.Create;
TouchSensor192.Description := 'Segment l_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment187.AddChildren([TouchSensor192]);
Shape193 := TShapeNode.Create;
Appearance194 := TAppearanceNode.Create;
Material195 := TMaterialNode.Create;
Material195.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance194.Material := Material195;
{ .SetAppearance }
Shape193.Appearance := Appearance194;
Extrusion196 := TExtrusionNode.Create;
Extrusion196.SetSpine([Vector3(0.0824,0.0064,-0.004),Vector3(0.0841,0.0041,0.0121)]);
Extrusion196.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape193.Geometry := Extrusion196;
{ .AddChildren }
HAnimSegment187.AddChildren([Shape193]);
{ .AddChildren }
HAnimJoint186.AddChildren([HAnimSegment187]);
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197.NameField := 'l_tarsal_proximal_interphalangeal_2';
HAnimJoint197.Center := Vector3(0.0841,0.0041,0.0121);
HAnimSegment198 := THAnimSegmentNode.Create;
HAnimSegment198.NameField := 'l_tarsal_middle_phalanx_2';
Transform199 := TTransformNode.Create;
Transform199.Translation := Vector3(0.0841,0.0041,0.0121);
Transform200 := TTransformNode.Create;
{ Empty Transform }
TouchSensor201 := TTouchSensorNode.Create;
TouchSensor201.Description := 'Joint l_tarsal_proximal_interphalangeal_2';
{ .AddChildren }
Transform200.AddChildren([TouchSensor201]);
Shape202 := Shape20;
{ .AddChild }
Transform200.AddChildren([Shape202]);
{ .AddChildren }
Transform199.AddChildren([Transform200]);
{ .AddChildren }
HAnimSegment198.AddChildren([Transform199]);
TouchSensor203 := TTouchSensorNode.Create;
TouchSensor203.Description := 'Segment l_tarsal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment198.AddChildren([TouchSensor203]);
Shape204 := TShapeNode.Create;
Appearance205 := TAppearanceNode.Create;
Material206 := TMaterialNode.Create;
Material206.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance205.Material := Material206;
{ .SetAppearance }
Shape204.Appearance := Appearance205;
Extrusion207 := TExtrusionNode.Create;
Extrusion207.SetSpine([Vector3(0.0841,0.0041,0.0121),Vector3(0.0841,0.0013,0.0216)]);
Extrusion207.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape204.Geometry := Extrusion207;
{ .AddChildren }
HAnimSegment198.AddChildren([Shape204]);
{ .AddChildren }
HAnimJoint197.AddChildren([HAnimSegment198]);
HAnimJoint208 := THAnimJointNode.Create;
HAnimJoint208.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint208.Center := Vector3(0.0841,0.0013,0.0216);
{ .AddChildren }
HAnimJoint197.AddChildren([HAnimJoint208]);
{ .AddChildren }
HAnimJoint186.AddChildren([HAnimJoint197]);
{ .AddChildren }
HAnimJoint175.AddChildren([HAnimJoint186]);
{ .AddChildren }
HAnimJoint164.AddChildren([HAnimJoint175]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimJoint164]);
HAnimJoint209 := THAnimJointNode.Create;
HAnimJoint209.NameField := 'l_cuneonavicular_3';
HAnimJoint209.Center := Vector3(0.0928,0.0248,-0.0821);
HAnimSegment210 := THAnimSegmentNode.Create;
HAnimSegment210.NameField := 'l_cuneiform_3';
Transform211 := TTransformNode.Create;
Transform211.Translation := Vector3(0.0928,0.0248,-0.0821);
Transform212 := TTransformNode.Create;
{ Empty Transform }
TouchSensor213 := TTouchSensorNode.Create;
TouchSensor213.Description := 'Joint l_cuneonavicular_3';
{ .AddChildren }
Transform212.AddChildren([TouchSensor213]);
Shape214 := Shape20;
{ .AddChild }
Transform212.AddChildren([Shape214]);
{ .AddChildren }
Transform211.AddChildren([Transform212]);
{ .AddChildren }
HAnimSegment210.AddChildren([Transform211]);
TouchSensor215 := TTouchSensorNode.Create;
TouchSensor215.Description := 'Segment l_cuneiform_3';
{ .AddChildren }
HAnimSegment210.AddChildren([TouchSensor215]);
Shape216 := TShapeNode.Create;
Appearance217 := TAppearanceNode.Create;
Material218 := TMaterialNode.Create;
Material218.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance217.Material := Material218;
{ .SetAppearance }
Shape216.Appearance := Appearance217;
Extrusion219 := TExtrusionNode.Create;
Extrusion219.SetSpine([Vector3(0.0928,0.0248,-0.0821),Vector3(0.0944,0.0175,-0.0625)]);
Extrusion219.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape216.Geometry := Extrusion219;
{ .AddChildren }
HAnimSegment210.AddChildren([Shape216]);
{ .AddChildren }
HAnimJoint209.AddChildren([HAnimSegment210]);
HAnimJoint220 := THAnimJointNode.Create;
HAnimJoint220.NameField := 'l_tarsometatarsal_3';
HAnimJoint220.Center := Vector3(0.0944,0.0175,-0.0625);
HAnimSegment221 := THAnimSegmentNode.Create;
HAnimSegment221.NameField := 'l_metatarsal_3';
Transform222 := TTransformNode.Create;
Transform222.Translation := Vector3(0.0944,0.0175,-0.0625);
Transform223 := TTransformNode.Create;
{ Empty Transform }
TouchSensor224 := TTouchSensorNode.Create;
TouchSensor224.Description := 'Joint l_tarsometatarsal_3';
{ .AddChildren }
Transform223.AddChildren([TouchSensor224]);
Shape225 := Shape20;
{ .AddChild }
Transform223.AddChildren([Shape225]);
{ .AddChildren }
Transform222.AddChildren([Transform223]);
{ .AddChildren }
HAnimSegment221.AddChildren([Transform222]);
TouchSensor226 := TTouchSensorNode.Create;
TouchSensor226.Description := 'Segment l_metatarsal_3';
{ .AddChildren }
HAnimSegment221.AddChildren([TouchSensor226]);
Shape227 := TShapeNode.Create;
Appearance228 := TAppearanceNode.Create;
Material229 := TMaterialNode.Create;
Material229.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance228.Material := Material229;
{ .SetAppearance }
Shape227.Appearance := Appearance228;
Extrusion230 := TExtrusionNode.Create;
Extrusion230.SetSpine([Vector3(0.0944,0.0175,-0.0625),Vector3(0.0963,0.0065,-0.0065)]);
Extrusion230.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape227.Geometry := Extrusion230;
{ .AddChildren }
HAnimSegment221.AddChildren([Shape227]);
{ .AddChildren }
HAnimJoint220.AddChildren([HAnimSegment221]);
HAnimJoint231 := THAnimJointNode.Create;
HAnimJoint231.NameField := 'l_metatarsophalangeal_3';
HAnimJoint231.Center := Vector3(0.0963,0.0065,-0.0065);
HAnimSegment232 := THAnimSegmentNode.Create;
HAnimSegment232.NameField := 'l_tarsal_proximal_phalanx_3';
Transform233 := TTransformNode.Create;
Transform233.Translation := Vector3(0.0963,0.0065,-0.0065);
Transform234 := TTransformNode.Create;
{ Empty Transform }
TouchSensor235 := TTouchSensorNode.Create;
TouchSensor235.Description := 'Joint l_metatarsophalangeal_3';
{ .AddChildren }
Transform234.AddChildren([TouchSensor235]);
Shape236 := Shape20;
{ .AddChild }
Transform234.AddChildren([Shape236]);
{ .AddChildren }
Transform233.AddChildren([Transform234]);
{ .AddChildren }
HAnimSegment232.AddChildren([Transform233]);
TouchSensor237 := TTouchSensorNode.Create;
TouchSensor237.Description := 'Segment l_tarsal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment232.AddChildren([TouchSensor237]);
Shape238 := TShapeNode.Create;
Appearance239 := TAppearanceNode.Create;
Material240 := TMaterialNode.Create;
Material240.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance239.Material := Material240;
{ .SetAppearance }
Shape238.Appearance := Appearance239;
Extrusion241 := TExtrusionNode.Create;
Extrusion241.SetSpine([Vector3(0.0963,0.0065,-0.0065),Vector3(0.0987,0.0034,0.0086)]);
Extrusion241.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape238.Geometry := Extrusion241;
{ .AddChildren }
HAnimSegment232.AddChildren([Shape238]);
{ .AddChildren }
HAnimJoint231.AddChildren([HAnimSegment232]);
HAnimJoint242 := THAnimJointNode.Create;
HAnimJoint242.NameField := 'l_tarsal_proximal_interphalangeal_3';
HAnimJoint242.Center := Vector3(0.0987,0.0034,0.0086);
HAnimSegment243 := THAnimSegmentNode.Create;
HAnimSegment243.NameField := 'l_tarsal_middle_phalanx_3';
Transform244 := TTransformNode.Create;
Transform244.Translation := Vector3(0.0987,0.0034,0.0086);
Transform245 := TTransformNode.Create;
{ Empty Transform }
TouchSensor246 := TTouchSensorNode.Create;
TouchSensor246.Description := 'Joint l_tarsal_proximal_interphalangeal_3';
{ .AddChildren }
Transform245.AddChildren([TouchSensor246]);
Shape247 := Shape20;
{ .AddChild }
Transform245.AddChildren([Shape247]);
{ .AddChildren }
Transform244.AddChildren([Transform245]);
{ .AddChildren }
HAnimSegment243.AddChildren([Transform244]);
TouchSensor248 := TTouchSensorNode.Create;
TouchSensor248.Description := 'Segment l_tarsal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment243.AddChildren([TouchSensor248]);
Shape249 := TShapeNode.Create;
Appearance250 := TAppearanceNode.Create;
Material251 := TMaterialNode.Create;
Material251.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance250.Material := Material251;
{ .SetAppearance }
Shape249.Appearance := Appearance250;
Extrusion252 := TExtrusionNode.Create;
Extrusion252.SetSpine([Vector3(0.0987,0.0034,0.0086),Vector3(0.1002,0.0013,0.0178)]);
Extrusion252.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape249.Geometry := Extrusion252;
{ .AddChildren }
HAnimSegment243.AddChildren([Shape249]);
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimSegment243]);
HAnimJoint253 := THAnimJointNode.Create;
HAnimJoint253.NameField := 'l_tarsal_distal_interphalangeal_3';
HAnimJoint253.Center := Vector3(0.1002,0.0013,0.0178);
{ .AddChildren }
HAnimJoint242.AddChildren([HAnimJoint253]);
{ .AddChildren }
HAnimJoint231.AddChildren([HAnimJoint242]);
{ .AddChildren }
HAnimJoint220.AddChildren([HAnimJoint231]);
{ .AddChildren }
HAnimJoint209.AddChildren([HAnimJoint220]);
{ .AddChildren }
HAnimJoint109.AddChildren([HAnimJoint209]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint109]);
HAnimJoint254 := THAnimJointNode.Create;
HAnimJoint254.NameField := 'l_calcaneocuboid';
HAnimJoint254.Center := Vector3(0.0889,0.0494,-0.1278);
HAnimSegment255 := THAnimSegmentNode.Create;
HAnimSegment255.NameField := 'l_calcaneus';
Transform256 := TTransformNode.Create;
Transform256.Translation := Vector3(0.0889,0.0494,-0.1278);
Transform257 := TTransformNode.Create;
{ Empty Transform }
TouchSensor258 := TTouchSensorNode.Create;
TouchSensor258.Description := 'Joint l_calcaneocuboid';
{ .AddChildren }
Transform257.AddChildren([TouchSensor258]);
Shape259 := Shape20;
{ .AddChild }
Transform257.AddChildren([Shape259]);
{ .AddChildren }
Transform256.AddChildren([Transform257]);
{ .AddChildren }
HAnimSegment255.AddChildren([Transform256]);
TouchSensor260 := TTouchSensorNode.Create;
TouchSensor260.Description := 'Segment l_calcaneus';
{ .AddChildren }
HAnimSegment255.AddChildren([TouchSensor260]);
Shape261 := TShapeNode.Create;
Appearance262 := TAppearanceNode.Create;
Material263 := TMaterialNode.Create;
Material263.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance262.Material := Material263;
{ .SetAppearance }
Shape261.Appearance := Appearance262;
Extrusion264 := TExtrusionNode.Create;
Extrusion264.SetSpine([Vector3(0.0889,0.0494,-0.1278),Vector3(0.1105,0.0267,-0.0998)]);
Extrusion264.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape261.Geometry := Extrusion264;
{ .AddChildren }
HAnimSegment255.AddChildren([Shape261]);
{ .AddChildren }
HAnimJoint254.AddChildren([HAnimSegment255]);
HAnimJoint265 := THAnimJointNode.Create;
HAnimJoint265.NameField := 'l_transversetarsal';
HAnimJoint265.Center := Vector3(0.1105,0.0267,-0.0998);
HAnimSegment266 := THAnimSegmentNode.Create;
HAnimSegment266.NameField := 'l_cuboid';
Transform267 := TTransformNode.Create;
Transform267.Translation := Vector3(0.1105,0.0267,-0.0998);
Transform268 := TTransformNode.Create;
{ Empty Transform }
TouchSensor269 := TTouchSensorNode.Create;
TouchSensor269.Description := 'Joint l_transversetarsal';
{ .AddChildren }
Transform268.AddChildren([TouchSensor269]);
Shape270 := Shape20;
{ .AddChild }
Transform268.AddChildren([Shape270]);
{ .AddChildren }
Transform267.AddChildren([Transform268]);
{ .AddChildren }
HAnimSegment266.AddChildren([Transform267]);
TouchSensor271 := TTouchSensorNode.Create;
TouchSensor271.Description := 'Segment l_cuboid';
{ .AddChildren }
HAnimSegment266.AddChildren([TouchSensor271]);
Shape272 := TShapeNode.Create;
Appearance273 := TAppearanceNode.Create;
Material274 := TMaterialNode.Create;
Material274.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance273.Material := Material274;
{ .SetAppearance }
Shape272.Appearance := Appearance273;
Extrusion275 := TExtrusionNode.Create;
Extrusion275.SetSpine([Vector3(0.1105,0.0267,-0.0998),Vector3(0.1063,0.016,-0.0634)]);
Extrusion275.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape272.Geometry := Extrusion275;
{ .AddChildren }
HAnimSegment266.AddChildren([Shape272]);
TouchSensor276 := TTouchSensorNode.Create;
TouchSensor276.Description := 'Segment l_cuboid';
{ .AddChildren }
HAnimSegment266.AddChildren([TouchSensor276]);
Shape277 := TShapeNode.Create;
Appearance278 := TAppearanceNode.Create;
Material279 := TMaterialNode.Create;
Material279.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance278.Material := Material279;
{ .SetAppearance }
Shape277.Appearance := Appearance278;
Extrusion280 := TExtrusionNode.Create;
Extrusion280.SetSpine([Vector3(0.1105,0.0267,-0.0998),Vector3(0.1206,0.0124,-0.0671)]);
Extrusion280.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape277.Geometry := Extrusion280;
{ .AddChildren }
HAnimSegment266.AddChildren([Shape277]);
{ .AddChildren }
HAnimJoint265.AddChildren([HAnimSegment266]);
HAnimJoint281 := THAnimJointNode.Create;
HAnimJoint281.NameField := 'l_tarsometatarsal_4';
HAnimJoint281.Center := Vector3(0.1063,0.016,-0.0634);
HAnimSegment282 := THAnimSegmentNode.Create;
HAnimSegment282.NameField := 'l_metatarsal_4';
Transform283 := TTransformNode.Create;
Transform283.Translation := Vector3(0.1063,0.016,-0.0634);
Transform284 := TTransformNode.Create;
{ Empty Transform }
TouchSensor285 := TTouchSensorNode.Create;
TouchSensor285.Description := 'Joint l_tarsometatarsal_4';
{ .AddChildren }
Transform284.AddChildren([TouchSensor285]);
Shape286 := Shape20;
{ .AddChild }
Transform284.AddChildren([Shape286]);
{ .AddChildren }
Transform283.AddChildren([Transform284]);
{ .AddChildren }
HAnimSegment282.AddChildren([Transform283]);
TouchSensor287 := TTouchSensorNode.Create;
TouchSensor287.Description := 'Segment l_metatarsal_4';
{ .AddChildren }
HAnimSegment282.AddChildren([TouchSensor287]);
Shape288 := TShapeNode.Create;
Appearance289 := TAppearanceNode.Create;
Material290 := TMaterialNode.Create;
Material290.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance289.Material := Material290;
{ .SetAppearance }
Shape288.Appearance := Appearance289;
Extrusion291 := TExtrusionNode.Create;
Extrusion291.SetSpine([Vector3(0.1063,0.016,-0.0634),Vector3(0.1097,0.0058,-0.0107)]);
Extrusion291.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape288.Geometry := Extrusion291;
{ .AddChildren }
HAnimSegment282.AddChildren([Shape288]);
{ .AddChildren }
HAnimJoint281.AddChildren([HAnimSegment282]);
HAnimJoint292 := THAnimJointNode.Create;
HAnimJoint292.NameField := 'l_metatarsophalangeal_4';
HAnimJoint292.Center := Vector3(0.1097,0.0058,-0.0107);
HAnimSegment293 := THAnimSegmentNode.Create;
HAnimSegment293.NameField := 'l_tarsal_proximal_phalanx_4';
Transform294 := TTransformNode.Create;
Transform294.Translation := Vector3(0.1097,0.0058,-0.0107);
Transform295 := TTransformNode.Create;
{ Empty Transform }
TouchSensor296 := TTouchSensorNode.Create;
TouchSensor296.Description := 'Joint l_metatarsophalangeal_4';
{ .AddChildren }
Transform295.AddChildren([TouchSensor296]);
Shape297 := Shape20;
{ .AddChild }
Transform295.AddChildren([Shape297]);
{ .AddChildren }
Transform294.AddChildren([Transform295]);
{ .AddChildren }
HAnimSegment293.AddChildren([Transform294]);
TouchSensor298 := TTouchSensorNode.Create;
TouchSensor298.Description := 'Segment l_tarsal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment293.AddChildren([TouchSensor298]);
Shape299 := TShapeNode.Create;
Appearance300 := TAppearanceNode.Create;
Material301 := TMaterialNode.Create;
Material301.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance300.Material := Material301;
{ .SetAppearance }
Shape299.Appearance := Appearance300;
Extrusion302 := TExtrusionNode.Create;
Extrusion302.SetSpine([Vector3(0.1097,0.0058,-0.0107),Vector3(0.114,0.0037,0.0044)]);
Extrusion302.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape299.Geometry := Extrusion302;
{ .AddChildren }
HAnimSegment293.AddChildren([Shape299]);
{ .AddChildren }
HAnimJoint292.AddChildren([HAnimSegment293]);
HAnimJoint303 := THAnimJointNode.Create;
HAnimJoint303.NameField := 'l_tarsal_proximal_interphalangeal_4';
HAnimJoint303.Center := Vector3(0.114,0.0037,0.0044);
HAnimSegment304 := THAnimSegmentNode.Create;
HAnimSegment304.NameField := 'l_tarsal_middle_phalanx_4';
Transform305 := TTransformNode.Create;
Transform305.Translation := Vector3(0.114,0.0037,0.0044);
Transform306 := TTransformNode.Create;
{ Empty Transform }
TouchSensor307 := TTouchSensorNode.Create;
TouchSensor307.Description := 'Joint l_tarsal_proximal_interphalangeal_4';
{ .AddChildren }
Transform306.AddChildren([TouchSensor307]);
Shape308 := Shape20;
{ .AddChild }
Transform306.AddChildren([Shape308]);
{ .AddChildren }
Transform305.AddChildren([Transform306]);
{ .AddChildren }
HAnimSegment304.AddChildren([Transform305]);
TouchSensor309 := TTouchSensorNode.Create;
TouchSensor309.Description := 'Segment l_tarsal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment304.AddChildren([TouchSensor309]);
Shape310 := TShapeNode.Create;
Appearance311 := TAppearanceNode.Create;
Material312 := TMaterialNode.Create;
Material312.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance311.Material := Material312;
{ .SetAppearance }
Shape310.Appearance := Appearance311;
Extrusion313 := TExtrusionNode.Create;
Extrusion313.SetSpine([Vector3(0.114,0.0037,0.0044),Vector3(0.1155,0.0008,0.0118)]);
Extrusion313.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape310.Geometry := Extrusion313;
{ .AddChildren }
HAnimSegment304.AddChildren([Shape310]);
{ .AddChildren }
HAnimJoint303.AddChildren([HAnimSegment304]);
HAnimJoint314 := THAnimJointNode.Create;
HAnimJoint314.NameField := 'l_tarsal_distal_interphalangeal_4';
HAnimJoint314.Center := Vector3(0.1155,0.0008,0.0118);
{ .AddChildren }
HAnimJoint303.AddChildren([HAnimJoint314]);
{ .AddChildren }
HAnimJoint292.AddChildren([HAnimJoint303]);
{ .AddChildren }
HAnimJoint281.AddChildren([HAnimJoint292]);
{ .AddChildren }
HAnimJoint265.AddChildren([HAnimJoint281]);
HAnimJoint315 := THAnimJointNode.Create;
HAnimJoint315.NameField := 'l_tarsometatarsal_5';
HAnimJoint315.Center := Vector3(0.1206,0.0124,-0.0671);
HAnimSegment316 := THAnimSegmentNode.Create;
HAnimSegment316.NameField := 'l_metatarsal_5';
Transform317 := TTransformNode.Create;
Transform317.Translation := Vector3(0.1206,0.0124,-0.0671);
Transform318 := TTransformNode.Create;
{ Empty Transform }
TouchSensor319 := TTouchSensorNode.Create;
TouchSensor319.Description := 'Joint l_tarsometatarsal_5';
{ .AddChildren }
Transform318.AddChildren([TouchSensor319]);
Shape320 := Shape20;
{ .AddChild }
Transform318.AddChildren([Shape320]);
{ .AddChildren }
Transform317.AddChildren([Transform318]);
{ .AddChildren }
HAnimSegment316.AddChildren([Transform317]);
TouchSensor321 := TTouchSensorNode.Create;
TouchSensor321.Description := 'Segment l_metatarsal_5';
{ .AddChildren }
HAnimSegment316.AddChildren([TouchSensor321]);
Shape322 := TShapeNode.Create;
Appearance323 := TAppearanceNode.Create;
Material324 := TMaterialNode.Create;
Material324.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance323.Material := Material324;
{ .SetAppearance }
Shape322.Appearance := Appearance323;
Extrusion325 := TExtrusionNode.Create;
Extrusion325.SetSpine([Vector3(0.1206,0.0124,-0.0671),Vector3(0.1239,0.0051,-0.0153)]);
Extrusion325.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape322.Geometry := Extrusion325;
{ .AddChildren }
HAnimSegment316.AddChildren([Shape322]);
{ .AddChildren }
HAnimJoint315.AddChildren([HAnimSegment316]);
HAnimJoint326 := THAnimJointNode.Create;
HAnimJoint326.NameField := 'l_metatarsophalangeal_5';
HAnimJoint326.Center := Vector3(0.1239,0.0051,-0.0153);
HAnimSegment327 := THAnimSegmentNode.Create;
HAnimSegment327.NameField := 'l_tarsal_proximal_phalanx_5';
Transform328 := TTransformNode.Create;
Transform328.Translation := Vector3(0.1239,0.0051,-0.0153);
Transform329 := TTransformNode.Create;
{ Empty Transform }
TouchSensor330 := TTouchSensorNode.Create;
TouchSensor330.Description := 'Joint l_metatarsophalangeal_5';
{ .AddChildren }
Transform329.AddChildren([TouchSensor330]);
Shape331 := Shape20;
{ .AddChild }
Transform329.AddChildren([Shape331]);
{ .AddChildren }
Transform328.AddChildren([Transform329]);
{ .AddChildren }
HAnimSegment327.AddChildren([Transform328]);
TouchSensor332 := TTouchSensorNode.Create;
TouchSensor332.Description := 'Segment l_tarsal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment327.AddChildren([TouchSensor332]);
Shape333 := TShapeNode.Create;
Appearance334 := TAppearanceNode.Create;
Material335 := TMaterialNode.Create;
Material335.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance334.Material := Material335;
{ .SetAppearance }
Shape333.Appearance := Appearance334;
Extrusion336 := TExtrusionNode.Create;
Extrusion336.SetSpine([Vector3(0.1239,0.0051,-0.0153),Vector3(0.1262,0.0023,-0.0077)]);
Extrusion336.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape333.Geometry := Extrusion336;
{ .AddChildren }
HAnimSegment327.AddChildren([Shape333]);
{ .AddChildren }
HAnimJoint326.AddChildren([HAnimSegment327]);
HAnimJoint337 := THAnimJointNode.Create;
HAnimJoint337.NameField := 'l_tarsal_proximal_interphalangeal_5';
HAnimJoint337.Center := Vector3(0.1262,0.0023,-0.0077);
HAnimSegment338 := THAnimSegmentNode.Create;
HAnimSegment338.NameField := 'l_tarsal_middle_phalanx_5';
Transform339 := TTransformNode.Create;
Transform339.Translation := Vector3(0.1262,0.0023,-0.0077);
Transform340 := TTransformNode.Create;
{ Empty Transform }
TouchSensor341 := TTouchSensorNode.Create;
TouchSensor341.Description := 'Joint l_tarsal_proximal_interphalangeal_5';
{ .AddChildren }
Transform340.AddChildren([TouchSensor341]);
Shape342 := Shape20;
{ .AddChild }
Transform340.AddChildren([Shape342]);
{ .AddChildren }
Transform339.AddChildren([Transform340]);
{ .AddChildren }
HAnimSegment338.AddChildren([Transform339]);
TouchSensor343 := TTouchSensorNode.Create;
TouchSensor343.Description := 'Segment l_tarsal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment338.AddChildren([TouchSensor343]);
Shape344 := TShapeNode.Create;
Appearance345 := TAppearanceNode.Create;
Material346 := TMaterialNode.Create;
Material346.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance345.Material := Material346;
{ .SetAppearance }
Shape344.Appearance := Appearance345;
Extrusion347 := TExtrusionNode.Create;
Extrusion347.SetSpine([Vector3(0.1262,0.0023,-0.0077),Vector3(0.1271,0,0)]);
Extrusion347.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape344.Geometry := Extrusion347;
{ .AddChildren }
HAnimSegment338.AddChildren([Shape344]);
{ .AddChildren }
HAnimJoint337.AddChildren([HAnimSegment338]);
HAnimJoint348 := THAnimJointNode.Create;
HAnimJoint348.NameField := 'l_tarsal_distal_interphalangeal_5';
HAnimJoint348.Center := Vector3(0.1271,0,0);
{ .AddChildren }
HAnimJoint337.AddChildren([HAnimJoint348]);
{ .AddChildren }
HAnimJoint326.AddChildren([HAnimJoint337]);
{ .AddChildren }
HAnimJoint315.AddChildren([HAnimJoint326]);
{ .AddChildren }
HAnimJoint265.AddChildren([HAnimJoint315]);
{ .AddChildren }
HAnimJoint254.AddChildren([HAnimJoint265]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint254]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint93]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimJoint82]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimJoint71]);
HAnimJoint349 := THAnimJointNode.Create;
HAnimJoint349.NameField := 'r_hip';
HAnimJoint349.Center := Vector3(-0.095,0.9171,0.0029);
HAnimSegment350 := THAnimSegmentNode.Create;
HAnimSegment350.NameField := 'r_thigh';
Transform351 := TTransformNode.Create;
Transform351.Translation := Vector3(-0.095,0.9171,0.0029);
Transform352 := TTransformNode.Create;
{ Empty Transform }
TouchSensor353 := TTouchSensorNode.Create;
TouchSensor353.Description := 'Joint r_hip';
{ .AddChildren }
Transform352.AddChildren([TouchSensor353]);
Shape354 := Shape20;
{ .AddChild }
Transform352.AddChildren([Shape354]);
{ .AddChildren }
Transform351.AddChildren([Transform352]);
{ .AddChildren }
HAnimSegment350.AddChildren([Transform351]);
TouchSensor355 := TTouchSensorNode.Create;
TouchSensor355.Description := 'Segment r_thigh';
{ .AddChildren }
HAnimSegment350.AddChildren([TouchSensor355]);
Shape356 := TShapeNode.Create;
Appearance357 := TAppearanceNode.Create;
Material358 := TMaterialNode.Create;
Material358.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance357.Material := Material358;
{ .SetAppearance }
Shape356.Appearance := Appearance357;
Extrusion359 := TExtrusionNode.Create;
Extrusion359.SetSpine([Vector3(-0.095,0.9171,0.0029),Vector3(-0.0867,0.4913,0.0318)]);
Extrusion359.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape356.Geometry := Extrusion359;
{ .AddChildren }
HAnimSegment350.AddChildren([Shape356]);
{ .AddChildren }
HAnimJoint349.AddChildren([HAnimSegment350]);
HAnimJoint360 := THAnimJointNode.Create;
HAnimJoint360.NameField := 'r_knee';
HAnimJoint360.Center := Vector3(-0.0867,0.4913,0.0318);
HAnimSegment361 := THAnimSegmentNode.Create;
HAnimSegment361.NameField := 'r_calf';
Transform362 := TTransformNode.Create;
Transform362.Translation := Vector3(-0.0867,0.4913,0.0318);
Transform363 := TTransformNode.Create;
{ Empty Transform }
TouchSensor364 := TTouchSensorNode.Create;
TouchSensor364.Description := 'Joint r_knee';
{ .AddChildren }
Transform363.AddChildren([TouchSensor364]);
Shape365 := Shape20;
{ .AddChild }
Transform363.AddChildren([Shape365]);
{ .AddChildren }
Transform362.AddChildren([Transform363]);
{ .AddChildren }
HAnimSegment361.AddChildren([Transform362]);
TouchSensor366 := TTouchSensorNode.Create;
TouchSensor366.Description := 'Segment r_calf';
{ .AddChildren }
HAnimSegment361.AddChildren([TouchSensor366]);
Shape367 := TShapeNode.Create;
Appearance368 := TAppearanceNode.Create;
Material369 := TMaterialNode.Create;
Material369.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance368.Material := Material369;
{ .SetAppearance }
Shape367.Appearance := Appearance368;
Extrusion370 := TExtrusionNode.Create;
Extrusion370.SetSpine([Vector3(-0.0867,0.4913,0.0318),Vector3(-0.0801,0.0712,-0.0766)]);
Extrusion370.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape367.Geometry := Extrusion370;
{ .AddChildren }
HAnimSegment361.AddChildren([Shape367]);
{ .AddChildren }
HAnimJoint360.AddChildren([HAnimSegment361]);
HAnimJoint371 := THAnimJointNode.Create;
HAnimJoint371.NameField := 'r_talocrural';
HAnimJoint371.Center := Vector3(-0.0801,0.0712,-0.0766);
HAnimSegment372 := THAnimSegmentNode.Create;
HAnimSegment372.NameField := 'r_talus';
Transform373 := TTransformNode.Create;
Transform373.Scale := Vector3(0.15,0.15,0.15);
Transform373.Translation := Vector3(-0.05,0.06,-0.025);
Transform373.Rotation := Vector4(1,0,0,-1.57);
{ Transform right foot }
Transform374 := TTransformNode.Create;
{ Empty Transform right foot }
TouchSensor375 := TTouchSensorNode.Create;
TouchSensor375.Description := 'Joint r_talocrural';
{ .AddChildren }
Transform374.AddChildren([TouchSensor375]);
Shape376 := Shape20;
{ .AddChild }
Transform374.AddChildren([Shape376]);
{ .AddChildren }
Transform373.AddChildren([Transform374]);
{ .AddChildren }
HAnimSegment372.AddChildren([Transform373]);
TouchSensor377 := TTouchSensorNode.Create;
TouchSensor377.Description := 'Segment r_talus';
{ .AddChildren }
HAnimSegment372.AddChildren([TouchSensor377]);
Shape378 := TShapeNode.Create;
Appearance379 := TAppearanceNode.Create;
Material380 := TMaterialNode.Create;
Material380.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance379.Material := Material380;
{ .SetAppearance }
Shape378.Appearance := Appearance379;
Extrusion381 := TExtrusionNode.Create;
Extrusion381.SetSpine([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.0781,0.0283,-0.097)]);
Extrusion381.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape378.Geometry := Extrusion381;
{ .AddChildren }
HAnimSegment372.AddChildren([Shape378]);
TouchSensor382 := TTouchSensorNode.Create;
TouchSensor382.Description := 'Segment r_talus';
{ .AddChildren }
HAnimSegment372.AddChildren([TouchSensor382]);
Shape383 := TShapeNode.Create;
Appearance384 := TAppearanceNode.Create;
Material385 := TMaterialNode.Create;
Material385.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance384.Material := Material385;
{ .SetAppearance }
Shape383.Appearance := Appearance384;
Extrusion386 := TExtrusionNode.Create;
Extrusion386.SetSpine([Vector3(-0.0801,0.0712,-0.0766),Vector3(-0.0889,0.0494,-0.1278)]);
Extrusion386.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape383.Geometry := Extrusion386;
{ .AddChildren }
HAnimSegment372.AddChildren([Shape383]);
{ .AddChildren }
HAnimJoint371.AddChildren([HAnimSegment372]);
HAnimJoint387 := THAnimJointNode.Create;
HAnimJoint387.NameField := 'r_talocalcaneonavicular';
HAnimJoint387.Center := Vector3(-0.0781,0.0283,-0.097);
HAnimSegment388 := THAnimSegmentNode.Create;
HAnimSegment388.NameField := 'r_navicular';
Transform389 := TTransformNode.Create;
Transform389.Translation := Vector3(-0.0781,0.0283,-0.097);
Transform390 := TTransformNode.Create;
{ Empty Transform }
TouchSensor391 := TTouchSensorNode.Create;
TouchSensor391.Description := 'Joint r_talocalcaneonavicular';
{ .AddChildren }
Transform390.AddChildren([TouchSensor391]);
Shape392 := Shape20;
{ .AddChild }
Transform390.AddChildren([Shape392]);
{ .AddChildren }
Transform389.AddChildren([Transform390]);
{ .AddChildren }
HAnimSegment388.AddChildren([Transform389]);
TouchSensor393 := TTouchSensorNode.Create;
TouchSensor393.Description := 'Segment r_navicular';
{ .AddChildren }
HAnimSegment388.AddChildren([TouchSensor393]);
Shape394 := TShapeNode.Create;
Appearance395 := TAppearanceNode.Create;
Material396 := TMaterialNode.Create;
Material396.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance395.Material := Material396;
{ .SetAppearance }
Shape394.Appearance := Appearance395;
Extrusion397 := TExtrusionNode.Create;
Extrusion397.SetSpine([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0672,0.0235,-0.0835)]);
Extrusion397.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape394.Geometry := Extrusion397;
{ .AddChildren }
HAnimSegment388.AddChildren([Shape394]);
TouchSensor398 := TTouchSensorNode.Create;
TouchSensor398.Description := 'Segment r_navicular';
{ .AddChildren }
HAnimSegment388.AddChildren([TouchSensor398]);
Shape399 := TShapeNode.Create;
Appearance400 := TAppearanceNode.Create;
Material401 := TMaterialNode.Create;
Material401.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance400.Material := Material401;
{ .SetAppearance }
Shape399.Appearance := Appearance400;
Extrusion402 := TExtrusionNode.Create;
Extrusion402.SetSpine([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0812,0.025,-0.0805)]);
Extrusion402.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape399.Geometry := Extrusion402;
{ .AddChildren }
HAnimSegment388.AddChildren([Shape399]);
TouchSensor403 := TTouchSensorNode.Create;
TouchSensor403.Description := 'Segment r_navicular';
{ .AddChildren }
HAnimSegment388.AddChildren([TouchSensor403]);
Shape404 := TShapeNode.Create;
Appearance405 := TAppearanceNode.Create;
Material406 := TMaterialNode.Create;
Material406.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance405.Material := Material406;
{ .SetAppearance }
Shape404.Appearance := Appearance405;
Extrusion407 := TExtrusionNode.Create;
Extrusion407.SetSpine([Vector3(-0.0781,0.0283,-0.097),Vector3(-0.0928,0.0248,-0.0821)]);
Extrusion407.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape404.Geometry := Extrusion407;
{ .AddChildren }
HAnimSegment388.AddChildren([Shape404]);
{ .AddChildren }
HAnimJoint387.AddChildren([HAnimSegment388]);
HAnimJoint408 := THAnimJointNode.Create;
HAnimJoint408.NameField := 'r_cuneonavicular_1';
HAnimJoint408.Center := Vector3(-0.0672,0.0235,-0.0835);
HAnimSegment409 := THAnimSegmentNode.Create;
HAnimSegment409.NameField := 'r_cuneiform_1';
Transform410 := TTransformNode.Create;
Transform410.Translation := Vector3(-0.0672,0.0235,-0.0835);
Transform411 := TTransformNode.Create;
{ Empty Transform }
TouchSensor412 := TTouchSensorNode.Create;
TouchSensor412.Description := 'Joint r_cuneonavicular_1';
{ .AddChildren }
Transform411.AddChildren([TouchSensor412]);
Shape413 := Shape20;
{ .AddChild }
Transform411.AddChildren([Shape413]);
{ .AddChildren }
Transform410.AddChildren([Transform411]);
{ .AddChildren }
HAnimSegment409.AddChildren([Transform410]);
TouchSensor414 := TTouchSensorNode.Create;
TouchSensor414.Description := 'Segment r_cuneiform_1';
{ .AddChildren }
HAnimSegment409.AddChildren([TouchSensor414]);
Shape415 := TShapeNode.Create;
Appearance416 := TAppearanceNode.Create;
Material417 := TMaterialNode.Create;
Material417.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance416.Material := Material417;
{ .SetAppearance }
Shape415.Appearance := Appearance416;
Extrusion418 := TExtrusionNode.Create;
Extrusion418.SetSpine([Vector3(-0.0672,0.0235,-0.0835),Vector3(-0.0644,0.0147,-0.0577)]);
Extrusion418.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape415.Geometry := Extrusion418;
{ .AddChildren }
HAnimSegment409.AddChildren([Shape415]);
{ .AddChildren }
HAnimJoint408.AddChildren([HAnimSegment409]);
HAnimJoint419 := THAnimJointNode.Create;
HAnimJoint419.NameField := 'r_tarsometatarsal_1';
HAnimJoint419.Center := Vector3(-0.0644,0.0147,-0.0577);
HAnimSegment420 := THAnimSegmentNode.Create;
HAnimSegment420.NameField := 'r_metatarsal_1';
Transform421 := TTransformNode.Create;
Transform421.Translation := Vector3(-0.0644,0.0147,-0.0577);
Transform422 := TTransformNode.Create;
{ Empty Transform }
TouchSensor423 := TTouchSensorNode.Create;
TouchSensor423.Description := 'Joint r_tarsometatarsal_1';
{ .AddChildren }
Transform422.AddChildren([TouchSensor423]);
Shape424 := Shape20;
{ .AddChild }
Transform422.AddChildren([Shape424]);
{ .AddChildren }
Transform421.AddChildren([Transform422]);
{ .AddChildren }
HAnimSegment420.AddChildren([Transform421]);
TouchSensor425 := TTouchSensorNode.Create;
TouchSensor425.Description := 'Segment r_metatarsal_1';
{ .AddChildren }
HAnimSegment420.AddChildren([TouchSensor425]);
Shape426 := TShapeNode.Create;
Appearance427 := TAppearanceNode.Create;
Material428 := TMaterialNode.Create;
Material428.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance427.Material := Material428;
{ .SetAppearance }
Shape426.Appearance := Appearance427;
Extrusion429 := TExtrusionNode.Create;
Extrusion429.SetSpine([Vector3(-0.0644,0.0147,-0.0577),Vector3(-0.0619,0.0059,-0.0083)]);
Extrusion429.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape426.Geometry := Extrusion429;
{ .AddChildren }
HAnimSegment420.AddChildren([Shape426]);
{ .AddChildren }
HAnimJoint419.AddChildren([HAnimSegment420]);
HAnimJoint430 := THAnimJointNode.Create;
HAnimJoint430.NameField := 'r_metatarsophalangeal_1';
HAnimJoint430.Center := Vector3(-0.0619,0.0059,-0.0083);
HAnimSegment431 := THAnimSegmentNode.Create;
HAnimSegment431.NameField := 'r_tarsal_proximal_phalanx_1';
Transform432 := TTransformNode.Create;
Transform432.Translation := Vector3(-0.0619,0.0059,-0.0083);
Transform433 := TTransformNode.Create;
{ Empty Transform }
TouchSensor434 := TTouchSensorNode.Create;
TouchSensor434.Description := 'Joint r_metatarsophalangeal_1';
{ .AddChildren }
Transform433.AddChildren([TouchSensor434]);
Shape435 := Shape20;
{ .AddChild }
Transform433.AddChildren([Shape435]);
{ .AddChildren }
Transform432.AddChildren([Transform433]);
{ .AddChildren }
HAnimSegment431.AddChildren([Transform432]);
TouchSensor436 := TTouchSensorNode.Create;
TouchSensor436.Description := 'Segment r_tarsal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment431.AddChildren([TouchSensor436]);
Shape437 := TShapeNode.Create;
Appearance438 := TAppearanceNode.Create;
Material439 := TMaterialNode.Create;
Material439.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance438.Material := Material439;
{ .SetAppearance }
Shape437.Appearance := Appearance438;
Extrusion440 := TExtrusionNode.Create;
Extrusion440.SetSpine([Vector3(-0.0619,0.0059,-0.0083),Vector3(-0.0619,0.0059,-0.0083)]);
Extrusion440.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape437.Geometry := Extrusion440;
{ .AddChildren }
HAnimSegment431.AddChildren([Shape437]);
{ .AddChildren }
HAnimJoint430.AddChildren([HAnimSegment431]);
HAnimJoint441 := THAnimJointNode.Create;
HAnimJoint441.NameField := 'r_tarsal_interphalangeal_1';
{ .AddChildren }
HAnimJoint430.AddChildren([HAnimJoint441]);
{ .AddChildren }
HAnimJoint419.AddChildren([HAnimJoint430]);
{ .AddChildren }
HAnimJoint408.AddChildren([HAnimJoint419]);
{ .AddChildren }
HAnimJoint387.AddChildren([HAnimJoint408]);
HAnimJoint442 := THAnimJointNode.Create;
HAnimJoint442.NameField := 'r_cuneonavicular_2';
HAnimJoint442.Center := Vector3(-0.0812,0.025,-0.0805);
HAnimSegment443 := THAnimSegmentNode.Create;
HAnimSegment443.NameField := 'r_cuneiform_2';
Transform444 := TTransformNode.Create;
Transform444.Translation := Vector3(-0.0812,0.025,-0.0805);
Transform445 := TTransformNode.Create;
{ Empty Transform }
TouchSensor446 := TTouchSensorNode.Create;
TouchSensor446.Description := 'Joint r_cuneonavicular_2';
{ .AddChildren }
Transform445.AddChildren([TouchSensor446]);
Shape447 := Shape20;
{ .AddChild }
Transform445.AddChildren([Shape447]);
{ .AddChildren }
Transform444.AddChildren([Transform445]);
{ .AddChildren }
HAnimSegment443.AddChildren([Transform444]);
TouchSensor448 := TTouchSensorNode.Create;
TouchSensor448.Description := 'Segment r_cuneiform_2';
{ .AddChildren }
HAnimSegment443.AddChildren([TouchSensor448]);
Shape449 := TShapeNode.Create;
Appearance450 := TAppearanceNode.Create;
Material451 := TMaterialNode.Create;
Material451.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance450.Material := Material451;
{ .SetAppearance }
Shape449.Appearance := Appearance450;
Extrusion452 := TExtrusionNode.Create;
Extrusion452.SetSpine([Vector3(-0.0812,0.025,-0.0805),Vector3(-0.08,0.0175,-0.0608)]);
Extrusion452.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape449.Geometry := Extrusion452;
{ .AddChildren }
HAnimSegment443.AddChildren([Shape449]);
{ .AddChildren }
HAnimJoint442.AddChildren([HAnimSegment443]);
HAnimJoint453 := THAnimJointNode.Create;
HAnimJoint453.NameField := 'r_tarsometatarsal_2';
HAnimJoint453.Center := Vector3(-0.08,0.0175,-0.0608);
HAnimSegment454 := THAnimSegmentNode.Create;
HAnimSegment454.NameField := 'r_metatarsal_2';
Transform455 := TTransformNode.Create;
Transform455.Translation := Vector3(-0.08,0.0175,-0.0608);
Transform456 := TTransformNode.Create;
{ Empty Transform }
TouchSensor457 := TTouchSensorNode.Create;
TouchSensor457.Description := 'Joint r_tarsometatarsal_2';
{ .AddChildren }
Transform456.AddChildren([TouchSensor457]);
Shape458 := Shape20;
{ .AddChild }
Transform456.AddChildren([Shape458]);
{ .AddChildren }
Transform455.AddChildren([Transform456]);
{ .AddChildren }
HAnimSegment454.AddChildren([Transform455]);
TouchSensor459 := TTouchSensorNode.Create;
TouchSensor459.Description := 'Segment r_metatarsal_2';
{ .AddChildren }
HAnimSegment454.AddChildren([TouchSensor459]);
Shape460 := TShapeNode.Create;
Appearance461 := TAppearanceNode.Create;
Material462 := TMaterialNode.Create;
Material462.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance461.Material := Material462;
{ .SetAppearance }
Shape460.Appearance := Appearance461;
Extrusion463 := TExtrusionNode.Create;
Extrusion463.SetSpine([Vector3(-0.08,0.0175,-0.0608),Vector3(-0.0823,0.0064,-0.004)]);
Extrusion463.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape460.Geometry := Extrusion463;
{ .AddChildren }
HAnimSegment454.AddChildren([Shape460]);
{ .AddChildren }
HAnimJoint453.AddChildren([HAnimSegment454]);
HAnimJoint464 := THAnimJointNode.Create;
HAnimJoint464.NameField := 'r_metatarsophalangeal_2';
HAnimJoint464.Center := Vector3(-0.0823,0.0064,-0.004);
HAnimSegment465 := THAnimSegmentNode.Create;
HAnimSegment465.NameField := 'r_tarsal_proximal_phalanx_2';
Transform466 := TTransformNode.Create;
Transform466.Translation := Vector3(-0.0823,0.0064,-0.004);
Transform467 := TTransformNode.Create;
{ Empty Transform }
TouchSensor468 := TTouchSensorNode.Create;
TouchSensor468.Description := 'Joint r_metatarsophalangeal_2';
{ .AddChildren }
Transform467.AddChildren([TouchSensor468]);
Shape469 := Shape20;
{ .AddChild }
Transform467.AddChildren([Shape469]);
{ .AddChildren }
Transform466.AddChildren([Transform467]);
{ .AddChildren }
HAnimSegment465.AddChildren([Transform466]);
TouchSensor470 := TTouchSensorNode.Create;
TouchSensor470.Description := 'Segment r_tarsal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment465.AddChildren([TouchSensor470]);
Shape471 := TShapeNode.Create;
Appearance472 := TAppearanceNode.Create;
Material473 := TMaterialNode.Create;
Material473.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance472.Material := Material473;
{ .SetAppearance }
Shape471.Appearance := Appearance472;
Extrusion474 := TExtrusionNode.Create;
Extrusion474.SetSpine([Vector3(-0.0823,0.0064,-0.004),Vector3(-0.0841,0.0041,0.0121)]);
Extrusion474.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape471.Geometry := Extrusion474;
{ .AddChildren }
HAnimSegment465.AddChildren([Shape471]);
{ .AddChildren }
HAnimJoint464.AddChildren([HAnimSegment465]);
HAnimJoint475 := THAnimJointNode.Create;
HAnimJoint475.NameField := 'r_tarsal_proximal_interphalangeal_2';
HAnimJoint475.Center := Vector3(-0.0841,0.0041,0.0121);
HAnimSegment476 := THAnimSegmentNode.Create;
HAnimSegment476.NameField := 'r_tarsal_middle_phalanx_2';
Transform477 := TTransformNode.Create;
Transform477.Translation := Vector3(-0.0841,0.0041,0.0121);
Transform478 := TTransformNode.Create;
{ Empty Transform }
TouchSensor479 := TTouchSensorNode.Create;
TouchSensor479.Description := 'Joint r_tarsal_proximal_interphalangeal_2';
{ .AddChildren }
Transform478.AddChildren([TouchSensor479]);
Shape480 := Shape20;
{ .AddChild }
Transform478.AddChildren([Shape480]);
{ .AddChildren }
Transform477.AddChildren([Transform478]);
{ .AddChildren }
HAnimSegment476.AddChildren([Transform477]);
TouchSensor481 := TTouchSensorNode.Create;
TouchSensor481.Description := 'Segment r_tarsal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment476.AddChildren([TouchSensor481]);
Shape482 := TShapeNode.Create;
Appearance483 := TAppearanceNode.Create;
Material484 := TMaterialNode.Create;
Material484.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance483.Material := Material484;
{ .SetAppearance }
Shape482.Appearance := Appearance483;
Extrusion485 := TExtrusionNode.Create;
Extrusion485.SetSpine([Vector3(-0.0841,0.0041,0.0121),Vector3(-0.0841,0.0013,0.0216)]);
Extrusion485.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape482.Geometry := Extrusion485;
{ .AddChildren }
HAnimSegment476.AddChildren([Shape482]);
{ .AddChildren }
HAnimJoint475.AddChildren([HAnimSegment476]);
HAnimJoint486 := THAnimJointNode.Create;
HAnimJoint486.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint486.Center := Vector3(-0.0841,0.0013,0.0216);
{ .AddChildren }
HAnimJoint475.AddChildren([HAnimJoint486]);
{ .AddChildren }
HAnimJoint464.AddChildren([HAnimJoint475]);
{ .AddChildren }
HAnimJoint453.AddChildren([HAnimJoint464]);
{ .AddChildren }
HAnimJoint442.AddChildren([HAnimJoint453]);
{ .AddChildren }
HAnimJoint387.AddChildren([HAnimJoint442]);
HAnimJoint487 := THAnimJointNode.Create;
HAnimJoint487.NameField := 'r_cuneonavicular_3';
HAnimJoint487.Center := Vector3(-0.0928,0.0248,-0.0821);
HAnimSegment488 := THAnimSegmentNode.Create;
HAnimSegment488.NameField := 'r_cuneiform_3';
Transform489 := TTransformNode.Create;
Transform489.Translation := Vector3(-0.0928,0.0248,-0.0821);
Transform490 := TTransformNode.Create;
{ Empty Transform }
TouchSensor491 := TTouchSensorNode.Create;
TouchSensor491.Description := 'Joint r_cuneonavicular_3';
{ .AddChildren }
Transform490.AddChildren([TouchSensor491]);
Shape492 := Shape20;
{ .AddChild }
Transform490.AddChildren([Shape492]);
{ .AddChildren }
Transform489.AddChildren([Transform490]);
{ .AddChildren }
HAnimSegment488.AddChildren([Transform489]);
TouchSensor493 := TTouchSensorNode.Create;
TouchSensor493.Description := 'Segment r_cuneiform_3';
{ .AddChildren }
HAnimSegment488.AddChildren([TouchSensor493]);
Shape494 := TShapeNode.Create;
Appearance495 := TAppearanceNode.Create;
Material496 := TMaterialNode.Create;
Material496.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance495.Material := Material496;
{ .SetAppearance }
Shape494.Appearance := Appearance495;
Extrusion497 := TExtrusionNode.Create;
Extrusion497.SetSpine([Vector3(-0.0928,0.0248,-0.0821),Vector3(-0.0944,0.0175,-0.0625)]);
Extrusion497.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape494.Geometry := Extrusion497;
{ .AddChildren }
HAnimSegment488.AddChildren([Shape494]);
{ .AddChildren }
HAnimJoint487.AddChildren([HAnimSegment488]);
HAnimJoint498 := THAnimJointNode.Create;
HAnimJoint498.NameField := 'r_tarsometatarsal_3';
HAnimJoint498.Center := Vector3(-0.0944,0.0175,-0.0625);
HAnimSegment499 := THAnimSegmentNode.Create;
HAnimSegment499.NameField := 'r_metatarsal_3';
Transform500 := TTransformNode.Create;
Transform500.Translation := Vector3(-0.0944,0.0175,-0.0625);
Transform501 := TTransformNode.Create;
{ Empty Transform }
TouchSensor502 := TTouchSensorNode.Create;
TouchSensor502.Description := 'Joint r_tarsometatarsal_3';
{ .AddChildren }
Transform501.AddChildren([TouchSensor502]);
Shape503 := Shape20;
{ .AddChild }
Transform501.AddChildren([Shape503]);
{ .AddChildren }
Transform500.AddChildren([Transform501]);
{ .AddChildren }
HAnimSegment499.AddChildren([Transform500]);
TouchSensor504 := TTouchSensorNode.Create;
TouchSensor504.Description := 'Segment r_metatarsal_3';
{ .AddChildren }
HAnimSegment499.AddChildren([TouchSensor504]);
Shape505 := TShapeNode.Create;
Appearance506 := TAppearanceNode.Create;
Material507 := TMaterialNode.Create;
Material507.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance506.Material := Material507;
{ .SetAppearance }
Shape505.Appearance := Appearance506;
Extrusion508 := TExtrusionNode.Create;
Extrusion508.SetSpine([Vector3(-0.0944,0.0175,-0.0625),Vector3(-0.0963,0.0065,-0.0065)]);
Extrusion508.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape505.Geometry := Extrusion508;
{ .AddChildren }
HAnimSegment499.AddChildren([Shape505]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimSegment499]);
HAnimJoint509 := THAnimJointNode.Create;
HAnimJoint509.NameField := 'r_metatarsophalangeal_3';
HAnimJoint509.Center := Vector3(-0.0963,0.0065,-0.0065);
HAnimSegment510 := THAnimSegmentNode.Create;
HAnimSegment510.NameField := 'r_tarsal_proximal_phalanx_3';
Transform511 := TTransformNode.Create;
Transform511.Translation := Vector3(-0.0963,0.0065,-0.0065);
Transform512 := TTransformNode.Create;
{ Empty Transform }
TouchSensor513 := TTouchSensorNode.Create;
TouchSensor513.Description := 'Joint r_metatarsophalangeal_3';
{ .AddChildren }
Transform512.AddChildren([TouchSensor513]);
Shape514 := Shape20;
{ .AddChild }
Transform512.AddChildren([Shape514]);
{ .AddChildren }
Transform511.AddChildren([Transform512]);
{ .AddChildren }
HAnimSegment510.AddChildren([Transform511]);
TouchSensor515 := TTouchSensorNode.Create;
TouchSensor515.Description := 'Segment r_tarsal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment510.AddChildren([TouchSensor515]);
Shape516 := TShapeNode.Create;
Appearance517 := TAppearanceNode.Create;
Material518 := TMaterialNode.Create;
Material518.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance517.Material := Material518;
{ .SetAppearance }
Shape516.Appearance := Appearance517;
Extrusion519 := TExtrusionNode.Create;
Extrusion519.SetSpine([Vector3(-0.0963,0.0065,-0.0065),Vector3(-0.0987,0.0034,0.0086)]);
Extrusion519.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape516.Geometry := Extrusion519;
{ .AddChildren }
HAnimSegment510.AddChildren([Shape516]);
{ .AddChildren }
HAnimJoint509.AddChildren([HAnimSegment510]);
HAnimJoint520 := THAnimJointNode.Create;
HAnimJoint520.NameField := 'r_tarsal_proximal_interphalangeal_3';
HAnimJoint520.Center := Vector3(-0.0987,0.0034,0.0086);
HAnimSegment521 := THAnimSegmentNode.Create;
HAnimSegment521.NameField := 'r_tarsal_middle_phalanx_3';
Transform522 := TTransformNode.Create;
Transform522.Translation := Vector3(-0.0987,0.0034,0.0086);
Transform523 := TTransformNode.Create;
{ Empty Transform }
TouchSensor524 := TTouchSensorNode.Create;
TouchSensor524.Description := 'Joint r_tarsal_proximal_interphalangeal_3';
{ .AddChildren }
Transform523.AddChildren([TouchSensor524]);
Shape525 := Shape20;
{ .AddChild }
Transform523.AddChildren([Shape525]);
{ .AddChildren }
Transform522.AddChildren([Transform523]);
{ .AddChildren }
HAnimSegment521.AddChildren([Transform522]);
TouchSensor526 := TTouchSensorNode.Create;
TouchSensor526.Description := 'Segment r_tarsal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment521.AddChildren([TouchSensor526]);
Shape527 := TShapeNode.Create;
Appearance528 := TAppearanceNode.Create;
Material529 := TMaterialNode.Create;
Material529.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance528.Material := Material529;
{ .SetAppearance }
Shape527.Appearance := Appearance528;
Extrusion530 := TExtrusionNode.Create;
Extrusion530.SetSpine([Vector3(-0.0987,0.0034,0.0086),Vector3(-0.1002,0.0013,0.0178)]);
Extrusion530.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape527.Geometry := Extrusion530;
{ .AddChildren }
HAnimSegment521.AddChildren([Shape527]);
{ .AddChildren }
HAnimJoint520.AddChildren([HAnimSegment521]);
HAnimJoint531 := THAnimJointNode.Create;
HAnimJoint531.NameField := 'r_tarsal_distal_interphalangeal_3';
HAnimJoint531.Center := Vector3(-0.1002,0.0013,0.0178);
{ .AddChildren }
HAnimJoint520.AddChildren([HAnimJoint531]);
{ .AddChildren }
HAnimJoint509.AddChildren([HAnimJoint520]);
{ .AddChildren }
HAnimJoint498.AddChildren([HAnimJoint509]);
{ .AddChildren }
HAnimJoint487.AddChildren([HAnimJoint498]);
{ .AddChildren }
HAnimJoint387.AddChildren([HAnimJoint487]);
{ .AddChildren }
HAnimJoint371.AddChildren([HAnimJoint387]);
HAnimJoint532 := THAnimJointNode.Create;
HAnimJoint532.NameField := 'r_calcaneocuboid';
HAnimJoint532.Center := Vector3(-0.0889,0.0494,-0.1278);
HAnimSegment533 := THAnimSegmentNode.Create;
HAnimSegment533.NameField := 'r_calcaneus';
Transform534 := TTransformNode.Create;
Transform534.Translation := Vector3(-0.0889,0.0494,-0.1278);
Transform535 := TTransformNode.Create;
{ Empty Transform }
TouchSensor536 := TTouchSensorNode.Create;
TouchSensor536.Description := 'Joint r_calcaneocuboid';
{ .AddChildren }
Transform535.AddChildren([TouchSensor536]);
Shape537 := Shape20;
{ .AddChild }
Transform535.AddChildren([Shape537]);
{ .AddChildren }
Transform534.AddChildren([Transform535]);
{ .AddChildren }
HAnimSegment533.AddChildren([Transform534]);
TouchSensor538 := TTouchSensorNode.Create;
TouchSensor538.Description := 'Segment r_calcaneus';
{ .AddChildren }
HAnimSegment533.AddChildren([TouchSensor538]);
Shape539 := TShapeNode.Create;
Appearance540 := TAppearanceNode.Create;
Material541 := TMaterialNode.Create;
Material541.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance540.Material := Material541;
{ .SetAppearance }
Shape539.Appearance := Appearance540;
Extrusion542 := TExtrusionNode.Create;
Extrusion542.SetSpine([Vector3(-0.0889,0.0494,-0.1278),Vector3(-0.1105,0.0267,-0.0998)]);
Extrusion542.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape539.Geometry := Extrusion542;
{ .AddChildren }
HAnimSegment533.AddChildren([Shape539]);
{ .AddChildren }
HAnimJoint532.AddChildren([HAnimSegment533]);
HAnimJoint543 := THAnimJointNode.Create;
HAnimJoint543.NameField := 'r_transversetarsal';
HAnimJoint543.Center := Vector3(-0.1105,0.0267,-0.0998);
HAnimSegment544 := THAnimSegmentNode.Create;
HAnimSegment544.NameField := 'r_cuboid';
Transform545 := TTransformNode.Create;
Transform545.Translation := Vector3(-0.1105,0.0267,-0.0998);
Transform546 := TTransformNode.Create;
{ Empty Transform }
TouchSensor547 := TTouchSensorNode.Create;
TouchSensor547.Description := 'Joint r_transversetarsal';
{ .AddChildren }
Transform546.AddChildren([TouchSensor547]);
Shape548 := Shape20;
{ .AddChild }
Transform546.AddChildren([Shape548]);
{ .AddChildren }
Transform545.AddChildren([Transform546]);
{ .AddChildren }
HAnimSegment544.AddChildren([Transform545]);
TouchSensor549 := TTouchSensorNode.Create;
TouchSensor549.Description := 'Segment r_cuboid';
{ .AddChildren }
HAnimSegment544.AddChildren([TouchSensor549]);
Shape550 := TShapeNode.Create;
Appearance551 := TAppearanceNode.Create;
Material552 := TMaterialNode.Create;
Material552.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance551.Material := Material552;
{ .SetAppearance }
Shape550.Appearance := Appearance551;
Extrusion553 := TExtrusionNode.Create;
Extrusion553.SetSpine([Vector3(-0.1105,0.0267,-0.0998),Vector3(-0.1063,0.016,-0.0634)]);
Extrusion553.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape550.Geometry := Extrusion553;
{ .AddChildren }
HAnimSegment544.AddChildren([Shape550]);
TouchSensor554 := TTouchSensorNode.Create;
TouchSensor554.Description := 'Segment r_cuboid';
{ .AddChildren }
HAnimSegment544.AddChildren([TouchSensor554]);
Shape555 := TShapeNode.Create;
Appearance556 := TAppearanceNode.Create;
Material557 := TMaterialNode.Create;
Material557.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance556.Material := Material557;
{ .SetAppearance }
Shape555.Appearance := Appearance556;
Extrusion558 := TExtrusionNode.Create;
Extrusion558.SetSpine([Vector3(-0.1105,0.0267,-0.0998),Vector3(-0.1206,0.0124,-0.0671)]);
Extrusion558.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape555.Geometry := Extrusion558;
{ .AddChildren }
HAnimSegment544.AddChildren([Shape555]);
{ .AddChildren }
HAnimJoint543.AddChildren([HAnimSegment544]);
HAnimJoint559 := THAnimJointNode.Create;
HAnimJoint559.NameField := 'r_tarsometatarsal_4';
HAnimJoint559.Center := Vector3(-0.1063,0.016,-0.0634);
HAnimSegment560 := THAnimSegmentNode.Create;
HAnimSegment560.NameField := 'r_metatarsal_4';
Transform561 := TTransformNode.Create;
Transform561.Translation := Vector3(-0.1063,0.016,-0.0634);
Transform562 := TTransformNode.Create;
{ Empty Transform }
TouchSensor563 := TTouchSensorNode.Create;
TouchSensor563.Description := 'Joint r_tarsometatarsal_4';
{ .AddChildren }
Transform562.AddChildren([TouchSensor563]);
Shape564 := Shape20;
{ .AddChild }
Transform562.AddChildren([Shape564]);
{ .AddChildren }
Transform561.AddChildren([Transform562]);
{ .AddChildren }
HAnimSegment560.AddChildren([Transform561]);
TouchSensor565 := TTouchSensorNode.Create;
TouchSensor565.Description := 'Segment r_metatarsal_4';
{ .AddChildren }
HAnimSegment560.AddChildren([TouchSensor565]);
Shape566 := TShapeNode.Create;
Appearance567 := TAppearanceNode.Create;
Material568 := TMaterialNode.Create;
Material568.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance567.Material := Material568;
{ .SetAppearance }
Shape566.Appearance := Appearance567;
Extrusion569 := TExtrusionNode.Create;
Extrusion569.SetSpine([Vector3(-0.1063,0.016,-0.0634),Vector3(-0.1097,0.0058,-0.0107)]);
Extrusion569.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape566.Geometry := Extrusion569;
{ .AddChildren }
HAnimSegment560.AddChildren([Shape566]);
{ .AddChildren }
HAnimJoint559.AddChildren([HAnimSegment560]);
HAnimJoint570 := THAnimJointNode.Create;
HAnimJoint570.NameField := 'r_metatarsophalangeal_4';
HAnimJoint570.Center := Vector3(-0.1097,0.0058,-0.0107);
HAnimSegment571 := THAnimSegmentNode.Create;
HAnimSegment571.NameField := 'r_tarsal_proximal_phalanx_4';
Transform572 := TTransformNode.Create;
Transform572.Translation := Vector3(-0.1097,0.0058,-0.0107);
Transform573 := TTransformNode.Create;
{ Empty Transform }
TouchSensor574 := TTouchSensorNode.Create;
TouchSensor574.Description := 'Joint r_metatarsophalangeal_4';
{ .AddChildren }
Transform573.AddChildren([TouchSensor574]);
Shape575 := Shape20;
{ .AddChild }
Transform573.AddChildren([Shape575]);
{ .AddChildren }
Transform572.AddChildren([Transform573]);
{ .AddChildren }
HAnimSegment571.AddChildren([Transform572]);
TouchSensor576 := TTouchSensorNode.Create;
TouchSensor576.Description := 'Segment r_tarsal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment571.AddChildren([TouchSensor576]);
Shape577 := TShapeNode.Create;
Appearance578 := TAppearanceNode.Create;
Material579 := TMaterialNode.Create;
Material579.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance578.Material := Material579;
{ .SetAppearance }
Shape577.Appearance := Appearance578;
Extrusion580 := TExtrusionNode.Create;
Extrusion580.SetSpine([Vector3(-0.1097,0.0058,-0.0107),Vector3(-0.114,0.0037,0.0044)]);
Extrusion580.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape577.Geometry := Extrusion580;
{ .AddChildren }
HAnimSegment571.AddChildren([Shape577]);
{ .AddChildren }
HAnimJoint570.AddChildren([HAnimSegment571]);
HAnimJoint581 := THAnimJointNode.Create;
HAnimJoint581.NameField := 'r_tarsal_proximal_interphalangeal_4';
HAnimJoint581.Center := Vector3(-0.114,0.0037,0.0044);
HAnimSegment582 := THAnimSegmentNode.Create;
HAnimSegment582.NameField := 'r_tarsal_middle_phalanx_4';
Transform583 := TTransformNode.Create;
Transform583.Translation := Vector3(-0.114,0.0037,0.0044);
Transform584 := TTransformNode.Create;
{ Empty Transform }
TouchSensor585 := TTouchSensorNode.Create;
TouchSensor585.Description := 'Joint r_tarsal_proximal_interphalangeal_4';
{ .AddChildren }
Transform584.AddChildren([TouchSensor585]);
Shape586 := Shape20;
{ .AddChild }
Transform584.AddChildren([Shape586]);
{ .AddChildren }
Transform583.AddChildren([Transform584]);
{ .AddChildren }
HAnimSegment582.AddChildren([Transform583]);
TouchSensor587 := TTouchSensorNode.Create;
TouchSensor587.Description := 'Segment r_tarsal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment582.AddChildren([TouchSensor587]);
Shape588 := TShapeNode.Create;
Appearance589 := TAppearanceNode.Create;
Material590 := TMaterialNode.Create;
Material590.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance589.Material := Material590;
{ .SetAppearance }
Shape588.Appearance := Appearance589;
Extrusion591 := TExtrusionNode.Create;
Extrusion591.SetSpine([Vector3(-0.114,0.0037,0.0044),Vector3(-0.1155,0.0008,0.0118)]);
Extrusion591.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape588.Geometry := Extrusion591;
{ .AddChildren }
HAnimSegment582.AddChildren([Shape588]);
{ .AddChildren }
HAnimJoint581.AddChildren([HAnimSegment582]);
HAnimJoint592 := THAnimJointNode.Create;
HAnimJoint592.NameField := 'r_tarsal_distal_interphalangeal_4';
HAnimJoint592.Center := Vector3(-0.1155,0.0008,0.0118);
{ .AddChildren }
HAnimJoint581.AddChildren([HAnimJoint592]);
{ .AddChildren }
HAnimJoint570.AddChildren([HAnimJoint581]);
{ .AddChildren }
HAnimJoint559.AddChildren([HAnimJoint570]);
{ .AddChildren }
HAnimJoint543.AddChildren([HAnimJoint559]);
HAnimJoint593 := THAnimJointNode.Create;
HAnimJoint593.NameField := 'r_tarsometatarsal_5';
HAnimJoint593.Center := Vector3(-0.1206,0.0124,-0.0671);
HAnimSegment594 := THAnimSegmentNode.Create;
HAnimSegment594.NameField := 'r_metatarsal_5';
Transform595 := TTransformNode.Create;
Transform595.Translation := Vector3(-0.1206,0.0124,-0.0671);
Transform596 := TTransformNode.Create;
{ Empty Transform }
TouchSensor597 := TTouchSensorNode.Create;
TouchSensor597.Description := 'Joint r_tarsometatarsal_5';
{ .AddChildren }
Transform596.AddChildren([TouchSensor597]);
Shape598 := Shape20;
{ .AddChild }
Transform596.AddChildren([Shape598]);
{ .AddChildren }
Transform595.AddChildren([Transform596]);
{ .AddChildren }
HAnimSegment594.AddChildren([Transform595]);
TouchSensor599 := TTouchSensorNode.Create;
TouchSensor599.Description := 'Segment r_metatarsal_5';
{ .AddChildren }
HAnimSegment594.AddChildren([TouchSensor599]);
Shape600 := TShapeNode.Create;
Appearance601 := TAppearanceNode.Create;
Material602 := TMaterialNode.Create;
Material602.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance601.Material := Material602;
{ .SetAppearance }
Shape600.Appearance := Appearance601;
Extrusion603 := TExtrusionNode.Create;
Extrusion603.SetSpine([Vector3(-0.1206,0.0124,-0.0671),Vector3(-0.1239,0.0051,-0.0153)]);
Extrusion603.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape600.Geometry := Extrusion603;
{ .AddChildren }
HAnimSegment594.AddChildren([Shape600]);
{ .AddChildren }
HAnimJoint593.AddChildren([HAnimSegment594]);
HAnimJoint604 := THAnimJointNode.Create;
HAnimJoint604.NameField := 'r_metatarsophalangeal_5';
HAnimJoint604.Center := Vector3(-0.1239,0.0051,-0.0153);
HAnimSegment605 := THAnimSegmentNode.Create;
HAnimSegment605.NameField := 'r_tarsal_proximal_phalanx_5';
Transform606 := TTransformNode.Create;
Transform606.Translation := Vector3(-0.1239,0.0051,-0.0153);
Transform607 := TTransformNode.Create;
{ Empty Transform }
TouchSensor608 := TTouchSensorNode.Create;
TouchSensor608.Description := 'Joint r_metatarsophalangeal_5';
{ .AddChildren }
Transform607.AddChildren([TouchSensor608]);
Shape609 := Shape20;
{ .AddChild }
Transform607.AddChildren([Shape609]);
{ .AddChildren }
Transform606.AddChildren([Transform607]);
{ .AddChildren }
HAnimSegment605.AddChildren([Transform606]);
TouchSensor610 := TTouchSensorNode.Create;
TouchSensor610.Description := 'Segment r_tarsal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment605.AddChildren([TouchSensor610]);
Shape611 := TShapeNode.Create;
Appearance612 := TAppearanceNode.Create;
Material613 := TMaterialNode.Create;
Material613.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance612.Material := Material613;
{ .SetAppearance }
Shape611.Appearance := Appearance612;
Extrusion614 := TExtrusionNode.Create;
Extrusion614.SetSpine([Vector3(-0.1239,0.0051,-0.0153),Vector3(-0.1262,0.0023,-0.0077)]);
Extrusion614.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape611.Geometry := Extrusion614;
{ .AddChildren }
HAnimSegment605.AddChildren([Shape611]);
{ .AddChildren }
HAnimJoint604.AddChildren([HAnimSegment605]);
HAnimJoint615 := THAnimJointNode.Create;
HAnimJoint615.NameField := 'r_tarsal_proximal_interphalangeal_5';
HAnimJoint615.Center := Vector3(-0.1262,0.0023,-0.0077);
HAnimSegment616 := THAnimSegmentNode.Create;
HAnimSegment616.NameField := 'r_tarsal_middle_phalanx_5';
Transform617 := TTransformNode.Create;
Transform617.Translation := Vector3(-0.1262,0.0023,-0.0077);
Transform618 := TTransformNode.Create;
{ Empty Transform }
TouchSensor619 := TTouchSensorNode.Create;
TouchSensor619.Description := 'Joint r_tarsal_proximal_interphalangeal_5';
{ .AddChildren }
Transform618.AddChildren([TouchSensor619]);
Shape620 := Shape20;
{ .AddChild }
Transform618.AddChildren([Shape620]);
{ .AddChildren }
Transform617.AddChildren([Transform618]);
{ .AddChildren }
HAnimSegment616.AddChildren([Transform617]);
TouchSensor621 := TTouchSensorNode.Create;
TouchSensor621.Description := 'Segment r_tarsal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment616.AddChildren([TouchSensor621]);
Shape622 := TShapeNode.Create;
Appearance623 := TAppearanceNode.Create;
Material624 := TMaterialNode.Create;
Material624.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance623.Material := Material624;
{ .SetAppearance }
Shape622.Appearance := Appearance623;
Extrusion625 := TExtrusionNode.Create;
Extrusion625.SetSpine([Vector3(-0.1262,0.0023,-0.0077),Vector3(-0.1271,0,0)]);
Extrusion625.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape622.Geometry := Extrusion625;
{ .AddChildren }
HAnimSegment616.AddChildren([Shape622]);
{ .AddChildren }
HAnimJoint615.AddChildren([HAnimSegment616]);
HAnimJoint626 := THAnimJointNode.Create;
HAnimJoint626.NameField := 'r_tarsal_distal_interphalangeal_5';
HAnimJoint626.Center := Vector3(-0.1271,0,0);
{ .AddChildren }
HAnimJoint615.AddChildren([HAnimJoint626]);
{ .AddChildren }
HAnimJoint604.AddChildren([HAnimJoint615]);
{ .AddChildren }
HAnimJoint593.AddChildren([HAnimJoint604]);
{ .AddChildren }
HAnimJoint543.AddChildren([HAnimJoint593]);
{ .AddChildren }
HAnimJoint532.AddChildren([HAnimJoint543]);
{ .AddChildren }
HAnimJoint371.AddChildren([HAnimJoint532]);
{ .AddChildren }
HAnimJoint360.AddChildren([HAnimJoint371]);
{ .AddChildren }
HAnimJoint349.AddChildren([HAnimJoint360]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimJoint349]);
{ .AddChildren }
HAnimJoint39.AddChildren([HAnimJoint55]);
HAnimJoint627 := THAnimJointNode.Create;
HAnimJoint627.NameField := 'vl5';
HAnimJoint627.Center := Vector3(0.0028,1.0568,-0.0776);
HAnimSegment628 := THAnimSegmentNode.Create;
HAnimSegment628.NameField := 'l5';
Transform629 := TTransformNode.Create;
Transform629.Translation := Vector3(0.0028,1.0568,-0.0776);
Transform630 := TTransformNode.Create;
{ Empty Transform }
TouchSensor631 := TTouchSensorNode.Create;
TouchSensor631.Description := 'Joint vl5';
{ .AddChildren }
Transform630.AddChildren([TouchSensor631]);
Shape632 := Shape20;
{ .AddChild }
Transform630.AddChildren([Shape632]);
{ .AddChildren }
Transform629.AddChildren([Transform630]);
{ .AddChildren }
HAnimSegment628.AddChildren([Transform629]);
TouchSensor633 := TTouchSensorNode.Create;
TouchSensor633.Description := 'Segment l5';
{ .AddChildren }
HAnimSegment628.AddChildren([TouchSensor633]);
Shape634 := TShapeNode.Create;
Appearance635 := TAppearanceNode.Create;
Material636 := TMaterialNode.Create;
Material636.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance635.Material := Material636;
{ .SetAppearance }
Shape634.Appearance := Appearance635;
Extrusion637 := TExtrusionNode.Create;
Extrusion637.SetSpine([Vector3(0.0028,1.0568,-0.0776),Vector3(0.0035,1.0925,-0.0787)]);
Extrusion637.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape634.Geometry := Extrusion637;
{ .AddChildren }
HAnimSegment628.AddChildren([Shape634]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimSegment628]);
HAnimJoint638 := THAnimJointNode.Create;
HAnimJoint638.NameField := 'vl4';
HAnimJoint638.Center := Vector3(0.0035,1.0925,-0.0787);
HAnimSegment639 := THAnimSegmentNode.Create;
HAnimSegment639.NameField := 'l4';
Transform640 := TTransformNode.Create;
Transform640.Translation := Vector3(0.0035,1.0925,-0.0787);
Transform641 := TTransformNode.Create;
{ Empty Transform }
TouchSensor642 := TTouchSensorNode.Create;
TouchSensor642.Description := 'Joint vl4';
{ .AddChildren }
Transform641.AddChildren([TouchSensor642]);
Shape643 := Shape20;
{ .AddChild }
Transform641.AddChildren([Shape643]);
{ .AddChildren }
Transform640.AddChildren([Transform641]);
{ .AddChildren }
HAnimSegment639.AddChildren([Transform640]);
TouchSensor644 := TTouchSensorNode.Create;
TouchSensor644.Description := 'Segment l4';
{ .AddChildren }
HAnimSegment639.AddChildren([TouchSensor644]);
Shape645 := TShapeNode.Create;
Appearance646 := TAppearanceNode.Create;
Material647 := TMaterialNode.Create;
Material647.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance646.Material := Material647;
{ .SetAppearance }
Shape645.Appearance := Appearance646;
Extrusion648 := TExtrusionNode.Create;
Extrusion648.SetSpine([Vector3(0.0035,1.0925,-0.0787),Vector3(0.0041,1.1276,-0.0796)]);
Extrusion648.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape645.Geometry := Extrusion648;
{ .AddChildren }
HAnimSegment639.AddChildren([Shape645]);
{ .AddChildren }
HAnimJoint638.AddChildren([HAnimSegment639]);
HAnimJoint649 := THAnimJointNode.Create;
HAnimJoint649.NameField := 'vl3';
HAnimJoint649.Center := Vector3(0.0041,1.1276,-0.0796);
HAnimSegment650 := THAnimSegmentNode.Create;
HAnimSegment650.NameField := 'l3';
Transform651 := TTransformNode.Create;
Transform651.Translation := Vector3(0.0041,1.1276,-0.0796);
Transform652 := TTransformNode.Create;
{ Empty Transform }
TouchSensor653 := TTouchSensorNode.Create;
TouchSensor653.Description := 'Joint vl3';
{ .AddChildren }
Transform652.AddChildren([TouchSensor653]);
Shape654 := Shape20;
{ .AddChild }
Transform652.AddChildren([Shape654]);
{ .AddChildren }
Transform651.AddChildren([Transform652]);
{ .AddChildren }
HAnimSegment650.AddChildren([Transform651]);
TouchSensor655 := TTouchSensorNode.Create;
TouchSensor655.Description := 'Segment l3';
{ .AddChildren }
HAnimSegment650.AddChildren([TouchSensor655]);
Shape656 := TShapeNode.Create;
Appearance657 := TAppearanceNode.Create;
Material658 := TMaterialNode.Create;
Material658.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance657.Material := Material658;
{ .SetAppearance }
Shape656.Appearance := Appearance657;
Extrusion659 := TExtrusionNode.Create;
Extrusion659.SetSpine([Vector3(0.0041,1.1276,-0.0796),Vector3(0.0045,1.1546,-0.08)]);
Extrusion659.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape656.Geometry := Extrusion659;
{ .AddChildren }
HAnimSegment650.AddChildren([Shape656]);
{ .AddChildren }
HAnimJoint649.AddChildren([HAnimSegment650]);
HAnimJoint660 := THAnimJointNode.Create;
HAnimJoint660.NameField := 'vl2';
HAnimJoint660.Center := Vector3(0.0045,1.1546,-0.08);
HAnimSegment661 := THAnimSegmentNode.Create;
HAnimSegment661.NameField := 'l2';
Transform662 := TTransformNode.Create;
Transform662.Translation := Vector3(0.0045,1.1546,-0.08);
Transform663 := TTransformNode.Create;
{ Empty Transform }
TouchSensor664 := TTouchSensorNode.Create;
TouchSensor664.Description := 'Joint vl2';
{ .AddChildren }
Transform663.AddChildren([TouchSensor664]);
Shape665 := Shape20;
{ .AddChild }
Transform663.AddChildren([Shape665]);
{ .AddChildren }
Transform662.AddChildren([Transform663]);
{ .AddChildren }
HAnimSegment661.AddChildren([Transform662]);
TouchSensor666 := TTouchSensorNode.Create;
TouchSensor666.Description := 'Segment l2';
{ .AddChildren }
HAnimSegment661.AddChildren([TouchSensor666]);
Shape667 := TShapeNode.Create;
Appearance668 := TAppearanceNode.Create;
Material669 := TMaterialNode.Create;
Material669.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance668.Material := Material669;
{ .SetAppearance }
Shape667.Appearance := Appearance668;
Extrusion670 := TExtrusionNode.Create;
Extrusion670.SetSpine([Vector3(0.0045,1.1546,-0.08),Vector3(0.0048,1.1912,-0.0805)]);
Extrusion670.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape667.Geometry := Extrusion670;
{ .AddChildren }
HAnimSegment661.AddChildren([Shape667]);
{ .AddChildren }
HAnimJoint660.AddChildren([HAnimSegment661]);
HAnimJoint671 := THAnimJointNode.Create;
HAnimJoint671.NameField := 'vl1';
HAnimJoint671.Center := Vector3(0.0048,1.1912,-0.0805);
HAnimSegment672 := THAnimSegmentNode.Create;
HAnimSegment672.NameField := 'l1';
Transform673 := TTransformNode.Create;
Transform673.Translation := Vector3(0.0048,1.1912,-0.0805);
Transform674 := TTransformNode.Create;
{ Empty Transform }
TouchSensor675 := TTouchSensorNode.Create;
TouchSensor675.Description := 'Joint vl1';
{ .AddChildren }
Transform674.AddChildren([TouchSensor675]);
Shape676 := Shape20;
{ .AddChild }
Transform674.AddChildren([Shape676]);
{ .AddChildren }
Transform673.AddChildren([Transform674]);
{ .AddChildren }
HAnimSegment672.AddChildren([Transform673]);
TouchSensor677 := TTouchSensorNode.Create;
TouchSensor677.Description := 'Segment l1';
{ .AddChildren }
HAnimSegment672.AddChildren([TouchSensor677]);
Shape678 := TShapeNode.Create;
Appearance679 := TAppearanceNode.Create;
Material680 := TMaterialNode.Create;
Material680.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance679.Material := Material680;
{ .SetAppearance }
Shape678.Appearance := Appearance679;
Extrusion681 := TExtrusionNode.Create;
Extrusion681.SetSpine([Vector3(0.0048,1.1912,-0.0805),Vector3(0.0051,1.2278,-0.0808)]);
Extrusion681.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape678.Geometry := Extrusion681;
{ .AddChildren }
HAnimSegment672.AddChildren([Shape678]);
{ .AddChildren }
HAnimJoint671.AddChildren([HAnimSegment672]);
HAnimJoint682 := THAnimJointNode.Create;
HAnimJoint682.NameField := 'vt12';
HAnimJoint682.Center := Vector3(0.0051,1.2278,-0.0808);
HAnimSegment683 := THAnimSegmentNode.Create;
HAnimSegment683.NameField := 't12';
Transform684 := TTransformNode.Create;
Transform684.Translation := Vector3(0.0051,1.2278,-0.0808);
Transform685 := TTransformNode.Create;
{ Empty Transform }
TouchSensor686 := TTouchSensorNode.Create;
TouchSensor686.Description := 'Joint vt12';
{ .AddChildren }
Transform685.AddChildren([TouchSensor686]);
Shape687 := Shape20;
{ .AddChild }
Transform685.AddChildren([Shape687]);
{ .AddChildren }
Transform684.AddChildren([Transform685]);
{ .AddChildren }
HAnimSegment683.AddChildren([Transform684]);
TouchSensor688 := TTouchSensorNode.Create;
TouchSensor688.Description := 'Segment t12';
{ .AddChildren }
HAnimSegment683.AddChildren([TouchSensor688]);
Shape689 := TShapeNode.Create;
Appearance690 := TAppearanceNode.Create;
Material691 := TMaterialNode.Create;
Material691.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance690.Material := Material691;
{ .SetAppearance }
Shape689.Appearance := Appearance690;
Extrusion692 := TExtrusionNode.Create;
Extrusion692.SetSpine([Vector3(0.0051,1.2278,-0.0808),Vector3(0.0053,1.2679,-0.081)]);
Extrusion692.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape689.Geometry := Extrusion692;
{ .AddChildren }
HAnimSegment683.AddChildren([Shape689]);
{ .AddChildren }
HAnimJoint682.AddChildren([HAnimSegment683]);
HAnimJoint693 := THAnimJointNode.Create;
HAnimJoint693.NameField := 'vt11';
HAnimJoint693.Center := Vector3(0.0053,1.2679,-0.081);
HAnimSegment694 := THAnimSegmentNode.Create;
HAnimSegment694.NameField := 't11';
Transform695 := TTransformNode.Create;
Transform695.Translation := Vector3(0.0053,1.2679,-0.081);
Transform696 := TTransformNode.Create;
{ Empty Transform }
TouchSensor697 := TTouchSensorNode.Create;
TouchSensor697.Description := 'Joint vt11';
{ .AddChildren }
Transform696.AddChildren([TouchSensor697]);
Shape698 := Shape20;
{ .AddChild }
Transform696.AddChildren([Shape698]);
{ .AddChildren }
Transform695.AddChildren([Transform696]);
{ .AddChildren }
HAnimSegment694.AddChildren([Transform695]);
TouchSensor699 := TTouchSensorNode.Create;
TouchSensor699.Description := 'Segment t11';
{ .AddChildren }
HAnimSegment694.AddChildren([TouchSensor699]);
Shape700 := TShapeNode.Create;
Appearance701 := TAppearanceNode.Create;
Material702 := TMaterialNode.Create;
Material702.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance701.Material := Material702;
{ .SetAppearance }
Shape700.Appearance := Appearance701;
Extrusion703 := TExtrusionNode.Create;
Extrusion703.SetSpine([Vector3(0.0053,1.2679,-0.081),Vector3(0.0056,1.2848,-0.0822)]);
Extrusion703.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape700.Geometry := Extrusion703;
{ .AddChildren }
HAnimSegment694.AddChildren([Shape700]);
{ .AddChildren }
HAnimJoint693.AddChildren([HAnimSegment694]);
HAnimJoint704 := THAnimJointNode.Create;
HAnimJoint704.NameField := 'vt10';
HAnimJoint704.Center := Vector3(0.0056,1.2848,-0.0822);
HAnimSegment705 := THAnimSegmentNode.Create;
HAnimSegment705.NameField := 't10';
Transform706 := TTransformNode.Create;
Transform706.Translation := Vector3(0.0056,1.2848,-0.0822);
Transform707 := TTransformNode.Create;
{ Empty Transform }
TouchSensor708 := TTouchSensorNode.Create;
TouchSensor708.Description := 'Joint vt10';
{ .AddChildren }
Transform707.AddChildren([TouchSensor708]);
Shape709 := Shape20;
{ .AddChild }
Transform707.AddChildren([Shape709]);
{ .AddChildren }
Transform706.AddChildren([Transform707]);
{ .AddChildren }
HAnimSegment705.AddChildren([Transform706]);
TouchSensor710 := TTouchSensorNode.Create;
TouchSensor710.Description := 'Segment t10';
{ .AddChildren }
HAnimSegment705.AddChildren([TouchSensor710]);
Shape711 := TShapeNode.Create;
Appearance712 := TAppearanceNode.Create;
Material713 := TMaterialNode.Create;
Material713.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance712.Material := Material713;
{ .SetAppearance }
Shape711.Appearance := Appearance712;
Extrusion714 := TExtrusionNode.Create;
Extrusion714.SetSpine([Vector3(0.0056,1.2848,-0.0822),Vector3(0.0057,1.3126,-0.0838)]);
Extrusion714.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape711.Geometry := Extrusion714;
{ .AddChildren }
HAnimSegment705.AddChildren([Shape711]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimSegment705]);
HAnimJoint715 := THAnimJointNode.Create;
HAnimJoint715.NameField := 'vt9';
HAnimJoint715.Center := Vector3(0.0057,1.3126,-0.0838);
HAnimSegment716 := THAnimSegmentNode.Create;
HAnimSegment716.NameField := 't9';
Transform717 := TTransformNode.Create;
Transform717.Translation := Vector3(0.0057,1.3126,-0.0838);
Transform718 := TTransformNode.Create;
{ Empty Transform }
TouchSensor719 := TTouchSensorNode.Create;
TouchSensor719.Description := 'Joint vt9';
{ .AddChildren }
Transform718.AddChildren([TouchSensor719]);
Shape720 := Shape20;
{ .AddChild }
Transform718.AddChildren([Shape720]);
{ .AddChildren }
Transform717.AddChildren([Transform718]);
{ .AddChildren }
HAnimSegment716.AddChildren([Transform717]);
TouchSensor721 := TTouchSensorNode.Create;
TouchSensor721.Description := 'Segment t9';
{ .AddChildren }
HAnimSegment716.AddChildren([TouchSensor721]);
Shape722 := TShapeNode.Create;
Appearance723 := TAppearanceNode.Create;
Material724 := TMaterialNode.Create;
Material724.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance723.Material := Material724;
{ .SetAppearance }
Shape722.Appearance := Appearance723;
Extrusion725 := TExtrusionNode.Create;
Extrusion725.SetSpine([Vector3(0.0057,1.3126,-0.0838),Vector3(0.0057,1.3382,-0.0845)]);
Extrusion725.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape722.Geometry := Extrusion725;
{ .AddChildren }
HAnimSegment716.AddChildren([Shape722]);
{ .AddChildren }
HAnimJoint715.AddChildren([HAnimSegment716]);
HAnimJoint726 := THAnimJointNode.Create;
HAnimJoint726.NameField := 'vt8';
HAnimJoint726.Center := Vector3(0.0057,1.3382,-0.0845);
HAnimSegment727 := THAnimSegmentNode.Create;
HAnimSegment727.NameField := 't8';
Transform728 := TTransformNode.Create;
Transform728.Translation := Vector3(0.0057,1.3382,-0.0845);
Transform729 := TTransformNode.Create;
{ Empty Transform }
TouchSensor730 := TTouchSensorNode.Create;
TouchSensor730.Description := 'Joint vt8';
{ .AddChildren }
Transform729.AddChildren([TouchSensor730]);
Shape731 := Shape20;
{ .AddChild }
Transform729.AddChildren([Shape731]);
{ .AddChildren }
Transform728.AddChildren([Transform729]);
{ .AddChildren }
HAnimSegment727.AddChildren([Transform728]);
TouchSensor732 := TTouchSensorNode.Create;
TouchSensor732.Description := 'Segment t8';
{ .AddChildren }
HAnimSegment727.AddChildren([TouchSensor732]);
Shape733 := TShapeNode.Create;
Appearance734 := TAppearanceNode.Create;
Material735 := TMaterialNode.Create;
Material735.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance734.Material := Material735;
{ .SetAppearance }
Shape733.Appearance := Appearance734;
Extrusion736 := TExtrusionNode.Create;
Extrusion736.SetSpine([Vector3(0.0057,1.3382,-0.0845),Vector3(0.0058,1.3625,-0.0833)]);
Extrusion736.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape733.Geometry := Extrusion736;
{ .AddChildren }
HAnimSegment727.AddChildren([Shape733]);
{ .AddChildren }
HAnimJoint726.AddChildren([HAnimSegment727]);
HAnimJoint737 := THAnimJointNode.Create;
HAnimJoint737.NameField := 'vt7';
HAnimJoint737.Center := Vector3(0.0058,1.3625,-0.0833);
HAnimSegment738 := THAnimSegmentNode.Create;
HAnimSegment738.NameField := 't7';
Transform739 := TTransformNode.Create;
Transform739.Translation := Vector3(0.0058,1.3625,-0.0833);
Transform740 := TTransformNode.Create;
{ Empty Transform }
TouchSensor741 := TTouchSensorNode.Create;
TouchSensor741.Description := 'Joint vt7';
{ .AddChildren }
Transform740.AddChildren([TouchSensor741]);
Shape742 := Shape20;
{ .AddChild }
Transform740.AddChildren([Shape742]);
{ .AddChildren }
Transform739.AddChildren([Transform740]);
{ .AddChildren }
HAnimSegment738.AddChildren([Transform739]);
TouchSensor743 := TTouchSensorNode.Create;
TouchSensor743.Description := 'Segment t7';
{ .AddChildren }
HAnimSegment738.AddChildren([TouchSensor743]);
Shape744 := TShapeNode.Create;
Appearance745 := TAppearanceNode.Create;
Material746 := TMaterialNode.Create;
Material746.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance745.Material := Material746;
{ .SetAppearance }
Shape744.Appearance := Appearance745;
Extrusion747 := TExtrusionNode.Create;
Extrusion747.SetSpine([Vector3(0.0058,1.3625,-0.0833),Vector3(0.0059,1.3866,-0.08)]);
Extrusion747.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape744.Geometry := Extrusion747;
{ .AddChildren }
HAnimSegment738.AddChildren([Shape744]);
{ .AddChildren }
HAnimJoint737.AddChildren([HAnimSegment738]);
HAnimJoint748 := THAnimJointNode.Create;
HAnimJoint748.NameField := 'vt6';
HAnimJoint748.Center := Vector3(0.0059,1.3866,-0.08);
HAnimSegment749 := THAnimSegmentNode.Create;
HAnimSegment749.NameField := 't6';
Transform750 := TTransformNode.Create;
Transform750.Translation := Vector3(0.0059,1.3866,-0.08);
Transform751 := TTransformNode.Create;
{ Empty Transform }
TouchSensor752 := TTouchSensorNode.Create;
TouchSensor752.Description := 'Joint vt6';
{ .AddChildren }
Transform751.AddChildren([TouchSensor752]);
Shape753 := Shape20;
{ .AddChild }
Transform751.AddChildren([Shape753]);
{ .AddChildren }
Transform750.AddChildren([Transform751]);
{ .AddChildren }
HAnimSegment749.AddChildren([Transform750]);
TouchSensor754 := TTouchSensorNode.Create;
TouchSensor754.Description := 'Segment t6';
{ .AddChildren }
HAnimSegment749.AddChildren([TouchSensor754]);
Shape755 := TShapeNode.Create;
Appearance756 := TAppearanceNode.Create;
Material757 := TMaterialNode.Create;
Material757.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance756.Material := Material757;
{ .SetAppearance }
Shape755.Appearance := Appearance756;
Extrusion758 := TExtrusionNode.Create;
Extrusion758.SetSpine([Vector3(0.0059,1.3866,-0.08),Vector3(0.006,1.4102,-0.0745)]);
Extrusion758.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape755.Geometry := Extrusion758;
{ .AddChildren }
HAnimSegment749.AddChildren([Shape755]);
{ .AddChildren }
HAnimJoint748.AddChildren([HAnimSegment749]);
HAnimJoint759 := THAnimJointNode.Create;
HAnimJoint759.NameField := 'vt5';
HAnimJoint759.Center := Vector3(0.006,1.4102,-0.0745);
HAnimSegment760 := THAnimSegmentNode.Create;
HAnimSegment760.NameField := 't5';
Transform761 := TTransformNode.Create;
Transform761.Translation := Vector3(0.006,1.4102,-0.0745);
Transform762 := TTransformNode.Create;
{ Empty Transform }
TouchSensor763 := TTouchSensorNode.Create;
TouchSensor763.Description := 'Joint vt5';
{ .AddChildren }
Transform762.AddChildren([TouchSensor763]);
Shape764 := Shape20;
{ .AddChild }
Transform762.AddChildren([Shape764]);
{ .AddChildren }
Transform761.AddChildren([Transform762]);
{ .AddChildren }
HAnimSegment760.AddChildren([Transform761]);
TouchSensor765 := TTouchSensorNode.Create;
TouchSensor765.Description := 'Segment t5';
{ .AddChildren }
HAnimSegment760.AddChildren([TouchSensor765]);
Shape766 := TShapeNode.Create;
Appearance767 := TAppearanceNode.Create;
Material768 := TMaterialNode.Create;
Material768.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance767.Material := Material768;
{ .SetAppearance }
Shape766.Appearance := Appearance767;
Extrusion769 := TExtrusionNode.Create;
Extrusion769.SetSpine([Vector3(0.006,1.4102,-0.0745),Vector3(0.0061,1.432,-0.0675)]);
Extrusion769.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape766.Geometry := Extrusion769;
{ .AddChildren }
HAnimSegment760.AddChildren([Shape766]);
{ .AddChildren }
HAnimJoint759.AddChildren([HAnimSegment760]);
HAnimJoint770 := THAnimJointNode.Create;
HAnimJoint770.NameField := 'vt4';
HAnimJoint770.Center := Vector3(0.0061,1.432,-0.0675);
HAnimSegment771 := THAnimSegmentNode.Create;
HAnimSegment771.NameField := 't4';
Transform772 := TTransformNode.Create;
Transform772.Translation := Vector3(0.0061,1.432,-0.0675);
Transform773 := TTransformNode.Create;
{ Empty Transform }
TouchSensor774 := TTouchSensorNode.Create;
TouchSensor774.Description := 'Joint vt4';
{ .AddChildren }
Transform773.AddChildren([TouchSensor774]);
Shape775 := Shape20;
{ .AddChild }
Transform773.AddChildren([Shape775]);
{ .AddChildren }
Transform772.AddChildren([Transform773]);
{ .AddChildren }
HAnimSegment771.AddChildren([Transform772]);
TouchSensor776 := TTouchSensorNode.Create;
TouchSensor776.Description := 'Segment t4';
{ .AddChildren }
HAnimSegment771.AddChildren([TouchSensor776]);
Shape777 := TShapeNode.Create;
Appearance778 := TAppearanceNode.Create;
Material779 := TMaterialNode.Create;
Material779.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance778.Material := Material779;
{ .SetAppearance }
Shape777.Appearance := Appearance778;
Extrusion780 := TExtrusionNode.Create;
Extrusion780.SetSpine([Vector3(0.0061,1.432,-0.0675),Vector3(0.0062,1.4583,-0.057)]);
Extrusion780.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape777.Geometry := Extrusion780;
{ .AddChildren }
HAnimSegment771.AddChildren([Shape777]);
{ .AddChildren }
HAnimJoint770.AddChildren([HAnimSegment771]);
HAnimJoint781 := THAnimJointNode.Create;
HAnimJoint781.NameField := 'vt3';
HAnimJoint781.Center := Vector3(0.0062,1.4583,-0.057);
HAnimSegment782 := THAnimSegmentNode.Create;
HAnimSegment782.NameField := 't3';
Transform783 := TTransformNode.Create;
Transform783.Translation := Vector3(0.0062,1.4583,-0.057);
Transform784 := TTransformNode.Create;
{ Empty Transform }
TouchSensor785 := TTouchSensorNode.Create;
TouchSensor785.Description := 'Joint vt3';
{ .AddChildren }
Transform784.AddChildren([TouchSensor785]);
Shape786 := Shape20;
{ .AddChild }
Transform784.AddChildren([Shape786]);
{ .AddChildren }
Transform783.AddChildren([Transform784]);
{ .AddChildren }
HAnimSegment782.AddChildren([Transform783]);
TouchSensor787 := TTouchSensorNode.Create;
TouchSensor787.Description := 'Segment t3';
{ .AddChildren }
HAnimSegment782.AddChildren([TouchSensor787]);
Shape788 := TShapeNode.Create;
Appearance789 := TAppearanceNode.Create;
Material790 := TMaterialNode.Create;
Material790.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance789.Material := Material790;
{ .SetAppearance }
Shape788.Appearance := Appearance789;
Extrusion791 := TExtrusionNode.Create;
Extrusion791.SetSpine([Vector3(0.0062,1.4583,-0.057),Vector3(0.0063,1.4761,-0.0484)]);
Extrusion791.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape788.Geometry := Extrusion791;
{ .AddChildren }
HAnimSegment782.AddChildren([Shape788]);
{ .AddChildren }
HAnimJoint781.AddChildren([HAnimSegment782]);
HAnimJoint792 := THAnimJointNode.Create;
HAnimJoint792.NameField := 'vt2';
HAnimJoint792.Center := Vector3(0.0063,1.4761,-0.0484);
HAnimSegment793 := THAnimSegmentNode.Create;
HAnimSegment793.NameField := 't2';
Transform794 := TTransformNode.Create;
Transform794.Translation := Vector3(0.0063,1.4761,-0.0484);
Transform795 := TTransformNode.Create;
{ Empty Transform }
TouchSensor796 := TTouchSensorNode.Create;
TouchSensor796.Description := 'Joint vt2';
{ .AddChildren }
Transform795.AddChildren([TouchSensor796]);
Shape797 := Shape20;
{ .AddChild }
Transform795.AddChildren([Shape797]);
{ .AddChildren }
Transform794.AddChildren([Transform795]);
{ .AddChildren }
HAnimSegment793.AddChildren([Transform794]);
TouchSensor798 := TTouchSensorNode.Create;
TouchSensor798.Description := 'Segment t2';
{ .AddChildren }
HAnimSegment793.AddChildren([TouchSensor798]);
Shape799 := TShapeNode.Create;
Appearance800 := TAppearanceNode.Create;
Material801 := TMaterialNode.Create;
Material801.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance800.Material := Material801;
{ .SetAppearance }
Shape799.Appearance := Appearance800;
Extrusion802 := TExtrusionNode.Create;
Extrusion802.SetSpine([Vector3(0.0063,1.4761,-0.0484),Vector3(0.0065,1.4951,-0.0387)]);
Extrusion802.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape799.Geometry := Extrusion802;
{ .AddChildren }
HAnimSegment793.AddChildren([Shape799]);
{ .AddChildren }
HAnimJoint792.AddChildren([HAnimSegment793]);
HAnimJoint803 := THAnimJointNode.Create;
HAnimJoint803.NameField := 'vt1';
HAnimJoint803.Center := Vector3(0.0065,1.4951,-0.0387);
HAnimSegment804 := THAnimSegmentNode.Create;
HAnimSegment804.NameField := 't1';
Transform805 := TTransformNode.Create;
Transform805.Translation := Vector3(0.0065,1.4951,-0.0387);
Transform806 := TTransformNode.Create;
{ Empty Transform }
TouchSensor807 := TTouchSensorNode.Create;
TouchSensor807.Description := 'Joint vt1';
{ .AddChildren }
Transform806.AddChildren([TouchSensor807]);
Shape808 := Shape20;
{ .AddChild }
Transform806.AddChildren([Shape808]);
{ .AddChildren }
Transform805.AddChildren([Transform806]);
{ .AddChildren }
HAnimSegment804.AddChildren([Transform805]);
TouchSensor809 := TTouchSensorNode.Create;
TouchSensor809.Description := 'Segment t1';
{ .AddChildren }
HAnimSegment804.AddChildren([TouchSensor809]);
Shape810 := TShapeNode.Create;
Appearance811 := TAppearanceNode.Create;
Material812 := TMaterialNode.Create;
Material812.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance811.Material := Material812;
{ .SetAppearance }
Shape810.Appearance := Appearance811;
Extrusion813 := TExtrusionNode.Create;
Extrusion813.SetSpine([Vector3(0.0065,1.4951,-0.0387),Vector3(0.0066,1.5132,-0.0301)]);
Extrusion813.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape810.Geometry := Extrusion813;
{ .AddChildren }
HAnimSegment804.AddChildren([Shape810]);
TouchSensor814 := TTouchSensorNode.Create;
TouchSensor814.Description := 'Segment t1';
{ .AddChildren }
HAnimSegment804.AddChildren([TouchSensor814]);
Shape815 := TShapeNode.Create;
Appearance816 := TAppearanceNode.Create;
Material817 := TMaterialNode.Create;
Material817.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance816.Material := Material817;
{ .SetAppearance }
Shape815.Appearance := Appearance816;
Extrusion818 := TExtrusionNode.Create;
Extrusion818.SetSpine([Vector3(0.0065,1.4951,-0.0387),Vector3(0.082,1.4488,-0.0353)]);
Extrusion818.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape815.Geometry := Extrusion818;
{ .AddChildren }
HAnimSegment804.AddChildren([Shape815]);
TouchSensor819 := TTouchSensorNode.Create;
TouchSensor819.Description := 'Segment t1';
{ .AddChildren }
HAnimSegment804.AddChildren([TouchSensor819]);
Shape820 := TShapeNode.Create;
Appearance821 := TAppearanceNode.Create;
Material822 := TMaterialNode.Create;
Material822.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance821.Material := Material822;
{ .SetAppearance }
Shape820.Appearance := Appearance821;
Extrusion823 := TExtrusionNode.Create;
Extrusion823.SetSpine([Vector3(0.0065,1.4951,-0.0387),Vector3(-0.0694,1.46,-0.033)]);
Extrusion823.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape820.Geometry := Extrusion823;
{ .AddChildren }
HAnimSegment804.AddChildren([Shape820]);
{ .AddChildren }
HAnimJoint803.AddChildren([HAnimSegment804]);
HAnimJoint824 := THAnimJointNode.Create;
HAnimJoint824.NameField := 'vc7';
HAnimJoint824.Center := Vector3(0.0066,1.5132,-0.0301);
HAnimSegment825 := THAnimSegmentNode.Create;
HAnimSegment825.NameField := 'c7';
Transform826 := TTransformNode.Create;
Transform826.Translation := Vector3(0.0066,1.5132,-0.0301);
Transform827 := TTransformNode.Create;
{ Empty Transform }
TouchSensor828 := TTouchSensorNode.Create;
TouchSensor828.Description := 'Joint vc7';
{ .AddChildren }
Transform827.AddChildren([TouchSensor828]);
Shape829 := Shape20;
{ .AddChild }
Transform827.AddChildren([Shape829]);
{ .AddChildren }
Transform826.AddChildren([Transform827]);
{ .AddChildren }
HAnimSegment825.AddChildren([Transform826]);
TouchSensor830 := TTouchSensorNode.Create;
TouchSensor830.Description := 'Segment c7';
{ .AddChildren }
HAnimSegment825.AddChildren([TouchSensor830]);
Shape831 := TShapeNode.Create;
Appearance832 := TAppearanceNode.Create;
Material833 := TMaterialNode.Create;
Material833.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance832.Material := Material833;
{ .SetAppearance }
Shape831.Appearance := Appearance832;
Extrusion834 := TExtrusionNode.Create;
Extrusion834.SetSpine([Vector3(0.0066,1.5132,-0.0301),Vector3(0.0066,1.5357,-0.0143)]);
Extrusion834.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape831.Geometry := Extrusion834;
{ .AddChildren }
HAnimSegment825.AddChildren([Shape831]);
{ .AddChildren }
HAnimJoint824.AddChildren([HAnimSegment825]);
HAnimJoint835 := THAnimJointNode.Create;
HAnimJoint835.NameField := 'vc6';
HAnimJoint835.Center := Vector3(0.0066,1.5357,-0.0143);
HAnimSegment836 := THAnimSegmentNode.Create;
HAnimSegment836.NameField := 'c6';
Transform837 := TTransformNode.Create;
Transform837.Translation := Vector3(0.0066,1.5357,-0.0143);
Transform838 := TTransformNode.Create;
{ Empty Transform }
TouchSensor839 := TTouchSensorNode.Create;
TouchSensor839.Description := 'Joint vc6';
{ .AddChildren }
Transform838.AddChildren([TouchSensor839]);
Shape840 := Shape20;
{ .AddChild }
Transform838.AddChildren([Shape840]);
{ .AddChildren }
Transform837.AddChildren([Transform838]);
{ .AddChildren }
HAnimSegment836.AddChildren([Transform837]);
TouchSensor841 := TTouchSensorNode.Create;
TouchSensor841.Description := 'Segment c6';
{ .AddChildren }
HAnimSegment836.AddChildren([TouchSensor841]);
Shape842 := TShapeNode.Create;
Appearance843 := TAppearanceNode.Create;
Material844 := TMaterialNode.Create;
Material844.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance843.Material := Material844;
{ .SetAppearance }
Shape842.Appearance := Appearance843;
Extrusion845 := TExtrusionNode.Create;
Extrusion845.SetSpine([Vector3(0.0066,1.5357,-0.0143),Vector3(0.0066,1.552,-0.0082)]);
Extrusion845.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape842.Geometry := Extrusion845;
{ .AddChildren }
HAnimSegment836.AddChildren([Shape842]);
{ .AddChildren }
HAnimJoint835.AddChildren([HAnimSegment836]);
HAnimJoint846 := THAnimJointNode.Create;
HAnimJoint846.NameField := 'vc5';
HAnimJoint846.Center := Vector3(0.0066,1.552,-0.0082);
HAnimSegment847 := THAnimSegmentNode.Create;
HAnimSegment847.NameField := 'c5';
Transform848 := TTransformNode.Create;
Transform848.Translation := Vector3(0.0066,1.552,-0.0082);
Transform849 := TTransformNode.Create;
{ Empty Transform }
TouchSensor850 := TTouchSensorNode.Create;
TouchSensor850.Description := 'Joint vc5';
{ .AddChildren }
Transform849.AddChildren([TouchSensor850]);
Shape851 := Shape20;
{ .AddChild }
Transform849.AddChildren([Shape851]);
{ .AddChildren }
Transform848.AddChildren([Transform849]);
{ .AddChildren }
HAnimSegment847.AddChildren([Transform848]);
TouchSensor852 := TTouchSensorNode.Create;
TouchSensor852.Description := 'Segment c5';
{ .AddChildren }
HAnimSegment847.AddChildren([TouchSensor852]);
Shape853 := TShapeNode.Create;
Appearance854 := TAppearanceNode.Create;
Material855 := TMaterialNode.Create;
Material855.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance854.Material := Material855;
{ .SetAppearance }
Shape853.Appearance := Appearance854;
Extrusion856 := TExtrusionNode.Create;
Extrusion856.SetSpine([Vector3(0.0066,1.552,-0.0082),Vector3(0.0066,1.5662,-0.0084)]);
Extrusion856.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape853.Geometry := Extrusion856;
{ .AddChildren }
HAnimSegment847.AddChildren([Shape853]);
{ .AddChildren }
HAnimJoint846.AddChildren([HAnimSegment847]);
HAnimJoint857 := THAnimJointNode.Create;
HAnimJoint857.NameField := 'vc4';
HAnimJoint857.Center := Vector3(0.0066,1.5662,-0.0084);
HAnimSegment858 := THAnimSegmentNode.Create;
HAnimSegment858.NameField := 'c4';
Transform859 := TTransformNode.Create;
Transform859.Translation := Vector3(0.0066,1.5662,-0.0084);
Transform860 := TTransformNode.Create;
{ Empty Transform }
TouchSensor861 := TTouchSensorNode.Create;
TouchSensor861.Description := 'Joint vc4';
{ .AddChildren }
Transform860.AddChildren([TouchSensor861]);
Shape862 := Shape20;
{ .AddChild }
Transform860.AddChildren([Shape862]);
{ .AddChildren }
Transform859.AddChildren([Transform860]);
{ .AddChildren }
HAnimSegment858.AddChildren([Transform859]);
TouchSensor863 := TTouchSensorNode.Create;
TouchSensor863.Description := 'Segment c4';
{ .AddChildren }
HAnimSegment858.AddChildren([TouchSensor863]);
Shape864 := TShapeNode.Create;
Appearance865 := TAppearanceNode.Create;
Material866 := TMaterialNode.Create;
Material866.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance865.Material := Material866;
{ .SetAppearance }
Shape864.Appearance := Appearance865;
Extrusion867 := TExtrusionNode.Create;
Extrusion867.SetSpine([Vector3(0.0066,1.5662,-0.0084),Vector3(0.0066,1.58,-0.0103)]);
Extrusion867.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape864.Geometry := Extrusion867;
{ .AddChildren }
HAnimSegment858.AddChildren([Shape864]);
{ .AddChildren }
HAnimJoint857.AddChildren([HAnimSegment858]);
HAnimJoint868 := THAnimJointNode.Create;
HAnimJoint868.NameField := 'vc3';
HAnimJoint868.Center := Vector3(0.0066,1.58,-0.0103);
HAnimSegment869 := THAnimSegmentNode.Create;
HAnimSegment869.NameField := 'c3';
Transform870 := TTransformNode.Create;
Transform870.Translation := Vector3(0.0066,1.58,-0.0103);
Transform871 := TTransformNode.Create;
{ Empty Transform }
TouchSensor872 := TTouchSensorNode.Create;
TouchSensor872.Description := 'Joint vc3';
{ .AddChildren }
Transform871.AddChildren([TouchSensor872]);
Shape873 := Shape20;
{ .AddChild }
Transform871.AddChildren([Shape873]);
{ .AddChildren }
Transform870.AddChildren([Transform871]);
{ .AddChildren }
HAnimSegment869.AddChildren([Transform870]);
TouchSensor874 := TTouchSensorNode.Create;
TouchSensor874.Description := 'Segment c3';
{ .AddChildren }
HAnimSegment869.AddChildren([TouchSensor874]);
Shape875 := TShapeNode.Create;
Appearance876 := TAppearanceNode.Create;
Material877 := TMaterialNode.Create;
Material877.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance876.Material := Material877;
{ .SetAppearance }
Shape875.Appearance := Appearance876;
Extrusion878 := TExtrusionNode.Create;
Extrusion878.SetSpine([Vector3(0.0066,1.58,-0.0103),Vector3(0.0066,1.5928,-0.0103)]);
Extrusion878.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape875.Geometry := Extrusion878;
{ .AddChildren }
HAnimSegment869.AddChildren([Shape875]);
{ .AddChildren }
HAnimJoint868.AddChildren([HAnimSegment869]);
HAnimJoint879 := THAnimJointNode.Create;
HAnimJoint879.NameField := 'vc2';
HAnimJoint879.Center := Vector3(0.0066,1.5928,-0.0103);
HAnimSegment880 := THAnimSegmentNode.Create;
HAnimSegment880.NameField := 'c2';
Transform881 := TTransformNode.Create;
Transform881.Translation := Vector3(0.0066,1.5928,-0.0103);
Transform882 := TTransformNode.Create;
{ Empty Transform }
TouchSensor883 := TTouchSensorNode.Create;
TouchSensor883.Description := 'Joint vc2';
{ .AddChildren }
Transform882.AddChildren([TouchSensor883]);
Shape884 := Shape20;
{ .AddChild }
Transform882.AddChildren([Shape884]);
{ .AddChildren }
Transform881.AddChildren([Transform882]);
{ .AddChildren }
HAnimSegment880.AddChildren([Transform881]);
TouchSensor885 := TTouchSensorNode.Create;
TouchSensor885.Description := 'Segment c2';
{ .AddChildren }
HAnimSegment880.AddChildren([TouchSensor885]);
Shape886 := TShapeNode.Create;
Appearance887 := TAppearanceNode.Create;
Material888 := TMaterialNode.Create;
Material888.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance887.Material := Material888;
{ .SetAppearance }
Shape886.Appearance := Appearance887;
Extrusion889 := TExtrusionNode.Create;
Extrusion889.SetSpine([Vector3(0.0066,1.5928,-0.0103),Vector3(0.0066,1.6144,-0.0034)]);
Extrusion889.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape886.Geometry := Extrusion889;
{ .AddChildren }
HAnimSegment880.AddChildren([Shape886]);
{ .AddChildren }
HAnimJoint879.AddChildren([HAnimSegment880]);
HAnimJoint890 := THAnimJointNode.Create;
HAnimJoint890.NameField := 'vc1';
HAnimJoint890.Center := Vector3(0.0066,1.6144,-0.0034);
HAnimSegment891 := THAnimSegmentNode.Create;
HAnimSegment891.NameField := 'c1';
Transform892 := TTransformNode.Create;
Transform892.Translation := Vector3(0.0066,1.6144,-0.0034);
Transform893 := TTransformNode.Create;
{ Empty Transform }
TouchSensor894 := TTouchSensorNode.Create;
TouchSensor894.Description := 'Joint vc1';
{ .AddChildren }
Transform893.AddChildren([TouchSensor894]);
Shape895 := Shape20;
{ .AddChild }
Transform893.AddChildren([Shape895]);
{ .AddChildren }
Transform892.AddChildren([Transform893]);
{ .AddChildren }
HAnimSegment891.AddChildren([Transform892]);
TouchSensor896 := TTouchSensorNode.Create;
TouchSensor896.Description := 'Segment c1';
{ .AddChildren }
HAnimSegment891.AddChildren([TouchSensor896]);
Shape897 := TShapeNode.Create;
Appearance898 := TAppearanceNode.Create;
Material899 := TMaterialNode.Create;
Material899.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance898.Material := Material899;
{ .SetAppearance }
Shape897.Appearance := Appearance898;
Extrusion900 := TExtrusionNode.Create;
Extrusion900.SetSpine([Vector3(0.0066,1.6144,-0.0034),Vector3(0.0044,1.6209,0.0236)]);
Extrusion900.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape897.Geometry := Extrusion900;
{ .AddChildren }
HAnimSegment891.AddChildren([Shape897]);
{ .AddChildren }
HAnimJoint890.AddChildren([HAnimSegment891]);
HAnimJoint901 := THAnimJointNode.Create;
HAnimJoint901.NameField := 'skullbase';
HAnimJoint901.Center := Vector3(0.0044,1.6209,0.0236);
HAnimSegment902 := THAnimSegmentNode.Create;
HAnimSegment902.NameField := 'skull';
Transform903 := TTransformNode.Create;
Transform903.Translation := Vector3(0.0044,1.6209,0.0236);
Transform904 := TTransformNode.Create;
{ Empty Transform }
TouchSensor905 := TTouchSensorNode.Create;
TouchSensor905.Description := 'Joint skullbase';
{ .AddChildren }
Transform904.AddChildren([TouchSensor905]);
Shape906 := Shape20;
{ .AddChild }
Transform904.AddChildren([Shape906]);
{ .AddChildren }
Transform903.AddChildren([Transform904]);
{ .AddChildren }
HAnimSegment902.AddChildren([Transform903]);
TouchSensor907 := TTouchSensorNode.Create;
TouchSensor907.Description := 'Segment skull';
{ .AddChildren }
HAnimSegment902.AddChildren([TouchSensor907]);
Shape908 := TShapeNode.Create;
Appearance909 := TAppearanceNode.Create;
Material910 := TMaterialNode.Create;
Material910.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance909.Material := Material910;
{ .SetAppearance }
Shape908.Appearance := Appearance909;
Extrusion911 := TExtrusionNode.Create;
Extrusion911.SetSpine([Vector3(0.0044,1.6209,0.0236),Vector3(0.0503,1.4157,-0.0689)]);
Extrusion911.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape908.Geometry := Extrusion911;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape908]);
TouchSensor912 := TTouchSensorNode.Create;
TouchSensor912.Description := 'Segment skull';
{ .AddChildren }
HAnimSegment902.AddChildren([TouchSensor912]);
Shape913 := TShapeNode.Create;
Appearance914 := TAppearanceNode.Create;
Material915 := TMaterialNode.Create;
Material915.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance914.Material := Material915;
{ .SetAppearance }
Shape913.Appearance := Appearance914;
Extrusion916 := TExtrusionNode.Create;
Extrusion916.SetSpine([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0507,1.4157,-0.0689)]);
Extrusion916.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape913.Geometry := Extrusion916;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape913]);
TouchSensor917 := TTouchSensorNode.Create;
TouchSensor917.Description := 'Segment skull';
{ .AddChildren }
HAnimSegment902.AddChildren([TouchSensor917]);
Shape918 := TShapeNode.Create;
Appearance919 := TAppearanceNode.Create;
Material920 := TMaterialNode.Create;
Material920.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance919.Material := Material920;
{ .SetAppearance }
Shape918.Appearance := Appearance919;
Extrusion921 := TExtrusionNode.Create;
Extrusion921.SetSpine([Vector3(0.0044,1.6209,0.0236),Vector3(0.0479,1.3963,-0.0188)]);
Extrusion921.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape918.Geometry := Extrusion921;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape918]);
TouchSensor922 := TTouchSensorNode.Create;
TouchSensor922.Description := 'Segment skull';
{ .AddChildren }
HAnimSegment902.AddChildren([TouchSensor922]);
Shape923 := TShapeNode.Create;
Appearance924 := TAppearanceNode.Create;
Material925 := TMaterialNode.Create;
Material925.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance924.Material := Material925;
{ .SetAppearance }
Shape923.Appearance := Appearance924;
Extrusion926 := TExtrusionNode.Create;
Extrusion926.SetSpine([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0483,1.3963,-0.0188)]);
Extrusion926.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape923.Geometry := Extrusion926;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape923]);
TouchSensor927 := TTouchSensorNode.Create;
TouchSensor927.Description := 'Segment skull';
{ .AddChildren }
HAnimSegment902.AddChildren([TouchSensor927]);
Shape928 := TShapeNode.Create;
Appearance929 := TAppearanceNode.Create;
Material930 := TMaterialNode.Create;
Material930.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance929.Material := Material930;
{ .SetAppearance }
Shape928.Appearance := Appearance929;
Extrusion931 := TExtrusionNode.Create;
Extrusion931.SetSpine([Vector3(0.0044,1.6209,0.0236),Vector3(0.0216,1.4053,0.0051)]);
Extrusion931.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape928.Geometry := Extrusion931;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape928]);
TouchSensor932 := TTouchSensorNode.Create;
TouchSensor932.Description := 'Segment skull';
{ .AddChildren }
HAnimSegment902.AddChildren([TouchSensor932]);
Shape933 := TShapeNode.Create;
Appearance934 := TAppearanceNode.Create;
Material935 := TMaterialNode.Create;
Material935.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance934.Material := Material935;
{ .SetAppearance }
Shape933.Appearance := Appearance934;
Extrusion936 := TExtrusionNode.Create;
Extrusion936.SetSpine([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0219,1.4053,0.0051)]);
Extrusion936.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape933.Geometry := Extrusion936;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape933]);
TouchSensor937 := TTouchSensorNode.Create;
TouchSensor937.Description := 'Segment skull';
{ .AddChildren }
HAnimSegment902.AddChildren([TouchSensor937]);
Shape938 := TShapeNode.Create;
Appearance939 := TAppearanceNode.Create;
Material940 := TMaterialNode.Create;
Material940.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance939.Material := Material940;
{ .SetAppearance }
Shape938.Appearance := Appearance939;
Extrusion941 := TExtrusionNode.Create;
Extrusion941.SetSpine([Vector3(0.0044,1.6209,0.0236),Vector3(-0.0002,1.3043,-0.0865)]);
Extrusion941.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape938.Geometry := Extrusion941;
{ .AddChildren }
HAnimSegment902.AddChildren([Shape938]);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimSegment902]);
HAnimJoint942 := THAnimJointNode.Create;
HAnimJoint942.NameField := 'l_eyelid_joint';
HAnimJoint942.Center := Vector3(0.0503,1.4157,-0.0689);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint942]);
HAnimJoint943 := THAnimJointNode.Create;
HAnimJoint943.NameField := 'r_eyelid_joint';
HAnimJoint943.Center := Vector3(-0.0507,1.4157,-0.0689);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint943]);
HAnimJoint944 := THAnimJointNode.Create;
HAnimJoint944.NameField := 'l_eyeball_joint';
HAnimJoint944.Center := Vector3(0.0479,1.3963,-0.0188);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint944]);
HAnimJoint945 := THAnimJointNode.Create;
HAnimJoint945.NameField := 'r_eyeball_joint';
HAnimJoint945.Center := Vector3(-0.0483,1.3963,-0.0188);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint945]);
HAnimJoint946 := THAnimJointNode.Create;
HAnimJoint946.NameField := 'l_eyebrow_joint';
HAnimJoint946.Center := Vector3(0.0216,1.4053,0.0051);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint946]);
HAnimJoint947 := THAnimJointNode.Create;
HAnimJoint947.NameField := 'r_eyebrow_joint';
HAnimJoint947.Center := Vector3(-0.0219,1.4053,0.0051);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint947]);
HAnimJoint948 := THAnimJointNode.Create;
HAnimJoint948.NameField := 'temporomandibular';
HAnimJoint948.Center := Vector3(-0.0002,1.3043,-0.0865);
{ .AddChildren }
HAnimJoint901.AddChildren([HAnimJoint948]);
{ .AddChildren }
HAnimJoint890.AddChildren([HAnimJoint901]);
{ .AddChildren }
HAnimJoint879.AddChildren([HAnimJoint890]);
{ .AddChildren }
HAnimJoint868.AddChildren([HAnimJoint879]);
{ .AddChildren }
HAnimJoint857.AddChildren([HAnimJoint868]);
{ .AddChildren }
HAnimJoint846.AddChildren([HAnimJoint857]);
{ .AddChildren }
HAnimJoint835.AddChildren([HAnimJoint846]);
{ .AddChildren }
HAnimJoint824.AddChildren([HAnimJoint835]);
{ .AddChildren }
HAnimJoint803.AddChildren([HAnimJoint824]);
HAnimJoint949 := THAnimJointNode.Create;
HAnimJoint949.NameField := 'l_sternoclavicular';
HAnimJoint949.Center := Vector3(0.082,1.4488,-0.0353);
HAnimSegment950 := THAnimSegmentNode.Create;
HAnimSegment950.NameField := 'l_clavicle';
Transform951 := TTransformNode.Create;
Transform951.Translation := Vector3(0.082,1.4488,-0.0353);
Transform952 := TTransformNode.Create;
{ Empty Transform }
TouchSensor953 := TTouchSensorNode.Create;
TouchSensor953.Description := 'Joint l_sternoclavicular';
{ .AddChildren }
Transform952.AddChildren([TouchSensor953]);
Shape954 := Shape20;
{ .AddChild }
Transform952.AddChildren([Shape954]);
{ .AddChildren }
Transform951.AddChildren([Transform952]);
{ .AddChildren }
HAnimSegment950.AddChildren([Transform951]);
TouchSensor955 := TTouchSensorNode.Create;
TouchSensor955.Description := 'Segment l_clavicle';
{ .AddChildren }
HAnimSegment950.AddChildren([TouchSensor955]);
Shape956 := TShapeNode.Create;
Appearance957 := TAppearanceNode.Create;
Material958 := TMaterialNode.Create;
Material958.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance957.Material := Material958;
{ .SetAppearance }
Shape956.Appearance := Appearance957;
Extrusion959 := TExtrusionNode.Create;
Extrusion959.SetSpine([Vector3(0.082,1.4488,-0.0353),Vector3(0.0962,1.4269,-0.0424)]);
Extrusion959.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape956.Geometry := Extrusion959;
{ .AddChildren }
HAnimSegment950.AddChildren([Shape956]);
{ .AddChildren }
HAnimJoint949.AddChildren([HAnimSegment950]);
HAnimJoint960 := THAnimJointNode.Create;
HAnimJoint960.NameField := 'l_acromioclavicular';
HAnimJoint960.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimSegment961 := THAnimSegmentNode.Create;
HAnimSegment961.NameField := 'l_scapula';
Transform962 := TTransformNode.Create;
Transform962.Translation := Vector3(0.0962,1.4269,-0.0424);
Transform963 := TTransformNode.Create;
{ Empty Transform }
TouchSensor964 := TTouchSensorNode.Create;
TouchSensor964.Description := 'Joint l_acromioclavicular';
{ .AddChildren }
Transform963.AddChildren([TouchSensor964]);
Shape965 := Shape20;
{ .AddChild }
Transform963.AddChildren([Shape965]);
{ .AddChildren }
Transform962.AddChildren([Transform963]);
{ .AddChildren }
HAnimSegment961.AddChildren([Transform962]);
TouchSensor966 := TTouchSensorNode.Create;
TouchSensor966.Description := 'Segment l_scapula';
{ .AddChildren }
HAnimSegment961.AddChildren([TouchSensor966]);
Shape967 := TShapeNode.Create;
Appearance968 := TAppearanceNode.Create;
Material969 := TMaterialNode.Create;
Material969.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance968.Material := Material969;
{ .SetAppearance }
Shape967.Appearance := Appearance968;
Extrusion970 := TExtrusionNode.Create;
Extrusion970.SetSpine([Vector3(0.0962,1.4269,-0.0424),Vector3(0.2029,1.4376,-0.0387)]);
Extrusion970.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape967.Geometry := Extrusion970;
{ .AddChildren }
HAnimSegment961.AddChildren([Shape967]);
{ .AddChildren }
HAnimJoint960.AddChildren([HAnimSegment961]);
HAnimJoint971 := THAnimJointNode.Create;
HAnimJoint971.NameField := 'l_shoulder';
HAnimJoint971.Center := Vector3(0.2029,1.4376,-0.0387);
HAnimSegment972 := THAnimSegmentNode.Create;
HAnimSegment972.NameField := 'l_upperarm';
Transform973 := TTransformNode.Create;
Transform973.Translation := Vector3(0.2029,1.4376,-0.0387);
Transform974 := TTransformNode.Create;
{ Empty Transform }
TouchSensor975 := TTouchSensorNode.Create;
TouchSensor975.Description := 'Joint l_shoulder';
{ .AddChildren }
Transform974.AddChildren([TouchSensor975]);
Shape976 := Shape20;
{ .AddChild }
Transform974.AddChildren([Shape976]);
{ .AddChildren }
Transform973.AddChildren([Transform974]);
{ .AddChildren }
HAnimSegment972.AddChildren([Transform973]);
TouchSensor977 := TTouchSensorNode.Create;
TouchSensor977.Description := 'Segment l_upperarm';
{ .AddChildren }
HAnimSegment972.AddChildren([TouchSensor977]);
Shape978 := TShapeNode.Create;
Appearance979 := TAppearanceNode.Create;
Material980 := TMaterialNode.Create;
Material980.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance979.Material := Material980;
{ .SetAppearance }
Shape978.Appearance := Appearance979;
Extrusion981 := TExtrusionNode.Create;
Extrusion981.SetSpine([Vector3(0.2029,1.4376,-0.0387),Vector3(0.2014,1.1357,-0.0682)]);
Extrusion981.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape978.Geometry := Extrusion981;
{ .AddChildren }
HAnimSegment972.AddChildren([Shape978]);
{ .AddChildren }
HAnimJoint971.AddChildren([HAnimSegment972]);
HAnimJoint982 := THAnimJointNode.Create;
HAnimJoint982.NameField := 'l_elbow';
HAnimJoint982.Center := Vector3(0.2014,1.1357,-0.0682);
HAnimSegment983 := THAnimSegmentNode.Create;
HAnimSegment983.NameField := 'l_forearm';
Transform984 := TTransformNode.Create;
Transform984.Translation := Vector3(0.2014,1.1357,-0.0682);
Transform985 := TTransformNode.Create;
{ Empty Transform }
TouchSensor986 := TTouchSensorNode.Create;
TouchSensor986.Description := 'Joint l_elbow';
{ .AddChildren }
Transform985.AddChildren([TouchSensor986]);
Shape987 := Shape20;
{ .AddChild }
Transform985.AddChildren([Shape987]);
{ .AddChildren }
Transform984.AddChildren([Transform985]);
{ .AddChildren }
HAnimSegment983.AddChildren([Transform984]);
TouchSensor988 := TTouchSensorNode.Create;
TouchSensor988.Description := 'Segment l_forearm';
{ .AddChildren }
HAnimSegment983.AddChildren([TouchSensor988]);
Shape989 := TShapeNode.Create;
Appearance990 := TAppearanceNode.Create;
Material991 := TMaterialNode.Create;
Material991.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance990.Material := Material991;
{ .SetAppearance }
Shape989.Appearance := Appearance990;
Extrusion992 := TExtrusionNode.Create;
Extrusion992.SetSpine([Vector3(0.2014,1.1357,-0.0682),Vector3(0.1984,0.8663,-0.0583)]);
Extrusion992.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape989.Geometry := Extrusion992;
{ .AddChildren }
HAnimSegment983.AddChildren([Shape989]);
{ .AddChildren }
HAnimJoint982.AddChildren([HAnimSegment983]);
HAnimJoint993 := THAnimJointNode.Create;
HAnimJoint993.NameField := 'l_radiocarpal';
HAnimJoint993.Center := Vector3(0.1984,0.8663,-0.0583);
HAnimSegment994 := THAnimSegmentNode.Create;
HAnimSegment994.NameField := 'l_carpal';
Transform995 := TTransformNode.Create;
Transform995.Scale := Vector3(0.2,0.2,0.2);
Transform995.Translation := Vector3(0.2,0.85,-0.05);
Transform995.Rotation := Vector4(0,0,1,-3.14);
{ Transform left hand }
Transform996 := TTransformNode.Create;
Transform996.Rotation := Vector4(0,1,0,-1.57);
{ Transform left hand }
TouchSensor997 := TTouchSensorNode.Create;
TouchSensor997.Description := 'Joint l_radiocarpal';
{ .AddChildren }
Transform996.AddChildren([TouchSensor997]);
Shape998 := Shape20;
{ .AddChild }
Transform996.AddChildren([Shape998]);
{ .AddChildren }
Transform995.AddChildren([Transform996]);
{ .AddChildren }
HAnimSegment994.AddChildren([Transform995]);
TouchSensor999 := TTouchSensorNode.Create;
TouchSensor999.Description := 'Segment l_carpal';
{ .AddChildren }
HAnimSegment994.AddChildren([TouchSensor999]);
Shape1000 := TShapeNode.Create;
Appearance1001 := TAppearanceNode.Create;
Material1002 := TMaterialNode.Create;
Material1002.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1001.Material := Material1002;
{ .SetAppearance }
Shape1000.Appearance := Appearance1001;
Extrusion1003 := TExtrusionNode.Create;
Extrusion1003.SetSpine([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1811,0.6975,-0.0826)]);
Extrusion1003.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1000.Geometry := Extrusion1003;
{ .AddChildren }
HAnimSegment994.AddChildren([Shape1000]);
TouchSensor1004 := TTouchSensorNode.Create;
TouchSensor1004.Description := 'Segment l_carpal';
{ .AddChildren }
HAnimSegment994.AddChildren([TouchSensor1004]);
Shape1005 := TShapeNode.Create;
Appearance1006 := TAppearanceNode.Create;
Material1007 := TMaterialNode.Create;
Material1007.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1006.Material := Material1007;
{ .SetAppearance }
Shape1005.Appearance := Appearance1006;
Extrusion1008 := TExtrusionNode.Create;
Extrusion1008.SetSpine([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1811,0.6984,-0.0935)]);
Extrusion1008.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1005.Geometry := Extrusion1008;
{ .AddChildren }
HAnimSegment994.AddChildren([Shape1005]);
TouchSensor1009 := TTouchSensorNode.Create;
TouchSensor1009.Description := 'Segment l_carpal';
{ .AddChildren }
HAnimSegment994.AddChildren([TouchSensor1009]);
Shape1010 := TShapeNode.Create;
Appearance1011 := TAppearanceNode.Create;
Material1012 := TMaterialNode.Create;
Material1012.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1011.Material := Material1012;
{ .SetAppearance }
Shape1010.Appearance := Appearance1011;
Extrusion1013 := TExtrusionNode.Create;
Extrusion1013.SetSpine([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1809,0.7,-0.1067)]);
Extrusion1013.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1010.Geometry := Extrusion1013;
{ .AddChildren }
HAnimSegment994.AddChildren([Shape1010]);
TouchSensor1014 := TTouchSensorNode.Create;
TouchSensor1014.Description := 'Segment l_carpal';
{ .AddChildren }
HAnimSegment994.AddChildren([TouchSensor1014]);
Shape1015 := TShapeNode.Create;
Appearance1016 := TAppearanceNode.Create;
Material1017 := TMaterialNode.Create;
Material1017.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1016.Material := Material1017;
{ .SetAppearance }
Shape1015.Appearance := Appearance1016;
Extrusion1018 := TExtrusionNode.Create;
Extrusion1018.SetSpine([Vector3(0.1984,0.8663,-0.0583),Vector3(0.1809,0.6973,-0.1276)]);
Extrusion1018.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1015.Geometry := Extrusion1018;
{ .AddChildren }
HAnimSegment994.AddChildren([Shape1015]);
{ .AddChildren }
HAnimJoint993.AddChildren([HAnimSegment994]);
HAnimJoint1019 := THAnimJointNode.Create;
HAnimJoint1019.NameField := 'l_midcarpal_1';
HAnimJoint1019.Center := Vector3(0.1811,0.6975,-0.0826);
HAnimSegment1020 := THAnimSegmentNode.Create;
HAnimSegment1020.NameField := 'l_trapezium';
Transform1021 := TTransformNode.Create;
Transform1021.Translation := Vector3(0.1811,0.6975,-0.0826);
Transform1022 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1023 := TTouchSensorNode.Create;
TouchSensor1023.Description := 'Joint l_midcarpal_1';
{ .AddChildren }
Transform1022.AddChildren([TouchSensor1023]);
Shape1024 := Shape20;
{ .AddChild }
Transform1022.AddChildren([Shape1024]);
{ .AddChildren }
Transform1021.AddChildren([Transform1022]);
{ .AddChildren }
HAnimSegment1020.AddChildren([Transform1021]);
TouchSensor1025 := TTouchSensorNode.Create;
TouchSensor1025.Description := 'Segment l_trapezium';
{ .AddChildren }
HAnimSegment1020.AddChildren([TouchSensor1025]);
Shape1026 := TShapeNode.Create;
Appearance1027 := TAppearanceNode.Create;
Material1028 := TMaterialNode.Create;
Material1028.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1027.Material := Material1028;
{ .SetAppearance }
Shape1026.Appearance := Appearance1027;
Extrusion1029 := TExtrusionNode.Create;
Extrusion1029.SetSpine([Vector3(0.1811,0.6975,-0.0826),Vector3(0.1924,0.8472,-0.0534)]);
Extrusion1029.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1026.Geometry := Extrusion1029;
{ .AddChildren }
HAnimSegment1020.AddChildren([Shape1026]);
{ .AddChildren }
HAnimJoint1019.AddChildren([HAnimSegment1020]);
HAnimJoint1030 := THAnimJointNode.Create;
HAnimJoint1030.NameField := 'l_carpometacarpal_1';
HAnimJoint1030.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimSegment1031 := THAnimSegmentNode.Create;
HAnimSegment1031.NameField := 'l_metacarpal_1';
Transform1032 := TTransformNode.Create;
Transform1032.Translation := Vector3(0.1924,0.8472,-0.0534);
Transform1033 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1034 := TTouchSensorNode.Create;
TouchSensor1034.Description := 'Joint l_carpometacarpal_1';
{ .AddChildren }
Transform1033.AddChildren([TouchSensor1034]);
Shape1035 := Shape20;
{ .AddChild }
Transform1033.AddChildren([Shape1035]);
{ .AddChildren }
Transform1032.AddChildren([Transform1033]);
{ .AddChildren }
HAnimSegment1031.AddChildren([Transform1032]);
TouchSensor1036 := TTouchSensorNode.Create;
TouchSensor1036.Description := 'Segment l_metacarpal_1';
{ .AddChildren }
HAnimSegment1031.AddChildren([TouchSensor1036]);
Shape1037 := TShapeNode.Create;
Appearance1038 := TAppearanceNode.Create;
Material1039 := TMaterialNode.Create;
Material1039.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1038.Material := Material1039;
{ .SetAppearance }
Shape1037.Appearance := Appearance1038;
Extrusion1040 := TExtrusionNode.Create;
Extrusion1040.SetSpine([Vector3(0.1924,0.8472,-0.0534),Vector3(0.1951,0.8226,0.0246)]);
Extrusion1040.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1037.Geometry := Extrusion1040;
{ .AddChildren }
HAnimSegment1031.AddChildren([Shape1037]);
{ .AddChildren }
HAnimJoint1030.AddChildren([HAnimSegment1031]);
HAnimJoint1041 := THAnimJointNode.Create;
HAnimJoint1041.NameField := 'l_metacarpophalangeal_1';
HAnimJoint1041.Center := Vector3(0.1951,0.8226,0.0246);
HAnimSegment1042 := THAnimSegmentNode.Create;
HAnimSegment1042.NameField := 'l_carpal_proximal_phalanx_1';
Transform1043 := TTransformNode.Create;
Transform1043.Translation := Vector3(0.1951,0.8226,0.0246);
Transform1044 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1045 := TTouchSensorNode.Create;
TouchSensor1045.Description := 'Joint l_metacarpophalangeal_1';
{ .AddChildren }
Transform1044.AddChildren([TouchSensor1045]);
Shape1046 := Shape20;
{ .AddChild }
Transform1044.AddChildren([Shape1046]);
{ .AddChildren }
Transform1043.AddChildren([Transform1044]);
{ .AddChildren }
HAnimSegment1042.AddChildren([Transform1043]);
TouchSensor1047 := TTouchSensorNode.Create;
TouchSensor1047.Description := 'Segment l_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment1042.AddChildren([TouchSensor1047]);
Shape1048 := TShapeNode.Create;
Appearance1049 := TAppearanceNode.Create;
Material1050 := TMaterialNode.Create;
Material1050.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1049.Material := Material1050;
{ .SetAppearance }
Shape1048.Appearance := Appearance1049;
Extrusion1051 := TExtrusionNode.Create;
Extrusion1051.SetSpine([Vector3(0.1951,0.8226,0.0246),Vector3(0.1955,0.8159,0.0464)]);
Extrusion1051.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1048.Geometry := Extrusion1051;
{ .AddChildren }
HAnimSegment1042.AddChildren([Shape1048]);
{ .AddChildren }
HAnimJoint1041.AddChildren([HAnimSegment1042]);
HAnimJoint1052 := THAnimJointNode.Create;
HAnimJoint1052.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint1052.Center := Vector3(0.1955,0.8159,0.0464);
{ .AddChildren }
HAnimJoint1041.AddChildren([HAnimJoint1052]);
{ .AddChildren }
HAnimJoint1030.AddChildren([HAnimJoint1041]);
{ .AddChildren }
HAnimJoint1019.AddChildren([HAnimJoint1030]);
{ .AddChildren }
HAnimJoint993.AddChildren([HAnimJoint1019]);
HAnimJoint1053 := THAnimJointNode.Create;
HAnimJoint1053.NameField := 'l_midcarpal_2';
HAnimJoint1053.Center := Vector3(0.1811,0.6984,-0.0935);
HAnimSegment1054 := THAnimSegmentNode.Create;
HAnimSegment1054.NameField := 'l_trapezoid';
Transform1055 := TTransformNode.Create;
Transform1055.Translation := Vector3(0.1811,0.6984,-0.0935);
Transform1056 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1057 := TTouchSensorNode.Create;
TouchSensor1057.Description := 'Joint l_midcarpal_2';
{ .AddChildren }
Transform1056.AddChildren([TouchSensor1057]);
Shape1058 := Shape20;
{ .AddChild }
Transform1056.AddChildren([Shape1058]);
{ .AddChildren }
Transform1055.AddChildren([Transform1056]);
{ .AddChildren }
HAnimSegment1054.AddChildren([Transform1055]);
TouchSensor1059 := TTouchSensorNode.Create;
TouchSensor1059.Description := 'Segment l_trapezoid';
{ .AddChildren }
HAnimSegment1054.AddChildren([TouchSensor1059]);
Shape1060 := TShapeNode.Create;
Appearance1061 := TAppearanceNode.Create;
Material1062 := TMaterialNode.Create;
Material1062.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1061.Material := Material1062;
{ .SetAppearance }
Shape1060.Appearance := Appearance1061;
Extrusion1063 := TExtrusionNode.Create;
Extrusion1063.SetSpine([Vector3(0.1811,0.6984,-0.0935),Vector3(0.1983,0.8024,-0.028)]);
Extrusion1063.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1060.Geometry := Extrusion1063;
{ .AddChildren }
HAnimSegment1054.AddChildren([Shape1060]);
{ .AddChildren }
HAnimJoint1053.AddChildren([HAnimSegment1054]);
HAnimJoint1064 := THAnimJointNode.Create;
HAnimJoint1064.NameField := 'l_carpometacarpal_2';
HAnimJoint1064.Center := Vector3(0.1983,0.8024,-0.028);
HAnimSegment1065 := THAnimSegmentNode.Create;
HAnimSegment1065.NameField := 'l_metacarpal_2';
Transform1066 := TTransformNode.Create;
Transform1066.Translation := Vector3(0.1983,0.8024,-0.028);
Transform1067 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1068 := TTouchSensorNode.Create;
TouchSensor1068.Description := 'Joint l_carpometacarpal_2';
{ .AddChildren }
Transform1067.AddChildren([TouchSensor1068]);
Shape1069 := Shape20;
{ .AddChild }
Transform1067.AddChildren([Shape1069]);
{ .AddChildren }
Transform1066.AddChildren([Transform1067]);
{ .AddChildren }
HAnimSegment1065.AddChildren([Transform1066]);
TouchSensor1070 := TTouchSensorNode.Create;
TouchSensor1070.Description := 'Segment l_metacarpal_2';
{ .AddChildren }
HAnimSegment1065.AddChildren([TouchSensor1070]);
Shape1071 := TShapeNode.Create;
Appearance1072 := TAppearanceNode.Create;
Material1073 := TMaterialNode.Create;
Material1073.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1072.Material := Material1073;
{ .SetAppearance }
Shape1071.Appearance := Appearance1072;
Extrusion1074 := TExtrusionNode.Create;
Extrusion1074.SetSpine([Vector3(0.1983,0.8024,-0.028),Vector3(0.1983,0.7815,-0.028)]);
Extrusion1074.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1071.Geometry := Extrusion1074;
{ .AddChildren }
HAnimSegment1065.AddChildren([Shape1071]);
{ .AddChildren }
HAnimJoint1064.AddChildren([HAnimSegment1065]);
HAnimJoint1075 := THAnimJointNode.Create;
HAnimJoint1075.NameField := 'l_metacarpophalangeal_2';
HAnimJoint1075.Center := Vector3(0.1983,0.7815,-0.028);
HAnimSegment1076 := THAnimSegmentNode.Create;
HAnimSegment1076.NameField := 'l_carpal_proximal_phalanx_2';
Transform1077 := TTransformNode.Create;
Transform1077.Translation := Vector3(0.1983,0.7815,-0.028);
Transform1078 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1079 := TTouchSensorNode.Create;
TouchSensor1079.Description := 'Joint l_metacarpophalangeal_2';
{ .AddChildren }
Transform1078.AddChildren([TouchSensor1079]);
Shape1080 := Shape20;
{ .AddChild }
Transform1078.AddChildren([Shape1080]);
{ .AddChildren }
Transform1077.AddChildren([Transform1078]);
{ .AddChildren }
HAnimSegment1076.AddChildren([Transform1077]);
TouchSensor1081 := TTouchSensorNode.Create;
TouchSensor1081.Description := 'Segment l_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment1076.AddChildren([TouchSensor1081]);
Shape1082 := TShapeNode.Create;
Appearance1083 := TAppearanceNode.Create;
Material1084 := TMaterialNode.Create;
Material1084.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1083.Material := Material1084;
{ .SetAppearance }
Shape1082.Appearance := Appearance1083;
Extrusion1085 := TExtrusionNode.Create;
Extrusion1085.SetSpine([Vector3(0.1983,0.7815,-0.028),Vector3(0.2017,0.7363,-0.0248)]);
Extrusion1085.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1082.Geometry := Extrusion1085;
{ .AddChildren }
HAnimSegment1076.AddChildren([Shape1082]);
{ .AddChildren }
HAnimJoint1075.AddChildren([HAnimSegment1076]);
HAnimJoint1086 := THAnimJointNode.Create;
HAnimJoint1086.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint1086.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimSegment1087 := THAnimSegmentNode.Create;
HAnimSegment1087.NameField := 'l_carpal_middle_phalanx_2';
Transform1088 := TTransformNode.Create;
Transform1088.Translation := Vector3(0.2017,0.7363,-0.0248);
Transform1089 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1090 := TTouchSensorNode.Create;
TouchSensor1090.Description := 'Joint l_carpal_proximal_interphalangeal_2';
{ .AddChildren }
Transform1089.AddChildren([TouchSensor1090]);
Shape1091 := Shape20;
{ .AddChild }
Transform1089.AddChildren([Shape1091]);
{ .AddChildren }
Transform1088.AddChildren([Transform1089]);
{ .AddChildren }
HAnimSegment1087.AddChildren([Transform1088]);
TouchSensor1092 := TTouchSensorNode.Create;
TouchSensor1092.Description := 'Segment l_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment1087.AddChildren([TouchSensor1092]);
Shape1093 := TShapeNode.Create;
Appearance1094 := TAppearanceNode.Create;
Material1095 := TMaterialNode.Create;
Material1095.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1094.Material := Material1095;
{ .SetAppearance }
Shape1093.Appearance := Appearance1094;
Extrusion1096 := TExtrusionNode.Create;
Extrusion1096.SetSpine([Vector3(0.2017,0.7363,-0.0248),Vector3(0.2028,0.7139,-0.0236)]);
Extrusion1096.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1093.Geometry := Extrusion1096;
{ .AddChildren }
HAnimSegment1087.AddChildren([Shape1093]);
{ .AddChildren }
HAnimJoint1086.AddChildren([HAnimSegment1087]);
HAnimJoint1097 := THAnimJointNode.Create;
HAnimJoint1097.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint1097.Center := Vector3(0.2028,0.7139,-0.0236);
{ .AddChildren }
HAnimJoint1086.AddChildren([HAnimJoint1097]);
{ .AddChildren }
HAnimJoint1075.AddChildren([HAnimJoint1086]);
{ .AddChildren }
HAnimJoint1064.AddChildren([HAnimJoint1075]);
{ .AddChildren }
HAnimJoint1053.AddChildren([HAnimJoint1064]);
{ .AddChildren }
HAnimJoint993.AddChildren([HAnimJoint1053]);
HAnimJoint1098 := THAnimJointNode.Create;
HAnimJoint1098.NameField := 'l_midcarpal_3';
HAnimJoint1098.Center := Vector3(0.1809,0.7,-0.1067);
HAnimSegment1099 := THAnimSegmentNode.Create;
HAnimSegment1099.NameField := 'l_capitate';
Transform1100 := TTransformNode.Create;
Transform1100.Translation := Vector3(0.1809,0.7,-0.1067);
Transform1101 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1102 := TTouchSensorNode.Create;
TouchSensor1102.Description := 'Joint l_midcarpal_3';
{ .AddChildren }
Transform1101.AddChildren([TouchSensor1102]);
Shape1103 := Shape20;
{ .AddChild }
Transform1101.AddChildren([Shape1103]);
{ .AddChildren }
Transform1100.AddChildren([Transform1101]);
{ .AddChildren }
HAnimSegment1099.AddChildren([Transform1100]);
TouchSensor1104 := TTouchSensorNode.Create;
TouchSensor1104.Description := 'Segment l_capitate';
{ .AddChildren }
HAnimSegment1099.AddChildren([TouchSensor1104]);
Shape1105 := TShapeNode.Create;
Appearance1106 := TAppearanceNode.Create;
Material1107 := TMaterialNode.Create;
Material1107.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1106.Material := Material1107;
{ .SetAppearance }
Shape1105.Appearance := Appearance1106;
Extrusion1108 := TExtrusionNode.Create;
Extrusion1108.SetSpine([Vector3(0.1809,0.7,-0.1067),Vector3(0.1987,0.8029,-0.053)]);
Extrusion1108.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1105.Geometry := Extrusion1108;
{ .AddChildren }
HAnimSegment1099.AddChildren([Shape1105]);
{ .AddChildren }
HAnimJoint1098.AddChildren([HAnimSegment1099]);
HAnimJoint1109 := THAnimJointNode.Create;
HAnimJoint1109.NameField := 'l_carpometacarpal_3';
HAnimJoint1109.Center := Vector3(0.1987,0.8029,-0.053);
HAnimSegment1110 := THAnimSegmentNode.Create;
HAnimSegment1110.NameField := 'l_metacarpal_3';
Transform1111 := TTransformNode.Create;
Transform1111.Translation := Vector3(0.1987,0.8029,-0.053);
Transform1112 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1113 := TTouchSensorNode.Create;
TouchSensor1113.Description := 'Joint l_carpometacarpal_3';
{ .AddChildren }
Transform1112.AddChildren([TouchSensor1113]);
Shape1114 := Shape20;
{ .AddChild }
Transform1112.AddChildren([Shape1114]);
{ .AddChildren }
Transform1111.AddChildren([Transform1112]);
{ .AddChildren }
HAnimSegment1110.AddChildren([Transform1111]);
TouchSensor1115 := TTouchSensorNode.Create;
TouchSensor1115.Description := 'Segment l_metacarpal_3';
{ .AddChildren }
HAnimSegment1110.AddChildren([TouchSensor1115]);
Shape1116 := TShapeNode.Create;
Appearance1117 := TAppearanceNode.Create;
Material1118 := TMaterialNode.Create;
Material1118.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1117.Material := Material1118;
{ .SetAppearance }
Shape1116.Appearance := Appearance1117;
Extrusion1119 := TExtrusionNode.Create;
Extrusion1119.SetSpine([Vector3(0.1987,0.8029,-0.053),Vector3(0.1987,0.7818,-0.053)]);
Extrusion1119.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1116.Geometry := Extrusion1119;
{ .AddChildren }
HAnimSegment1110.AddChildren([Shape1116]);
{ .AddChildren }
HAnimJoint1109.AddChildren([HAnimSegment1110]);
HAnimJoint1120 := THAnimJointNode.Create;
HAnimJoint1120.NameField := 'l_metacarpophalangeal_3';
HAnimJoint1120.Center := Vector3(0.1987,0.7818,-0.053);
HAnimSegment1121 := THAnimSegmentNode.Create;
HAnimSegment1121.NameField := 'l_carpal_proximal_phalanx_3';
Transform1122 := TTransformNode.Create;
Transform1122.Translation := Vector3(0.1987,0.7818,-0.053);
Transform1123 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1124 := TTouchSensorNode.Create;
TouchSensor1124.Description := 'Joint l_metacarpophalangeal_3';
{ .AddChildren }
Transform1123.AddChildren([TouchSensor1124]);
Shape1125 := Shape20;
{ .AddChild }
Transform1123.AddChildren([Shape1125]);
{ .AddChildren }
Transform1122.AddChildren([Transform1123]);
{ .AddChildren }
HAnimSegment1121.AddChildren([Transform1122]);
TouchSensor1126 := TTouchSensorNode.Create;
TouchSensor1126.Description := 'Segment l_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment1121.AddChildren([TouchSensor1126]);
Shape1127 := TShapeNode.Create;
Appearance1128 := TAppearanceNode.Create;
Material1129 := TMaterialNode.Create;
Material1129.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1128.Material := Material1129;
{ .SetAppearance }
Shape1127.Appearance := Appearance1128;
Extrusion1130 := TExtrusionNode.Create;
Extrusion1130.SetSpine([Vector3(0.1987,0.7818,-0.053),Vector3(0.2013,0.7273,-0.0503)]);
Extrusion1130.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1127.Geometry := Extrusion1130;
{ .AddChildren }
HAnimSegment1121.AddChildren([Shape1127]);
{ .AddChildren }
HAnimJoint1120.AddChildren([HAnimSegment1121]);
HAnimJoint1131 := THAnimJointNode.Create;
HAnimJoint1131.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint1131.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimSegment1132 := THAnimSegmentNode.Create;
HAnimSegment1132.NameField := 'l_carpal_middle_phalanx_3';
Transform1133 := TTransformNode.Create;
Transform1133.Translation := Vector3(0.2013,0.7273,-0.0503);
Transform1134 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1135 := TTouchSensorNode.Create;
TouchSensor1135.Description := 'Joint l_carpal_proximal_interphalangeal_3';
{ .AddChildren }
Transform1134.AddChildren([TouchSensor1135]);
Shape1136 := Shape20;
{ .AddChild }
Transform1134.AddChildren([Shape1136]);
{ .AddChildren }
Transform1133.AddChildren([Transform1134]);
{ .AddChildren }
HAnimSegment1132.AddChildren([Transform1133]);
TouchSensor1137 := TTouchSensorNode.Create;
TouchSensor1137.Description := 'Segment l_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment1132.AddChildren([TouchSensor1137]);
Shape1138 := TShapeNode.Create;
Appearance1139 := TAppearanceNode.Create;
Material1140 := TMaterialNode.Create;
Material1140.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1139.Material := Material1140;
{ .SetAppearance }
Shape1138.Appearance := Appearance1139;
Extrusion1141 := TExtrusionNode.Create;
Extrusion1141.SetSpine([Vector3(0.2013,0.7273,-0.0503),Vector3(0.2026,0.7011,-0.0494)]);
Extrusion1141.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1138.Geometry := Extrusion1141;
{ .AddChildren }
HAnimSegment1132.AddChildren([Shape1138]);
{ .AddChildren }
HAnimJoint1131.AddChildren([HAnimSegment1132]);
HAnimJoint1142 := THAnimJointNode.Create;
HAnimJoint1142.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint1142.Center := Vector3(0.2026,0.7011,-0.0494);
{ .AddChildren }
HAnimJoint1131.AddChildren([HAnimJoint1142]);
{ .AddChildren }
HAnimJoint1120.AddChildren([HAnimJoint1131]);
{ .AddChildren }
HAnimJoint1109.AddChildren([HAnimJoint1120]);
{ .AddChildren }
HAnimJoint1098.AddChildren([HAnimJoint1109]);
{ .AddChildren }
HAnimJoint993.AddChildren([HAnimJoint1098]);
HAnimJoint1143 := THAnimJointNode.Create;
HAnimJoint1143.NameField := 'l_midcarpal_4_5';
HAnimJoint1143.Center := Vector3(0.1809,0.6973,-0.1276);
HAnimSegment1144 := THAnimSegmentNode.Create;
HAnimSegment1144.NameField := 'l_hamate';
Transform1145 := TTransformNode.Create;
Transform1145.Translation := Vector3(0.1809,0.6973,-0.1276);
Transform1146 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1147 := TTouchSensorNode.Create;
TouchSensor1147.Description := 'Joint l_midcarpal_4_5';
{ .AddChildren }
Transform1146.AddChildren([TouchSensor1147]);
Shape1148 := Shape20;
{ .AddChild }
Transform1146.AddChildren([Shape1148]);
{ .AddChildren }
Transform1145.AddChildren([Transform1146]);
{ .AddChildren }
HAnimSegment1144.AddChildren([Transform1145]);
TouchSensor1149 := TTouchSensorNode.Create;
TouchSensor1149.Description := 'Segment l_hamate';
{ .AddChildren }
HAnimSegment1144.AddChildren([TouchSensor1149]);
Shape1150 := TShapeNode.Create;
Appearance1151 := TAppearanceNode.Create;
Material1152 := TMaterialNode.Create;
Material1152.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1151.Material := Material1152;
{ .SetAppearance }
Shape1150.Appearance := Appearance1151;
Extrusion1153 := TExtrusionNode.Create;
Extrusion1153.SetSpine([Vector3(0.1809,0.6973,-0.1276),Vector3(0.1956,0.8019,-0.0794)]);
Extrusion1153.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1150.Geometry := Extrusion1153;
{ .AddChildren }
HAnimSegment1144.AddChildren([Shape1150]);
TouchSensor1154 := TTouchSensorNode.Create;
TouchSensor1154.Description := 'Segment l_hamate';
{ .AddChildren }
HAnimSegment1144.AddChildren([TouchSensor1154]);
Shape1155 := TShapeNode.Create;
Appearance1156 := TAppearanceNode.Create;
Material1157 := TMaterialNode.Create;
Material1157.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1156.Material := Material1157;
{ .SetAppearance }
Shape1155.Appearance := Appearance1156;
Extrusion1158 := TExtrusionNode.Create;
Extrusion1158.SetSpine([Vector3(0.1809,0.6973,-0.1276),Vector3(0.1925,0.8066,-0.1036)]);
Extrusion1158.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1155.Geometry := Extrusion1158;
{ .AddChildren }
HAnimSegment1144.AddChildren([Shape1155]);
{ .AddChildren }
HAnimJoint1143.AddChildren([HAnimSegment1144]);
HAnimJoint1159 := THAnimJointNode.Create;
HAnimJoint1159.NameField := 'l_carpometacarpal_4';
HAnimJoint1159.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimSegment1160 := THAnimSegmentNode.Create;
HAnimSegment1160.NameField := 'l_metacarpal_4';
Transform1161 := TTransformNode.Create;
Transform1161.Translation := Vector3(0.1956,0.8019,-0.0794);
Transform1162 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1163 := TTouchSensorNode.Create;
TouchSensor1163.Description := 'Joint l_carpometacarpal_4';
{ .AddChildren }
Transform1162.AddChildren([TouchSensor1163]);
Shape1164 := Shape20;
{ .AddChild }
Transform1162.AddChildren([Shape1164]);
{ .AddChildren }
Transform1161.AddChildren([Transform1162]);
{ .AddChildren }
HAnimSegment1160.AddChildren([Transform1161]);
TouchSensor1165 := TTouchSensorNode.Create;
TouchSensor1165.Description := 'Segment l_metacarpal_4';
{ .AddChildren }
HAnimSegment1160.AddChildren([TouchSensor1165]);
Shape1166 := TShapeNode.Create;
Appearance1167 := TAppearanceNode.Create;
Material1168 := TMaterialNode.Create;
Material1168.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1167.Material := Material1168;
{ .SetAppearance }
Shape1166.Appearance := Appearance1167;
Extrusion1169 := TExtrusionNode.Create;
Extrusion1169.SetSpine([Vector3(0.1956,0.8019,-0.0794),Vector3(0.1956,0.7815,-0.0794)]);
Extrusion1169.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1166.Geometry := Extrusion1169;
{ .AddChildren }
HAnimSegment1160.AddChildren([Shape1166]);
{ .AddChildren }
HAnimJoint1159.AddChildren([HAnimSegment1160]);
HAnimJoint1170 := THAnimJointNode.Create;
HAnimJoint1170.NameField := 'l_metacarpophalangeal_4';
HAnimJoint1170.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimSegment1171 := THAnimSegmentNode.Create;
HAnimSegment1171.NameField := 'l_carpal_proximal_phalanx_4';
Transform1172 := TTransformNode.Create;
Transform1172.Translation := Vector3(0.1956,0.7815,-0.0794);
Transform1173 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1174 := TTouchSensorNode.Create;
TouchSensor1174.Description := 'Joint l_metacarpophalangeal_4';
{ .AddChildren }
Transform1173.AddChildren([TouchSensor1174]);
Shape1175 := Shape20;
{ .AddChild }
Transform1173.AddChildren([Shape1175]);
{ .AddChildren }
Transform1172.AddChildren([Transform1173]);
{ .AddChildren }
HAnimSegment1171.AddChildren([Transform1172]);
TouchSensor1176 := TTouchSensorNode.Create;
TouchSensor1176.Description := 'Segment l_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment1171.AddChildren([TouchSensor1176]);
Shape1177 := TShapeNode.Create;
Appearance1178 := TAppearanceNode.Create;
Material1179 := TMaterialNode.Create;
Material1179.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1178.Material := Material1179;
{ .SetAppearance }
Shape1177.Appearance := Appearance1178;
Extrusion1180 := TExtrusionNode.Create;
Extrusion1180.SetSpine([Vector3(0.1956,0.7815,-0.0794),Vector3(0.1973,0.7287,-0.0777)]);
Extrusion1180.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1177.Geometry := Extrusion1180;
{ .AddChildren }
HAnimSegment1171.AddChildren([Shape1177]);
{ .AddChildren }
HAnimJoint1170.AddChildren([HAnimSegment1171]);
HAnimJoint1181 := THAnimJointNode.Create;
HAnimJoint1181.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint1181.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimSegment1182 := THAnimSegmentNode.Create;
HAnimSegment1182.NameField := 'l_carpal_middle_phalanx_4';
Transform1183 := TTransformNode.Create;
Transform1183.Translation := Vector3(0.1973,0.7287,-0.0777);
Transform1184 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1185 := TTouchSensorNode.Create;
TouchSensor1185.Description := 'Joint l_carpal_proximal_interphalangeal_4';
{ .AddChildren }
Transform1184.AddChildren([TouchSensor1185]);
Shape1186 := Shape20;
{ .AddChild }
Transform1184.AddChildren([Shape1186]);
{ .AddChildren }
Transform1183.AddChildren([Transform1184]);
{ .AddChildren }
HAnimSegment1182.AddChildren([Transform1183]);
TouchSensor1187 := TTouchSensorNode.Create;
TouchSensor1187.Description := 'Segment l_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment1182.AddChildren([TouchSensor1187]);
Shape1188 := TShapeNode.Create;
Appearance1189 := TAppearanceNode.Create;
Material1190 := TMaterialNode.Create;
Material1190.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1189.Material := Material1190;
{ .SetAppearance }
Shape1188.Appearance := Appearance1189;
Extrusion1191 := TExtrusionNode.Create;
Extrusion1191.SetSpine([Vector3(0.1973,0.7287,-0.0777),Vector3(0.1983,0.7045,-0.0767)]);
Extrusion1191.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1188.Geometry := Extrusion1191;
{ .AddChildren }
HAnimSegment1182.AddChildren([Shape1188]);
{ .AddChildren }
HAnimJoint1181.AddChildren([HAnimSegment1182]);
HAnimJoint1192 := THAnimJointNode.Create;
HAnimJoint1192.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint1192.Center := Vector3(0.1983,0.7045,-0.0767);
{ .AddChildren }
HAnimJoint1181.AddChildren([HAnimJoint1192]);
{ .AddChildren }
HAnimJoint1170.AddChildren([HAnimJoint1181]);
{ .AddChildren }
HAnimJoint1159.AddChildren([HAnimJoint1170]);
{ .AddChildren }
HAnimJoint1143.AddChildren([HAnimJoint1159]);
HAnimJoint1193 := THAnimJointNode.Create;
HAnimJoint1193.NameField := 'l_carpometacarpal_5';
HAnimJoint1193.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimSegment1194 := THAnimSegmentNode.Create;
HAnimSegment1194.NameField := 'l_metacarpal_5';
Transform1195 := TTransformNode.Create;
Transform1195.Translation := Vector3(0.1925,0.8066,-0.1036);
Transform1196 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1197 := TTouchSensorNode.Create;
TouchSensor1197.Description := 'Joint l_carpometacarpal_5';
{ .AddChildren }
Transform1196.AddChildren([TouchSensor1197]);
Shape1198 := Shape20;
{ .AddChild }
Transform1196.AddChildren([Shape1198]);
{ .AddChildren }
Transform1195.AddChildren([Transform1196]);
{ .AddChildren }
HAnimSegment1194.AddChildren([Transform1195]);
TouchSensor1199 := TTouchSensorNode.Create;
TouchSensor1199.Description := 'Segment l_metacarpal_5';
{ .AddChildren }
HAnimSegment1194.AddChildren([TouchSensor1199]);
Shape1200 := TShapeNode.Create;
Appearance1201 := TAppearanceNode.Create;
Material1202 := TMaterialNode.Create;
Material1202.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1201.Material := Material1202;
{ .SetAppearance }
Shape1200.Appearance := Appearance1201;
Extrusion1203 := TExtrusionNode.Create;
Extrusion1203.SetSpine([Vector3(0.1925,0.8066,-0.1036),Vector3(0.1925,0.7866,-0.1036)]);
Extrusion1203.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1200.Geometry := Extrusion1203;
{ .AddChildren }
HAnimSegment1194.AddChildren([Shape1200]);
{ .AddChildren }
HAnimJoint1193.AddChildren([HAnimSegment1194]);
HAnimJoint1204 := THAnimJointNode.Create;
HAnimJoint1204.NameField := 'l_metacarpophalangeal_5';
HAnimJoint1204.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimSegment1205 := THAnimSegmentNode.Create;
HAnimSegment1205.NameField := 'l_carpal_proximal_phalanx_5';
Transform1206 := TTransformNode.Create;
Transform1206.Translation := Vector3(0.1925,0.7866,-0.1036);
Transform1207 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1208 := TTouchSensorNode.Create;
TouchSensor1208.Description := 'Joint l_metacarpophalangeal_5';
{ .AddChildren }
Transform1207.AddChildren([TouchSensor1208]);
Shape1209 := Shape20;
{ .AddChild }
Transform1207.AddChildren([Shape1209]);
{ .AddChildren }
Transform1206.AddChildren([Transform1207]);
{ .AddChildren }
HAnimSegment1205.AddChildren([Transform1206]);
TouchSensor1210 := TTouchSensorNode.Create;
TouchSensor1210.Description := 'Segment l_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment1205.AddChildren([TouchSensor1210]);
Shape1211 := TShapeNode.Create;
Appearance1212 := TAppearanceNode.Create;
Material1213 := TMaterialNode.Create;
Material1213.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1212.Material := Material1213;
{ .SetAppearance }
Shape1211.Appearance := Appearance1212;
Extrusion1214 := TExtrusionNode.Create;
Extrusion1214.SetSpine([Vector3(0.1925,0.7866,-0.1036),Vector3(0.1938,0.7452,-0.1024)]);
Extrusion1214.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1211.Geometry := Extrusion1214;
{ .AddChildren }
HAnimSegment1205.AddChildren([Shape1211]);
{ .AddChildren }
HAnimJoint1204.AddChildren([HAnimSegment1205]);
HAnimJoint1215 := THAnimJointNode.Create;
HAnimJoint1215.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint1215.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimSegment1216 := THAnimSegmentNode.Create;
HAnimSegment1216.NameField := 'l_carpal_middle_phalanx_5';
Transform1217 := TTransformNode.Create;
Transform1217.Translation := Vector3(0.1938,0.7452,-0.1024);
Transform1218 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1219 := TTouchSensorNode.Create;
TouchSensor1219.Description := 'Joint l_carpal_proximal_interphalangeal_5';
{ .AddChildren }
Transform1218.AddChildren([TouchSensor1219]);
Shape1220 := Shape20;
{ .AddChild }
Transform1218.AddChildren([Shape1220]);
{ .AddChildren }
Transform1217.AddChildren([Transform1218]);
{ .AddChildren }
HAnimSegment1216.AddChildren([Transform1217]);
TouchSensor1221 := TTouchSensorNode.Create;
TouchSensor1221.Description := 'Segment l_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment1216.AddChildren([TouchSensor1221]);
Shape1222 := TShapeNode.Create;
Appearance1223 := TAppearanceNode.Create;
Material1224 := TMaterialNode.Create;
Material1224.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1223.Material := Material1224;
{ .SetAppearance }
Shape1222.Appearance := Appearance1223;
Extrusion1225 := TExtrusionNode.Create;
Extrusion1225.SetSpine([Vector3(0.1938,0.7452,-0.1024),Vector3(0.1948,0.7277,-0.1017)]);
Extrusion1225.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1222.Geometry := Extrusion1225;
{ .AddChildren }
HAnimSegment1216.AddChildren([Shape1222]);
{ .AddChildren }
HAnimJoint1215.AddChildren([HAnimSegment1216]);
HAnimJoint1226 := THAnimJointNode.Create;
HAnimJoint1226.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint1226.Center := Vector3(0.1948,0.7277,-0.1017);
{ .AddChildren }
HAnimJoint1215.AddChildren([HAnimJoint1226]);
{ .AddChildren }
HAnimJoint1204.AddChildren([HAnimJoint1215]);
{ .AddChildren }
HAnimJoint1193.AddChildren([HAnimJoint1204]);
{ .AddChildren }
HAnimJoint1143.AddChildren([HAnimJoint1193]);
{ .AddChildren }
HAnimJoint993.AddChildren([HAnimJoint1143]);
{ .AddChildren }
HAnimJoint982.AddChildren([HAnimJoint993]);
{ .AddChildren }
HAnimJoint971.AddChildren([HAnimJoint982]);
{ .AddChildren }
HAnimJoint960.AddChildren([HAnimJoint971]);
{ .AddChildren }
HAnimJoint949.AddChildren([HAnimJoint960]);
{ .AddChildren }
HAnimJoint803.AddChildren([HAnimJoint949]);
HAnimJoint1227 := THAnimJointNode.Create;
HAnimJoint1227.NameField := 'r_sternoclavicular';
HAnimJoint1227.Center := Vector3(-0.0694,1.46,-0.033);
HAnimSegment1228 := THAnimSegmentNode.Create;
HAnimSegment1228.NameField := 'r_clavicle';
Transform1229 := TTransformNode.Create;
Transform1229.Translation := Vector3(-0.0694,1.46,-0.033);
Transform1230 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1231 := TTouchSensorNode.Create;
TouchSensor1231.Description := 'Joint r_sternoclavicular';
{ .AddChildren }
Transform1230.AddChildren([TouchSensor1231]);
Shape1232 := Shape20;
{ .AddChild }
Transform1230.AddChildren([Shape1232]);
{ .AddChildren }
Transform1229.AddChildren([Transform1230]);
{ .AddChildren }
HAnimSegment1228.AddChildren([Transform1229]);
TouchSensor1233 := TTouchSensorNode.Create;
TouchSensor1233.Description := 'Segment r_clavicle';
{ .AddChildren }
HAnimSegment1228.AddChildren([TouchSensor1233]);
Shape1234 := TShapeNode.Create;
Appearance1235 := TAppearanceNode.Create;
Material1236 := TMaterialNode.Create;
Material1236.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1235.Material := Material1236;
{ .SetAppearance }
Shape1234.Appearance := Appearance1235;
Extrusion1237 := TExtrusionNode.Create;
Extrusion1237.SetSpine([Vector3(-0.0694,1.46,-0.033),Vector3(-0.0836,1.4281,-0.0401)]);
Extrusion1237.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1234.Geometry := Extrusion1237;
{ .AddChildren }
HAnimSegment1228.AddChildren([Shape1234]);
{ .AddChildren }
HAnimJoint1227.AddChildren([HAnimSegment1228]);
HAnimJoint1238 := THAnimJointNode.Create;
HAnimJoint1238.NameField := 'r_acromioclavicular';
HAnimJoint1238.Center := Vector3(-0.0836,1.4281,-0.0401);
HAnimSegment1239 := THAnimSegmentNode.Create;
HAnimSegment1239.NameField := 'r_scapula';
Transform1240 := TTransformNode.Create;
Transform1240.Translation := Vector3(-0.0836,1.4281,-0.0401);
Transform1241 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1242 := TTouchSensorNode.Create;
TouchSensor1242.Description := 'Joint r_acromioclavicular';
{ .AddChildren }
Transform1241.AddChildren([TouchSensor1242]);
Shape1243 := Shape20;
{ .AddChild }
Transform1241.AddChildren([Shape1243]);
{ .AddChildren }
Transform1240.AddChildren([Transform1241]);
{ .AddChildren }
HAnimSegment1239.AddChildren([Transform1240]);
TouchSensor1244 := TTouchSensorNode.Create;
TouchSensor1244.Description := 'Segment r_scapula';
{ .AddChildren }
HAnimSegment1239.AddChildren([TouchSensor1244]);
Shape1245 := TShapeNode.Create;
Appearance1246 := TAppearanceNode.Create;
Material1247 := TMaterialNode.Create;
Material1247.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1246.Material := Material1247;
{ .SetAppearance }
Shape1245.Appearance := Appearance1246;
Extrusion1248 := TExtrusionNode.Create;
Extrusion1248.SetSpine([Vector3(-0.0836,1.4281,-0.0401),Vector3(-0.1907,1.4407,-0.0325)]);
Extrusion1248.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1245.Geometry := Extrusion1248;
{ .AddChildren }
HAnimSegment1239.AddChildren([Shape1245]);
{ .AddChildren }
HAnimJoint1238.AddChildren([HAnimSegment1239]);
HAnimJoint1249 := THAnimJointNode.Create;
HAnimJoint1249.NameField := 'r_shoulder';
HAnimJoint1249.Center := Vector3(-0.1907,1.4407,-0.0325);
HAnimSegment1250 := THAnimSegmentNode.Create;
HAnimSegment1250.NameField := 'r_upperarm';
Transform1251 := TTransformNode.Create;
Transform1251.Translation := Vector3(-0.1907,1.4407,-0.0325);
Transform1252 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1253 := TTouchSensorNode.Create;
TouchSensor1253.Description := 'Joint r_shoulder';
{ .AddChildren }
Transform1252.AddChildren([TouchSensor1253]);
Shape1254 := Shape20;
{ .AddChild }
Transform1252.AddChildren([Shape1254]);
{ .AddChildren }
Transform1251.AddChildren([Transform1252]);
{ .AddChildren }
HAnimSegment1250.AddChildren([Transform1251]);
TouchSensor1255 := TTouchSensorNode.Create;
TouchSensor1255.Description := 'Segment r_upperarm';
{ .AddChildren }
HAnimSegment1250.AddChildren([TouchSensor1255]);
Shape1256 := TShapeNode.Create;
Appearance1257 := TAppearanceNode.Create;
Material1258 := TMaterialNode.Create;
Material1258.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1257.Material := Material1258;
{ .SetAppearance }
Shape1256.Appearance := Appearance1257;
Extrusion1259 := TExtrusionNode.Create;
Extrusion1259.SetSpine([Vector3(-0.1907,1.4407,-0.0325),Vector3(-0.1949,1.1388,-0.062)]);
Extrusion1259.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1256.Geometry := Extrusion1259;
{ .AddChildren }
HAnimSegment1250.AddChildren([Shape1256]);
{ .AddChildren }
HAnimJoint1249.AddChildren([HAnimSegment1250]);
HAnimJoint1260 := THAnimJointNode.Create;
HAnimJoint1260.NameField := 'r_elbow';
HAnimJoint1260.Center := Vector3(-0.1949,1.1388,-0.062);
HAnimSegment1261 := THAnimSegmentNode.Create;
HAnimSegment1261.NameField := 'r_forearm';
Transform1262 := TTransformNode.Create;
Transform1262.Translation := Vector3(-0.1949,1.1388,-0.062);
Transform1263 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1264 := TTouchSensorNode.Create;
TouchSensor1264.Description := 'Joint r_elbow';
{ .AddChildren }
Transform1263.AddChildren([TouchSensor1264]);
Shape1265 := Shape20;
{ .AddChild }
Transform1263.AddChildren([Shape1265]);
{ .AddChildren }
Transform1262.AddChildren([Transform1263]);
{ .AddChildren }
HAnimSegment1261.AddChildren([Transform1262]);
TouchSensor1266 := TTouchSensorNode.Create;
TouchSensor1266.Description := 'Segment r_forearm';
{ .AddChildren }
HAnimSegment1261.AddChildren([TouchSensor1266]);
Shape1267 := TShapeNode.Create;
Appearance1268 := TAppearanceNode.Create;
Material1269 := TMaterialNode.Create;
Material1269.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1268.Material := Material1269;
{ .SetAppearance }
Shape1267.Appearance := Appearance1268;
Extrusion1270 := TExtrusionNode.Create;
Extrusion1270.SetSpine([Vector3(-0.1949,1.1388,-0.062),Vector3(-0.1959,0.8694,-0.0521)]);
Extrusion1270.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1267.Geometry := Extrusion1270;
{ .AddChildren }
HAnimSegment1261.AddChildren([Shape1267]);
{ .AddChildren }
HAnimJoint1260.AddChildren([HAnimSegment1261]);
HAnimJoint1271 := THAnimJointNode.Create;
HAnimJoint1271.NameField := 'r_radiocarpal';
HAnimJoint1271.Center := Vector3(-0.1959,0.8694,-0.0521);
HAnimSegment1272 := THAnimSegmentNode.Create;
HAnimSegment1272.NameField := 'r_carpal';
Transform1273 := TTransformNode.Create;
Transform1273.Scale := Vector3(0.2,0.2,0.2);
Transform1273.Translation := Vector3(-0.2,0.85,-0.05);
Transform1273.Rotation := Vector4(0,0,1,-3.14);
{ Transform right hand }
Transform1274 := TTransformNode.Create;
Transform1274.Rotation := Vector4(0,1,0,1.57);
{ Transform right hand }
TouchSensor1275 := TTouchSensorNode.Create;
TouchSensor1275.Description := 'Joint r_radiocarpal';
{ .AddChildren }
Transform1274.AddChildren([TouchSensor1275]);
Shape1276 := Shape20;
{ .AddChild }
Transform1274.AddChildren([Shape1276]);
{ .AddChildren }
Transform1273.AddChildren([Transform1274]);
{ .AddChildren }
HAnimSegment1272.AddChildren([Transform1273]);
TouchSensor1277 := TTouchSensorNode.Create;
TouchSensor1277.Description := 'Segment r_carpal';
{ .AddChildren }
HAnimSegment1272.AddChildren([TouchSensor1277]);
Shape1278 := TShapeNode.Create;
Appearance1279 := TAppearanceNode.Create;
Material1280 := TMaterialNode.Create;
Material1280.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1279.Material := Material1280;
{ .SetAppearance }
Shape1278.Appearance := Appearance1279;
Extrusion1281 := TExtrusionNode.Create;
Extrusion1281.SetSpine([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1811,0.6975,-0.0826)]);
Extrusion1281.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1278.Geometry := Extrusion1281;
{ .AddChildren }
HAnimSegment1272.AddChildren([Shape1278]);
TouchSensor1282 := TTouchSensorNode.Create;
TouchSensor1282.Description := 'Segment r_carpal';
{ .AddChildren }
HAnimSegment1272.AddChildren([TouchSensor1282]);
Shape1283 := TShapeNode.Create;
Appearance1284 := TAppearanceNode.Create;
Material1285 := TMaterialNode.Create;
Material1285.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1284.Material := Material1285;
{ .SetAppearance }
Shape1283.Appearance := Appearance1284;
Extrusion1286 := TExtrusionNode.Create;
Extrusion1286.SetSpine([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1811,0.6984,-0.0935)]);
Extrusion1286.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1283.Geometry := Extrusion1286;
{ .AddChildren }
HAnimSegment1272.AddChildren([Shape1283]);
TouchSensor1287 := TTouchSensorNode.Create;
TouchSensor1287.Description := 'Segment r_carpal';
{ .AddChildren }
HAnimSegment1272.AddChildren([TouchSensor1287]);
Shape1288 := TShapeNode.Create;
Appearance1289 := TAppearanceNode.Create;
Material1290 := TMaterialNode.Create;
Material1290.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1289.Material := Material1290;
{ .SetAppearance }
Shape1288.Appearance := Appearance1289;
Extrusion1291 := TExtrusionNode.Create;
Extrusion1291.SetSpine([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1809,0.7,-0.1067)]);
Extrusion1291.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1288.Geometry := Extrusion1291;
{ .AddChildren }
HAnimSegment1272.AddChildren([Shape1288]);
TouchSensor1292 := TTouchSensorNode.Create;
TouchSensor1292.Description := 'Segment r_carpal';
{ .AddChildren }
HAnimSegment1272.AddChildren([TouchSensor1292]);
Shape1293 := TShapeNode.Create;
Appearance1294 := TAppearanceNode.Create;
Material1295 := TMaterialNode.Create;
Material1295.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1294.Material := Material1295;
{ .SetAppearance }
Shape1293.Appearance := Appearance1294;
Extrusion1296 := TExtrusionNode.Create;
Extrusion1296.SetSpine([Vector3(-0.1959,0.8694,-0.0521),Vector3(-0.1809,0.6973,-0.1276)]);
Extrusion1296.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1293.Geometry := Extrusion1296;
{ .AddChildren }
HAnimSegment1272.AddChildren([Shape1293]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimSegment1272]);
HAnimJoint1297 := THAnimJointNode.Create;
HAnimJoint1297.NameField := 'r_midcarpal_1';
HAnimJoint1297.Center := Vector3(-0.1811,0.6975,-0.0826);
HAnimSegment1298 := THAnimSegmentNode.Create;
HAnimSegment1298.NameField := 'r_trapezium';
Transform1299 := TTransformNode.Create;
Transform1299.Translation := Vector3(-0.1811,0.6975,-0.0826);
Transform1300 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1301 := TTouchSensorNode.Create;
TouchSensor1301.Description := 'Joint r_midcarpal_1';
{ .AddChildren }
Transform1300.AddChildren([TouchSensor1301]);
Shape1302 := Shape20;
{ .AddChild }
Transform1300.AddChildren([Shape1302]);
{ .AddChildren }
Transform1299.AddChildren([Transform1300]);
{ .AddChildren }
HAnimSegment1298.AddChildren([Transform1299]);
TouchSensor1303 := TTouchSensorNode.Create;
TouchSensor1303.Description := 'Segment r_trapezium';
{ .AddChildren }
HAnimSegment1298.AddChildren([TouchSensor1303]);
Shape1304 := TShapeNode.Create;
Appearance1305 := TAppearanceNode.Create;
Material1306 := TMaterialNode.Create;
Material1306.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1305.Material := Material1306;
{ .SetAppearance }
Shape1304.Appearance := Appearance1305;
Extrusion1307 := TExtrusionNode.Create;
Extrusion1307.SetSpine([Vector3(-0.1811,0.6975,-0.0826),Vector3(-0.1899,0.8502,-0.0473)]);
Extrusion1307.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1304.Geometry := Extrusion1307;
{ .AddChildren }
HAnimSegment1298.AddChildren([Shape1304]);
{ .AddChildren }
HAnimJoint1297.AddChildren([HAnimSegment1298]);
HAnimJoint1308 := THAnimJointNode.Create;
HAnimJoint1308.NameField := 'r_carpometacarpal_1';
HAnimJoint1308.Center := Vector3(-0.1899,0.8502,-0.0473);
HAnimSegment1309 := THAnimSegmentNode.Create;
HAnimSegment1309.NameField := 'r_metacarpal_1';
Transform1310 := TTransformNode.Create;
Transform1310.Translation := Vector3(-0.1899,0.8502,-0.0473);
Transform1311 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1312 := TTouchSensorNode.Create;
TouchSensor1312.Description := 'Joint r_carpometacarpal_1';
{ .AddChildren }
Transform1311.AddChildren([TouchSensor1312]);
Shape1313 := Shape20;
{ .AddChild }
Transform1311.AddChildren([Shape1313]);
{ .AddChildren }
Transform1310.AddChildren([Transform1311]);
{ .AddChildren }
HAnimSegment1309.AddChildren([Transform1310]);
TouchSensor1314 := TTouchSensorNode.Create;
TouchSensor1314.Description := 'Segment r_metacarpal_1';
{ .AddChildren }
HAnimSegment1309.AddChildren([TouchSensor1314]);
Shape1315 := TShapeNode.Create;
Appearance1316 := TAppearanceNode.Create;
Material1317 := TMaterialNode.Create;
Material1317.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1316.Material := Material1317;
{ .SetAppearance }
Shape1315.Appearance := Appearance1316;
Extrusion1318 := TExtrusionNode.Create;
Extrusion1318.SetSpine([Vector3(-0.1899,0.8502,-0.0473),Vector3(-0.1874,0.8256,0.0306)]);
Extrusion1318.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1315.Geometry := Extrusion1318;
{ .AddChildren }
HAnimSegment1309.AddChildren([Shape1315]);
{ .AddChildren }
HAnimJoint1308.AddChildren([HAnimSegment1309]);
HAnimJoint1319 := THAnimJointNode.Create;
HAnimJoint1319.NameField := 'r_metacarpophalangeal_1';
HAnimJoint1319.Center := Vector3(-0.1874,0.8256,0.0306);
HAnimSegment1320 := THAnimSegmentNode.Create;
HAnimSegment1320.NameField := 'r_carpal_proximal_phalanx_1';
Transform1321 := TTransformNode.Create;
Transform1321.Translation := Vector3(-0.1874,0.8256,0.0306);
Transform1322 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1323 := TTouchSensorNode.Create;
TouchSensor1323.Description := 'Joint r_metacarpophalangeal_1';
{ .AddChildren }
Transform1322.AddChildren([TouchSensor1323]);
Shape1324 := Shape20;
{ .AddChild }
Transform1322.AddChildren([Shape1324]);
{ .AddChildren }
Transform1321.AddChildren([Transform1322]);
{ .AddChildren }
HAnimSegment1320.AddChildren([Transform1321]);
TouchSensor1325 := TTouchSensorNode.Create;
TouchSensor1325.Description := 'Segment r_carpal_proximal_phalanx_1';
{ .AddChildren }
HAnimSegment1320.AddChildren([TouchSensor1325]);
Shape1326 := TShapeNode.Create;
Appearance1327 := TAppearanceNode.Create;
Material1328 := TMaterialNode.Create;
Material1328.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1327.Material := Material1328;
{ .SetAppearance }
Shape1326.Appearance := Appearance1327;
Extrusion1329 := TExtrusionNode.Create;
Extrusion1329.SetSpine([Vector3(-0.1874,0.8256,0.0306),Vector3(-0.1864,0.819,0.0506)]);
Extrusion1329.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1326.Geometry := Extrusion1329;
{ .AddChildren }
HAnimSegment1320.AddChildren([Shape1326]);
{ .AddChildren }
HAnimJoint1319.AddChildren([HAnimSegment1320]);
HAnimJoint1330 := THAnimJointNode.Create;
HAnimJoint1330.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint1330.Center := Vector3(-0.1864,0.819,0.0506);
{ .AddChildren }
HAnimJoint1319.AddChildren([HAnimJoint1330]);
{ .AddChildren }
HAnimJoint1308.AddChildren([HAnimJoint1319]);
{ .AddChildren }
HAnimJoint1297.AddChildren([HAnimJoint1308]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimJoint1297]);
HAnimJoint1331 := THAnimJointNode.Create;
HAnimJoint1331.NameField := 'r_midcarpal_2';
HAnimJoint1331.Center := Vector3(-0.1811,0.6984,-0.0935);
HAnimSegment1332 := THAnimSegmentNode.Create;
HAnimSegment1332.NameField := 'r_trapezoid';
Transform1333 := TTransformNode.Create;
Transform1333.Translation := Vector3(-0.1811,0.6984,-0.0935);
Transform1334 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1335 := TTouchSensorNode.Create;
TouchSensor1335.Description := 'Joint r_midcarpal_2';
{ .AddChildren }
Transform1334.AddChildren([TouchSensor1335]);
Shape1336 := Shape20;
{ .AddChild }
Transform1334.AddChildren([Shape1336]);
{ .AddChildren }
Transform1333.AddChildren([Transform1334]);
{ .AddChildren }
HAnimSegment1332.AddChildren([Transform1333]);
TouchSensor1337 := TTouchSensorNode.Create;
TouchSensor1337.Description := 'Segment r_trapezoid';
{ .AddChildren }
HAnimSegment1332.AddChildren([TouchSensor1337]);
Shape1338 := TShapeNode.Create;
Appearance1339 := TAppearanceNode.Create;
Material1340 := TMaterialNode.Create;
Material1340.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1339.Material := Material1340;
{ .SetAppearance }
Shape1338.Appearance := Appearance1339;
Extrusion1341 := TExtrusionNode.Create;
Extrusion1341.SetSpine([Vector3(-0.1811,0.6984,-0.0935),Vector3(-0.1961,0.8055,-0.0218)]);
Extrusion1341.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1338.Geometry := Extrusion1341;
{ .AddChildren }
HAnimSegment1332.AddChildren([Shape1338]);
{ .AddChildren }
HAnimJoint1331.AddChildren([HAnimSegment1332]);
HAnimJoint1342 := THAnimJointNode.Create;
HAnimJoint1342.NameField := 'r_carpometacarpal_2';
HAnimJoint1342.Center := Vector3(-0.1961,0.8055,-0.0218);
HAnimSegment1343 := THAnimSegmentNode.Create;
HAnimSegment1343.NameField := 'r_metacarpal_2';
Transform1344 := TTransformNode.Create;
Transform1344.Translation := Vector3(-0.1961,0.8055,-0.0218);
Transform1345 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1346 := TTouchSensorNode.Create;
TouchSensor1346.Description := 'Joint r_carpometacarpal_2';
{ .AddChildren }
Transform1345.AddChildren([TouchSensor1346]);
Shape1347 := Shape20;
{ .AddChild }
Transform1345.AddChildren([Shape1347]);
{ .AddChildren }
Transform1344.AddChildren([Transform1345]);
{ .AddChildren }
HAnimSegment1343.AddChildren([Transform1344]);
TouchSensor1348 := TTouchSensorNode.Create;
TouchSensor1348.Description := 'Segment r_metacarpal_2';
{ .AddChildren }
HAnimSegment1343.AddChildren([TouchSensor1348]);
Shape1349 := TShapeNode.Create;
Appearance1350 := TAppearanceNode.Create;
Material1351 := TMaterialNode.Create;
Material1351.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1350.Material := Material1351;
{ .SetAppearance }
Shape1349.Appearance := Appearance1350;
Extrusion1352 := TExtrusionNode.Create;
Extrusion1352.SetSpine([Vector3(-0.1961,0.8055,-0.0218),Vector3(-0.1961,0.7846,-0.0218)]);
Extrusion1352.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1349.Geometry := Extrusion1352;
{ .AddChildren }
HAnimSegment1343.AddChildren([Shape1349]);
{ .AddChildren }
HAnimJoint1342.AddChildren([HAnimSegment1343]);
HAnimJoint1353 := THAnimJointNode.Create;
HAnimJoint1353.NameField := 'r_metacarpophalangeal_2';
HAnimJoint1353.Center := Vector3(-0.1961,0.7846,-0.0218);
HAnimSegment1354 := THAnimSegmentNode.Create;
HAnimSegment1354.NameField := 'r_carpal_proximal_phalanx_2';
Transform1355 := TTransformNode.Create;
Transform1355.Translation := Vector3(-0.1961,0.7846,-0.0218);
Transform1356 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1357 := TTouchSensorNode.Create;
TouchSensor1357.Description := 'Joint r_metacarpophalangeal_2';
{ .AddChildren }
Transform1356.AddChildren([TouchSensor1357]);
Shape1358 := Shape20;
{ .AddChild }
Transform1356.AddChildren([Shape1358]);
{ .AddChildren }
Transform1355.AddChildren([Transform1356]);
{ .AddChildren }
HAnimSegment1354.AddChildren([Transform1355]);
TouchSensor1359 := TTouchSensorNode.Create;
TouchSensor1359.Description := 'Segment r_carpal_proximal_phalanx_2';
{ .AddChildren }
HAnimSegment1354.AddChildren([TouchSensor1359]);
Shape1360 := TShapeNode.Create;
Appearance1361 := TAppearanceNode.Create;
Material1362 := TMaterialNode.Create;
Material1362.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1361.Material := Material1362;
{ .SetAppearance }
Shape1360.Appearance := Appearance1361;
Extrusion1363 := TExtrusionNode.Create;
Extrusion1363.SetSpine([Vector3(-0.1961,0.7846,-0.0218),Vector3(-0.1954,0.7393,-0.0185)]);
Extrusion1363.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1360.Geometry := Extrusion1363;
{ .AddChildren }
HAnimSegment1354.AddChildren([Shape1360]);
{ .AddChildren }
HAnimJoint1353.AddChildren([HAnimSegment1354]);
HAnimJoint1364 := THAnimJointNode.Create;
HAnimJoint1364.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint1364.Center := Vector3(-0.1954,0.7393,-0.0185);
HAnimSegment1365 := THAnimSegmentNode.Create;
HAnimSegment1365.NameField := 'r_carpal_middle_phalanx_2';
Transform1366 := TTransformNode.Create;
Transform1366.Translation := Vector3(-0.1954,0.7393,-0.0185);
Transform1367 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1368 := TTouchSensorNode.Create;
TouchSensor1368.Description := 'Joint r_carpal_proximal_interphalangeal_2';
{ .AddChildren }
Transform1367.AddChildren([TouchSensor1368]);
Shape1369 := Shape20;
{ .AddChild }
Transform1367.AddChildren([Shape1369]);
{ .AddChildren }
Transform1366.AddChildren([Transform1367]);
{ .AddChildren }
HAnimSegment1365.AddChildren([Transform1366]);
TouchSensor1370 := TTouchSensorNode.Create;
TouchSensor1370.Description := 'Segment r_carpal_middle_phalanx_2';
{ .AddChildren }
HAnimSegment1365.AddChildren([TouchSensor1370]);
Shape1371 := TShapeNode.Create;
Appearance1372 := TAppearanceNode.Create;
Material1373 := TMaterialNode.Create;
Material1373.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1372.Material := Material1373;
{ .SetAppearance }
Shape1371.Appearance := Appearance1372;
Extrusion1374 := TExtrusionNode.Create;
Extrusion1374.SetSpine([Vector3(-0.1954,0.7393,-0.0185),Vector3(-0.1945,0.7169,-0.0173)]);
Extrusion1374.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1371.Geometry := Extrusion1374;
{ .AddChildren }
HAnimSegment1365.AddChildren([Shape1371]);
{ .AddChildren }
HAnimJoint1364.AddChildren([HAnimSegment1365]);
HAnimJoint1375 := THAnimJointNode.Create;
HAnimJoint1375.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint1375.Center := Vector3(-0.1945,0.7169,-0.0173);
{ .AddChildren }
HAnimJoint1364.AddChildren([HAnimJoint1375]);
{ .AddChildren }
HAnimJoint1353.AddChildren([HAnimJoint1364]);
{ .AddChildren }
HAnimJoint1342.AddChildren([HAnimJoint1353]);
{ .AddChildren }
HAnimJoint1331.AddChildren([HAnimJoint1342]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimJoint1331]);
HAnimJoint1376 := THAnimJointNode.Create;
HAnimJoint1376.NameField := 'r_midcarpal_3';
HAnimJoint1376.Center := Vector3(-0.1809,0.7,-0.1067);
HAnimSegment1377 := THAnimSegmentNode.Create;
HAnimSegment1377.NameField := 'r_capitate';
Transform1378 := TTransformNode.Create;
Transform1378.Translation := Vector3(-0.1809,0.7,-0.1067);
Transform1379 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1380 := TTouchSensorNode.Create;
TouchSensor1380.Description := 'Joint r_midcarpal_3';
{ .AddChildren }
Transform1379.AddChildren([TouchSensor1380]);
Shape1381 := Shape20;
{ .AddChild }
Transform1379.AddChildren([Shape1381]);
{ .AddChildren }
Transform1378.AddChildren([Transform1379]);
{ .AddChildren }
HAnimSegment1377.AddChildren([Transform1378]);
TouchSensor1382 := TTouchSensorNode.Create;
TouchSensor1382.Description := 'Segment r_capitate';
{ .AddChildren }
HAnimSegment1377.AddChildren([TouchSensor1382]);
Shape1383 := TShapeNode.Create;
Appearance1384 := TAppearanceNode.Create;
Material1385 := TMaterialNode.Create;
Material1385.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1384.Material := Material1385;
{ .SetAppearance }
Shape1383.Appearance := Appearance1384;
Extrusion1386 := TExtrusionNode.Create;
Extrusion1386.SetSpine([Vector3(-0.1809,0.7,-0.1067),Vector3(-0.1972,0.806,-0.0468)]);
Extrusion1386.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1383.Geometry := Extrusion1386;
{ .AddChildren }
HAnimSegment1377.AddChildren([Shape1383]);
{ .AddChildren }
HAnimJoint1376.AddChildren([HAnimSegment1377]);
HAnimJoint1387 := THAnimJointNode.Create;
HAnimJoint1387.NameField := 'r_carpometacarpal_3';
HAnimJoint1387.Center := Vector3(-0.1972,0.806,-0.0468);
HAnimSegment1388 := THAnimSegmentNode.Create;
HAnimSegment1388.NameField := 'r_metacarpal_3';
Transform1389 := TTransformNode.Create;
Transform1389.Translation := Vector3(-0.1972,0.806,-0.0468);
Transform1390 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1391 := TTouchSensorNode.Create;
TouchSensor1391.Description := 'Joint r_carpometacarpal_3';
{ .AddChildren }
Transform1390.AddChildren([TouchSensor1391]);
Shape1392 := Shape20;
{ .AddChild }
Transform1390.AddChildren([Shape1392]);
{ .AddChildren }
Transform1389.AddChildren([Transform1390]);
{ .AddChildren }
HAnimSegment1388.AddChildren([Transform1389]);
TouchSensor1393 := TTouchSensorNode.Create;
TouchSensor1393.Description := 'Segment r_metacarpal_3';
{ .AddChildren }
HAnimSegment1388.AddChildren([TouchSensor1393]);
Shape1394 := TShapeNode.Create;
Appearance1395 := TAppearanceNode.Create;
Material1396 := TMaterialNode.Create;
Material1396.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1395.Material := Material1396;
{ .SetAppearance }
Shape1394.Appearance := Appearance1395;
Extrusion1397 := TExtrusionNode.Create;
Extrusion1397.SetSpine([Vector3(-0.1972,0.806,-0.0468),Vector3(-0.1972,0.7849,-0.0468)]);
Extrusion1397.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1394.Geometry := Extrusion1397;
{ .AddChildren }
HAnimSegment1388.AddChildren([Shape1394]);
{ .AddChildren }
HAnimJoint1387.AddChildren([HAnimSegment1388]);
HAnimJoint1398 := THAnimJointNode.Create;
HAnimJoint1398.NameField := 'r_metacarpophalangeal_3';
HAnimJoint1398.Center := Vector3(-0.1972,0.7849,-0.0468);
HAnimSegment1399 := THAnimSegmentNode.Create;
HAnimSegment1399.NameField := 'r_carpal_proximal_phalanx_3';
Transform1400 := TTransformNode.Create;
Transform1400.Translation := Vector3(-0.1972,0.7849,-0.0468);
Transform1401 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1402 := TTouchSensorNode.Create;
TouchSensor1402.Description := 'Joint r_metacarpophalangeal_3';
{ .AddChildren }
Transform1401.AddChildren([TouchSensor1402]);
Shape1403 := Shape20;
{ .AddChild }
Transform1401.AddChildren([Shape1403]);
{ .AddChildren }
Transform1400.AddChildren([Transform1401]);
{ .AddChildren }
HAnimSegment1399.AddChildren([Transform1400]);
TouchSensor1404 := TTouchSensorNode.Create;
TouchSensor1404.Description := 'Segment r_carpal_proximal_phalanx_3';
{ .AddChildren }
HAnimSegment1399.AddChildren([TouchSensor1404]);
Shape1405 := TShapeNode.Create;
Appearance1406 := TAppearanceNode.Create;
Material1407 := TMaterialNode.Create;
Material1407.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1406.Material := Material1407;
{ .SetAppearance }
Shape1405.Appearance := Appearance1406;
Extrusion1408 := TExtrusionNode.Create;
Extrusion1408.SetSpine([Vector3(-0.1972,0.7849,-0.0468),Vector3(-0.195,0.7304,-0.0441)]);
Extrusion1408.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1405.Geometry := Extrusion1408;
{ .AddChildren }
HAnimSegment1399.AddChildren([Shape1405]);
{ .AddChildren }
HAnimJoint1398.AddChildren([HAnimSegment1399]);
HAnimJoint1409 := THAnimJointNode.Create;
HAnimJoint1409.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint1409.Center := Vector3(-0.195,0.7304,-0.0441);
HAnimSegment1410 := THAnimSegmentNode.Create;
HAnimSegment1410.NameField := 'r_carpal_middle_phalanx_3';
Transform1411 := TTransformNode.Create;
Transform1411.Translation := Vector3(-0.195,0.7304,-0.0441);
Transform1412 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1413 := TTouchSensorNode.Create;
TouchSensor1413.Description := 'Joint r_carpal_proximal_interphalangeal_3';
{ .AddChildren }
Transform1412.AddChildren([TouchSensor1413]);
Shape1414 := Shape20;
{ .AddChild }
Transform1412.AddChildren([Shape1414]);
{ .AddChildren }
Transform1411.AddChildren([Transform1412]);
{ .AddChildren }
HAnimSegment1410.AddChildren([Transform1411]);
TouchSensor1415 := TTouchSensorNode.Create;
TouchSensor1415.Description := 'Segment r_carpal_middle_phalanx_3';
{ .AddChildren }
HAnimSegment1410.AddChildren([TouchSensor1415]);
Shape1416 := TShapeNode.Create;
Appearance1417 := TAppearanceNode.Create;
Material1418 := TMaterialNode.Create;
Material1418.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1417.Material := Material1418;
{ .SetAppearance }
Shape1416.Appearance := Appearance1417;
Extrusion1419 := TExtrusionNode.Create;
Extrusion1419.SetSpine([Vector3(-0.195,0.7304,-0.0441),Vector3(-0.1939,0.7042,-0.0432)]);
Extrusion1419.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1416.Geometry := Extrusion1419;
{ .AddChildren }
HAnimSegment1410.AddChildren([Shape1416]);
{ .AddChildren }
HAnimJoint1409.AddChildren([HAnimSegment1410]);
HAnimJoint1420 := THAnimJointNode.Create;
HAnimJoint1420.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint1420.Center := Vector3(-0.1939,0.7042,-0.0432);
{ .AddChildren }
HAnimJoint1409.AddChildren([HAnimJoint1420]);
{ .AddChildren }
HAnimJoint1398.AddChildren([HAnimJoint1409]);
{ .AddChildren }
HAnimJoint1387.AddChildren([HAnimJoint1398]);
{ .AddChildren }
HAnimJoint1376.AddChildren([HAnimJoint1387]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimJoint1376]);
HAnimJoint1421 := THAnimJointNode.Create;
HAnimJoint1421.NameField := 'r_midcarpal_4_5';
HAnimJoint1421.Center := Vector3(-0.1809,0.6973,-0.1276);
HAnimSegment1422 := THAnimSegmentNode.Create;
HAnimSegment1422.NameField := 'r_hamate';
Transform1423 := TTransformNode.Create;
Transform1423.Translation := Vector3(-0.1809,0.6973,-0.1276);
Transform1424 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1425 := TTouchSensorNode.Create;
TouchSensor1425.Description := 'Joint r_midcarpal_4_5';
{ .AddChildren }
Transform1424.AddChildren([TouchSensor1425]);
Shape1426 := Shape20;
{ .AddChild }
Transform1424.AddChildren([Shape1426]);
{ .AddChildren }
Transform1423.AddChildren([Transform1424]);
{ .AddChildren }
HAnimSegment1422.AddChildren([Transform1423]);
TouchSensor1427 := TTouchSensorNode.Create;
TouchSensor1427.Description := 'Segment r_hamate';
{ .AddChildren }
HAnimSegment1422.AddChildren([TouchSensor1427]);
Shape1428 := TShapeNode.Create;
Appearance1429 := TAppearanceNode.Create;
Material1430 := TMaterialNode.Create;
Material1430.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1429.Material := Material1430;
{ .SetAppearance }
Shape1428.Appearance := Appearance1429;
Extrusion1431 := TExtrusionNode.Create;
Extrusion1431.SetSpine([Vector3(-0.1809,0.6973,-0.1276),Vector3(-0.1951,0.8049,-0.0732)]);
Extrusion1431.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1428.Geometry := Extrusion1431;
{ .AddChildren }
HAnimSegment1422.AddChildren([Shape1428]);
TouchSensor1432 := TTouchSensorNode.Create;
TouchSensor1432.Description := 'Segment r_hamate';
{ .AddChildren }
HAnimSegment1422.AddChildren([TouchSensor1432]);
Shape1433 := TShapeNode.Create;
Appearance1434 := TAppearanceNode.Create;
Material1435 := TMaterialNode.Create;
Material1435.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1434.Material := Material1435;
{ .SetAppearance }
Shape1433.Appearance := Appearance1434;
Extrusion1436 := TExtrusionNode.Create;
Extrusion1436.SetSpine([Vector3(-0.1809,0.6973,-0.1276),Vector3(-0.1926,0.8096,-0.0975)]);
Extrusion1436.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1433.Geometry := Extrusion1436;
{ .AddChildren }
HAnimSegment1422.AddChildren([Shape1433]);
{ .AddChildren }
HAnimJoint1421.AddChildren([HAnimSegment1422]);
HAnimJoint1437 := THAnimJointNode.Create;
HAnimJoint1437.NameField := 'r_carpometacarpal_4';
HAnimJoint1437.Center := Vector3(-0.1951,0.8049,-0.0732);
HAnimSegment1438 := THAnimSegmentNode.Create;
HAnimSegment1438.NameField := 'r_metacarpal_4';
Transform1439 := TTransformNode.Create;
Transform1439.Translation := Vector3(-0.1951,0.8049,-0.0732);
Transform1440 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1441 := TTouchSensorNode.Create;
TouchSensor1441.Description := 'Joint r_carpometacarpal_4';
{ .AddChildren }
Transform1440.AddChildren([TouchSensor1441]);
Shape1442 := Shape20;
{ .AddChild }
Transform1440.AddChildren([Shape1442]);
{ .AddChildren }
Transform1439.AddChildren([Transform1440]);
{ .AddChildren }
HAnimSegment1438.AddChildren([Transform1439]);
TouchSensor1443 := TTouchSensorNode.Create;
TouchSensor1443.Description := 'Segment r_metacarpal_4';
{ .AddChildren }
HAnimSegment1438.AddChildren([TouchSensor1443]);
Shape1444 := TShapeNode.Create;
Appearance1445 := TAppearanceNode.Create;
Material1446 := TMaterialNode.Create;
Material1446.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1445.Material := Material1446;
{ .SetAppearance }
Shape1444.Appearance := Appearance1445;
Extrusion1447 := TExtrusionNode.Create;
Extrusion1447.SetSpine([Vector3(-0.1951,0.8049,-0.0732),Vector3(-0.1951,0.7845,-0.0732)]);
Extrusion1447.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1444.Geometry := Extrusion1447;
{ .AddChildren }
HAnimSegment1438.AddChildren([Shape1444]);
{ .AddChildren }
HAnimJoint1437.AddChildren([HAnimSegment1438]);
HAnimJoint1448 := THAnimJointNode.Create;
HAnimJoint1448.NameField := 'r_metacarpophalangeal_4';
HAnimJoint1448.Center := Vector3(-0.1951,0.7845,-0.0732);
HAnimSegment1449 := THAnimSegmentNode.Create;
HAnimSegment1449.NameField := 'r_carpal_proximal_phalanx_4';
Transform1450 := TTransformNode.Create;
Transform1450.Translation := Vector3(-0.1951,0.7845,-0.0732);
Transform1451 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1452 := TTouchSensorNode.Create;
TouchSensor1452.Description := 'Joint r_metacarpophalangeal_4';
{ .AddChildren }
Transform1451.AddChildren([TouchSensor1452]);
Shape1453 := Shape20;
{ .AddChild }
Transform1451.AddChildren([Shape1453]);
{ .AddChildren }
Transform1450.AddChildren([Transform1451]);
{ .AddChildren }
HAnimSegment1449.AddChildren([Transform1450]);
TouchSensor1454 := TTouchSensorNode.Create;
TouchSensor1454.Description := 'Segment r_carpal_proximal_phalanx_4';
{ .AddChildren }
HAnimSegment1449.AddChildren([TouchSensor1454]);
Shape1455 := TShapeNode.Create;
Appearance1456 := TAppearanceNode.Create;
Material1457 := TMaterialNode.Create;
Material1457.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1456.Material := Material1457;
{ .SetAppearance }
Shape1455.Appearance := Appearance1456;
Extrusion1458 := TExtrusionNode.Create;
Extrusion1458.SetSpine([Vector3(-0.1951,0.7845,-0.0732),Vector3(-0.192,0.7318,-0.0716)]);
Extrusion1458.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1455.Geometry := Extrusion1458;
{ .AddChildren }
HAnimSegment1449.AddChildren([Shape1455]);
{ .AddChildren }
HAnimJoint1448.AddChildren([HAnimSegment1449]);
HAnimJoint1459 := THAnimJointNode.Create;
HAnimJoint1459.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint1459.Center := Vector3(-0.192,0.7318,-0.0716);
HAnimSegment1460 := THAnimSegmentNode.Create;
HAnimSegment1460.NameField := 'r_carpal_middle_phalanx_4';
Transform1461 := TTransformNode.Create;
Transform1461.Translation := Vector3(-0.192,0.7318,-0.0716);
Transform1462 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1463 := TTouchSensorNode.Create;
TouchSensor1463.Description := 'Joint r_carpal_proximal_interphalangeal_4';
{ .AddChildren }
Transform1462.AddChildren([TouchSensor1463]);
Shape1464 := Shape20;
{ .AddChild }
Transform1462.AddChildren([Shape1464]);
{ .AddChildren }
Transform1461.AddChildren([Transform1462]);
{ .AddChildren }
HAnimSegment1460.AddChildren([Transform1461]);
TouchSensor1465 := TTouchSensorNode.Create;
TouchSensor1465.Description := 'Segment r_carpal_middle_phalanx_4';
{ .AddChildren }
HAnimSegment1460.AddChildren([TouchSensor1465]);
Shape1466 := TShapeNode.Create;
Appearance1467 := TAppearanceNode.Create;
Material1468 := TMaterialNode.Create;
Material1468.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1467.Material := Material1468;
{ .SetAppearance }
Shape1466.Appearance := Appearance1467;
Extrusion1469 := TExtrusionNode.Create;
Extrusion1469.SetSpine([Vector3(-0.192,0.7318,-0.0716),Vector3(-0.1908,0.7077,-0.0706)]);
Extrusion1469.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1466.Geometry := Extrusion1469;
{ .AddChildren }
HAnimSegment1460.AddChildren([Shape1466]);
{ .AddChildren }
HAnimJoint1459.AddChildren([HAnimSegment1460]);
HAnimJoint1470 := THAnimJointNode.Create;
HAnimJoint1470.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint1470.Center := Vector3(-0.1908,0.7077,-0.0706);
{ .AddChildren }
HAnimJoint1459.AddChildren([HAnimJoint1470]);
{ .AddChildren }
HAnimJoint1448.AddChildren([HAnimJoint1459]);
{ .AddChildren }
HAnimJoint1437.AddChildren([HAnimJoint1448]);
{ .AddChildren }
HAnimJoint1421.AddChildren([HAnimJoint1437]);
HAnimJoint1471 := THAnimJointNode.Create;
HAnimJoint1471.NameField := 'r_carpometacarpal_5';
HAnimJoint1471.Center := Vector3(-0.1926,0.8096,-0.0975);
HAnimSegment1472 := THAnimSegmentNode.Create;
HAnimSegment1472.NameField := 'r_metacarpal_5';
Transform1473 := TTransformNode.Create;
Transform1473.Translation := Vector3(-0.1926,0.8096,-0.0975);
Transform1474 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1475 := TTouchSensorNode.Create;
TouchSensor1475.Description := 'Joint r_carpometacarpal_5';
{ .AddChildren }
Transform1474.AddChildren([TouchSensor1475]);
Shape1476 := Shape20;
{ .AddChild }
Transform1474.AddChildren([Shape1476]);
{ .AddChildren }
Transform1473.AddChildren([Transform1474]);
{ .AddChildren }
HAnimSegment1472.AddChildren([Transform1473]);
TouchSensor1477 := TTouchSensorNode.Create;
TouchSensor1477.Description := 'Segment r_metacarpal_5';
{ .AddChildren }
HAnimSegment1472.AddChildren([TouchSensor1477]);
Shape1478 := TShapeNode.Create;
Appearance1479 := TAppearanceNode.Create;
Material1480 := TMaterialNode.Create;
Material1480.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1479.Material := Material1480;
{ .SetAppearance }
Shape1478.Appearance := Appearance1479;
Extrusion1481 := TExtrusionNode.Create;
Extrusion1481.SetSpine([Vector3(-0.1926,0.8096,-0.0975),Vector3(-0.1926,0.7896,-0.0975)]);
Extrusion1481.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1478.Geometry := Extrusion1481;
{ .AddChildren }
HAnimSegment1472.AddChildren([Shape1478]);
{ .AddChildren }
HAnimJoint1471.AddChildren([HAnimSegment1472]);
HAnimJoint1482 := THAnimJointNode.Create;
HAnimJoint1482.NameField := 'r_metacarpophalangeal_5';
HAnimJoint1482.Center := Vector3(-0.1926,0.7896,-0.0975);
HAnimSegment1483 := THAnimSegmentNode.Create;
HAnimSegment1483.NameField := 'r_carpal_proximal_phalanx_5';
Transform1484 := TTransformNode.Create;
Transform1484.Translation := Vector3(-0.1926,0.7896,-0.0975);
Transform1485 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1486 := TTouchSensorNode.Create;
TouchSensor1486.Description := 'Joint r_metacarpophalangeal_5';
{ .AddChildren }
Transform1485.AddChildren([TouchSensor1486]);
Shape1487 := Shape20;
{ .AddChild }
Transform1485.AddChildren([Shape1487]);
{ .AddChildren }
Transform1484.AddChildren([Transform1485]);
{ .AddChildren }
HAnimSegment1483.AddChildren([Transform1484]);
TouchSensor1488 := TTouchSensorNode.Create;
TouchSensor1488.Description := 'Segment r_carpal_proximal_phalanx_5';
{ .AddChildren }
HAnimSegment1483.AddChildren([TouchSensor1488]);
Shape1489 := TShapeNode.Create;
Appearance1490 := TAppearanceNode.Create;
Material1491 := TMaterialNode.Create;
Material1491.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1490.Material := Material1491;
{ .SetAppearance }
Shape1489.Appearance := Appearance1490;
Extrusion1492 := TExtrusionNode.Create;
Extrusion1492.SetSpine([Vector3(-0.1926,0.7896,-0.0975),Vector3(-0.1902,0.7483,-0.0963)]);
Extrusion1492.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1489.Geometry := Extrusion1492;
{ .AddChildren }
HAnimSegment1483.AddChildren([Shape1489]);
{ .AddChildren }
HAnimJoint1482.AddChildren([HAnimSegment1483]);
HAnimJoint1493 := THAnimJointNode.Create;
HAnimJoint1493.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint1493.Center := Vector3(-0.1902,0.7483,-0.0963);
HAnimSegment1494 := THAnimSegmentNode.Create;
HAnimSegment1494.NameField := 'r_carpal_middle_phalanx_5';
Transform1495 := TTransformNode.Create;
Transform1495.Translation := Vector3(-0.1902,0.7483,-0.0963);
Transform1496 := TTransformNode.Create;
{ Empty Transform }
TouchSensor1497 := TTouchSensorNode.Create;
TouchSensor1497.Description := 'Joint r_carpal_proximal_interphalangeal_5';
{ .AddChildren }
Transform1496.AddChildren([TouchSensor1497]);
Shape1498 := Shape20;
{ .AddChild }
Transform1496.AddChildren([Shape1498]);
{ .AddChildren }
Transform1495.AddChildren([Transform1496]);
{ .AddChildren }
HAnimSegment1494.AddChildren([Transform1495]);
TouchSensor1499 := TTouchSensorNode.Create;
TouchSensor1499.Description := 'Segment r_carpal_middle_phalanx_5';
{ .AddChildren }
HAnimSegment1494.AddChildren([TouchSensor1499]);
Shape1500 := TShapeNode.Create;
Appearance1501 := TAppearanceNode.Create;
Material1502 := TMaterialNode.Create;
Material1502.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance1501.Material := Material1502;
{ .SetAppearance }
Shape1500.Appearance := Appearance1501;
Extrusion1503 := TExtrusionNode.Create;
Extrusion1503.SetSpine([Vector3(-0.1902,0.7483,-0.0963),Vector3(-0.1908,0.754,-0.096)]);
Extrusion1503.SetCrossSection([Vector2(-0.03,-0.03),Vector2(0.03,-0.03),Vector2(0.03,0.03),Vector2(-0.03,0.03),Vector2(-0.03,-0.03)]);
{ .SetGeometry }
Shape1500.Geometry := Extrusion1503;
{ .AddChildren }
HAnimSegment1494.AddChildren([Shape1500]);
{ .AddChildren }
HAnimJoint1493.AddChildren([HAnimSegment1494]);
HAnimJoint1504 := THAnimJointNode.Create;
HAnimJoint1504.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint1504.Center := Vector3(-0.1908,0.754,-0.096);
{ .AddChildren }
HAnimJoint1493.AddChildren([HAnimJoint1504]);
{ .AddChildren }
HAnimJoint1482.AddChildren([HAnimJoint1493]);
{ .AddChildren }
HAnimJoint1471.AddChildren([HAnimJoint1482]);
{ .AddChildren }
HAnimJoint1421.AddChildren([HAnimJoint1471]);
{ .AddChildren }
HAnimJoint1271.AddChildren([HAnimJoint1421]);
{ .AddChildren }
HAnimJoint1260.AddChildren([HAnimJoint1271]);
{ .AddChildren }
HAnimJoint1249.AddChildren([HAnimJoint1260]);
{ .AddChildren }
HAnimJoint1238.AddChildren([HAnimJoint1249]);
{ .AddChildren }
HAnimJoint1227.AddChildren([HAnimJoint1238]);
{ .AddChildren }
HAnimJoint803.AddChildren([HAnimJoint1227]);
{ .AddChildren }
HAnimJoint792.AddChildren([HAnimJoint803]);
{ .AddChildren }
HAnimJoint781.AddChildren([HAnimJoint792]);
{ .AddChildren }
HAnimJoint770.AddChildren([HAnimJoint781]);
{ .AddChildren }
HAnimJoint759.AddChildren([HAnimJoint770]);
{ .AddChildren }
HAnimJoint748.AddChildren([HAnimJoint759]);
{ .AddChildren }
HAnimJoint737.AddChildren([HAnimJoint748]);
{ .AddChildren }
HAnimJoint726.AddChildren([HAnimJoint737]);
{ .AddChildren }
HAnimJoint715.AddChildren([HAnimJoint726]);
{ .AddChildren }
HAnimJoint704.AddChildren([HAnimJoint715]);
{ .AddChildren }
HAnimJoint693.AddChildren([HAnimJoint704]);
{ .AddChildren }
HAnimJoint682.AddChildren([HAnimJoint693]);
{ .AddChildren }
HAnimJoint671.AddChildren([HAnimJoint682]);
{ .AddChildren }
HAnimJoint660.AddChildren([HAnimJoint671]);
{ .AddChildren }
HAnimJoint649.AddChildren([HAnimJoint660]);
{ .AddChildren }
HAnimJoint638.AddChildren([HAnimJoint649]);
{ .AddChildren }
HAnimJoint627.AddChildren([HAnimJoint638]);
{ .AddChildren }
HAnimJoint39.AddChildren([HAnimJoint627]);
{ .AddSkeleton }
HAnimHumanoid38.SetSkeleton([HAnimJoint39]);
HAnimJoint1505 := HAnimJoint39;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1505);
HAnimJoint1506 := HAnimJoint55;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1506);
HAnimJoint1507 := HAnimJoint71;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1507);
HAnimJoint1508 := HAnimJoint82;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1508);
HAnimJoint1509 := HAnimJoint93;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1509);
HAnimJoint1510 := HAnimJoint109;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1510);
HAnimJoint1511 := HAnimJoint130;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1511);
HAnimJoint1512 := HAnimJoint141;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1512);
HAnimJoint1513 := HAnimJoint152;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1513);
HAnimJoint1514 := HAnimJoint163;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1514);
HAnimJoint1515 := HAnimJoint164;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1515);
HAnimJoint1516 := HAnimJoint175;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1516);
HAnimJoint1517 := HAnimJoint186;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1517);
HAnimJoint1518 := HAnimJoint197;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1518);
HAnimJoint1519 := HAnimJoint208;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1519);
HAnimJoint1520 := HAnimJoint209;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1520);
HAnimJoint1521 := HAnimJoint220;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1521);
HAnimJoint1522 := HAnimJoint231;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1522);
HAnimJoint1523 := HAnimJoint242;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1523);
HAnimJoint1524 := HAnimJoint253;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1524);
HAnimJoint1525 := HAnimJoint254;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1525);
HAnimJoint1526 := HAnimJoint265;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1526);
HAnimJoint1527 := HAnimJoint281;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1527);
HAnimJoint1528 := HAnimJoint292;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1528);
HAnimJoint1529 := HAnimJoint303;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1529);
HAnimJoint1530 := HAnimJoint314;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1530);
HAnimJoint1531 := HAnimJoint315;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1531);
HAnimJoint1532 := HAnimJoint326;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1532);
HAnimJoint1533 := HAnimJoint337;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1533);
HAnimJoint1534 := HAnimJoint348;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1534);
HAnimJoint1535 := HAnimJoint349;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1535);
HAnimJoint1536 := HAnimJoint360;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1536);
HAnimJoint1537 := HAnimJoint371;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1537);
HAnimJoint1538 := HAnimJoint387;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1538);
HAnimJoint1539 := HAnimJoint408;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1539);
HAnimJoint1540 := HAnimJoint419;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1540);
HAnimJoint1541 := HAnimJoint430;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1541);
HAnimJoint1542 := HAnimJoint441;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1542);
HAnimJoint1543 := HAnimJoint442;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1543);
HAnimJoint1544 := HAnimJoint453;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1544);
HAnimJoint1545 := HAnimJoint464;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1545);
HAnimJoint1546 := HAnimJoint475;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1546);
HAnimJoint1547 := HAnimJoint486;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1547);
HAnimJoint1548 := HAnimJoint487;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1548);
HAnimJoint1549 := HAnimJoint498;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1549);
HAnimJoint1550 := HAnimJoint509;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1550);
HAnimJoint1551 := HAnimJoint520;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1551);
HAnimJoint1552 := HAnimJoint531;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1552);
HAnimJoint1553 := HAnimJoint532;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1553);
HAnimJoint1554 := HAnimJoint543;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1554);
HAnimJoint1555 := HAnimJoint559;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1555);
HAnimJoint1556 := HAnimJoint570;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1556);
HAnimJoint1557 := HAnimJoint581;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1557);
HAnimJoint1558 := HAnimJoint592;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1558);
HAnimJoint1559 := HAnimJoint593;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1559);
HAnimJoint1560 := HAnimJoint604;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1560);
HAnimJoint1561 := HAnimJoint615;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1561);
HAnimJoint1562 := HAnimJoint626;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1562);
HAnimJoint1563 := HAnimJoint627;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1563);
HAnimJoint1564 := HAnimJoint638;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1564);
HAnimJoint1565 := HAnimJoint649;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1565);
HAnimJoint1566 := HAnimJoint660;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1566);
HAnimJoint1567 := HAnimJoint671;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1567);
HAnimJoint1568 := HAnimJoint682;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1568);
HAnimJoint1569 := HAnimJoint693;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1569);
HAnimJoint1570 := HAnimJoint704;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1570);
HAnimJoint1571 := HAnimJoint715;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1571);
HAnimJoint1572 := HAnimJoint726;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1572);
HAnimJoint1573 := HAnimJoint737;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1573);
HAnimJoint1574 := HAnimJoint748;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1574);
HAnimJoint1575 := HAnimJoint759;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1575);
HAnimJoint1576 := HAnimJoint770;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1576);
HAnimJoint1577 := HAnimJoint781;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1577);
HAnimJoint1578 := HAnimJoint792;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1578);
HAnimJoint1579 := HAnimJoint803;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1579);
HAnimJoint1580 := HAnimJoint824;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1580);
HAnimJoint1581 := HAnimJoint835;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1581);
HAnimJoint1582 := HAnimJoint846;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1582);
HAnimJoint1583 := HAnimJoint857;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1583);
HAnimJoint1584 := HAnimJoint868;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1584);
HAnimJoint1585 := HAnimJoint879;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1585);
HAnimJoint1586 := HAnimJoint890;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1586);
HAnimJoint1587 := HAnimJoint901;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1587);
HAnimJoint1588 := HAnimJoint942;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1588);
HAnimJoint1589 := HAnimJoint943;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1589);
HAnimJoint1590 := HAnimJoint944;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1590);
HAnimJoint1591 := HAnimJoint945;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1591);
HAnimJoint1592 := HAnimJoint946;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1592);
HAnimJoint1593 := HAnimJoint947;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1593);
HAnimJoint1594 := HAnimJoint948;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1594);
HAnimJoint1595 := HAnimJoint949;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1595);
HAnimJoint1596 := HAnimJoint960;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1596);
HAnimJoint1597 := HAnimJoint971;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1597);
HAnimJoint1598 := HAnimJoint982;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1598);
HAnimJoint1599 := HAnimJoint993;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1599);
HAnimJoint1600 := HAnimJoint1019;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1600);
HAnimJoint1601 := HAnimJoint1030;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1601);
HAnimJoint1602 := HAnimJoint1041;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1602);
HAnimJoint1603 := HAnimJoint1052;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1603);
HAnimJoint1604 := HAnimJoint1053;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1604);
HAnimJoint1605 := HAnimJoint1064;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1605);
HAnimJoint1606 := HAnimJoint1075;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1606);
HAnimJoint1607 := HAnimJoint1086;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1607);
HAnimJoint1608 := HAnimJoint1097;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1608);
HAnimJoint1609 := HAnimJoint1098;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1609);
HAnimJoint1610 := HAnimJoint1109;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1610);
HAnimJoint1611 := HAnimJoint1120;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1611);
HAnimJoint1612 := HAnimJoint1131;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1612);
HAnimJoint1613 := HAnimJoint1142;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1613);
HAnimJoint1614 := HAnimJoint1143;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1614);
HAnimJoint1615 := HAnimJoint1159;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1615);
HAnimJoint1616 := HAnimJoint1170;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1616);
HAnimJoint1617 := HAnimJoint1181;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1617);
HAnimJoint1618 := HAnimJoint1192;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1618);
HAnimJoint1619 := HAnimJoint1193;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1619);
HAnimJoint1620 := HAnimJoint1204;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1620);
HAnimJoint1621 := HAnimJoint1215;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1621);
HAnimJoint1622 := HAnimJoint1226;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1622);
HAnimJoint1623 := HAnimJoint1227;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1623);
HAnimJoint1624 := HAnimJoint1238;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1624);
HAnimJoint1625 := HAnimJoint1249;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1625);
HAnimJoint1626 := HAnimJoint1260;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1626);
HAnimJoint1627 := HAnimJoint1271;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1627);
HAnimJoint1628 := HAnimJoint1297;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1628);
HAnimJoint1629 := HAnimJoint1308;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1629);
HAnimJoint1630 := HAnimJoint1319;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1630);
HAnimJoint1631 := HAnimJoint1330;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1631);
HAnimJoint1632 := HAnimJoint1331;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1632);
HAnimJoint1633 := HAnimJoint1342;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1633);
HAnimJoint1634 := HAnimJoint1353;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1634);
HAnimJoint1635 := HAnimJoint1364;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1635);
HAnimJoint1636 := HAnimJoint1375;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1636);
HAnimJoint1637 := HAnimJoint1376;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1637);
HAnimJoint1638 := HAnimJoint1387;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1638);
HAnimJoint1639 := HAnimJoint1398;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1639);
HAnimJoint1640 := HAnimJoint1409;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1640);
HAnimJoint1641 := HAnimJoint1420;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1641);
HAnimJoint1642 := HAnimJoint1421;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1642);
HAnimJoint1643 := HAnimJoint1437;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1643);
HAnimJoint1644 := HAnimJoint1448;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1644);
HAnimJoint1645 := HAnimJoint1459;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1645);
HAnimJoint1646 := HAnimJoint1470;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1646);
HAnimJoint1647 := HAnimJoint1471;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1647);
HAnimJoint1648 := HAnimJoint1482;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1648);
HAnimJoint1649 := HAnimJoint1493;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1649);
HAnimJoint1650 := HAnimJoint1504;
{ .FdJoints.Add }
HAnimHumanoid38.FdJoints.Add(HAnimJoint1650);
HAnimSegment1651 := HAnimSegment40;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1651);
HAnimSegment1652 := HAnimSegment56;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1652);
HAnimSegment1653 := HAnimSegment72;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1653);
HAnimSegment1654 := HAnimSegment83;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1654);
HAnimSegment1655 := HAnimSegment94;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1655);
HAnimSegment1656 := HAnimSegment110;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1656);
HAnimSegment1657 := HAnimSegment131;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1657);
HAnimSegment1658 := HAnimSegment142;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1658);
HAnimSegment1659 := HAnimSegment153;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1659);
HAnimSegment1660 := HAnimSegment165;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1660);
HAnimSegment1661 := HAnimSegment176;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1661);
HAnimSegment1662 := HAnimSegment187;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1662);
HAnimSegment1663 := HAnimSegment198;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1663);
HAnimSegment1664 := HAnimSegment210;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1664);
HAnimSegment1665 := HAnimSegment221;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1665);
HAnimSegment1666 := HAnimSegment232;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1666);
HAnimSegment1667 := HAnimSegment243;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1667);
HAnimSegment1668 := HAnimSegment255;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1668);
HAnimSegment1669 := HAnimSegment266;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1669);
HAnimSegment1670 := HAnimSegment282;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1670);
HAnimSegment1671 := HAnimSegment293;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1671);
HAnimSegment1672 := HAnimSegment304;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1672);
HAnimSegment1673 := HAnimSegment316;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1673);
HAnimSegment1674 := HAnimSegment327;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1674);
HAnimSegment1675 := HAnimSegment338;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1675);
HAnimSegment1676 := HAnimSegment350;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1676);
HAnimSegment1677 := HAnimSegment361;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1677);
HAnimSegment1678 := HAnimSegment372;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1678);
HAnimSegment1679 := HAnimSegment388;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1679);
HAnimSegment1680 := HAnimSegment409;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1680);
HAnimSegment1681 := HAnimSegment420;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1681);
HAnimSegment1682 := HAnimSegment431;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1682);
HAnimSegment1683 := HAnimSegment443;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1683);
HAnimSegment1684 := HAnimSegment454;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1684);
HAnimSegment1685 := HAnimSegment465;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1685);
HAnimSegment1686 := HAnimSegment476;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1686);
HAnimSegment1687 := HAnimSegment488;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1687);
HAnimSegment1688 := HAnimSegment499;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1688);
HAnimSegment1689 := HAnimSegment510;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1689);
HAnimSegment1690 := HAnimSegment521;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1690);
HAnimSegment1691 := HAnimSegment533;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1691);
HAnimSegment1692 := HAnimSegment544;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1692);
HAnimSegment1693 := HAnimSegment560;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1693);
HAnimSegment1694 := HAnimSegment571;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1694);
HAnimSegment1695 := HAnimSegment582;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1695);
HAnimSegment1696 := HAnimSegment594;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1696);
HAnimSegment1697 := HAnimSegment605;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1697);
HAnimSegment1698 := HAnimSegment616;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1698);
HAnimSegment1699 := HAnimSegment628;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1699);
HAnimSegment1700 := HAnimSegment639;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1700);
HAnimSegment1701 := HAnimSegment650;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1701);
HAnimSegment1702 := HAnimSegment661;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1702);
HAnimSegment1703 := HAnimSegment672;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1703);
HAnimSegment1704 := HAnimSegment683;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1704);
HAnimSegment1705 := HAnimSegment694;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1705);
HAnimSegment1706 := HAnimSegment705;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1706);
HAnimSegment1707 := HAnimSegment716;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1707);
HAnimSegment1708 := HAnimSegment727;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1708);
HAnimSegment1709 := HAnimSegment738;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1709);
HAnimSegment1710 := HAnimSegment749;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1710);
HAnimSegment1711 := HAnimSegment760;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1711);
HAnimSegment1712 := HAnimSegment771;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1712);
HAnimSegment1713 := HAnimSegment782;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1713);
HAnimSegment1714 := HAnimSegment793;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1714);
HAnimSegment1715 := HAnimSegment804;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1715);
HAnimSegment1716 := HAnimSegment825;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1716);
HAnimSegment1717 := HAnimSegment836;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1717);
HAnimSegment1718 := HAnimSegment847;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1718);
HAnimSegment1719 := HAnimSegment858;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1719);
HAnimSegment1720 := HAnimSegment869;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1720);
HAnimSegment1721 := HAnimSegment880;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1721);
HAnimSegment1722 := HAnimSegment891;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1722);
HAnimSegment1723 := HAnimSegment902;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1723);
HAnimSegment1724 := HAnimSegment950;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1724);
HAnimSegment1725 := HAnimSegment961;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1725);
HAnimSegment1726 := HAnimSegment972;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1726);
HAnimSegment1727 := HAnimSegment983;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1727);
HAnimSegment1728 := HAnimSegment994;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1728);
HAnimSegment1729 := HAnimSegment1020;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1729);
HAnimSegment1730 := HAnimSegment1031;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1730);
HAnimSegment1731 := HAnimSegment1042;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1731);
HAnimSegment1732 := HAnimSegment1054;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1732);
HAnimSegment1733 := HAnimSegment1065;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1733);
HAnimSegment1734 := HAnimSegment1076;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1734);
HAnimSegment1735 := HAnimSegment1087;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1735);
HAnimSegment1736 := HAnimSegment1099;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1736);
HAnimSegment1737 := HAnimSegment1110;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1737);
HAnimSegment1738 := HAnimSegment1121;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1738);
HAnimSegment1739 := HAnimSegment1132;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1739);
HAnimSegment1740 := HAnimSegment1144;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1740);
HAnimSegment1741 := HAnimSegment1160;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1741);
HAnimSegment1742 := HAnimSegment1171;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1742);
HAnimSegment1743 := HAnimSegment1182;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1743);
HAnimSegment1744 := HAnimSegment1194;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1744);
HAnimSegment1745 := HAnimSegment1205;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1745);
HAnimSegment1746 := HAnimSegment1216;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1746);
HAnimSegment1747 := HAnimSegment1228;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1747);
HAnimSegment1748 := HAnimSegment1239;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1748);
HAnimSegment1749 := HAnimSegment1250;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1749);
HAnimSegment1750 := HAnimSegment1261;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1750);
HAnimSegment1751 := HAnimSegment1272;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1751);
HAnimSegment1752 := HAnimSegment1298;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1752);
HAnimSegment1753 := HAnimSegment1309;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1753);
HAnimSegment1754 := HAnimSegment1320;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1754);
HAnimSegment1755 := HAnimSegment1332;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1755);
HAnimSegment1756 := HAnimSegment1343;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1756);
HAnimSegment1757 := HAnimSegment1354;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1757);
HAnimSegment1758 := HAnimSegment1365;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1758);
HAnimSegment1759 := HAnimSegment1377;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1759);
HAnimSegment1760 := HAnimSegment1388;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1760);
HAnimSegment1761 := HAnimSegment1399;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1761);
HAnimSegment1762 := HAnimSegment1410;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1762);
HAnimSegment1763 := HAnimSegment1422;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1763);
HAnimSegment1764 := HAnimSegment1438;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1764);
HAnimSegment1765 := HAnimSegment1449;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1765);
HAnimSegment1766 := HAnimSegment1460;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1766);
HAnimSegment1767 := HAnimSegment1472;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1767);
HAnimSegment1768 := HAnimSegment1483;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1768);
HAnimSegment1769 := HAnimSegment1494;
{ .FdSegments.Add }
HAnimHumanoid38.FdSegments.Add(HAnimSegment1769);
{ .AddChildren }
Group11.AddChildren([HAnimHumanoid38]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;

begin
end.
