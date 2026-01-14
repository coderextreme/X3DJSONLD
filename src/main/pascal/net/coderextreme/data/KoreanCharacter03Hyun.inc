function KoreanCharacter03Hyun: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group19: TGroupNode;
WorldInfo20: TWorldInfoNode;
NavigationInfo21: TNavigationInfoNode;
Viewpoint22: TViewpointNode;
HAnimHumanoid23: THAnimHumanoidNode;
MetadataSet24: TMetadataSetNode;
MetadataString25: TMetadataStringNode;
MetadataString26: TMetadataStringNode;
MetadataString27: TMetadataStringNode;
MetadataString28: TMetadataStringNode;
MetadataFloat29: TMetadataFloatNode;
MetadataString30: TMetadataStringNode;
HAnimJoint31: THAnimJointNode;
HAnimSegment32: THAnimSegmentNode;
Transform33: TTransformNode;
Shape34: TShapeNode;
Appearance35: TAppearanceNode;
Material36: TMaterialNode;
ImageTexture37: TImageTextureNode;
IndexedFaceSet38: TIndexedFaceSetNode;
Coordinate39: TCoordinateNode;
TextureCoordinate40: TTextureCoordinateNode;
HAnimJoint41: THAnimJointNode;
HAnimSegment42: THAnimSegmentNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
Material46: TMaterialNode;
ImageTexture47: TImageTextureNode;
IndexedFaceSet48: TIndexedFaceSetNode;
Coordinate49: TCoordinateNode;
TextureCoordinate50: TTextureCoordinateNode;
HAnimJoint51: THAnimJointNode;
HAnimSegment52: THAnimSegmentNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
Appearance55: TAppearanceNode;
Material56: TMaterialNode;
ImageTexture57: TImageTextureNode;
IndexedFaceSet58: TIndexedFaceSetNode;
Coordinate59: TCoordinateNode;
TextureCoordinate60: TTextureCoordinateNode;
HAnimJoint61: THAnimJointNode;
HAnimSegment62: THAnimSegmentNode;
Transform63: TTransformNode;
Shape64: TShapeNode;
Appearance65: TAppearanceNode;
Material66: TMaterialNode;
ImageTexture67: TImageTextureNode;
IndexedFaceSet68: TIndexedFaceSetNode;
Coordinate69: TCoordinateNode;
TextureCoordinate70: TTextureCoordinateNode;
HAnimJoint71: THAnimJointNode;
HAnimSegment72: THAnimSegmentNode;
Transform73: TTransformNode;
Shape74: TShapeNode;
Appearance75: TAppearanceNode;
Material76: TMaterialNode;
ImageTexture77: TImageTextureNode;
IndexedFaceSet78: TIndexedFaceSetNode;
Coordinate79: TCoordinateNode;
TextureCoordinate80: TTextureCoordinateNode;
HAnimJoint81: THAnimJointNode;
HAnimSegment82: THAnimSegmentNode;
Transform83: TTransformNode;
Shape84: TShapeNode;
Appearance85: TAppearanceNode;
Material86: TMaterialNode;
ImageTexture87: TImageTextureNode;
IndexedFaceSet88: TIndexedFaceSetNode;
Coordinate89: TCoordinateNode;
TextureCoordinate90: TTextureCoordinateNode;
HAnimJoint91: THAnimJointNode;
HAnimSegment92: THAnimSegmentNode;
Transform93: TTransformNode;
Shape94: TShapeNode;
Appearance95: TAppearanceNode;
Material96: TMaterialNode;
ImageTexture97: TImageTextureNode;
IndexedFaceSet98: TIndexedFaceSetNode;
Coordinate99: TCoordinateNode;
TextureCoordinate100: TTextureCoordinateNode;
HAnimJoint101: THAnimJointNode;
HAnimSegment102: THAnimSegmentNode;
Transform103: TTransformNode;
Shape104: TShapeNode;
Appearance105: TAppearanceNode;
Material106: TMaterialNode;
ImageTexture107: TImageTextureNode;
IndexedFaceSet108: TIndexedFaceSetNode;
Coordinate109: TCoordinateNode;
TextureCoordinate110: TTextureCoordinateNode;
HAnimJoint111: THAnimJointNode;
HAnimSegment112: THAnimSegmentNode;
Transform113: TTransformNode;
Shape114: TShapeNode;
Appearance115: TAppearanceNode;
Material116: TMaterialNode;
ImageTexture117: TImageTextureNode;
IndexedFaceSet118: TIndexedFaceSetNode;
Coordinate119: TCoordinateNode;
TextureCoordinate120: TTextureCoordinateNode;
HAnimJoint121: THAnimJointNode;
HAnimSegment122: THAnimSegmentNode;
Transform123: TTransformNode;
Shape124: TShapeNode;
Appearance125: TAppearanceNode;
Material126: TMaterialNode;
ImageTexture127: TImageTextureNode;
IndexedFaceSet128: TIndexedFaceSetNode;
Coordinate129: TCoordinateNode;
TextureCoordinate130: TTextureCoordinateNode;
HAnimJoint131: THAnimJointNode;
HAnimSegment132: THAnimSegmentNode;
Transform133: TTransformNode;
Shape134: TShapeNode;
Appearance135: TAppearanceNode;
Material136: TMaterialNode;
ImageTexture137: TImageTextureNode;
IndexedFaceSet138: TIndexedFaceSetNode;
Coordinate139: TCoordinateNode;
TextureCoordinate140: TTextureCoordinateNode;
HAnimJoint141: THAnimJointNode;
HAnimSegment142: THAnimSegmentNode;
Transform143: TTransformNode;
Shape144: TShapeNode;
Appearance145: TAppearanceNode;
Material146: TMaterialNode;
ImageTexture147: TImageTextureNode;
IndexedFaceSet148: TIndexedFaceSetNode;
Coordinate149: TCoordinateNode;
TextureCoordinate150: TTextureCoordinateNode;
HAnimJoint151: THAnimJointNode;
HAnimSegment152: THAnimSegmentNode;
Transform153: TTransformNode;
Shape154: TShapeNode;
Appearance155: TAppearanceNode;
Material156: TMaterialNode;
ImageTexture157: TImageTextureNode;
IndexedFaceSet158: TIndexedFaceSetNode;
Coordinate159: TCoordinateNode;
TextureCoordinate160: TTextureCoordinateNode;
HAnimJoint161: THAnimJointNode;
HAnimSegment162: THAnimSegmentNode;
Transform163: TTransformNode;
Shape164: TShapeNode;
Appearance165: TAppearanceNode;
Material166: TMaterialNode;
ImageTexture167: TImageTextureNode;
IndexedFaceSet168: TIndexedFaceSetNode;
Coordinate169: TCoordinateNode;
TextureCoordinate170: TTextureCoordinateNode;
HAnimJoint171: THAnimJointNode;
HAnimSegment172: THAnimSegmentNode;
Transform173: TTransformNode;
Shape174: TShapeNode;
Appearance175: TAppearanceNode;
Material176: TMaterialNode;
ImageTexture177: TImageTextureNode;
IndexedFaceSet178: TIndexedFaceSetNode;
Coordinate179: TCoordinateNode;
TextureCoordinate180: TTextureCoordinateNode;
HAnimJoint181: THAnimJointNode;
HAnimSegment182: THAnimSegmentNode;
Transform183: TTransformNode;
Shape184: TShapeNode;
Appearance185: TAppearanceNode;
Material186: TMaterialNode;
ImageTexture187: TImageTextureNode;
IndexedFaceSet188: TIndexedFaceSetNode;
Coordinate189: TCoordinateNode;
TextureCoordinate190: TTextureCoordinateNode;
HAnimJoint191: THAnimJointNode;
HAnimSegment192: THAnimSegmentNode;
Transform193: TTransformNode;
Shape194: TShapeNode;
Appearance195: TAppearanceNode;
Material196: TMaterialNode;
ImageTexture197: TImageTextureNode;
IndexedFaceSet198: TIndexedFaceSetNode;
Coordinate199: TCoordinateNode;
TextureCoordinate200: TTextureCoordinateNode;
HAnimJoint201: THAnimJointNode;
HAnimSegment202: THAnimSegmentNode;
Transform203: TTransformNode;
Shape204: TShapeNode;
Appearance205: TAppearanceNode;
Material206: TMaterialNode;
ImageTexture207: TImageTextureNode;
IndexedFaceSet208: TIndexedFaceSetNode;
Coordinate209: TCoordinateNode;
TextureCoordinate210: TTextureCoordinateNode;
HAnimJoint211: THAnimJointNode;
HAnimJoint212: THAnimJointNode;
HAnimJoint213: THAnimJointNode;
HAnimJoint214: THAnimJointNode;
HAnimJoint215: THAnimJointNode;
HAnimJoint216: THAnimJointNode;
HAnimJoint217: THAnimJointNode;
HAnimJoint218: THAnimJointNode;
HAnimJoint219: THAnimJointNode;
HAnimJoint220: THAnimJointNode;
HAnimJoint221: THAnimJointNode;
HAnimJoint222: THAnimJointNode;
HAnimJoint223: THAnimJointNode;
HAnimJoint224: THAnimJointNode;
HAnimJoint225: THAnimJointNode;
HAnimJoint226: THAnimJointNode;
HAnimJoint227: THAnimJointNode;
HAnimJoint228: THAnimJointNode;
HAnimSegment229: THAnimSegmentNode;
HAnimSegment230: THAnimSegmentNode;
HAnimSegment231: THAnimSegmentNode;
HAnimSegment232: THAnimSegmentNode;
HAnimSegment233: THAnimSegmentNode;
HAnimSegment234: THAnimSegmentNode;
HAnimSegment235: THAnimSegmentNode;
HAnimSegment236: THAnimSegmentNode;
HAnimSegment237: THAnimSegmentNode;
HAnimSegment238: THAnimSegmentNode;
HAnimSegment239: THAnimSegmentNode;
HAnimSegment240: THAnimSegmentNode;
HAnimSegment241: THAnimSegmentNode;
HAnimSegment242: THAnimSegmentNode;
HAnimSegment243: THAnimSegmentNode;
HAnimSegment244: THAnimSegmentNode;
HAnimSegment245: THAnimSegmentNode;
HAnimSegment246: THAnimSegmentNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'KoreanCharacter03Hyun.x3d';
X3D0.Meta['creator'] := 'Jin Hoon Lee and Min Joo Lee';
X3D0.Meta['translator'] := 'Chul Hee Jung and Myeong Won Lee';
X3D0.Meta['created'] := '31 March 2011';
X3D0.Meta['translated'] := '1 November 2014';
X3D0.Meta['modified'] := '23 December 2021';
X3D0.Meta['description'] := 'Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.';
X3D0.Meta['reference'] := 'KoreanCharacter00ReadMe.txt';
X3D0.Meta['reference'] := 'KoreanCharacterHumanMotion_Infotech2014_140706.pdf';
X3D0.Meta['reference'] := 'KoreanCharactersIllustrated.pdf';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter03Hyun.x3d';
X3D0.Meta['generator'] := '3DS MAX, https://www.autodesk.com/products/autodesk-3ds-max/overview';
X3D0.Meta['generator'] := 'Suwon University HAnim Editor';
X3D0.Meta['generator'] := 'Gnu Image Manipulation Program, https://www.gimp.org';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group19 := TGroupNode.Create;
WorldInfo20 := TWorldInfoNode.Create;
WorldInfo20.Title := 'KoreanCharacter03Hyun.x3d';
{ .AddChildren }
Group19.AddChildren([WorldInfo20]);
NavigationInfo21 := TNavigationInfoNode.Create;
NavigationInfo21.Speed := 1.5;
{ .AddChildren }
Group19.AddChildren([NavigationInfo21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.CenterOfRotation := Vector3(0,1,0);
Viewpoint22.Description := 'Hyun';
Viewpoint22.Position := Vector3(0,1,3);
{ .AddChildren }
Group19.AddChildren([Viewpoint22]);
HAnimHumanoid23 := THAnimHumanoidNode.Create;
HAnimHumanoid23.NameField := 'Hyun';
HAnimHumanoid23.Scale := Vector3(0.0225,0.0225,0.0225);
HAnimHumanoid23.Version := '2.0';
{ original HAnimHumanoid info='"authorName=Chul Hee Jung and Myeong Won Lee" "authorEmail=myeongwonlee@gmail.com" "creationDate=31 March 2011" "humanoidVersion=2.0" "gender=male" "height=1.5"' }
MetadataSet24 := TMetadataSetNode.Create;
MetadataSet24.NameField := 'HAnimHumanoid.info';
MetadataSet24.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString25 := TMetadataStringNode.Create;
MetadataString25.NameField := 'authorName';
MetadataString25.SetValue(['Chul Hee Jung and Myeong Won Lee']);
{ .SetValue }
MetadataSet24.Value := MetadataString25;
MetadataString26 := TMetadataStringNode.Create;
MetadataString26.NameField := 'authorEmail';
MetadataString26.SetValue(['myeongwonlee@gmail.com']);
{ .SetValue }
MetadataSet24.Value := MetadataString26;
MetadataString27 := TMetadataStringNode.Create;
MetadataString27.NameField := 'creationDate';
MetadataString27.SetValue(['31 March 2011']);
{ .SetValue }
MetadataSet24.Value := MetadataString27;
MetadataString28 := TMetadataStringNode.Create;
MetadataString28.NameField := 'gender';
MetadataString28.SetValue(['male']);
{ .SetValue }
MetadataSet24.Value := MetadataString28;
MetadataFloat29 := TMetadataFloatNode.Create;
MetadataFloat29.NameField := 'height';
MetadataFloat29.SetValue([1.5]);
{ .SetValue }
MetadataSet24.Value := MetadataFloat29;
MetadataString30 := TMetadataStringNode.Create;
MetadataString30.NameField := 'humanoidVersion';
MetadataString30.SetValue(['2.0']);
{ .SetValue }
MetadataSet24.Value := MetadataString30;
{ .SetMetadata }
HAnimHumanoid23.Metadata := MetadataSet24;
HAnimJoint31 := THAnimJointNode.Create;
HAnimJoint31.NameField := 'humanoid_root';
HAnimJoint31.Center := Vector3(0,31.43,-0.5601);
HAnimJoint31.SetUlimit([0,0,0]);
HAnimJoint31.SetLlimit([0,0,0]);
HAnimSegment32 := THAnimSegmentNode.Create;
HAnimSegment32.NameField := 'sacrum';
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0,31.43,-0.5601);
Shape34 := TShapeNode.Create;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
Material36.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance35.Material := Material36;
ImageTexture37 := TImageTextureNode.Create;
ImageTexture37.SetUrl(['images/Hyun.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Hyun.png']);
{ .SetTexture }
Appearance35.Texture := ImageTexture37;
{ .SetAppearance }
Shape34.Appearance := Appearance35;
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet38.CreaseAngle := 1.57;
IndexedFaceSet38.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate39 := TCoordinateNode.Create;
Coordinate39.SetPoint([Vector3(0,0.7566,0.0196),Vector3(0,0.6552,-0.3888),Vector3(-0.3142,0.6552,-0.3341),Vector3(-0.5442,0.6552,-0.2681),Vector3(-0.6284,0.6552,0.0196),Vector3(-0.5442,0.6552,0.3073),Vector3(-0.3142,0.6552,0.3733),Vector3(0,0.6552,0.4281),Vector3(0.3142,0.6552,0.3733),Vector3(0.5442,0.6552,0.3073),Vector3(0.6284,0.6552,0.0196),Vector3(0.5442,0.6552,-0.2681),Vector3(0.3142,0.6552,-0.3341),Vector3(0,0.3783,-0.6351),Vector3(-0.4064,0.3783,-0.5474),Vector3(-0.7039,0.3783,-0.3077),Vector3(-0.8128,0.3783,0.0196),Vector3(-0.7039,0.3783,0.3469),Vector3(-0.4064,0.3783,0.5017),Vector3(0,0.3783,0.5894),Vector3(0.4064,0.3783,0.5017),Vector3(0.7039,0.3783,0.3469),Vector3(0.8128,0.3783,0.0196),Vector3(0.7039,0.3783,-0.3077),Vector3(0.4064,0.3783,-0.5474),Vector3(0,0,-0.6906),Vector3(-0.4693,0,-0.5894),Vector3(-0.8128,0,-0.3127),Vector3(-0.9385,0,0.0196),Vector3(-0.8128,0,0.3976),Vector3(-0.4693,0,0.5894),Vector3(0,0,0.6906),Vector3(0.4693,0,0.5894),Vector3(0.8128,0,0.3976),Vector3(0.9385,0,0.0196),Vector3(0.8128,0,-0.3127),Vector3(0.4693,0,-0.5894),Vector3(0,-0.3783,-0.5894),Vector3(-0.4064,-0.3783,-0.5017),Vector3(-0.7039,-0.3783,-0.262),Vector3(-0.8128,-0.3783,0.0196),Vector3(-0.7039,-0.3783,0.3469),Vector3(-0.4064,-0.3783,0.5017),Vector3(0,-0.3783,0.5894),Vector3(0.4064,-0.3783,0.5017),Vector3(0.7039,-0.3783,0.3469),Vector3(0.8128,-0.3783,0.0196),Vector3(0.7039,-0.3783,-0.262),Vector3(0.4064,-0.3783,-0.5017),Vector3(0,-0.6552,-0.3127),Vector3(-0.2346,-0.6552,-0.262),Vector3(-0.4064,-0.6552,-0.1694),Vector3(-0.4693,-0.6552,0.0196),Vector3(-0.4064,-0.6552,0.2086),Vector3(-0.2346,-0.6552,0.3469),Vector3(0,-0.6552,0.3976),Vector3(0.2346,-0.6552,0.3469),Vector3(0.4064,-0.6552,0.2086),Vector3(0.4693,-0.6552,0.0196),Vector3(0.4064,-0.6552,-0.1694),Vector3(0.2346,-0.6552,-0.262),Vector3(0,-0.7566,0.0196)]);
{ .SetCoord }
IndexedFaceSet38.Coord := Coordinate39;
TextureCoordinate40 := TTextureCoordinateNode.Create;
TextureCoordinate40.SetPoint([Vector2(0.8893,0.532),Vector2(0.8772,0.532),Vector2(0.8772,0.4766),Vector2(0.8772,0.4361),Vector2(0.8772,0.4213),Vector2(0.8772,0.4361),Vector2(0.8772,0.4766),Vector2(0.8772,0.532),Vector2(0.8772,0.4766),Vector2(0.8772,0.4361),Vector2(0.8772,0.4212),Vector2(0.8772,0.4361),Vector2(0.8772,0.4766),Vector2(0.8439,0.532),Vector2(0.8439,0.4604),Vector2(0.8439,0.408),Vector2(0.8439,0.3888),Vector2(0.8439,0.408),Vector2(0.8439,0.4604),Vector2(0.8439,0.532),Vector2(0.8439,0.4604),Vector2(0.8439,0.4079),Vector2(0.8439,0.3887),Vector2(0.8439,0.4079),Vector2(0.8439,0.4604),Vector2(0.7985,0.532),Vector2(0.7985,0.4493),Vector2(0.7985,0.3888),Vector2(0.7985,0.3666),Vector2(0.7985,0.3888),Vector2(0.7985,0.4493),Vector2(0.7985,0.532),Vector2(0.7985,0.4493),Vector2(0.7985,0.3887),Vector2(0.7985,0.3666),Vector2(0.7985,0.3887),Vector2(0.7985,0.4493),Vector2(0.753,0.532),Vector2(0.753,0.4604),Vector2(0.753,0.408),Vector2(0.753,0.3888),Vector2(0.753,0.408),Vector2(0.753,0.4604),Vector2(0.753,0.532),Vector2(0.753,0.4604),Vector2(0.753,0.4079),Vector2(0.753,0.3887),Vector2(0.753,0.4079),Vector2(0.753,0.4604),Vector2(0.7197,0.532),Vector2(0.7197,0.4907),Vector2(0.7197,0.4604),Vector2(0.7197,0.4493),Vector2(0.7197,0.4604),Vector2(0.7197,0.4907),Vector2(0.7197,0.532),Vector2(0.7197,0.4906),Vector2(0.7197,0.4604),Vector2(0.7197,0.4493),Vector2(0.7197,0.4604),Vector2(0.7197,0.4906),Vector2(0.7076,0.532)]);
{ .SetTexCoord }
IndexedFaceSet38.TexCoord := TextureCoordinate40;
{ .SetGeometry }
Shape34.Geometry := IndexedFaceSet38;
{ .AddChild }
Transform33.AddChildren([Shape34]);
{ .AddChildren }
HAnimSegment32.AddChildren([Transform33]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimSegment32]);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.NameField := 'l_hip';
HAnimJoint41.Center := Vector3(3.551,29.33,-0.1267);
HAnimJoint41.SetUlimit([0,0,0]);
HAnimJoint41.SetLlimit([0,0,0]);
HAnimSegment42 := THAnimSegmentNode.Create;
HAnimSegment42.NameField := 'l_thigh';
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(3.551,29.33,-0.1267);
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance45.Material := Material46;
ImageTexture47 := TImageTextureNode.Create;
ImageTexture47 := ImageTexture37;
{ .SetTexture }
Appearance45.Texture := ImageTexture47;
{ .SetAppearance }
Shape44.Appearance := Appearance45;
IndexedFaceSet48 := TIndexedFaceSetNode.Create;
IndexedFaceSet48.SetCoordIndex([31,30,29,-1,31,29,28,-1,28,34,33,-1,31,28,33,-1,31,33,32,-1,8,7,0,-1,0,1,8,-1,9,8,1,-1,1,2,9,-1,10,9,2,-1,2,3,10,-1,11,10,3,-1,3,4,11,-1,12,11,4,-1,4,5,12,-1,13,12,5,-1,5,6,13,-1,7,13,6,-1,6,0,7,-1,15,14,7,-1,7,8,15,-1,16,15,8,-1,8,9,16,-1,17,16,9,-1,9,10,17,-1,18,17,10,-1,10,11,18,-1,19,18,11,-1,11,12,19,-1,20,19,12,-1,12,13,20,-1,14,20,13,-1,13,7,14,-1,22,21,14,-1,14,15,22,-1,23,22,15,-1,15,16,23,-1,24,23,16,-1,16,17,24,-1,25,24,17,-1,17,18,25,-1,26,25,18,-1,18,19,26,-1,27,26,19,-1,19,20,27,-1,21,27,20,-1,20,14,21,-1,1,0,28,-1,28,29,1,-1,2,1,29,-1,29,30,2,-1,3,2,30,-1,30,31,3,-1,4,3,31,-1,31,32,4,-1,5,4,32,-1,32,33,5,-1,6,5,33,-1,33,34,6,-1,0,6,34,-1,34,28,0,-1,35,36,21,-1,21,22,35,-1,37,35,22,-1,22,23,37,-1,38,37,23,-1,23,24,38,-1,39,38,24,-1,24,25,39,-1,40,39,25,-1,25,26,40,-1,41,40,26,-1,26,27,41,-1,36,41,27,-1,27,21,36,-1,36,35,42,-1,35,37,42,-1,37,38,42,-1,38,39,42,-1,39,40,42,-1,40,41,42,-1,41,36,42,-1]);
IndexedFaceSet48.CreaseAngle := 1.57;
IndexedFaceSet48.SetTexCoordIndex([3,2,0,-1,3,0,1,-1,1,6,5,-1,3,1,5,-1,3,5,4,-1,8,9,7,-1,7,10,8,-1,11,8,10,-1,10,12,11,-1,13,11,12,-1,12,14,13,-1,15,13,14,-1,14,16,15,-1,17,15,16,-1,16,18,17,-1,19,17,18,-1,18,20,19,-1,9,19,20,-1,20,7,9,-1,21,22,9,-1,9,8,21,-1,23,21,8,-1,8,11,23,-1,24,23,11,-1,11,13,24,-1,25,24,13,-1,13,15,25,-1,26,25,15,-1,15,17,26,-1,27,26,17,-1,17,19,27,-1,22,27,19,-1,19,9,22,-1,28,29,22,-1,22,21,28,-1,30,28,21,-1,21,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,29,34,27,-1,27,22,29,-1,10,7,1,-1,1,0,10,-1,12,10,0,-1,0,2,12,-1,14,12,2,-1,2,3,14,-1,16,14,3,-1,3,4,16,-1,18,16,4,-1,4,5,18,-1,20,18,5,-1,5,6,20,-1,7,20,6,-1,6,1,7,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,36,35,42,-1,35,37,42,-1,37,38,42,-1,38,39,42,-1,39,40,42,-1,40,41,42,-1,41,36,42,-1]);
Coordinate49 := TCoordinateNode.Create;
Coordinate49.SetPoint([Vector3(2.616,1.989,0),Vector3(1.452,1.989,2.836),Vector3(-1.163,1.989,3.536),Vector3(-2.975,1.989,1.574),Vector3(-2.975,1.989,-1.574),Vector3(-1.163,1.989,-3.536),Vector3(1.452,1.989,-2.836),Vector3(2.616,-1.325,0),Vector3(1.452,-1.325,2.836),Vector3(-1.163,-1.325,3.536),Vector3(-2.975,-1.325,1.574),Vector3(-2.975,-1.325,-1.574),Vector3(-1.163,-1.325,-3.536),Vector3(1.452,-1.325,-2.836),Vector3(2.616,-7.064,0),Vector3(1.452,-7.064,2.836),Vector3(-1.163,-7.064,3.536),Vector3(-2.975,-7.064,1.574),Vector3(-2.975,-7.064,-1.574),Vector3(-1.163,-7.064,-3.536),Vector3(1.452,-7.064,-2.836),Vector3(2.975,-11.91,0),Vector3(1.676,-11.91,3.165),Vector3(-1.243,-11.91,3.947),Vector3(-2.964,-11.91,1.756),Vector3(-2.964,-11.91,-1.756),Vector3(-1.243,-11.91,-3.947),Vector3(1.676,-11.91,-3.165),Vector3(1.812,3.747,0),Vector3(0.9506,3.747,2.098),Vector3(-0.9843,3.747,2.616),Vector3(-2.536,3.747,1.164),Vector3(-2.536,3.747,-1.164),Vector3(-0.9843,3.747,-2.616),Vector3(0.9506,3.747,-2.098),Vector3(0.9661,-14.81,2.027),Vector3(1.798,-14.81,0),Vector3(-0.9034,-14.81,2.528),Vector3(-2.006,-14.81,1.125),Vector3(-2.006,-14.81,-1.125),Vector3(-0.9034,-14.81,-2.528),Vector3(0.9661,-14.81,-2.027),Vector3(-0.2983,-16.16,0)]);
{ .SetCoord }
IndexedFaceSet48.Coord := Coordinate49;
TextureCoordinate50 := TTextureCoordinateNode.Create;
TextureCoordinate50.SetPoint([Vector2(0.7912,0.3382),Vector2(0.7912,0.364),Vector2(0.7912,0.2804),Vector2(0.7912,0.234),Vector2(0.7912,0.234),Vector2(0.7912,0.2804),Vector2(0.7912,0.3382),Vector2(0.7762,0.388),Vector2(0.748,0.3532),Vector2(0.748,0.388),Vector2(0.7762,0.3532),Vector2(0.748,0.275),Vector2(0.7762,0.275),Vector2(0.748,0.2209),Vector2(0.7762,0.2209),Vector2(0.748,0.2209),Vector2(0.7762,0.2209),Vector2(0.748,0.275),Vector2(0.7762,0.275),Vector2(0.748,0.3532),Vector2(0.7762,0.3532),Vector2(0.6856,0.3532),Vector2(0.6856,0.388),Vector2(0.6856,0.275),Vector2(0.6856,0.2209),Vector2(0.6856,0.2209),Vector2(0.6856,0.275),Vector2(0.6856,0.3532),Vector2(0.6315,0.3608),Vector2(0.6315,0.3996),Vector2(0.6315,0.2735),Vector2(0.6315,0.222),Vector2(0.6315,0.222),Vector2(0.6315,0.2735),Vector2(0.6315,0.3608),Vector2(0.6248,0.3387),Vector2(0.6248,0.3636),Vector2(0.6248,0.2828),Vector2(0.6248,0.2498),Vector2(0.6248,0.2498),Vector2(0.6248,0.2828),Vector2(0.6248,0.3387),Vector2(0.6133,0.3009)]);
{ .SetTexCoord }
IndexedFaceSet48.TexCoord := TextureCoordinate50;
{ .SetGeometry }
Shape44.Geometry := IndexedFaceSet48;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ .AddChildren }
HAnimSegment42.AddChildren([Transform43]);
{ .AddChildren }
HAnimJoint41.AddChildren([HAnimSegment42]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'l_knee';
HAnimJoint51.Center := Vector3(3.71,15.48,-0.1446);
HAnimJoint51.SetUlimit([0,0,0]);
HAnimJoint51.SetLlimit([0,0,0]);
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.NameField := 'l_calf';
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(3.71,15.48,-0.1446);
Shape54 := TShapeNode.Create;
Appearance55 := TAppearanceNode.Create;
Material56 := TMaterialNode.Create;
Material56.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance55.Material := Material56;
ImageTexture57 := TImageTextureNode.Create;
ImageTexture57 := ImageTexture37;
{ .SetTexture }
Appearance55.Texture := ImageTexture57;
{ .SetAppearance }
Shape54.Appearance := Appearance55;
IndexedFaceSet58 := TIndexedFaceSetNode.Create;
IndexedFaceSet58.SetCoordIndex([45,44,43,-1,45,43,42,-1,42,48,47,-1,45,42,47,-1,45,47,46,-1,8,7,0,-1,0,1,8,-1,9,8,1,-1,1,2,9,-1,10,9,2,-1,2,3,10,-1,11,10,3,-1,3,4,11,-1,12,11,4,-1,4,5,12,-1,13,12,5,-1,5,6,13,-1,7,13,6,-1,6,0,7,-1,15,14,7,-1,7,8,15,-1,16,15,8,-1,8,9,16,-1,17,16,9,-1,9,10,17,-1,18,17,10,-1,10,11,18,-1,19,18,11,-1,11,12,19,-1,20,19,12,-1,12,13,20,-1,14,20,13,-1,13,7,14,-1,22,21,14,-1,14,15,22,-1,23,22,15,-1,15,16,23,-1,24,23,16,-1,16,17,24,-1,25,24,17,-1,17,18,25,-1,26,25,18,-1,18,19,26,-1,27,26,19,-1,19,20,27,-1,21,27,20,-1,20,14,21,-1,58,59,60,-1,61,62,56,-1,60,61,56,-1,58,60,56,-1,58,56,57,-1,21,22,29,-1,29,28,21,-1,22,23,30,-1,30,29,22,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,21,28,-1,28,34,27,-1,28,29,36,-1,36,35,28,-1,29,30,37,-1,37,36,29,-1,30,31,38,-1,38,37,30,-1,31,32,39,-1,39,38,31,-1,32,33,40,-1,40,39,32,-1,33,34,41,-1,41,40,33,-1,34,28,35,-1,35,41,34,-1,1,0,42,-1,42,43,1,-1,2,1,43,-1,43,44,2,-1,3,2,44,-1,44,45,3,-1,4,3,45,-1,45,46,4,-1,5,4,46,-1,46,47,5,-1,6,5,47,-1,47,48,6,-1,0,6,48,-1,48,42,0,-1,35,36,50,-1,50,49,35,-1,36,37,51,-1,51,50,36,-1,37,38,52,-1,52,51,37,-1,38,39,53,-1,53,52,38,-1,39,40,54,-1,54,53,39,-1,40,41,55,-1,55,54,40,-1,41,35,49,-1,49,55,41,-1,49,50,57,-1,57,56,49,-1,50,51,58,-1,58,57,50,-1,51,52,59,-1,59,58,51,-1,52,53,60,-1,60,59,52,-1,53,54,61,-1,61,60,53,-1,54,55,62,-1,62,61,54,-1,55,49,56,-1,56,62,55,-1]);
IndexedFaceSet58.CreaseAngle := 1.57;
IndexedFaceSet58.SetTexCoordIndex([56,55,53,-1,56,53,52,-1,52,59,58,-1,56,52,58,-1,56,58,57,-1,8,7,0,-1,0,1,8,-1,9,8,1,-1,1,2,9,-1,10,9,2,-1,2,3,10,-1,11,10,3,-1,3,4,11,-1,12,11,4,-1,4,5,12,-1,29,12,5,-1,5,30,29,-1,7,13,6,-1,6,0,7,-1,15,14,7,-1,7,8,15,-1,16,15,8,-1,8,9,16,-1,17,16,9,-1,9,10,17,-1,18,17,10,-1,10,11,18,-1,19,18,11,-1,11,12,19,-1,31,19,12,-1,12,32,31,-1,14,20,13,-1,13,7,14,-1,22,21,14,-1,14,15,22,-1,23,22,15,-1,15,16,23,-1,24,23,16,-1,16,17,24,-1,25,24,17,-1,17,18,25,-1,26,25,18,-1,18,19,26,-1,33,26,19,-1,19,34,33,-1,21,27,20,-1,20,14,21,-1,71,72,73,-1,74,70,68,-1,73,74,68,-1,71,73,68,-1,71,68,69,-1,21,22,37,-1,37,36,21,-1,22,23,39,-1,39,37,22,-1,23,24,40,-1,40,39,23,-1,24,25,41,-1,41,40,24,-1,25,26,42,-1,42,41,25,-1,26,35,43,-1,43,42,26,-1,27,21,36,-1,36,38,27,-1,36,37,45,-1,45,44,36,-1,37,39,47,-1,47,45,37,-1,39,40,48,-1,48,47,39,-1,40,41,49,-1,49,48,40,-1,41,42,50,-1,50,49,41,-1,42,43,51,-1,51,50,42,-1,38,36,44,-1,44,46,38,-1,1,0,52,-1,52,53,1,-1,2,1,53,-1,53,55,2,-1,3,2,55,-1,55,56,3,-1,4,3,56,-1,56,57,4,-1,5,4,57,-1,57,58,5,-1,28,5,58,-1,58,59,28,-1,0,6,54,-1,54,52,0,-1,44,45,61,-1,61,60,44,-1,45,47,63,-1,63,61,45,-1,47,48,64,-1,64,63,47,-1,48,49,65,-1,65,64,48,-1,49,50,66,-1,66,65,49,-1,50,51,67,-1,67,66,50,-1,46,44,60,-1,60,62,46,-1,60,61,69,-1,69,68,60,-1,61,63,71,-1,71,69,61,-1,63,64,72,-1,72,71,63,-1,64,65,73,-1,73,72,64,-1,65,66,74,-1,74,73,65,-1,66,67,75,-1,75,74,66,-1,62,60,68,-1,68,70,62,-1]);
Coordinate59 := TCoordinateNode.Create;
Coordinate59.SetPoint([Vector3(2.616,-0.0823,0.0541),Vector3(1.452,-0.0823,2.89),Vector3(-1.163,-0.0823,3.59),Vector3(-2.975,-0.0823,1.628),Vector3(-2.975,-0.0823,-1.52),Vector3(-1.163,-0.0823,-3.482),Vector3(1.452,-0.0823,-2.782),Vector3(2.616,-3.395,0.0541),Vector3(1.452,-3.395,2.89),Vector3(-1.163,-3.395,3.59),Vector3(-2.975,-3.395,1.628),Vector3(-2.975,-3.395,-1.52),Vector3(-1.163,-3.395,-3.482),Vector3(1.452,-3.395,-2.782),Vector3(2.708,-6.91,0.0541),Vector3(1.545,-6.91,2.89),Vector3(-1.071,-6.91,3.59),Vector3(-2.882,-6.91,1.628),Vector3(-2.882,-6.91,-1.52),Vector3(-1.071,-6.91,-3.482),Vector3(1.545,-6.91,-2.782),Vector3(2.975,-11.77,0.0541),Vector3(1.676,-11.77,3.219),Vector3(-1.243,-11.77,4.001),Vector3(-2.964,-11.77,1.81),Vector3(-2.964,-11.77,-1.702),Vector3(-1.243,-11.77,-3.892),Vector3(1.676,-11.77,-3.111),Vector3(1.896,-7.789,0.0541),Vector3(1.003,-7.789,2.23),Vector3(-1.003,-7.789,2.767),Vector3(-2.326,-7.789,1.261),Vector3(-2.326,-7.789,-1.153),Vector3(-1.003,-7.789,-2.659),Vector3(1.003,-7.789,-2.122),Vector3(1.905,-9.68,0.0541),Vector3(1.082,-9.68,1.782),Vector3(-0.7654,-9.68,2.209),Vector3(-2.247,-9.68,1.013),Vector3(-2.247,-9.68,-0.9049),Vector3(-0.7654,-9.68,-2.101),Vector3(1.082,-9.68,-1.674),Vector3(1.812,1.676,0.0541),Vector3(0.9506,1.676,2.152),Vector3(-0.9843,1.676,2.67),Vector3(-2.536,1.676,1.218),Vector3(-2.536,1.676,-1.11),Vector3(-0.9843,1.676,-2.562),Vector3(0.9506,1.676,-2.044),Vector3(1.628,-12.93,0.0541),Vector3(0.9097,-12.93,1.709),Vector3(-0.7038,-12.93,2.082),Vector3(-1.998,-12.93,1.037),Vector3(-1.998,-12.93,-0.7834),Vector3(-0.7038,-12.93,-1.828),Vector3(0.9097,-12.93,-1.455),Vector3(0.5546,-13.79,0.0541),Vector3(0.2406,-13.79,0.8599),Vector3(-0.465,-13.79,1.023),Vector3(-1.031,-13.79,0.5662),Vector3(-1.031,-13.79,-0.3121),Vector3(-0.465,-13.79,-0.7688),Vector3(0.2406,-13.79,-0.6058)]);
{ .SetCoord }
IndexedFaceSet58.Coord := Coordinate59;
TextureCoordinate60 := TTextureCoordinateNode.Create;
TextureCoordinate60.SetPoint([Vector2(0.6566,0.2462),Vector2(0.6181,0.2462),Vector2(0.5796,0.2462),Vector2(0.5411,0.2462),Vector2(0.5026,0.2462),Vector2(0.4641,0.2462),Vector2(0.6951,0.2462),Vector2(0.6566,0.2951),Vector2(0.6181,0.2951),Vector2(0.5796,0.2951),Vector2(0.5411,0.2951),Vector2(0.5026,0.2951),Vector2(0.4641,0.2951),Vector2(0.6951,0.2951),Vector2(0.6566,0.3439),Vector2(0.6181,0.3439),Vector2(0.5796,0.3439),Vector2(0.5411,0.3439),Vector2(0.5026,0.3439),Vector2(0.4641,0.3439),Vector2(0.6951,0.3439),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.6951,0.3927),Vector2(0.4256,0.2462),Vector2(0.4256,0.2951),Vector2(0.4256,0.2462),Vector2(0.4256,0.3439),Vector2(0.4256,0.2951),Vector2(0.4256,0.3927),Vector2(0.4256,0.3439),Vector2(0.4256,0.3927),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927),Vector2(0.6566,0.2462),Vector2(0.6181,0.2462),Vector2(0.6951,0.2462),Vector2(0.5796,0.2462),Vector2(0.5411,0.2462),Vector2(0.5026,0.2462),Vector2(0.4641,0.2462),Vector2(0.4256,0.2462),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927)]);
{ .SetTexCoord }
IndexedFaceSet58.TexCoord := TextureCoordinate60;
{ .SetGeometry }
Shape54.Geometry := IndexedFaceSet58;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
HAnimSegment52.AddChildren([Transform53]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimSegment52]);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'l_talocrural';
HAnimJoint61.Center := Vector3(3.388,3.168,-0.537);
HAnimJoint61.SetUlimit([0,0,0]);
HAnimJoint61.SetLlimit([0,0,0]);
HAnimSegment62 := THAnimSegmentNode.Create;
HAnimSegment62.NameField := 'l_talus';
Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(3.388,3.168,-0.537);
Shape64 := TShapeNode.Create;
Appearance65 := TAppearanceNode.Create;
Material66 := TMaterialNode.Create;
Material66.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance65.Material := Material66;
ImageTexture67 := TImageTextureNode.Create;
ImageTexture67 := ImageTexture37;
{ .SetTexture }
Appearance65.Texture := ImageTexture67;
{ .SetAppearance }
Shape64.Appearance := Appearance65;
IndexedFaceSet68 := TIndexedFaceSetNode.Create;
IndexedFaceSet68.SetCoordIndex([1,11,12,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,18,2,0,-1,0,17,18,-1,0,1,25,-1,25,17,0,-1,25,1,12,-1,7,13,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,18,21,10,-1,10,2,18,-1,10,21,27,-1,27,7,10,-1,27,13,7,-1,12,11,37,-1,37,35,12,-1,11,13,36,-1,36,37,11,-1,20,18,17,-1,17,14,20,-1,23,14,17,-1,17,25,23,-1,16,20,14,-1,14,15,16,-1,24,15,14,-1,14,23,24,-1,15,24,29,-1,29,16,15,-1,20,19,21,-1,21,18,20,-1,26,27,21,-1,21,19,26,-1,16,22,19,-1,19,20,16,-1,28,26,19,-1,19,22,28,-1,22,16,29,-1,29,28,22,-1,36,32,33,-1,34,30,31,-1,33,34,31,-1,36,33,31,-1,36,31,35,-1,24,23,31,-1,31,30,24,-1,23,25,35,-1,35,31,23,-1,27,26,32,-1,32,36,27,-1,26,28,33,-1,33,32,26,-1,28,29,34,-1,34,33,28,-1,29,24,30,-1,30,34,29,-1,36,35,37,-1,12,35,25,-1,27,36,13,-1]);
IndexedFaceSet68.CreaseAngle := 1.57;
IndexedFaceSet68.SetTexCoordIndex([1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,18,14,25,-1,25,24,18,-1,15,23,26,-1,26,25,15,-1,29,33,32,-1,32,27,29,-1,41,27,32,-1,32,43,41,-1,30,29,27,-1,27,28,30,-1,42,28,27,-1,27,41,42,-1,28,42,48,-1,48,31,28,-1,35,34,37,-1,37,36,35,-1,44,45,37,-1,37,34,44,-1,39,38,34,-1,34,35,39,-1,46,44,34,-1,34,38,46,-1,38,40,47,-1,47,46,38,-1,52,53,54,-1,55,49,50,-1,54,55,50,-1,52,54,50,-1,52,50,51,-1,42,41,50,-1,50,49,42,-1,41,43,51,-1,51,50,41,-1,45,44,53,-1,53,52,45,-1,44,46,54,-1,54,53,44,-1,46,47,55,-1,55,54,46,-1,48,42,49,-1,49,55,48,-1,52,51,56,-1,18,24,43,-1,22,52,23,-1]);
Coordinate69 := TCoordinateNode.Create;
Coordinate69.SetPoint([Vector3(0.8503,-0.0167,-1.492),Vector3(1.443,-0.0167,0.3823),Vector3(0,-0.0167,-1.492),Vector3(1.221,0.6369,0.3141),Vector3(0.7115,0.6369,-1.298),Vector3(0,0.6369,-1.298),Vector3(0,0.6368,1.305),Vector3(-1.443,-0.0167,0.3823),Vector3(-1.221,0.6369,0.3141),Vector3(-0.7115,0.6369,-1.298),Vector3(-0.8503,-0.0167,-1.492),Vector3(0,-0.0167,1.553),Vector3(1.476,-0.2577,1.268),Vector3(-1.476,-0.2577,1.268),Vector3(1.226,-1.676,-2.553),Vector3(1.226,-3.436,-1.492),Vector3(0,-3.436,-1.492),Vector3(0.965,-0.5229,-1.815),Vector3(0,-0.5229,-1.815),Vector3(-1.226,-1.676,-2.553),Vector3(0,-1.676,-2.553),Vector3(-0.965,-0.5229,-1.815),Vector3(-1.226,-3.436,-1.492),Vector3(2.548,-1.676,0.3823),Vector3(1.819,-3.436,0.3823),Vector3(1.78,-0.5229,0.3823),Vector3(-2.548,-1.676,0.3823),Vector3(-1.78,-0.5229,0.3823),Vector3(-1.819,-3.436,0.3823),Vector3(0,-3.436,0.3823),Vector3(1.619,-3.302,1.21),Vector3(2.212,-1.709,1.21),Vector3(-2.212,-1.709,1.21),Vector3(-1.619,-3.302,1.21),Vector3(0,-3.302,1.21),Vector3(1.393,-0.8117,1.248),Vector3(-1.393,-0.8117,1.248),Vector3(0,-0.573,1.515)]);
{ .SetCoord }
IndexedFaceSet68.Coord := Coordinate69;
TextureCoordinate70 := TTextureCoordinateNode.Create;
TextureCoordinate70.SetPoint([Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4637,0.1714),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.3836,0.1404),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.4394,0.1472),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3861,0.1398),Vector2(0.3836,0.1404),Vector2(0.3873,0.0706),Vector2(0.3873,0.0706),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312)]);
{ .SetTexCoord }
IndexedFaceSet68.TexCoord := TextureCoordinate70;
{ .SetGeometry }
Shape64.Geometry := IndexedFaceSet68;
{ .AddChild }
Transform63.AddChildren([Shape64]);
{ .AddChildren }
HAnimSegment62.AddChildren([Transform63]);
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimSegment62]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'l_metatarsophalangeal_2';
HAnimJoint71.Center := Vector3(3.388,2.908,0.7441);
HAnimJoint71.SetUlimit([0,0,0]);
HAnimJoint71.SetLlimit([0,0,0]);
HAnimSegment72 := THAnimSegmentNode.Create;
HAnimSegment72.NameField := 'l_tarsal_proximal_phalanx_2';
Transform73 := TTransformNode.Create;
Transform73.Translation := Vector3(3.388,2.908,0.7441);
Shape74 := TShapeNode.Create;
Appearance75 := TAppearanceNode.Create;
Material76 := TMaterialNode.Create;
Material76.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance75.Material := Material76;
ImageTexture77 := TImageTextureNode.Create;
ImageTexture77 := ImageTexture37;
{ .SetTexture }
Appearance75.Texture := ImageTexture77;
{ .SetAppearance }
Shape74.Appearance := Appearance75;
IndexedFaceSet78 := TIndexedFaceSetNode.Create;
IndexedFaceSet78.SetCoordIndex([3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1]);
IndexedFaceSet78.CreaseAngle := 1.57;
IndexedFaceSet78.SetTexCoordIndex([4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1]);
Coordinate79 := TCoordinateNode.Create;
Coordinate79.SetPoint([Vector3(2.548,-1.416,-0.8988),Vector3(1.819,-3.176,-0.8988),Vector3(0,0.2435,0.2718),Vector3(1.78,-0.2627,-0.8989),Vector3(1.476,0.0025,-0.0134),Vector3(-2.548,-1.416,-0.8988),Vector3(-1.78,-0.2627,-0.8989),Vector3(-1.819,-3.176,-0.8988),Vector3(-1.476,0.0025,-0.0134),Vector3(0,-3.176,-0.8988),Vector3(1.863,-3.176,0.8155),Vector3(-1.863,-3.176,0.8155),Vector3(0,-3.176,0.8155),Vector3(2.094,-1.441,-1.699),Vector3(1.524,-2.561,-1.699),Vector3(0,-2.561,-1.699),Vector3(-1.524,-2.561,-1.699),Vector3(-2.094,-1.441,-1.699),Vector3(-1.516,-0.4945,-1.699),Vector3(1.516,-0.4945,-1.699),Vector3(1.553,-0.5642,2.069),Vector3(1.929,-1.973,3.676),Vector3(1.929,-3.176,3.35),Vector3(0,-1.973,4.847),Vector3(0,-0.4757,3.505),Vector3(1.514,-0.2808,1.028),Vector3(2.316,-1.625,0.8155),Vector3(-1.929,-1.973,3.676),Vector3(-1.553,-0.5642,2.069),Vector3(0,-3.176,4.521),Vector3(-1.929,-3.176,3.35),Vector3(-1.514,-0.2808,1.028),Vector3(-2.316,-1.625,0.8155),Vector3(0,-3.176,3.35),Vector3(0,-0.0239,1.474)]);
{ .SetCoord }
IndexedFaceSet78.Coord := Coordinate79;
TextureCoordinate80 := TTextureCoordinateNode.Create;
TextureCoordinate80.SetPoint([Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.4411,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.4868,0.1432),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.532,0.098),Vector2(0.5645,0.0707),Vector2(0.4885,0.102),Vector2(0.5026,0.044),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.5645,0.0707),Vector2(0.5026,0.044),Vector2(0.4885,0.102),Vector2(0.532,0.098),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.5487,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432)]);
{ .SetTexCoord }
IndexedFaceSet78.TexCoord := TextureCoordinate80;
{ .SetGeometry }
Shape74.Geometry := IndexedFaceSet78;
{ .AddChild }
Transform73.AddChildren([Shape74]);
{ .AddChildren }
HAnimSegment72.AddChildren([Transform73]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimSegment72]);
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimJoint71]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimJoint61]);
{ .AddChildren }
HAnimJoint41.AddChildren([HAnimJoint51]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimJoint41]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'r_hip';
HAnimJoint81.Center := Vector3(-3.551,29.33,-0.1267);
HAnimJoint81.SetUlimit([0,0,0]);
HAnimJoint81.SetLlimit([0,0,0]);
HAnimSegment82 := THAnimSegmentNode.Create;
HAnimSegment82.NameField := 'r_thigh';
Transform83 := TTransformNode.Create;
Transform83.Translation := Vector3(-3.551,29.33,-0.1267);
Shape84 := TShapeNode.Create;
Appearance85 := TAppearanceNode.Create;
Material86 := TMaterialNode.Create;
Material86.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance85.Material := Material86;
ImageTexture87 := TImageTextureNode.Create;
ImageTexture87 := ImageTexture37;
{ .SetTexture }
Appearance85.Texture := ImageTexture87;
{ .SetAppearance }
Shape84.Appearance := Appearance85;
IndexedFaceSet88 := TIndexedFaceSetNode.Create;
IndexedFaceSet88.SetCoordIndex([31,32,33,-1,33,34,28,-1,31,33,28,-1,31,28,29,-1,31,29,30,-1,8,1,0,-1,0,7,8,-1,9,2,1,-1,1,8,9,-1,10,3,2,-1,2,9,10,-1,11,4,3,-1,3,10,11,-1,12,5,4,-1,4,11,12,-1,13,6,5,-1,5,12,13,-1,7,0,6,-1,6,13,7,-1,15,8,7,-1,7,14,15,-1,16,9,8,-1,8,15,16,-1,17,10,9,-1,9,16,17,-1,18,11,10,-1,10,17,18,-1,19,12,11,-1,11,18,19,-1,20,13,12,-1,12,19,20,-1,14,7,13,-1,13,20,14,-1,22,15,14,-1,14,21,22,-1,23,16,15,-1,15,22,23,-1,24,17,16,-1,16,23,24,-1,25,18,17,-1,17,24,25,-1,26,19,18,-1,18,25,26,-1,27,20,19,-1,19,26,27,-1,21,14,20,-1,20,27,21,-1,1,29,28,-1,28,0,1,-1,2,30,29,-1,29,1,2,-1,3,31,30,-1,30,2,3,-1,4,32,31,-1,31,3,4,-1,5,33,32,-1,32,4,5,-1,6,34,33,-1,33,5,6,-1,0,28,34,-1,34,6,0,-1,35,22,21,-1,21,36,35,-1,37,23,22,-1,22,35,37,-1,38,24,23,-1,23,37,38,-1,39,25,24,-1,24,38,39,-1,40,26,25,-1,25,39,40,-1,41,27,26,-1,26,40,41,-1,36,21,27,-1,27,41,36,-1,36,42,35,-1,35,42,37,-1,37,42,38,-1,38,42,39,-1,39,42,40,-1,40,42,41,-1,41,42,36,-1]);
IndexedFaceSet88.CreaseAngle := 1.57;
IndexedFaceSet88.SetTexCoordIndex([3,4,5,-1,5,6,1,-1,3,5,1,-1,3,1,0,-1,3,0,2,-1,8,10,7,-1,7,9,8,-1,11,12,10,-1,10,8,11,-1,13,14,12,-1,12,11,13,-1,15,16,14,-1,14,13,15,-1,17,18,16,-1,16,15,17,-1,19,20,18,-1,18,17,19,-1,9,7,20,-1,20,19,9,-1,21,8,9,-1,9,22,21,-1,23,11,8,-1,8,21,23,-1,24,13,11,-1,11,23,24,-1,25,15,13,-1,13,24,25,-1,26,17,15,-1,15,25,26,-1,27,19,17,-1,17,26,27,-1,22,9,19,-1,19,27,22,-1,28,21,22,-1,22,29,28,-1,30,23,21,-1,21,28,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,29,22,27,-1,27,34,29,-1,10,0,1,-1,1,7,10,-1,12,2,0,-1,0,10,12,-1,14,3,2,-1,2,12,14,-1,16,4,3,-1,3,14,16,-1,18,5,4,-1,4,16,18,-1,20,6,5,-1,5,18,20,-1,7,1,6,-1,6,20,7,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,36,42,35,-1,35,42,37,-1,37,42,38,-1,38,42,39,-1,39,42,40,-1,40,42,41,-1,41,42,36,-1]);
Coordinate89 := TCoordinateNode.Create;
Coordinate89.SetPoint([Vector3(-2.616,1.989,0),Vector3(-1.452,1.989,2.836),Vector3(1.163,1.989,3.536),Vector3(2.975,1.989,1.574),Vector3(2.975,1.989,-1.574),Vector3(1.163,1.989,-3.536),Vector3(-1.452,1.989,-2.836),Vector3(-2.616,-1.325,0),Vector3(-1.452,-1.325,2.836),Vector3(1.163,-1.325,3.536),Vector3(2.975,-1.325,1.574),Vector3(2.975,-1.325,-1.574),Vector3(1.163,-1.325,-3.536),Vector3(-1.452,-1.325,-2.836),Vector3(-2.616,-7.064,0),Vector3(-1.452,-7.064,2.836),Vector3(1.163,-7.064,3.536),Vector3(2.975,-7.064,1.574),Vector3(2.975,-7.064,-1.574),Vector3(1.163,-7.064,-3.536),Vector3(-1.452,-7.064,-2.836),Vector3(-2.975,-11.91,0),Vector3(-1.676,-11.91,3.165),Vector3(1.243,-11.91,3.947),Vector3(2.964,-11.91,1.756),Vector3(2.964,-11.91,-1.756),Vector3(1.243,-11.91,-3.947),Vector3(-1.676,-11.91,-3.165),Vector3(-1.812,3.747,0),Vector3(-0.9506,3.747,2.098),Vector3(0.9843,3.747,2.616),Vector3(2.536,3.747,1.164),Vector3(2.536,3.747,-1.164),Vector3(0.9843,3.747,-2.616),Vector3(-0.9506,3.747,-2.098),Vector3(-0.9661,-14.81,2.027),Vector3(-1.798,-14.81,0),Vector3(0.9034,-14.81,2.528),Vector3(2.006,-14.81,1.125),Vector3(2.006,-14.81,-1.125),Vector3(0.9034,-14.81,-2.528),Vector3(-0.9661,-14.81,-2.027),Vector3(0.2983,-16.16,0)]);
{ .SetCoord }
IndexedFaceSet88.Coord := Coordinate89;
TextureCoordinate90 := TTextureCoordinateNode.Create;
TextureCoordinate90.SetPoint([Vector2(0.7912,0.3382),Vector2(0.7912,0.364),Vector2(0.7912,0.2804),Vector2(0.7912,0.234),Vector2(0.7912,0.234),Vector2(0.7912,0.2804),Vector2(0.7912,0.3382),Vector2(0.7762,0.388),Vector2(0.748,0.3532),Vector2(0.748,0.388),Vector2(0.7762,0.3532),Vector2(0.748,0.275),Vector2(0.7762,0.275),Vector2(0.748,0.2209),Vector2(0.7762,0.2209),Vector2(0.748,0.2209),Vector2(0.7762,0.2209),Vector2(0.748,0.275),Vector2(0.7762,0.275),Vector2(0.748,0.3532),Vector2(0.7762,0.3532),Vector2(0.6856,0.3532),Vector2(0.6856,0.388),Vector2(0.6856,0.275),Vector2(0.6856,0.2209),Vector2(0.6856,0.2209),Vector2(0.6856,0.275),Vector2(0.6856,0.3532),Vector2(0.6315,0.3608),Vector2(0.6315,0.3996),Vector2(0.6315,0.2735),Vector2(0.6315,0.222),Vector2(0.6315,0.222),Vector2(0.6315,0.2735),Vector2(0.6315,0.3608),Vector2(0.6248,0.3387),Vector2(0.6248,0.3636),Vector2(0.6248,0.2828),Vector2(0.6248,0.2498),Vector2(0.6248,0.2498),Vector2(0.6248,0.2828),Vector2(0.6248,0.3387),Vector2(0.6133,0.3009)]);
{ .SetTexCoord }
IndexedFaceSet88.TexCoord := TextureCoordinate90;
{ .SetGeometry }
Shape84.Geometry := IndexedFaceSet88;
{ .AddChild }
Transform83.AddChildren([Shape84]);
{ .AddChildren }
HAnimSegment82.AddChildren([Transform83]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimSegment82]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'r_knee';
HAnimJoint91.Center := Vector3(-3.71,15.48,-0.1446);
HAnimJoint91.SetUlimit([0,0,0]);
HAnimJoint91.SetLlimit([0,0,0]);
HAnimSegment92 := THAnimSegmentNode.Create;
HAnimSegment92.NameField := 'r_calf';
Transform93 := TTransformNode.Create;
Transform93.Translation := Vector3(-3.71,15.48,-0.1446);
Shape94 := TShapeNode.Create;
Appearance95 := TAppearanceNode.Create;
Material96 := TMaterialNode.Create;
Material96.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance95.Material := Material96;
ImageTexture97 := TImageTextureNode.Create;
ImageTexture97 := ImageTexture37;
{ .SetTexture }
Appearance95.Texture := ImageTexture97;
{ .SetAppearance }
Shape94.Appearance := Appearance95;
IndexedFaceSet98 := TIndexedFaceSetNode.Create;
IndexedFaceSet98.SetCoordIndex([45,46,47,-1,47,48,42,-1,45,47,42,-1,45,42,43,-1,45,43,44,-1,8,1,0,-1,0,7,8,-1,9,2,1,-1,1,8,9,-1,10,3,2,-1,2,9,10,-1,11,4,3,-1,3,10,11,-1,12,5,4,-1,4,11,12,-1,13,6,5,-1,5,12,13,-1,7,0,6,-1,6,13,7,-1,15,8,7,-1,7,14,15,-1,16,9,8,-1,8,15,16,-1,17,10,9,-1,9,16,17,-1,18,11,10,-1,10,17,18,-1,19,12,11,-1,11,18,19,-1,20,13,12,-1,12,19,20,-1,14,7,13,-1,13,20,14,-1,22,15,14,-1,14,21,22,-1,23,16,15,-1,15,22,23,-1,24,17,16,-1,16,23,24,-1,25,18,17,-1,17,24,25,-1,26,19,18,-1,18,25,26,-1,27,20,19,-1,19,26,27,-1,21,14,20,-1,20,27,21,-1,58,57,56,-1,56,62,61,-1,56,61,60,-1,58,56,60,-1,58,60,59,-1,21,28,29,-1,29,22,21,-1,22,29,30,-1,30,23,22,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,28,-1,28,21,27,-1,28,35,36,-1,36,29,28,-1,29,36,37,-1,37,30,29,-1,30,37,38,-1,38,31,30,-1,31,38,39,-1,39,32,31,-1,32,39,40,-1,40,33,32,-1,33,40,41,-1,41,34,33,-1,34,41,35,-1,35,28,34,-1,1,43,42,-1,42,0,1,-1,2,44,43,-1,43,1,2,-1,3,45,44,-1,44,2,3,-1,4,46,45,-1,45,3,4,-1,5,47,46,-1,46,4,5,-1,6,48,47,-1,47,5,6,-1,0,42,48,-1,48,6,0,-1,35,49,50,-1,50,36,35,-1,36,50,51,-1,51,37,36,-1,37,51,52,-1,52,38,37,-1,38,52,53,-1,53,39,38,-1,39,53,54,-1,54,40,39,-1,40,54,55,-1,55,41,40,-1,41,55,49,-1,49,35,41,-1,49,56,57,-1,57,50,49,-1,50,57,58,-1,58,51,50,-1,51,58,59,-1,59,52,51,-1,52,59,60,-1,60,53,52,-1,53,60,61,-1,61,54,53,-1,54,61,62,-1,62,55,54,-1,55,62,56,-1,56,49,55,-1]);
IndexedFaceSet98.CreaseAngle := 1.57;
IndexedFaceSet98.SetTexCoordIndex([56,57,58,-1,58,59,52,-1,56,58,52,-1,56,52,53,-1,56,53,55,-1,8,1,0,-1,0,7,8,-1,9,2,1,-1,1,8,9,-1,10,3,2,-1,2,9,10,-1,11,4,3,-1,3,10,11,-1,12,5,4,-1,4,11,12,-1,29,30,5,-1,5,12,29,-1,7,0,6,-1,6,13,7,-1,15,8,7,-1,7,14,15,-1,16,9,8,-1,8,15,16,-1,17,10,9,-1,9,16,17,-1,18,11,10,-1,10,17,18,-1,19,12,11,-1,11,18,19,-1,31,32,12,-1,12,19,31,-1,14,7,13,-1,13,20,14,-1,22,15,14,-1,14,21,22,-1,23,16,15,-1,15,22,23,-1,24,17,16,-1,16,23,24,-1,25,18,17,-1,17,24,25,-1,26,19,18,-1,18,25,26,-1,33,34,19,-1,19,26,33,-1,21,14,20,-1,20,27,21,-1,71,69,68,-1,68,70,74,-1,68,74,73,-1,71,68,73,-1,71,73,72,-1,21,36,37,-1,37,22,21,-1,22,37,39,-1,39,23,22,-1,23,39,40,-1,40,24,23,-1,24,40,41,-1,41,25,24,-1,25,41,42,-1,42,26,25,-1,26,42,43,-1,43,35,26,-1,27,38,36,-1,36,21,27,-1,36,44,45,-1,45,37,36,-1,37,45,47,-1,47,39,37,-1,39,47,48,-1,48,40,39,-1,40,48,49,-1,49,41,40,-1,41,49,50,-1,50,42,41,-1,42,50,51,-1,51,43,42,-1,38,46,44,-1,44,36,38,-1,1,53,52,-1,52,0,1,-1,2,55,53,-1,53,1,2,-1,3,56,55,-1,55,2,3,-1,4,57,56,-1,56,3,4,-1,5,58,57,-1,57,4,5,-1,28,59,58,-1,58,5,28,-1,0,52,54,-1,54,6,0,-1,44,60,61,-1,61,45,44,-1,45,61,63,-1,63,47,45,-1,47,63,64,-1,64,48,47,-1,48,64,65,-1,65,49,48,-1,49,65,66,-1,66,50,49,-1,50,66,67,-1,67,51,50,-1,46,62,60,-1,60,44,46,-1,60,68,69,-1,69,61,60,-1,61,69,71,-1,71,63,61,-1,63,71,72,-1,72,64,63,-1,64,72,73,-1,73,65,64,-1,65,73,74,-1,74,66,65,-1,66,74,75,-1,75,67,66,-1,62,70,68,-1,68,60,62,-1]);
Coordinate99 := TCoordinateNode.Create;
Coordinate99.SetPoint([Vector3(-2.616,-0.0823,0.0541),Vector3(-1.452,-0.0823,2.89),Vector3(1.163,-0.0823,3.59),Vector3(2.975,-0.0823,1.628),Vector3(2.975,-0.0823,-1.52),Vector3(1.163,-0.0823,-3.482),Vector3(-1.452,-0.0823,-2.782),Vector3(-2.616,-3.395,0.0541),Vector3(-1.452,-3.395,2.89),Vector3(1.163,-3.395,3.59),Vector3(2.975,-3.395,1.628),Vector3(2.975,-3.395,-1.52),Vector3(1.163,-3.395,-3.482),Vector3(-1.452,-3.395,-2.782),Vector3(-2.708,-6.91,0.0541),Vector3(-1.545,-6.91,2.89),Vector3(1.071,-6.91,3.59),Vector3(2.882,-6.91,1.628),Vector3(2.882,-6.91,-1.52),Vector3(1.071,-6.91,-3.482),Vector3(-1.545,-6.91,-2.782),Vector3(-2.975,-11.77,0.0541),Vector3(-1.676,-11.77,3.219),Vector3(1.243,-11.77,4.001),Vector3(2.964,-11.77,1.81),Vector3(2.964,-11.77,-1.702),Vector3(1.243,-11.77,-3.892),Vector3(-1.676,-11.77,-3.111),Vector3(-1.896,-7.789,0.0541),Vector3(-1.003,-7.789,2.23),Vector3(1.003,-7.789,2.767),Vector3(2.326,-7.789,1.261),Vector3(2.326,-7.789,-1.153),Vector3(1.003,-7.789,-2.659),Vector3(-1.003,-7.789,-2.122),Vector3(-1.905,-9.68,0.0541),Vector3(-1.082,-9.68,1.782),Vector3(0.7654,-9.68,2.209),Vector3(2.247,-9.68,1.013),Vector3(2.247,-9.68,-0.9049),Vector3(0.7654,-9.68,-2.101),Vector3(-1.082,-9.68,-1.674),Vector3(-1.812,1.676,0.0541),Vector3(-0.9506,1.676,2.152),Vector3(0.9843,1.676,2.67),Vector3(2.536,1.676,1.218),Vector3(2.536,1.676,-1.11),Vector3(0.9843,1.676,-2.562),Vector3(-0.9506,1.676,-2.044),Vector3(-1.628,-12.93,0.0541),Vector3(-0.9097,-12.93,1.709),Vector3(0.7038,-12.93,2.082),Vector3(1.998,-12.93,1.037),Vector3(1.998,-12.93,-0.7834),Vector3(0.7038,-12.93,-1.828),Vector3(-0.9097,-12.93,-1.455),Vector3(-0.5546,-13.79,0.0541),Vector3(-0.2406,-13.79,0.8599),Vector3(0.465,-13.79,1.023),Vector3(1.031,-13.79,0.5662),Vector3(1.031,-13.79,-0.3121),Vector3(0.465,-13.79,-0.7688),Vector3(-0.2406,-13.79,-0.6058)]);
{ .SetCoord }
IndexedFaceSet98.Coord := Coordinate99;
TextureCoordinate100 := TTextureCoordinateNode.Create;
TextureCoordinate100.SetPoint([Vector2(0.6566,0.2462),Vector2(0.6181,0.2462),Vector2(0.5796,0.2462),Vector2(0.5411,0.2462),Vector2(0.5026,0.2462),Vector2(0.4641,0.2462),Vector2(0.6951,0.2462),Vector2(0.6566,0.2951),Vector2(0.6181,0.2951),Vector2(0.5796,0.2951),Vector2(0.5411,0.2951),Vector2(0.5026,0.2951),Vector2(0.4641,0.2951),Vector2(0.6951,0.2951),Vector2(0.6566,0.3439),Vector2(0.6181,0.3439),Vector2(0.5796,0.3439),Vector2(0.5411,0.3439),Vector2(0.5026,0.3439),Vector2(0.4641,0.3439),Vector2(0.6951,0.3439),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.6951,0.3927),Vector2(0.4256,0.2462),Vector2(0.4256,0.2951),Vector2(0.4256,0.2462),Vector2(0.4256,0.3439),Vector2(0.4256,0.2951),Vector2(0.4256,0.3927),Vector2(0.4256,0.3439),Vector2(0.4256,0.3927),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927),Vector2(0.6566,0.2462),Vector2(0.6181,0.2462),Vector2(0.6951,0.2462),Vector2(0.5796,0.2462),Vector2(0.5411,0.2462),Vector2(0.5026,0.2462),Vector2(0.4641,0.2462),Vector2(0.4256,0.2462),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927),Vector2(0.6566,0.3927),Vector2(0.6181,0.3927),Vector2(0.6951,0.3927),Vector2(0.5796,0.3927),Vector2(0.5411,0.3927),Vector2(0.5026,0.3927),Vector2(0.4641,0.3927),Vector2(0.4256,0.3927)]);
{ .SetTexCoord }
IndexedFaceSet98.TexCoord := TextureCoordinate100;
{ .SetGeometry }
Shape94.Geometry := IndexedFaceSet98;
{ .AddChild }
Transform93.AddChildren([Shape94]);
{ .AddChildren }
HAnimSegment92.AddChildren([Transform93]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimSegment92]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.NameField := 'r_talocrural';
HAnimJoint101.Center := Vector3(-3.388,3.168,-0.537);
HAnimJoint101.SetUlimit([0,0,0]);
HAnimJoint101.SetLlimit([0,0,0]);
HAnimSegment102 := THAnimSegmentNode.Create;
HAnimSegment102.NameField := 'r_talus';
Transform103 := TTransformNode.Create;
Transform103.Translation := Vector3(-3.388,3.168,-0.537);
Shape104 := TShapeNode.Create;
Appearance105 := TAppearanceNode.Create;
Material106 := TMaterialNode.Create;
Material106.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance105.Material := Material106;
ImageTexture107 := TImageTextureNode.Create;
ImageTexture107 := ImageTexture37;
{ .SetTexture }
Appearance105.Texture := ImageTexture107;
{ .SetAppearance }
Shape104.Appearance := Appearance105;
IndexedFaceSet108 := TIndexedFaceSetNode.Create;
IndexedFaceSet108.SetCoordIndex([1,12,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,18,17,0,-1,0,2,18,-1,0,17,25,-1,25,1,0,-1,25,12,1,-1,7,11,13,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,18,2,10,-1,10,21,18,-1,10,7,27,-1,27,21,10,-1,27,7,13,-1,12,35,37,-1,37,11,12,-1,11,37,36,-1,36,13,11,-1,20,14,17,-1,17,18,20,-1,23,25,17,-1,17,14,23,-1,16,15,14,-1,14,20,16,-1,24,23,14,-1,14,15,24,-1,15,16,29,-1,29,24,15,-1,20,18,21,-1,21,19,20,-1,26,19,21,-1,21,27,26,-1,16,20,19,-1,19,22,16,-1,28,22,19,-1,19,26,28,-1,22,28,29,-1,29,16,22,-1,36,35,31,-1,31,30,34,-1,31,34,33,-1,36,31,33,-1,36,33,32,-1,24,30,31,-1,31,23,24,-1,23,31,35,-1,35,25,23,-1,27,36,32,-1,32,26,27,-1,26,32,33,-1,33,28,26,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,24,29,-1,36,37,35,-1,12,25,35,-1,27,13,36,-1]);
IndexedFaceSet108.CreaseAngle := 1.57;
IndexedFaceSet108.SetTexCoordIndex([1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,18,24,25,-1,25,14,18,-1,15,25,26,-1,26,23,15,-1,29,27,32,-1,32,33,29,-1,41,43,32,-1,32,27,41,-1,30,28,27,-1,27,29,30,-1,42,41,27,-1,27,28,42,-1,28,31,48,-1,48,42,28,-1,35,36,37,-1,37,34,35,-1,44,34,37,-1,37,45,44,-1,39,35,34,-1,34,38,39,-1,46,38,34,-1,34,44,46,-1,38,46,47,-1,47,40,38,-1,52,51,50,-1,50,49,55,-1,50,55,54,-1,52,50,54,-1,52,54,53,-1,42,49,50,-1,50,41,42,-1,41,50,51,-1,51,43,41,-1,45,52,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,47,46,-1,48,55,49,-1,49,42,48,-1,52,56,51,-1,18,43,24,-1,22,23,52,-1]);
Coordinate109 := TCoordinateNode.Create;
Coordinate109.SetPoint([Vector3(-0.8503,-0.0167,-1.492),Vector3(-1.443,-0.0167,0.3823),Vector3(0,-0.0167,-1.492),Vector3(-1.221,0.6369,0.3141),Vector3(-0.7115,0.6369,-1.298),Vector3(0,0.6369,-1.298),Vector3(0,0.6368,1.305),Vector3(1.443,-0.0167,0.3823),Vector3(1.221,0.6369,0.3141),Vector3(0.7115,0.6369,-1.298),Vector3(0.8503,-0.0167,-1.492),Vector3(0,-0.0167,1.553),Vector3(-1.476,-0.2577,1.268),Vector3(1.476,-0.2577,1.268),Vector3(-1.226,-1.676,-2.553),Vector3(-1.226,-3.436,-1.492),Vector3(0,-3.436,-1.492),Vector3(-0.965,-0.5229,-1.815),Vector3(0,-0.5229,-1.815),Vector3(1.226,-1.676,-2.553),Vector3(0,-1.676,-2.553),Vector3(0.965,-0.5229,-1.815),Vector3(1.226,-3.436,-1.492),Vector3(-2.548,-1.676,0.3823),Vector3(-1.819,-3.436,0.3823),Vector3(-1.78,-0.5229,0.3823),Vector3(2.548,-1.676,0.3823),Vector3(1.78,-0.5229,0.3823),Vector3(1.819,-3.436,0.3823),Vector3(0,-3.436,0.3823),Vector3(-1.619,-3.302,1.21),Vector3(-2.212,-1.709,1.21),Vector3(2.212,-1.709,1.21),Vector3(1.619,-3.302,1.21),Vector3(0,-3.302,1.21),Vector3(-1.393,-0.8117,1.248),Vector3(1.393,-0.8117,1.248),Vector3(0,-0.573,1.515)]);
{ .SetCoord }
IndexedFaceSet108.Coord := Coordinate109;
TextureCoordinate110 := TTextureCoordinateNode.Create;
TextureCoordinate110.SetPoint([Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4637,0.1714),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.3836,0.1404),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.4394,0.1472),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3861,0.1398),Vector2(0.3836,0.1404),Vector2(0.3873,0.0706),Vector2(0.3873,0.0706),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312)]);
{ .SetTexCoord }
IndexedFaceSet108.TexCoord := TextureCoordinate110;
{ .SetGeometry }
Shape104.Geometry := IndexedFaceSet108;
{ .AddChild }
Transform103.AddChildren([Shape104]);
{ .AddChildren }
HAnimSegment102.AddChildren([Transform103]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimSegment102]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.NameField := 'r_metatarsophalangeal_2';
HAnimJoint111.Center := Vector3(-3.388,2.908,0.7441);
HAnimJoint111.SetUlimit([0,0,0]);
HAnimJoint111.SetLlimit([0,0,0]);
HAnimSegment112 := THAnimSegmentNode.Create;
HAnimSegment112.NameField := 'r_tarsal_proximal_phalanx_2';
Transform113 := TTransformNode.Create;
Transform113.Translation := Vector3(-3.388,2.908,0.7441);
Shape114 := TShapeNode.Create;
Appearance115 := TAppearanceNode.Create;
Material116 := TMaterialNode.Create;
Material116.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance115.Material := Material116;
ImageTexture117 := TImageTextureNode.Create;
ImageTexture117 := ImageTexture37;
{ .SetTexture }
Appearance115.Texture := ImageTexture117;
{ .SetAppearance }
Shape114.Appearance := Appearance115;
IndexedFaceSet118 := TIndexedFaceSetNode.Create;
IndexedFaceSet118.SetCoordIndex([25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1]);
IndexedFaceSet118.CreaseAngle := 1.57;
IndexedFaceSet118.SetTexCoordIndex([12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1]);
Coordinate119 := TCoordinateNode.Create;
Coordinate119.SetPoint([Vector3(-2.548,-1.416,-0.8988),Vector3(-1.819,-3.176,-0.8988),Vector3(0,0.2435,0.2718),Vector3(-1.78,-0.2627,-0.8989),Vector3(-1.476,0.0025,-0.0134),Vector3(2.548,-1.416,-0.8988),Vector3(1.78,-0.2627,-0.8989),Vector3(1.819,-3.176,-0.8988),Vector3(1.476,0.0025,-0.0134),Vector3(0,-3.176,-0.8988),Vector3(-1.863,-3.176,0.8155),Vector3(1.863,-3.176,0.8155),Vector3(0,-3.176,0.8155),Vector3(-2.094,-1.441,-1.699),Vector3(-1.524,-2.561,-1.699),Vector3(0,-2.561,-1.699),Vector3(1.524,-2.561,-1.699),Vector3(2.094,-1.441,-1.699),Vector3(1.516,-0.4945,-1.699),Vector3(-1.516,-0.4945,-1.699),Vector3(-1.553,-0.5642,2.069),Vector3(-1.929,-1.973,3.676),Vector3(-1.929,-3.176,3.35),Vector3(0,-1.973,4.847),Vector3(0,-0.4757,3.505),Vector3(-1.514,-0.2808,1.028),Vector3(-2.316,-1.625,0.8155),Vector3(1.929,-1.973,3.676),Vector3(1.553,-0.5642,2.069),Vector3(0,-3.176,4.521),Vector3(1.929,-3.176,3.35),Vector3(1.514,-0.2808,1.028),Vector3(2.316,-1.625,0.8155),Vector3(0,-3.176,3.35),Vector3(0,-0.0239,1.474)]);
{ .SetCoord }
IndexedFaceSet118.Coord := Coordinate119;
TextureCoordinate120 := TTextureCoordinateNode.Create;
TextureCoordinate120.SetPoint([Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.4411,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.4868,0.1432),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.532,0.098),Vector2(0.5645,0.0707),Vector2(0.4885,0.102),Vector2(0.5026,0.044),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.5645,0.0707),Vector2(0.5026,0.044),Vector2(0.4885,0.102),Vector2(0.532,0.098),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.5487,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432)]);
{ .SetTexCoord }
IndexedFaceSet118.TexCoord := TextureCoordinate120;
{ .SetGeometry }
Shape114.Geometry := IndexedFaceSet118;
{ .AddChild }
Transform113.AddChildren([Shape114]);
{ .AddChildren }
HAnimSegment112.AddChildren([Transform113]);
{ .AddChildren }
HAnimJoint111.AddChildren([HAnimSegment112]);
{ .AddChildren }
HAnimJoint101.AddChildren([HAnimJoint111]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint101]);
{ .AddChildren }
HAnimJoint81.AddChildren([HAnimJoint91]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimJoint81]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.NameField := 'sacroiliac';
HAnimJoint121.Center := Vector3(0,26.58,-0.5601);
HAnimJoint121.SetUlimit([0,0,0]);
HAnimJoint121.SetLlimit([0,0,0]);
HAnimSegment122 := THAnimSegmentNode.Create;
HAnimSegment122.NameField := 'pelvis';
Transform123 := TTransformNode.Create;
Transform123.Translation := Vector3(0,26.58,-0.5601);
Shape124 := TShapeNode.Create;
Appearance125 := TAppearanceNode.Create;
Material126 := TMaterialNode.Create;
Material126.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance125.Material := Material126;
ImageTexture127 := TImageTextureNode.Create;
ImageTexture127 := ImageTexture37;
{ .SetTexture }
Appearance125.Texture := ImageTexture127;
{ .SetAppearance }
Shape124.Appearance := Appearance125;
IndexedFaceSet128 := TIndexedFaceSetNode.Create;
IndexedFaceSet128.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet128.CreaseAngle := 1.57;
IndexedFaceSet128.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,14,2,1,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,4,16,17,-1,17,5,4,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,8,20,21,-1,21,9,8,-1,9,21,22,-1,22,10,9,-1,10,22,23,-1,23,11,10,-1,11,23,24,-1,24,12,11,-1,12,24,13,-1,13,1,12,-1,13,25,26,-1,26,14,13,-1,14,26,27,-1,27,15,14,-1,15,27,28,-1,28,16,15,-1,16,28,29,-1,29,17,16,-1,17,29,30,-1,30,18,17,-1,18,30,31,-1,31,19,18,-1,19,31,32,-1,32,20,19,-1,20,32,33,-1,33,21,20,-1,21,33,34,-1,34,22,21,-1,22,34,35,-1,35,23,22,-1,23,35,36,-1,36,24,23,-1,24,36,25,-1,25,13,24,-1,25,37,38,-1,38,26,25,-1,26,38,39,-1,39,27,26,-1,27,39,40,-1,40,28,27,-1,28,40,41,-1,41,29,28,-1,29,41,42,-1,42,30,29,-1,30,42,43,-1,43,31,30,-1,31,43,44,-1,44,32,31,-1,32,44,45,-1,45,33,32,-1,33,45,46,-1,46,34,33,-1,34,46,47,-1,47,35,34,-1,35,47,48,-1,48,36,35,-1,36,48,37,-1,37,25,36,-1,37,49,50,-1,50,38,37,-1,38,50,51,-1,51,39,38,-1,39,51,52,-1,52,40,39,-1,40,52,53,-1,53,41,40,-1,41,53,54,-1,54,42,41,-1,42,54,55,-1,55,43,42,-1,43,55,56,-1,56,44,43,-1,44,56,57,-1,57,45,44,-1,45,57,58,-1,58,46,45,-1,46,58,59,-1,59,47,46,-1,47,59,60,-1,60,48,47,-1,48,60,49,-1,49,37,48,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate129 := TCoordinateNode.Create;
Coordinate129.SetPoint([Vector3(0,9.7,0.1258),Vector3(0,9.049,-2.496),Vector3(-2.017,9.049,-2.145),Vector3(-3.494,9.049,-1.721),Vector3(-4.034,9.049,0.1258),Vector3(-3.494,9.049,1.973),Vector3(-2.017,9.049,2.397),Vector3(0,9.049,2.748),Vector3(2.017,9.049,2.397),Vector3(3.494,9.049,1.973),Vector3(4.034,9.049,0.1258),Vector3(3.494,9.049,-1.721),Vector3(2.017,9.049,-2.145),Vector3(0,7.271,-4.077),Vector3(-2.609,7.271,-3.514),Vector3(-4.519,7.271,-1.975),Vector3(-5.218,7.271,0.1258),Vector3(-4.519,7.271,2.227),Vector3(-2.609,7.271,3.22),Vector3(0,7.271,3.783),Vector3(2.609,7.271,3.22),Vector3(4.519,7.271,2.227),Vector3(5.218,7.271,0.1258),Vector3(4.519,7.271,-1.975),Vector3(2.609,7.271,-3.514),Vector3(0,4.843,-4.434),Vector3(-3.012,4.843,-3.783),Vector3(-5.218,4.843,-2.007),Vector3(-6.025,4.843,0.1258),Vector3(-5.218,4.843,2.552),Vector3(-3.012,4.843,3.783),Vector3(0,4.843,4.434),Vector3(3.012,4.843,3.783),Vector3(5.218,4.843,2.552),Vector3(6.025,4.843,0.1258),Vector3(5.218,4.843,-2.007),Vector3(3.012,4.843,-3.783),Vector3(0,2.414,-3.783),Vector3(-2.609,2.414,-3.22),Vector3(-4.519,2.414,-1.682),Vector3(-5.218,2.414,0.1258),Vector3(-4.519,2.414,2.227),Vector3(-2.609,2.414,3.22),Vector3(0,2.414,3.783),Vector3(2.609,2.414,3.22),Vector3(4.519,2.414,2.227),Vector3(5.218,2.414,0.1258),Vector3(4.519,2.414,-1.682),Vector3(2.609,2.414,-3.22),Vector3(0,0.6366,-2.007),Vector3(-1.506,0.6366,-1.682),Vector3(-2.609,0.6366,-1.087),Vector3(-3.012,0.6366,0.1258),Vector3(-2.609,0.6366,1.339),Vector3(-1.506,0.6366,2.227),Vector3(0,0.6366,2.552),Vector3(1.506,0.6366,2.227),Vector3(2.609,0.6366,1.339),Vector3(3.012,0.6366,0.1258),Vector3(2.609,0.6366,-1.087),Vector3(1.506,0.6366,-1.682),Vector3(0,-0.0142,0.1258)]);
{ .SetCoord }
IndexedFaceSet128.Coord := Coordinate129;
TextureCoordinate130 := TTextureCoordinateNode.Create;
TextureCoordinate130.SetPoint([Vector2(0.8893,0.532),Vector2(0.8772,0.532),Vector2(0.8772,0.4766),Vector2(0.8772,0.4361),Vector2(0.8772,0.4213),Vector2(0.8772,0.4361),Vector2(0.8772,0.4766),Vector2(0.8772,0.532),Vector2(0.8772,0.4766),Vector2(0.8772,0.4361),Vector2(0.8772,0.4212),Vector2(0.8772,0.4361),Vector2(0.8772,0.4766),Vector2(0.8439,0.532),Vector2(0.8439,0.4604),Vector2(0.8439,0.408),Vector2(0.8439,0.3888),Vector2(0.8439,0.408),Vector2(0.8439,0.4604),Vector2(0.8439,0.532),Vector2(0.8439,0.4604),Vector2(0.8439,0.4079),Vector2(0.8439,0.3887),Vector2(0.8439,0.4079),Vector2(0.8439,0.4604),Vector2(0.7985,0.532),Vector2(0.7985,0.4493),Vector2(0.7985,0.3888),Vector2(0.7985,0.3666),Vector2(0.7985,0.3888),Vector2(0.7985,0.4493),Vector2(0.7985,0.532),Vector2(0.7985,0.4493),Vector2(0.7985,0.3887),Vector2(0.7985,0.3666),Vector2(0.7985,0.3887),Vector2(0.7985,0.4493),Vector2(0.753,0.532),Vector2(0.753,0.4604),Vector2(0.753,0.408),Vector2(0.753,0.3888),Vector2(0.753,0.408),Vector2(0.753,0.4604),Vector2(0.753,0.532),Vector2(0.753,0.4604),Vector2(0.753,0.4079),Vector2(0.753,0.3887),Vector2(0.753,0.4079),Vector2(0.753,0.4604),Vector2(0.7197,0.532),Vector2(0.7197,0.4907),Vector2(0.7197,0.4604),Vector2(0.7197,0.4493),Vector2(0.7197,0.4604),Vector2(0.7197,0.4907),Vector2(0.7197,0.532),Vector2(0.7197,0.4906),Vector2(0.7197,0.4604),Vector2(0.7197,0.4493),Vector2(0.7197,0.4604),Vector2(0.7197,0.4906),Vector2(0.7076,0.532)]);
{ .SetTexCoord }
IndexedFaceSet128.TexCoord := TextureCoordinate130;
{ .SetGeometry }
Shape124.Geometry := IndexedFaceSet128;
{ .AddChild }
Transform123.AddChildren([Shape124]);
{ .AddChildren }
HAnimSegment122.AddChildren([Transform123]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimSegment122]);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.NameField := 'l_shoulder';
HAnimJoint131.Center := Vector3(5.502,45.779999,-0.3559);
HAnimJoint131.SetUlimit([0,0,0]);
HAnimJoint131.SetLlimit([0,0,0]);
HAnimSegment132 := THAnimSegmentNode.Create;
HAnimSegment132.NameField := 'l_upperarm';
Transform133 := TTransformNode.Create;
Transform133.Translation := Vector3(5.502,45.779999,-0.3559);
Shape134 := TShapeNode.Create;
Appearance135 := TAppearanceNode.Create;
Material136 := TMaterialNode.Create;
Material136.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance135.Material := Material136;
ImageTexture137 := TImageTextureNode.Create;
ImageTexture137 := ImageTexture37;
{ .SetTexture }
Appearance135.Texture := ImageTexture137;
{ .SetAppearance }
Shape134.Appearance := Appearance135;
IndexedFaceSet138 := TIndexedFaceSetNode.Create;
IndexedFaceSet138.SetCoordIndex([2,1,0,-1,0,4,3,-1,2,0,3,-1,6,5,0,-1,0,1,6,-1,7,6,1,-1,1,2,7,-1,8,7,2,-1,2,3,8,-1,9,8,3,-1,3,4,9,-1,5,9,4,-1,4,0,5,-1,11,10,5,-1,5,6,11,-1,12,11,6,-1,6,7,12,-1,13,12,7,-1,7,8,13,-1,14,13,8,-1,8,9,14,-1,10,14,9,-1,9,5,10,-1,16,15,10,-1,10,11,16,-1,17,16,11,-1,11,12,17,-1,18,17,12,-1,12,13,18,-1,19,18,13,-1,13,14,19,-1,15,19,14,-1,14,10,15,-1,36,37,38,-1,38,39,35,-1,36,38,35,-1,15,16,21,-1,21,20,15,-1,16,17,22,-1,22,21,16,-1,17,18,23,-1,23,22,17,-1,18,19,24,-1,24,23,18,-1,19,15,20,-1,20,24,19,-1,20,21,26,-1,26,25,20,-1,21,22,27,-1,27,26,21,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,20,25,-1,25,29,24,-1,25,26,31,-1,31,30,25,-1,26,27,32,-1,32,31,26,-1,27,28,33,-1,33,32,27,-1,28,29,34,-1,34,33,28,-1,29,25,30,-1,30,34,29,-1,30,31,36,-1,36,35,30,-1,31,32,37,-1,37,36,31,-1,32,33,38,-1,38,37,32,-1,33,34,39,-1,39,38,33,-1,34,30,35,-1,35,39,34,-1]);
IndexedFaceSet138.CreaseAngle := 1.57;
IndexedFaceSet138.SetTexCoordIndex([2,0,1,-1,1,61,3,-1,2,1,3,-1,5,6,1,-1,1,0,5,-1,7,5,0,-1,0,2,7,-1,8,7,2,-1,2,3,8,-1,9,26,25,-1,25,4,9,-1,6,9,4,-1,4,1,6,-1,10,11,6,-1,6,5,10,-1,12,10,5,-1,5,7,12,-1,13,12,7,-1,7,8,13,-1,14,28,27,-1,27,9,14,-1,11,14,9,-1,9,6,11,-1,15,16,11,-1,11,10,15,-1,17,15,10,-1,10,12,17,-1,18,17,12,-1,12,13,18,-1,19,30,29,-1,29,14,19,-1,16,19,14,-1,14,11,16,-1,54,35,36,-1,36,37,53,-1,54,36,53,-1,16,15,20,-1,20,21,16,-1,15,17,22,-1,22,20,15,-1,17,18,23,-1,23,22,17,-1,31,19,24,-1,24,32,31,-1,19,16,21,-1,21,24,19,-1,38,39,40,-1,40,41,38,-1,55,42,43,-1,43,56,55,-1,42,44,45,-1,45,43,42,-1,44,46,47,-1,47,45,44,-1,46,38,41,-1,41,47,46,-1,41,40,48,-1,48,49,41,-1,57,43,50,-1,50,58,57,-1,43,45,51,-1,51,50,43,-1,45,47,52,-1,52,51,45,-1,47,41,49,-1,49,52,47,-1,49,48,34,-1,34,33,49,-1,59,50,35,-1,35,60,59,-1,50,51,36,-1,36,35,50,-1,51,52,37,-1,37,36,51,-1,52,49,33,-1,33,37,52,-1]);
Coordinate139 := TCoordinateNode.Create;
Coordinate139.SetPoint([Vector3(1.441,1.487,-1.484),Vector3(2.463,1.495,0.0297),Vector3(1.338,1.486,1.469),Vector3(-0.378,1.472,0.8443),Vector3(-0.3143,1.473,-0.981),Vector3(1.653,0.3707,-2.041),Vector3(3.063,0.3821,0.0504),Vector3(1.51,0.3696,2.038),Vector3(-0.8597,0.3505,1.175),Vector3(-0.7717,0.3512,-1.345),Vector3(1.671,-1.85,-2.041),Vector3(3.081,-1.839,0.0504),Vector3(1.528,-1.851,2.038),Vector3(-0.8419,-1.87,1.175),Vector3(-0.7538,-1.869,-1.345),Vector3(1.721,-2.799,-2.158),Vector3(3.213,-2.787,0.0547),Vector3(1.57,-2.8,2.158),Vector3(-0.9375,-2.821,1.245),Vector3(-0.8444,-2.82,-1.422),Vector3(1.239,-1.171,-1.713),Vector3(2.317,-1.163,-0.4014),Vector3(1.759,-1.167,1.439),Vector3(0.3363,-1.179,1.265),Vector3(0.015,-1.181,-0.6834),Vector3(1.342,-6.302,-1.386),Vector3(2.462,-6.293,-0.334),Vector3(1.882,-6.297,1.142),Vector3(0.4045,-6.309,1.002),Vector3(0.0707,-6.312,-0.5601),Vector3(1.406,-9.88,-1.335),Vector3(2.484,-9.871,-0.3225),Vector3(1.926,-9.875,1.099),Vector3(0.5035,-9.887,0.9641),Vector3(0.1822,-9.889,-0.5403),Vector3(1.367,-10.37,-0.7939),Vector3(1.998,-10.36,-0.2002),Vector3(1.671,-10.37,0.6327),Vector3(0.8373,-10.37,0.5538),Vector3(0.649,-10.37,-0.3278)]);
{ .SetCoord }
IndexedFaceSet138.Coord := Coordinate139;
TextureCoordinate140 := TTextureCoordinateNode.Create;
TextureCoordinate140.SetPoint([Vector2(0.3097,0.4881),Vector2(0.3096,0.5056),Vector2(0.3098,0.4729),Vector2(0.31,0.4583),Vector2(0.3094,0.524),Vector2(0.3306,0.4888),Vector2(0.3305,0.5058),Vector2(0.3308,0.4733),Vector2(0.3309,0.4582),Vector2(0.3303,0.5237),Vector2(0.3722,0.4892),Vector2(0.3721,0.5062),Vector2(0.3724,0.4737),Vector2(0.3725,0.4586),Vector2(0.3719,0.524),Vector2(0.39,0.4894),Vector2(0.3898,0.5063),Vector2(0.3901,0.4739),Vector2(0.3903,0.4587),Vector2(0.3897,0.5241),Vector2(0.3594,0.4923),Vector2(0.3593,0.5086),Vector2(0.3596,0.4762),Vector2(0.3597,0.4649),Vector2(0.3591,0.5256),Vector2(0.3093,0.5386),Vector2(0.3302,0.5386),Vector2(0.3302,0.5386),Vector2(0.3718,0.5389),Vector2(0.3718,0.5389),Vector2(0.3896,0.5391),Vector2(0.3896,0.5391),Vector2(0.359,0.5453),Vector2(0.2607,0.7074),Vector2(0.2761,0.7074),Vector2(0.2071,0.7074),Vector2(0.2209,0.7074),Vector2(0.2411,0.7074),Vector2(0.258,0.6245),Vector2(0.2744,0.6245),Vector2(0.2753,0.6708),Vector2(0.2589,0.6708),Vector2(0.2097,0.6245),Vector2(0.2079,0.6708),Vector2(0.2216,0.6245),Vector2(0.2226,0.6708),Vector2(0.2423,0.6245),Vector2(0.2411,0.6708),Vector2(0.2754,0.703),Vector2(0.2594,0.703),Vector2(0.2076,0.703),Vector2(0.2222,0.703),Vector2(0.2413,0.703),Vector2(0.1777,0.7074),Vector2(0.1931,0.7074),Vector2(0.1914,0.6245),Vector2(0.1923,0.6708),Vector2(0.1923,0.6708),Vector2(0.1924,0.703),Vector2(0.1924,0.703),Vector2(0.1931,0.7074),Vector2(0.31,0.4536)]);
{ .SetTexCoord }
IndexedFaceSet138.TexCoord := TextureCoordinate140;
{ .SetGeometry }
Shape134.Geometry := IndexedFaceSet138;
{ .AddChild }
Transform133.AddChildren([Shape134]);
{ .AddChildren }
HAnimSegment132.AddChildren([Transform133]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimSegment132]);
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141.NameField := 'l_elbow';
HAnimJoint141.Center := Vector3(6.735,35.669998,-0.4487);
HAnimJoint141.SetUlimit([0,0,0]);
HAnimJoint141.SetLlimit([0,0,0]);
HAnimSegment142 := THAnimSegmentNode.Create;
HAnimSegment142.NameField := 'l_forearm';
Transform143 := TTransformNode.Create;
Transform143.Translation := Vector3(6.735,35.669998,-0.4487);
Shape144 := TShapeNode.Create;
Appearance145 := TAppearanceNode.Create;
Material146 := TMaterialNode.Create;
Material146.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance145.Material := Material146;
ImageTexture147 := TImageTextureNode.Create;
ImageTexture147 := ImageTexture37;
{ .SetTexture }
Appearance145.Texture := ImageTexture147;
{ .SetAppearance }
Shape144.Appearance := Appearance145;
IndexedFaceSet148 := TIndexedFaceSetNode.Create;
IndexedFaceSet148.SetCoordIndex([3,2,1,-1,3,1,0,-1,3,0,4,-1,6,5,0,-1,0,1,6,-1,7,6,1,-1,1,2,7,-1,8,7,2,-1,2,3,8,-1,9,8,3,-1,3,4,9,-1,5,9,4,-1,4,0,5,-1,11,10,5,-1,5,6,11,-1,12,11,6,-1,6,7,12,-1,13,12,7,-1,7,8,13,-1,14,13,8,-1,8,9,14,-1,10,14,9,-1,9,5,10,-1,16,15,10,-1,10,11,16,-1,17,16,11,-1,11,12,17,-1,18,17,12,-1,12,13,18,-1,19,18,13,-1,13,14,19,-1,15,19,14,-1,14,10,15,-1,21,22,23,-1,23,24,20,-1,21,23,20,-1,15,16,21,-1,21,20,15,-1,16,17,22,-1,22,21,16,-1,17,18,23,-1,23,22,17,-1,18,19,24,-1,24,23,18,-1,19,15,20,-1,20,24,19,-1]);
IndexedFaceSet148.CreaseAngle := 1.57;
IndexedFaceSet148.SetTexCoordIndex([3,2,25,-1,3,25,26,-1,3,26,4,-1,5,6,1,-1,1,0,5,-1,7,28,27,-1,27,2,7,-1,8,7,2,-1,2,3,8,-1,9,8,3,-1,3,4,9,-1,6,9,4,-1,4,1,6,-1,10,11,6,-1,6,5,10,-1,12,30,29,-1,29,7,12,-1,13,12,7,-1,7,8,13,-1,14,13,8,-1,8,9,14,-1,11,14,9,-1,9,6,11,-1,15,16,11,-1,11,10,15,-1,17,32,31,-1,31,12,17,-1,18,17,12,-1,12,13,18,-1,19,18,13,-1,13,14,19,-1,16,19,14,-1,14,11,16,-1,34,22,23,-1,23,24,33,-1,34,23,33,-1,16,15,21,-1,21,20,16,-1,35,17,22,-1,22,36,35,-1,17,18,23,-1,23,22,17,-1,18,19,24,-1,24,23,18,-1,19,16,20,-1,20,24,19,-1]);
Coordinate149 := TCoordinateNode.Create;
Coordinate149.SetPoint([Vector3(0.133,0.4969,-1.018),Vector3(0.9633,0.5042,-0.2287),Vector3(0.4907,0.5001,0.9186),Vector3(-0.6318,0.4904,0.8386),Vector3(-0.8529,0.4884,-0.3582),Vector3(0.0877,-0.5196,-1.436),Vector3(1.261,-0.5094,-0.3773),Vector3(0.5932,-0.515,1.436),Vector3(-0.9931,-0.5288,1.309),Vector3(-1.306,-0.5317,-0.5821),Vector3(0.1173,-2.866,-1.42),Vector3(1.37,-2.855,-0.3733),Vector3(0.6813,-2.348,1.422),Vector3(-1.012,-2.362,1.297),Vector3(-1.37,-2.879,-0.576),Vector3(0.1304,-7.472,-1.27),Vector3(1.044,-7.464,-0.1131),Vector3(0.524,-7.468,1.334),Vector3(-0.7111,-7.479,1.217),Vector3(-0.9544,-7.481,-0.3029),Vector3(0.0956,-8.023,-0.7824),Vector3(0.7196,-8.018,0.0074),Vector3(0.3644,-8.021,0.9211),Vector3(-0.4791,-8.028,0.841),Vector3(-0.6452,-8.03,-0.1223)]);
{ .SetCoord }
IndexedFaceSet148.Coord := Coordinate149;
TextureCoordinate150 := TTextureCoordinateNode.Create;
TextureCoordinate150.SetPoint([Vector2(0.2667,0.6308),Vector2(0.2522,0.6308),Vector2(0.2052,0.6308),Vector2(0.22,0.6308),Vector2(0.2355,0.6308),Vector2(0.266,0.6397),Vector2(0.2508,0.6397),Vector2(0.2066,0.6397),Vector2(0.2205,0.6397),Vector2(0.2357,0.6397),Vector2(0.2662,0.6601),Vector2(0.251,0.6601),Vector2(0.206,0.6557),Vector2(0.2208,0.6557),Vector2(0.2354,0.6601),Vector2(0.2679,0.7003),Vector2(0.2509,0.7003),Vector2(0.2072,0.7003),Vector2(0.2192,0.7003),Vector2(0.2343,0.7003),Vector2(0.2512,0.7051),Vector2(0.2692,0.7051),Vector2(0.2072,0.7051),Vector2(0.219,0.7051),Vector2(0.2329,0.7051),Vector2(0.1923,0.6308),Vector2(0.1778,0.6308),Vector2(0.1923,0.6308),Vector2(0.1916,0.6397),Vector2(0.1916,0.6397),Vector2(0.1918,0.6601),Vector2(0.1918,0.6601),Vector2(0.1935,0.7003),Vector2(0.1768,0.7051),Vector2(0.1948,0.7051),Vector2(0.1935,0.7003),Vector2(0.1948,0.7051)]);
{ .SetTexCoord }
IndexedFaceSet148.TexCoord := TextureCoordinate150;
{ .SetGeometry }
Shape144.Geometry := IndexedFaceSet148;
{ .AddChild }
Transform143.AddChildren([Shape144]);
{ .AddChildren }
HAnimSegment142.AddChildren([Transform143]);
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimSegment142]);
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151.NameField := 'l_radiocarpal';
HAnimJoint151.Center := Vector3(6.432,27.83,-0.1589);
HAnimJoint151.SetUlimit([0,0,0]);
HAnimJoint151.SetLlimit([0,0,0]);
HAnimSegment152 := THAnimSegmentNode.Create;
HAnimSegment152.NameField := 'l_carpal';
Transform153 := TTransformNode.Create;
Transform153.Translation := Vector3(6.432,27.83,-0.1589);
Shape154 := TShapeNode.Create;
Appearance155 := TAppearanceNode.Create;
Material156 := TMaterialNode.Create;
Material156.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance155.Material := Material156;
ImageTexture157 := TImageTextureNode.Create;
ImageTexture157 := ImageTexture37;
{ .SetTexture }
Appearance155.Texture := ImageTexture157;
{ .SetAppearance }
Shape154.Appearance := Appearance155;
IndexedFaceSet158 := TIndexedFaceSetNode.Create;
IndexedFaceSet158.SetCoordIndex([0,2,4,-1,4,5,0,-1,3,1,6,-1,6,7,3,-1,5,6,1,-1,1,0,5,-1,5,4,8,-1,8,9,5,-1,7,6,10,-1,10,11,7,-1,6,5,9,-1,9,10,6,-1,9,8,12,-1,12,13,9,-1,11,10,14,-1,14,15,11,-1,10,9,13,-1,13,14,10,-1,4,2,16,-1,7,16,2,-1,2,3,7,-1,18,20,17,-1,17,19,18,-1,7,11,21,-1,21,16,7,-1,8,21,12,-1,11,15,12,-1,12,21,11,-1,15,14,13,-1,13,12,15,-1,19,17,8,-1,8,4,19,-1,18,19,4,-1,4,16,18,-1,20,18,16,-1,16,21,20,-1,17,20,21,-1,21,8,17,-1,22,27,23,-1,26,25,24,-1]);
IndexedFaceSet158.CreaseAngle := 1.57;
IndexedFaceSet158.SetTexCoordIndex([5,7,4,-1,4,6,5,-1,1,0,2,-1,2,3,1,-1,15,17,14,-1,14,16,15,-1,6,4,8,-1,8,9,6,-1,39,41,38,-1,38,40,39,-1,36,37,18,-1,18,19,36,-1,9,8,10,-1,10,11,9,-1,40,38,42,-1,42,43,40,-1,19,18,20,-1,20,21,19,-1,22,24,23,-1,25,23,24,-1,24,26,25,-1,28,30,27,-1,27,29,28,-1,25,32,31,-1,31,23,25,-1,33,31,34,-1,32,35,34,-1,34,31,32,-1,35,21,20,-1,20,34,35,-1,12,13,8,-1,8,4,12,-1,28,29,22,-1,22,23,28,-1,30,28,23,-1,23,31,30,-1,27,30,31,-1,31,33,27,-1,14,24,26,-1,14,16,24,-1]);
Coordinate159 := TCoordinateNode.Create;
Coordinate159.SetPoint([Vector3(1.076,0.3804,0.7047),Vector3(1.042,0.395,-1.192),Vector3(-0.6516,0.2878,0.7874),Vector3(-0.6592,0.2892,-1.133),Vector3(-0.8366,-0.2556,1.306),Vector3(1.437,-0.0511,1.226),Vector3(1.385,-0.0228,-1.757),Vector3(-0.9384,-0.2412,-1.753),Vector3(-0.7136,-1.939,2.128),Vector3(1.733,-1.733,1.838),Vector3(1.681,-1.704,-2.128),Vector3(-1.039,-2.028,-1.986),Vector3(-0.4691,-3.205,1.497),Vector3(0.8189,-3.398,1.547),Vector3(0.7668,-3.369,-1.83),Vector3(-0.6579,-3.218,-1.709),Vector3(-0.9322,-0.2429,-0.1654),Vector3(-1.437,-1.988,1.715),Vector3(-1.733,-0.5679,0.0513),Vector3(-1.7,-0.6266,1.665),Vector3(-1.443,-1.986,0.1217),Vector3(-0.9271,-2.022,-0.178),Vector3(1.042,0.395,-1.192),Vector3(-0.6592,0.2892,-1.133),Vector3(-0.6516,0.2878,0.7874),Vector3(1.076,0.3804,0.7047),Vector3(1.042,0.395,-1.192),Vector3(-0.6516,0.2878,0.7874)]);
{ .SetCoord }
IndexedFaceSet158.Coord := Coordinate159;
TextureCoordinate160 := TTextureCoordinateNode.Create;
TextureCoordinate160.SetPoint([Vector2(0.8107,0.9924),Vector2(0.8122,0.9033),Vector2(0.7694,0.9912),Vector2(0.7683,0.9026),Vector2(0.1329,0.0347),Vector2(0.0307,0.0051),Vector2(0.0134,0.0353),Vector2(0.1366,0.0058),Vector2(0.1249,0.1081),Vector2(0.0147,0.117),Vector2(0.1349,0.1856),Vector2(0.0462,0.1842),Vector2(0.1559,0.0454),Vector2(0.148,0.1033),Vector2(0.3244,0.0096),Vector2(0.1758,0.0039),Vector2(0.1759,0.011),Vector2(0.3241,0.0033),Vector2(0.173,0.1764),Vector2(0.3074,0.1757),Vector2(0.1732,0.1519),Vector2(0.3074,0.1513),Vector2(0.1756,0.032),Vector2(0.2159,0.0368),Vector2(0.1791,0.0165),Vector2(0.3169,0.0458),Vector2(0.3158,0.0193),Vector2(0.172,0.0594),Vector2(0.2087,0.0476),Vector2(0.1736,0.0504),Vector2(0.2073,0.064),Vector2(0.2362,0.0821),Vector2(0.3267,0.0796),Vector2(0.1717,0.0822),Vector2(0.1726,0.1297),Vector2(0.3077,0.1289),Vector2(0.3074,0.1865),Vector2(0.1742,0.184),Vector2(0.0061,0.1086),Vector2(0.1366,0.0368),Vector2(0.1241,0.1189),Vector2(0.0168,0.0309),Vector2(0.0211,0.1882),Vector2(0.14,0.1857)]);
{ .SetTexCoord }
IndexedFaceSet158.TexCoord := TextureCoordinate160;
{ .SetGeometry }
Shape154.Geometry := IndexedFaceSet158;
{ .AddChild }
Transform153.AddChildren([Shape154]);
{ .AddChildren }
HAnimSegment152.AddChildren([Transform153]);
{ .AddChildren }
HAnimJoint151.AddChildren([HAnimSegment152]);
{ .AddChildren }
HAnimJoint141.AddChildren([HAnimJoint151]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimJoint141]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimJoint131]);
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.NameField := 'r_shoulder';
HAnimJoint161.Center := Vector3(-5.502,45.779999,-0.3559);
HAnimJoint161.SetUlimit([0,0,0]);
HAnimJoint161.SetLlimit([0,0,0]);
HAnimSegment162 := THAnimSegmentNode.Create;
HAnimSegment162.NameField := 'r_upperarm';
Transform163 := TTransformNode.Create;
Transform163.Translation := Vector3(-5.502,45.779999,-0.3559);
Shape164 := TShapeNode.Create;
Appearance165 := TAppearanceNode.Create;
Material166 := TMaterialNode.Create;
Material166.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance165.Material := Material166;
ImageTexture167 := TImageTextureNode.Create;
ImageTexture167 := ImageTexture37;
{ .SetTexture }
Appearance165.Texture := ImageTexture167;
{ .SetAppearance }
Shape164.Appearance := Appearance165;
IndexedFaceSet168 := TIndexedFaceSetNode.Create;
IndexedFaceSet168.SetCoordIndex([3,4,0,-1,2,3,0,-1,2,0,1,-1,6,1,0,-1,0,5,6,-1,7,2,1,-1,1,6,7,-1,8,3,2,-1,2,7,8,-1,9,4,3,-1,3,8,9,-1,5,0,4,-1,4,9,5,-1,11,6,5,-1,5,10,11,-1,12,7,6,-1,6,11,12,-1,13,8,7,-1,7,12,13,-1,14,9,8,-1,8,13,14,-1,10,5,9,-1,9,14,10,-1,16,11,10,-1,10,15,16,-1,17,12,11,-1,11,16,17,-1,18,13,12,-1,12,17,18,-1,19,14,13,-1,13,18,19,-1,15,10,14,-1,14,19,15,-1,35,39,38,-1,36,35,38,-1,36,38,37,-1,15,20,21,-1,21,16,15,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,18,17,-1,18,23,24,-1,24,19,18,-1,19,24,20,-1,20,15,19,-1,20,25,26,-1,26,21,20,-1,21,26,27,-1,27,22,21,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,25,-1,25,20,24,-1,25,30,31,-1,31,26,25,-1,26,31,32,-1,32,27,26,-1,27,32,33,-1,33,28,27,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,25,29,-1,30,35,36,-1,36,31,30,-1,31,36,37,-1,37,32,31,-1,32,37,38,-1,38,33,32,-1,33,38,39,-1,39,34,33,-1,34,39,35,-1,35,30,34,-1]);
IndexedFaceSet168.CreaseAngle := 1.57;
IndexedFaceSet168.SetTexCoordIndex([3,61,1,-1,2,3,1,-1,2,1,0,-1,5,0,1,-1,1,6,5,-1,7,2,0,-1,0,5,7,-1,8,3,2,-1,2,7,8,-1,9,4,25,-1,25,26,9,-1,6,1,4,-1,4,9,6,-1,10,5,6,-1,6,11,10,-1,12,7,5,-1,5,10,12,-1,13,8,7,-1,7,12,13,-1,14,9,27,-1,27,28,14,-1,11,6,9,-1,9,14,11,-1,15,10,11,-1,11,16,15,-1,17,12,10,-1,10,15,17,-1,18,13,12,-1,12,17,18,-1,19,14,29,-1,29,30,19,-1,16,11,14,-1,14,19,16,-1,53,37,36,-1,54,53,36,-1,54,36,35,-1,16,21,20,-1,20,15,16,-1,15,20,22,-1,22,17,15,-1,17,22,23,-1,23,18,17,-1,31,32,24,-1,24,19,31,-1,19,24,21,-1,21,16,19,-1,38,41,40,-1,40,39,38,-1,55,56,43,-1,43,42,55,-1,42,43,45,-1,45,44,42,-1,44,45,47,-1,47,46,44,-1,46,47,41,-1,41,38,46,-1,41,49,48,-1,48,40,41,-1,57,58,50,-1,50,43,57,-1,43,50,51,-1,51,45,43,-1,45,51,52,-1,52,47,45,-1,47,52,49,-1,49,41,47,-1,49,33,34,-1,34,48,49,-1,59,60,35,-1,35,50,59,-1,50,35,36,-1,36,51,50,-1,51,36,37,-1,37,52,51,-1,52,37,33,-1,33,49,52,-1]);
Coordinate169 := TCoordinateNode.Create;
Coordinate169.SetPoint([Vector3(-1.441,1.487,-1.484),Vector3(-2.463,1.495,0.0297),Vector3(-1.338,1.486,1.469),Vector3(0.378,1.472,0.8443),Vector3(0.3143,1.473,-0.981),Vector3(-1.653,0.3707,-2.041),Vector3(-3.063,0.3821,0.0504),Vector3(-1.51,0.3696,2.038),Vector3(0.8597,0.3505,1.175),Vector3(0.7717,0.3512,-1.345),Vector3(-1.671,-1.85,-2.041),Vector3(-3.081,-1.839,0.0504),Vector3(-1.528,-1.851,2.038),Vector3(0.8419,-1.87,1.175),Vector3(0.7538,-1.869,-1.345),Vector3(-1.721,-2.799,-2.158),Vector3(-3.213,-2.787,0.0547),Vector3(-1.57,-2.8,2.158),Vector3(0.9375,-2.821,1.245),Vector3(0.8444,-2.82,-1.422),Vector3(-1.239,-1.171,-1.713),Vector3(-2.317,-1.163,-0.4014),Vector3(-1.759,-1.167,1.439),Vector3(-0.3363,-1.179,1.265),Vector3(-0.015,-1.181,-0.6834),Vector3(-1.342,-6.302,-1.386),Vector3(-2.462,-6.293,-0.334),Vector3(-1.882,-6.297,1.142),Vector3(-0.4045,-6.309,1.002),Vector3(-0.0707,-6.312,-0.5601),Vector3(-1.406,-9.88,-1.335),Vector3(-2.484,-9.871,-0.3225),Vector3(-1.926,-9.875,1.099),Vector3(-0.5035,-9.887,0.9641),Vector3(-0.1822,-9.889,-0.5403),Vector3(-1.367,-10.37,-0.7939),Vector3(-1.998,-10.36,-0.2002),Vector3(-1.671,-10.37,0.6327),Vector3(-0.8374,-10.37,0.5538),Vector3(-0.649,-10.37,-0.3278)]);
{ .SetCoord }
IndexedFaceSet168.Coord := Coordinate169;
TextureCoordinate170 := TTextureCoordinateNode.Create;
TextureCoordinate170.SetPoint([Vector2(0.3097,0.4881),Vector2(0.3096,0.5056),Vector2(0.3098,0.4729),Vector2(0.31,0.4583),Vector2(0.3094,0.524),Vector2(0.3306,0.4888),Vector2(0.3305,0.5058),Vector2(0.3308,0.4733),Vector2(0.3309,0.4582),Vector2(0.3303,0.5237),Vector2(0.3722,0.4892),Vector2(0.3721,0.5062),Vector2(0.3724,0.4737),Vector2(0.3725,0.4586),Vector2(0.3719,0.524),Vector2(0.39,0.4894),Vector2(0.3898,0.5063),Vector2(0.3901,0.4739),Vector2(0.3903,0.4587),Vector2(0.3897,0.5241),Vector2(0.3594,0.4923),Vector2(0.3593,0.5086),Vector2(0.3596,0.4762),Vector2(0.3597,0.4649),Vector2(0.3591,0.5256),Vector2(0.3093,0.5386),Vector2(0.3302,0.5386),Vector2(0.3302,0.5386),Vector2(0.3718,0.5389),Vector2(0.3718,0.5389),Vector2(0.3896,0.5391),Vector2(0.3896,0.5391),Vector2(0.359,0.5453),Vector2(0.2607,0.7074),Vector2(0.2761,0.7074),Vector2(0.2071,0.7074),Vector2(0.2209,0.7074),Vector2(0.2411,0.7074),Vector2(0.258,0.6245),Vector2(0.2744,0.6245),Vector2(0.2753,0.6708),Vector2(0.2589,0.6708),Vector2(0.2097,0.6245),Vector2(0.2079,0.6708),Vector2(0.2216,0.6245),Vector2(0.2226,0.6708),Vector2(0.2423,0.6245),Vector2(0.2411,0.6708),Vector2(0.2754,0.703),Vector2(0.2594,0.703),Vector2(0.2076,0.703),Vector2(0.2222,0.703),Vector2(0.2413,0.703),Vector2(0.1777,0.7074),Vector2(0.1931,0.7074),Vector2(0.1914,0.6245),Vector2(0.1923,0.6708),Vector2(0.1923,0.6708),Vector2(0.1924,0.703),Vector2(0.1924,0.703),Vector2(0.1931,0.7074),Vector2(0.31,0.4536)]);
{ .SetTexCoord }
IndexedFaceSet168.TexCoord := TextureCoordinate170;
{ .SetGeometry }
Shape164.Geometry := IndexedFaceSet168;
{ .AddChild }
Transform163.AddChildren([Shape164]);
{ .AddChildren }
HAnimSegment162.AddChildren([Transform163]);
{ .AddChildren }
HAnimJoint161.AddChildren([HAnimSegment162]);
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171.NameField := 'r_elbow';
HAnimJoint171.Center := Vector3(-6.735,35.669998,-0.4487);
HAnimJoint171.SetUlimit([0,0,0]);
HAnimJoint171.SetLlimit([0,0,0]);
HAnimSegment172 := THAnimSegmentNode.Create;
HAnimSegment172.NameField := 'r_forearm';
Transform173 := TTransformNode.Create;
Transform173.Translation := Vector3(-6.735,35.669998,-0.4487);
Shape174 := TShapeNode.Create;
Appearance175 := TAppearanceNode.Create;
Material176 := TMaterialNode.Create;
Material176.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance175.Material := Material176;
ImageTexture177 := TImageTextureNode.Create;
ImageTexture177 := ImageTexture37;
{ .SetTexture }
Appearance175.Texture := ImageTexture177;
{ .SetAppearance }
Shape174.Appearance := Appearance175;
IndexedFaceSet178 := TIndexedFaceSetNode.Create;
IndexedFaceSet178.SetCoordIndex([3,4,0,-1,3,0,1,-1,3,1,2,-1,6,1,0,-1,0,5,6,-1,7,2,1,-1,1,6,7,-1,8,3,2,-1,2,7,8,-1,9,4,3,-1,3,8,9,-1,5,0,4,-1,4,9,5,-1,11,6,5,-1,5,10,11,-1,12,7,6,-1,6,11,12,-1,13,8,7,-1,7,12,13,-1,14,9,8,-1,8,13,14,-1,10,5,9,-1,9,14,10,-1,16,11,10,-1,10,15,16,-1,17,12,11,-1,11,16,17,-1,18,13,12,-1,12,17,18,-1,19,14,13,-1,13,18,19,-1,15,10,14,-1,14,19,15,-1,20,24,23,-1,21,20,23,-1,21,23,22,-1,15,20,21,-1,21,16,15,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,18,17,-1,18,23,24,-1,24,19,18,-1,19,24,20,-1,20,15,19,-1]);
IndexedFaceSet178.CreaseAngle := 1.57;
IndexedFaceSet178.SetTexCoordIndex([3,4,26,-1,3,26,25,-1,3,25,2,-1,5,0,1,-1,1,6,5,-1,7,2,27,-1,27,28,7,-1,8,3,2,-1,2,7,8,-1,9,4,3,-1,3,8,9,-1,6,1,4,-1,4,9,6,-1,10,5,6,-1,6,11,10,-1,12,7,29,-1,29,30,12,-1,13,8,7,-1,7,12,13,-1,14,9,8,-1,8,13,14,-1,11,6,9,-1,9,14,11,-1,15,10,11,-1,11,16,15,-1,17,12,31,-1,31,32,17,-1,18,13,12,-1,12,17,18,-1,19,14,13,-1,13,18,19,-1,16,11,14,-1,14,19,16,-1,33,24,23,-1,34,33,23,-1,34,23,22,-1,16,20,21,-1,21,15,16,-1,35,36,22,-1,22,17,35,-1,17,22,23,-1,23,18,17,-1,18,23,24,-1,24,19,18,-1,19,24,20,-1,20,16,19,-1]);
Coordinate179 := TCoordinateNode.Create;
Coordinate179.SetPoint([Vector3(-0.133,0.4969,-1.018),Vector3(-0.9633,0.5042,-0.2287),Vector3(-0.4907,0.5001,0.9186),Vector3(0.6318,0.4904,0.8386),Vector3(0.8529,0.4884,-0.3582),Vector3(-0.0877,-0.5196,-1.436),Vector3(-1.261,-0.5094,-0.3773),Vector3(-0.5932,-0.515,1.436),Vector3(0.9931,-0.5288,1.309),Vector3(1.306,-0.5317,-0.5821),Vector3(-0.1173,-2.866,-1.42),Vector3(-1.37,-2.855,-0.3733),Vector3(-0.6813,-2.348,1.422),Vector3(1.012,-2.362,1.297),Vector3(1.37,-2.879,-0.576),Vector3(-0.1304,-7.472,-1.27),Vector3(-1.044,-7.464,-0.1131),Vector3(-0.5241,-7.468,1.334),Vector3(0.7111,-7.479,1.217),Vector3(0.9544,-7.481,-0.3029),Vector3(-0.0956,-8.023,-0.7824),Vector3(-0.7196,-8.018,0.0074),Vector3(-0.3644,-8.021,0.9211),Vector3(0.4791,-8.028,0.841),Vector3(0.6452,-8.03,-0.1223)]);
{ .SetCoord }
IndexedFaceSet178.Coord := Coordinate179;
TextureCoordinate180 := TTextureCoordinateNode.Create;
TextureCoordinate180.SetPoint([Vector2(0.2667,0.6308),Vector2(0.2522,0.6308),Vector2(0.2052,0.6308),Vector2(0.22,0.6308),Vector2(0.2355,0.6308),Vector2(0.266,0.6397),Vector2(0.2508,0.6397),Vector2(0.2066,0.6397),Vector2(0.2205,0.6397),Vector2(0.2357,0.6397),Vector2(0.2662,0.6601),Vector2(0.251,0.6601),Vector2(0.206,0.6557),Vector2(0.2208,0.6557),Vector2(0.2354,0.6601),Vector2(0.2679,0.7003),Vector2(0.2509,0.7003),Vector2(0.2072,0.7003),Vector2(0.2192,0.7003),Vector2(0.2343,0.7003),Vector2(0.2512,0.7051),Vector2(0.2692,0.7051),Vector2(0.2072,0.7051),Vector2(0.219,0.7051),Vector2(0.2329,0.7051),Vector2(0.1923,0.6308),Vector2(0.1778,0.6308),Vector2(0.1923,0.6308),Vector2(0.1916,0.6397),Vector2(0.1916,0.6397),Vector2(0.1918,0.6601),Vector2(0.1918,0.6601),Vector2(0.1935,0.7003),Vector2(0.1768,0.7051),Vector2(0.1948,0.7051),Vector2(0.1935,0.7003),Vector2(0.1948,0.7051)]);
{ .SetTexCoord }
IndexedFaceSet178.TexCoord := TextureCoordinate180;
{ .SetGeometry }
Shape174.Geometry := IndexedFaceSet178;
{ .AddChild }
Transform173.AddChildren([Shape174]);
{ .AddChildren }
HAnimSegment172.AddChildren([Transform173]);
{ .AddChildren }
HAnimJoint171.AddChildren([HAnimSegment172]);
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181.NameField := 'r_radiocarpal';
HAnimJoint181.Center := Vector3(-6.432,27.83,-0.1589);
HAnimJoint181.SetUlimit([0,0,0]);
HAnimJoint181.SetLlimit([0,0,0]);
HAnimSegment182 := THAnimSegmentNode.Create;
HAnimSegment182.NameField := 'r_carpal';
Transform183 := TTransformNode.Create;
Transform183.Translation := Vector3(-6.432,27.83,-0.1589);
Shape184 := TShapeNode.Create;
Appearance185 := TAppearanceNode.Create;
Material186 := TMaterialNode.Create;
Material186.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance185.Material := Material186;
ImageTexture187 := TImageTextureNode.Create;
ImageTexture187 := ImageTexture37;
{ .SetTexture }
Appearance185.Texture := ImageTexture187;
{ .SetAppearance }
Shape184.Appearance := Appearance185;
IndexedFaceSet188 := TIndexedFaceSetNode.Create;
IndexedFaceSet188.SetCoordIndex([0,5,4,-1,4,2,0,-1,3,7,6,-1,6,1,3,-1,5,0,1,-1,1,6,5,-1,5,9,8,-1,8,4,5,-1,7,11,10,-1,10,6,7,-1,6,10,9,-1,9,5,6,-1,9,13,12,-1,12,8,9,-1,11,15,14,-1,14,10,11,-1,10,14,13,-1,13,9,10,-1,4,16,2,-1,7,3,2,-1,2,16,7,-1,18,19,17,-1,17,20,18,-1,7,16,21,-1,21,11,7,-1,8,12,21,-1,11,21,12,-1,12,15,11,-1,15,12,13,-1,13,14,15,-1,19,4,8,-1,8,17,19,-1,18,16,4,-1,4,19,18,-1,20,21,16,-1,16,18,20,-1,17,8,21,-1,21,20,17,-1,22,23,27,-1,26,24,25,-1]);
IndexedFaceSet188.CreaseAngle := 1.57;
IndexedFaceSet188.SetTexCoordIndex([5,6,4,-1,4,7,5,-1,1,3,2,-1,2,0,1,-1,15,16,14,-1,14,17,15,-1,6,9,8,-1,8,4,6,-1,39,40,38,-1,38,41,39,-1,36,19,18,-1,18,37,36,-1,9,11,10,-1,10,8,9,-1,40,43,42,-1,42,38,40,-1,19,21,20,-1,20,18,19,-1,22,23,24,-1,25,26,24,-1,24,23,25,-1,28,29,27,-1,27,30,28,-1,25,23,31,-1,31,32,25,-1,33,34,31,-1,32,31,34,-1,34,35,32,-1,35,34,20,-1,20,21,35,-1,12,4,8,-1,8,13,12,-1,28,23,22,-1,22,29,28,-1,30,31,23,-1,23,28,30,-1,27,33,31,-1,31,30,27,-1,14,26,24,-1,14,24,16,-1]);
Coordinate189 := TCoordinateNode.Create;
Coordinate189.SetPoint([Vector3(-1.076,0.3804,0.7047),Vector3(-1.042,0.395,-1.192),Vector3(0.6516,0.2878,0.7874),Vector3(0.6592,0.2892,-1.133),Vector3(0.8366,-0.2556,1.306),Vector3(-1.437,-0.0511,1.226),Vector3(-1.385,-0.0228,-1.757),Vector3(0.9384,-0.2412,-1.753),Vector3(0.7136,-1.939,2.128),Vector3(-1.733,-1.733,1.838),Vector3(-1.681,-1.704,-2.128),Vector3(1.039,-2.028,-1.986),Vector3(0.4691,-3.205,1.497),Vector3(-0.8189,-3.398,1.547),Vector3(-0.7668,-3.369,-1.83),Vector3(0.6579,-3.218,-1.709),Vector3(0.9322,-0.2429,-0.1654),Vector3(1.437,-1.988,1.715),Vector3(1.733,-0.5679,0.0513),Vector3(1.7,-0.6266,1.665),Vector3(1.443,-1.986,0.1217),Vector3(0.9271,-2.022,-0.178),Vector3(-1.042,0.395,-1.192),Vector3(0.6592,0.2892,-1.133),Vector3(0.6516,0.2878,0.7874),Vector3(-1.076,0.3804,0.7047),Vector3(-1.042,0.395,-1.192),Vector3(0.6516,0.2878,0.7874)]);
{ .SetCoord }
IndexedFaceSet188.Coord := Coordinate189;
TextureCoordinate190 := TTextureCoordinateNode.Create;
TextureCoordinate190.SetPoint([Vector2(0.8107,0.9924),Vector2(0.8122,0.9033),Vector2(0.7694,0.9912),Vector2(0.7683,0.9026),Vector2(0.1329,0.0347),Vector2(0.0307,0.0051),Vector2(0.0134,0.0353),Vector2(0.1366,0.0058),Vector2(0.1249,0.1081),Vector2(0.0147,0.117),Vector2(0.1349,0.1856),Vector2(0.0462,0.1842),Vector2(0.1559,0.0454),Vector2(0.148,0.1033),Vector2(0.3244,0.0096),Vector2(0.1758,0.0039),Vector2(0.1759,0.011),Vector2(0.3241,0.0033),Vector2(0.173,0.1764),Vector2(0.3074,0.1757),Vector2(0.1732,0.1519),Vector2(0.3074,0.1513),Vector2(0.1756,0.032),Vector2(0.2159,0.0368),Vector2(0.1791,0.0165),Vector2(0.3169,0.0458),Vector2(0.3158,0.0193),Vector2(0.172,0.0594),Vector2(0.2087,0.0476),Vector2(0.1736,0.0504),Vector2(0.2073,0.064),Vector2(0.2362,0.0821),Vector2(0.3267,0.0796),Vector2(0.1717,0.0822),Vector2(0.1726,0.1297),Vector2(0.3077,0.1289),Vector2(0.3074,0.1865),Vector2(0.1742,0.184),Vector2(0.0061,0.1086),Vector2(0.1366,0.0368),Vector2(0.1241,0.1189),Vector2(0.0168,0.0309),Vector2(0.0211,0.1882),Vector2(0.14,0.1857)]);
{ .SetTexCoord }
IndexedFaceSet188.TexCoord := TextureCoordinate190;
{ .SetGeometry }
Shape184.Geometry := IndexedFaceSet188;
{ .AddChild }
Transform183.AddChildren([Shape184]);
{ .AddChildren }
HAnimSegment182.AddChildren([Transform183]);
{ .AddChildren }
HAnimJoint181.AddChildren([HAnimSegment182]);
{ .AddChildren }
HAnimJoint171.AddChildren([HAnimJoint181]);
{ .AddChildren }
HAnimJoint161.AddChildren([HAnimJoint171]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimJoint161]);
HAnimJoint191 := THAnimJointNode.Create;
HAnimJoint191.NameField := 'vl5';
HAnimJoint191.Center := Vector3(0,35.77,-0.5028);
HAnimJoint191.SetUlimit([0,0,0]);
HAnimJoint191.SetLlimit([0,0,0]);
HAnimSegment192 := THAnimSegmentNode.Create;
HAnimSegment192.NameField := 'l5';
Transform193 := TTransformNode.Create;
Transform193.Translation := Vector3(0,35.77,-0.5028);
Shape194 := TShapeNode.Create;
Appearance195 := TAppearanceNode.Create;
Material196 := TMaterialNode.Create;
Material196.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance195.Material := Material196;
ImageTexture197 := TImageTextureNode.Create;
ImageTexture197 := ImageTexture37;
{ .SetTexture }
Appearance195.Texture := ImageTexture197;
{ .SetAppearance }
Shape194.Appearance := Appearance195;
IndexedFaceSet198 := TIndexedFaceSetNode.Create;
IndexedFaceSet198.SetCoordIndex([7,5,3,-1,3,4,7,-1,4,8,7,-1,9,10,1,-1,1,0,9,-1,11,9,0,-1,0,2,11,-1,67,16,15,-1,16,17,14,-1,14,15,16,-1,67,15,8,-1,7,8,15,-1,15,14,7,-1,67,206,16,-1,13,17,16,-1,16,206,13,-1,22,23,21,-1,21,20,22,-1,17,22,20,-1,20,14,17,-1,6,5,20,-1,20,21,6,-1,5,7,14,-1,14,20,5,-1,18,19,23,-1,23,22,18,-1,13,18,22,-1,22,17,13,-1,2,6,11,-1,30,31,28,-1,28,27,30,-1,32,30,27,-1,27,29,32,-1,23,32,29,-1,29,21,23,-1,10,9,27,-1,27,28,10,-1,9,11,29,-1,29,27,9,-1,11,6,21,-1,21,29,11,-1,24,25,31,-1,31,30,24,-1,26,24,30,-1,30,32,26,-1,19,26,32,-1,32,23,19,-1,68,207,206,-1,206,67,68,-1,36,35,24,-1,24,26,36,-1,69,208,207,-1,207,68,69,-1,208,38,34,-1,34,207,208,-1,207,34,39,-1,39,206,207,-1,19,40,26,-1,41,36,26,-1,26,40,41,-1,41,40,39,-1,39,34,41,-1,43,42,35,-1,35,36,43,-1,44,43,36,-1,36,41,44,-1,38,44,41,-1,41,34,38,-1,70,209,208,-1,208,69,70,-1,209,46,38,-1,38,208,209,-1,48,47,42,-1,42,43,48,-1,46,49,44,-1,44,38,46,-1,71,210,209,-1,209,70,71,-1,210,51,46,-1,46,209,210,-1,53,52,47,-1,47,48,53,-1,54,53,48,-1,48,49,54,-1,51,54,49,-1,49,46,51,-1,72,55,210,-1,210,71,72,-1,55,56,51,-1,51,210,55,-1,58,57,52,-1,52,53,58,-1,59,58,53,-1,53,54,59,-1,56,59,54,-1,54,51,56,-1,60,61,19,-1,19,18,60,-1,62,60,18,-1,18,13,62,-1,63,62,13,-1,13,39,63,-1,61,64,40,-1,40,19,61,-1,64,63,39,-1,39,40,64,-1,2,3,5,-1,2,5,6,-1,13,206,39,-1,43,44,49,-1,49,48,43,-1,60,62,63,-1,63,64,60,-1,60,64,61,-1,73,74,65,-1,65,66,73,-1,8,4,74,-1,74,73,8,-1,75,76,73,-1,73,66,75,-1,76,12,8,-1,8,73,76,-1,76,77,33,-1,178,179,212,-1,75,78,77,-1,77,76,75,-1,79,180,181,-1,33,77,213,-1,80,213,77,-1,77,78,80,-1,81,182,183,-1,37,213,214,-1,82,214,213,-1,213,80,82,-1,83,184,185,-1,45,214,215,-1,84,215,214,-1,214,82,84,-1,85,86,50,-1,50,215,85,-1,87,85,215,-1,215,84,87,-1,88,89,86,-1,86,85,88,-1,90,88,85,-1,85,87,90,-1,91,186,187,-1,188,189,216,-1,228,190,191,-1,50,86,230,-1,92,93,211,-1,211,230,92,-1,89,92,230,-1,230,86,89,-1,95,97,99,-1,99,96,95,-1,96,99,100,-1,101,1,10,-1,1,101,102,-1,102,94,1,-1,153,106,107,-1,105,108,107,-1,107,106,105,-1,153,100,106,-1,106,100,99,-1,99,105,106,-1,153,107,217,-1,107,108,104,-1,104,217,107,-1,112,114,113,-1,113,111,112,-1,111,113,108,-1,108,105,111,-1,111,97,98,-1,98,112,111,-1,105,99,97,-1,97,111,105,-1,114,110,109,-1,109,113,114,-1,113,109,104,-1,104,108,113,-1,94,102,98,-1,28,31,119,-1,119,117,28,-1,117,119,120,-1,120,118,117,-1,118,120,114,-1,114,112,118,-1,117,101,10,-1,10,28,117,-1,118,102,101,-1,101,117,118,-1,112,98,102,-1,102,118,112,-1,31,25,115,-1,115,119,31,-1,119,115,116,-1,116,120,119,-1,120,116,110,-1,110,114,120,-1,217,218,154,-1,154,153,217,-1,115,123,124,-1,124,116,115,-1,218,219,155,-1,155,154,218,-1,122,126,219,-1,219,218,122,-1,127,122,218,-1,218,217,127,-1,110,116,128,-1,116,124,129,-1,129,128,116,-1,127,128,129,-1,129,122,127,-1,123,130,131,-1,131,124,123,-1,124,131,132,-1,132,129,124,-1,129,132,126,-1,126,122,129,-1,219,220,156,-1,156,155,219,-1,126,134,220,-1,220,219,126,-1,130,135,136,-1,136,131,130,-1,132,137,134,-1,134,126,132,-1,220,221,157,-1,157,156,220,-1,134,139,221,-1,221,220,134,-1,135,140,141,-1,141,136,135,-1,136,141,142,-1,142,137,136,-1,137,142,139,-1,139,134,137,-1,221,143,158,-1,158,157,221,-1,139,144,143,-1,143,221,139,-1,140,145,146,-1,146,141,140,-1,141,146,147,-1,147,142,141,-1,142,147,144,-1,144,139,142,-1,110,149,148,-1,148,109,110,-1,109,148,150,-1,150,104,109,-1,104,150,151,-1,151,127,104,-1,128,152,149,-1,149,110,128,-1,127,151,152,-1,152,128,127,-1,94,97,95,-1,94,98,97,-1,104,127,217,-1,137,132,131,-1,131,136,137,-1,151,150,148,-1,148,152,151,-1,148,149,152,-1,65,160,159,-1,159,66,65,-1,160,96,100,-1,100,159,160,-1,159,161,75,-1,75,66,159,-1,100,103,161,-1,161,159,100,-1,161,121,162,-1,193,223,192,-1,162,78,75,-1,75,161,162,-1,163,194,195,-1,121,224,162,-1,162,224,80,-1,80,78,162,-1,164,196,197,-1,125,225,224,-1,224,225,82,-1,82,80,224,-1,165,198,199,-1,133,226,225,-1,225,226,84,-1,84,82,225,-1,138,167,166,-1,166,226,138,-1,226,166,87,-1,87,84,226,-1,167,169,168,-1,168,166,167,-1,166,168,90,-1,90,87,166,-1,170,200,201,-1,203,227,202,-1,229,204,205,-1,138,231,167,-1,222,172,171,-1,171,231,222,-1,231,171,169,-1,169,167,231,-1,173,174,35,-1,35,42,173,-1,175,173,42,-1,42,47,175,-1,176,175,47,-1,47,52,176,-1,177,176,52,-1,52,57,177,-1,24,35,174,-1,174,25,24,-1,25,174,123,-1,123,115,25,-1,174,173,130,-1,130,123,174,-1,173,175,135,-1,135,130,173,-1,175,176,140,-1,140,135,175,-1,176,177,145,-1,145,140,176,-1,237,238,233,-1,233,232,237,-1,239,237,232,-1,232,234,239,-1,240,239,234,-1,234,235,240,-1,241,240,235,-1,235,236,241,-1,244,245,242,-1,242,243,244,-1,245,241,236,-1,236,242,245,-1,233,238,250,-1,250,246,233,-1,246,250,251,-1,251,247,246,-1,247,251,252,-1,252,248,247,-1,248,252,253,-1,253,249,248,-1,254,255,244,-1,244,243,254,-1,249,253,255,-1,255,254,249,-1]);
IndexedFaceSet198.CreaseAngle := 1.57;
IndexedFaceSet198.SetTexCoordIndex([179,180,181,-1,181,182,179,-1,182,183,179,-1,0,1,2,-1,2,3,0,-1,4,0,3,-1,3,5,4,-1,6,7,8,-1,7,10,11,-1,11,8,7,-1,9,8,12,-1,13,12,8,-1,8,11,13,-1,14,15,7,-1,16,10,7,-1,7,15,16,-1,17,18,19,-1,19,20,17,-1,10,17,20,-1,20,11,10,-1,21,22,20,-1,20,19,21,-1,22,13,11,-1,11,20,22,-1,23,24,18,-1,18,17,23,-1,16,23,17,-1,17,10,16,-1,5,21,4,-1,71,26,27,-1,27,72,71,-1,29,25,28,-1,28,30,29,-1,18,29,30,-1,30,19,18,-1,74,232,73,-1,73,27,74,-1,0,4,30,-1,30,28,0,-1,4,21,19,-1,19,30,4,-1,75,32,26,-1,26,76,75,-1,33,31,25,-1,25,29,33,-1,24,33,29,-1,29,18,24,-1,34,35,15,-1,15,14,34,-1,36,37,31,-1,31,33,36,-1,38,39,35,-1,35,34,38,-1,39,40,41,-1,41,35,39,-1,35,41,42,-1,42,15,35,-1,24,43,33,-1,44,36,33,-1,33,43,44,-1,44,43,42,-1,42,41,44,-1,45,46,37,-1,37,36,45,-1,47,45,36,-1,36,44,47,-1,40,47,44,-1,44,41,40,-1,48,49,39,-1,39,38,48,-1,49,50,40,-1,40,39,49,-1,51,52,46,-1,46,45,51,-1,50,53,47,-1,47,40,50,-1,54,55,49,-1,49,48,54,-1,55,56,50,-1,50,49,55,-1,57,58,52,-1,52,51,57,-1,59,57,51,-1,51,53,59,-1,56,59,53,-1,53,50,56,-1,60,61,55,-1,55,54,60,-1,61,62,56,-1,56,55,61,-1,63,64,58,-1,58,57,63,-1,65,63,57,-1,57,59,65,-1,62,65,59,-1,59,56,62,-1,66,67,24,-1,24,23,66,-1,68,66,23,-1,23,16,68,-1,69,68,16,-1,16,42,69,-1,67,70,43,-1,43,24,67,-1,70,69,42,-1,42,43,70,-1,184,181,180,-1,5,22,21,-1,16,15,42,-1,45,47,53,-1,53,51,45,-1,66,68,69,-1,69,70,66,-1,66,70,67,-1,185,186,187,-1,187,188,185,-1,183,182,186,-1,186,185,183,-1,189,190,185,-1,185,188,189,-1,190,191,183,-1,183,185,190,-1,190,192,193,-1,193,191,190,-1,189,194,192,-1,192,190,189,-1,195,196,193,-1,193,192,195,-1,197,195,192,-1,192,194,197,-1,198,199,196,-1,196,195,198,-1,200,198,195,-1,195,197,200,-1,201,202,199,-1,199,198,201,-1,203,201,198,-1,198,200,203,-1,204,205,202,-1,202,201,204,-1,206,204,201,-1,201,203,206,-1,207,208,205,-1,205,204,207,-1,209,207,204,-1,204,206,209,-1,79,80,59,-1,59,56,79,-1,81,82,77,-1,77,78,81,-1,83,84,80,-1,80,79,83,-1,85,86,81,-1,81,78,85,-1,211,212,210,-1,210,213,211,-1,213,210,214,-1,87,89,88,-1,90,87,91,-1,91,92,90,-1,93,95,94,-1,98,97,94,-1,94,95,98,-1,96,99,95,-1,95,99,100,-1,100,98,95,-1,101,94,102,-1,94,97,103,-1,103,102,94,-1,106,105,104,-1,104,107,106,-1,107,104,97,-1,97,98,107,-1,107,109,108,-1,108,106,107,-1,98,100,109,-1,109,107,98,-1,105,111,110,-1,110,104,105,-1,104,110,103,-1,103,97,104,-1,92,91,108,-1,114,113,158,-1,158,159,114,-1,115,112,116,-1,116,117,115,-1,117,116,105,-1,105,106,117,-1,160,233,161,-1,161,114,160,-1,117,91,87,-1,87,115,117,-1,106,108,91,-1,91,117,106,-1,113,119,162,-1,162,163,113,-1,112,118,120,-1,120,116,112,-1,116,120,111,-1,111,105,116,-1,102,122,121,-1,121,101,102,-1,118,124,123,-1,123,120,118,-1,122,126,125,-1,125,121,122,-1,128,127,126,-1,126,122,128,-1,129,128,122,-1,122,102,129,-1,111,120,130,-1,120,123,131,-1,131,130,120,-1,129,130,131,-1,131,128,129,-1,124,133,132,-1,132,123,124,-1,123,132,134,-1,134,131,123,-1,131,134,127,-1,127,128,131,-1,126,136,135,-1,135,125,126,-1,127,137,136,-1,136,126,127,-1,133,139,138,-1,138,132,133,-1,134,140,137,-1,137,127,134,-1,136,142,141,-1,141,135,136,-1,137,143,142,-1,142,136,137,-1,139,145,144,-1,144,138,139,-1,138,144,146,-1,146,140,138,-1,140,146,143,-1,143,137,140,-1,142,148,147,-1,147,141,142,-1,143,149,148,-1,148,142,143,-1,145,151,150,-1,150,144,145,-1,144,150,152,-1,152,146,144,-1,146,152,149,-1,149,143,146,-1,111,154,153,-1,153,110,111,-1,110,153,155,-1,155,103,110,-1,103,155,156,-1,156,129,103,-1,130,157,154,-1,154,111,130,-1,129,156,157,-1,157,130,129,-1,215,212,211,-1,92,108,109,-1,103,129,102,-1,140,134,132,-1,132,138,140,-1,156,155,153,-1,153,157,156,-1,153,154,157,-1,187,217,216,-1,216,188,187,-1,217,213,214,-1,214,216,217,-1,216,218,189,-1,189,188,216,-1,214,219,218,-1,218,216,214,-1,218,220,221,-1,220,218,219,-1,221,194,189,-1,189,218,221,-1,222,220,223,-1,220,222,221,-1,221,222,197,-1,197,194,221,-1,224,223,225,-1,223,224,222,-1,222,224,200,-1,200,197,222,-1,226,225,227,-1,225,226,224,-1,224,226,203,-1,203,200,224,-1,227,229,228,-1,228,226,227,-1,226,228,206,-1,206,203,226,-1,229,231,230,-1,230,228,229,-1,228,230,209,-1,209,206,228,-1,166,146,167,-1,146,166,143,-1,168,164,169,-1,164,168,165,-1,167,171,170,-1,170,166,167,-1,168,173,172,-1,172,165,168,-1,174,175,37,-1,37,46,174,-1,176,174,46,-1,46,52,176,-1,177,176,52,-1,52,58,177,-1,178,177,58,-1,58,64,178,-1,75,37,175,-1,175,32,75,-1,32,175,124,-1,124,162,32,-1,175,174,133,-1,133,124,175,-1,174,176,139,-1,139,133,174,-1,176,177,145,-1,145,139,176,-1,177,178,151,-1,151,145,177,-1,234,235,236,-1,236,237,234,-1,238,234,237,-1,237,239,238,-1,240,238,239,-1,239,241,240,-1,242,240,241,-1,241,243,242,-1,244,245,246,-1,246,247,244,-1,245,242,243,-1,243,246,245,-1,236,235,248,-1,248,249,236,-1,249,248,250,-1,250,251,249,-1,251,250,252,-1,252,253,251,-1,253,252,254,-1,254,255,253,-1,256,257,244,-1,244,247,256,-1,255,254,257,-1,257,256,255,-1]);
Coordinate199 := TCoordinateNode.Create;
Coordinate199.SetPoint([Vector3(0.6121,12.42,-1.302),Vector3(-0.306,12.44,-1.342),Vector3(1.298,12.61,-0.9894),Vector3(1.781,12.59,0.0631),Vector3(1.39,12.32,0.7954),Vector3(2.575,12.19,0.1088),Vector3(2.296,12.99,-1.428),Vector3(2.816,11.43,1.178),Vector3(1.978,11.24,2.044),Vector3(0.8508,13.01,-2.971),Vector3(0,12.99,-3.116),Vector3(1.798,13.03,-2.673),Vector3(2.93,10.3,2.438),Vector3(4.494,11.02,1.591),Vector3(2.634,12,1.741),Vector3(1.984,11.24,3.19),Vector3(2.767,10.58,3.261),Vector3(3.906,11.73,1.675),Vector3(4.949,11.55,-0.0209),Vector3(4.834,10.96,-1.468),Vector3(3.038,12.93,0.1389),Vector3(3.493,12.17,-2.153),Vector3(4.482,12.47,0.1389),Vector3(4.113,11.34,-1.759),Vector3(1.6,8.107,-2.333),Vector3(0,7.839,-2.451),Vector3(3.747,8.955,-1.991),Vector3(0.9116,10.49,-4.097),Vector3(0,10.5,-4.216),Vector3(2.111,10.83,-3.644),Vector3(1.482,7.538,-2.966),Vector3(0,7.253,-3.071),Vector3(3.64,8.877,-2.864),Vector3(3.632,6.875,3.311),Vector3(4.987,7.16,1.178),Vector3(1.891,6.998,-2.272),Vector3(3.799,7.09,-1.818),Vector3(3.618,4.307,3.148),Vector3(5.136,4.383,1.144),Vector3(5.386,8.485,1.29),Vector3(5.217,8.476,-0.4773),Vector3(4.888,7.119,-0.8743),Vector3(1.254,4.252,-2.726),Vector3(3.163,4.3,-2.034),Vector3(4.235,4.344,-0.4054),Vector3(3.732,2.466,3.172),Vector3(5.065,2.624,1.163),Vector3(1.133,2.334,-2.855),Vector3(3.748,2.51,-1.793),Vector3(4.813,2.575,-0.4505),Vector3(3.662,0.4951,3.308),Vector3(5.323,0.5624,1.576),Vector3(1.343,0.3925,-3.436),Vector3(3.49,0.4011,-2.426),Vector3(4.924,0.494,-0.8391),Vector3(4.174,-0.4185,3.529),Vector3(5.233,-0.3904,1.303),Vector3(1.408,-0.524,-2.55),Vector3(3.181,-0.5041,-1.817),Vector3(4.511,-0.4626,-0.5779),Vector3(6.538,11.31,-0.0209),Vector3(6.166,10.58,-1.468),Vector3(6.183,10.64,1.492),Vector3(5.565,8.621,1.29),Vector3(5.559,8.614,-0.4773),Vector3(0,12.09,1.343),Vector3(0,10.57,2.32),Vector3(1.473,9.039,3.697),Vector3(1.943,6.694,3.992),Vector3(2.51,4.323,3.928),Vector3(2.845,2.408,3.91),Vector3(2.612,0.5037,4.216),Vector3(2.623,-0.4527,4.138),Vector3(1.082,10.57,2.32),Vector3(0.6915,12.09,1.239),Vector3(0,8.851,2.842),Vector3(1.127,8.846,2.842),Vector3(1.334,6.961,3.311),Vector3(0,7.091,3.311),Vector3(1.334,4.35,3.311),Vector3(0,4.48,3.311),Vector3(1.334,2.428,3.311),Vector3(0,2.558,3.527),Vector3(1.334,0.5456,3.311),Vector3(0,0.6752,3.502),Vector3(1.334,-0.5831,3.131),Vector3(3.226,-0.6336,2.899),Vector3(0,-0.4535,3.365),Vector3(1.334,-1.253,1.537),Vector3(3.662,-1.303,1.534),Vector3(0,-1.123,1.537),Vector3(4.773,-0.5,1.576),Vector3(4.147,-1.179,1.158),Vector3(4.125,-1.096,-0.4311),Vector3(-1.298,12.61,-0.9894),Vector3(-1.781,12.59,0.0631),Vector3(-1.39,12.32,0.7954),Vector3(-2.575,12.19,0.1088),Vector3(-2.296,12.99,-1.428),Vector3(-2.816,11.43,1.178),Vector3(-1.978,11.24,2.044),Vector3(-0.8508,13.01,-2.971),Vector3(-1.798,13.03,-2.673),Vector3(-2.93,10.3,2.438),Vector3(-4.494,11.02,1.591),Vector3(-2.634,12,1.741),Vector3(-1.984,11.24,3.19),Vector3(-2.767,10.58,3.261),Vector3(-3.906,11.73,1.675),Vector3(-4.949,11.55,-0.0209),Vector3(-4.834,10.96,-1.468),Vector3(-3.038,12.93,0.1389),Vector3(-3.493,12.17,-2.153),Vector3(-4.482,12.47,0.1389),Vector3(-4.113,11.34,-1.759),Vector3(-1.6,8.107,-2.333),Vector3(-3.747,8.955,-1.991),Vector3(-0.9116,10.49,-4.097),Vector3(-2.111,10.83,-3.644),Vector3(-1.482,7.538,-2.966),Vector3(-3.64,8.877,-2.864),Vector3(-3.632,6.875,3.311),Vector3(-4.987,7.16,1.178),Vector3(-1.891,6.998,-2.272),Vector3(-3.799,7.09,-1.818),Vector3(-3.618,4.307,3.148),Vector3(-5.136,4.383,1.144),Vector3(-5.386,8.485,1.29),Vector3(-5.217,8.476,-0.4773),Vector3(-4.888,7.119,-0.8743),Vector3(-1.254,4.252,-2.726),Vector3(-3.163,4.3,-2.034),Vector3(-4.235,4.344,-0.4054),Vector3(-3.732,2.466,3.172),Vector3(-5.065,2.624,1.163),Vector3(-1.133,2.334,-2.855),Vector3(-3.748,2.51,-1.793),Vector3(-4.813,2.575,-0.4505),Vector3(-3.662,0.4951,3.308),Vector3(-5.323,0.5624,1.576),Vector3(-1.343,0.3925,-3.436),Vector3(-3.49,0.4011,-2.426),Vector3(-4.924,0.494,-0.8391),Vector3(-4.174,-0.4185,3.529),Vector3(-5.233,-0.3904,1.303),Vector3(-1.408,-0.524,-2.55),Vector3(-3.181,-0.5041,-1.817),Vector3(-4.511,-0.4626,-0.5779),Vector3(-6.538,11.31,-0.0209),Vector3(-6.166,10.58,-1.468),Vector3(-6.183,10.64,1.492),Vector3(-5.565,8.621,1.29),Vector3(-5.559,8.614,-0.4773),Vector3(-1.473,9.039,3.697),Vector3(-1.943,6.694,3.992),Vector3(-2.51,4.323,3.928),Vector3(-2.845,2.408,3.91),Vector3(-2.612,0.5037,4.216),Vector3(-2.623,-0.4527,4.138),Vector3(-1.082,10.57,2.32),Vector3(-0.6915,12.09,1.239),Vector3(-1.127,8.846,2.842),Vector3(-1.334,6.961,3.311),Vector3(-1.334,4.35,3.311),Vector3(-1.334,2.428,3.311),Vector3(-1.334,0.5456,3.311),Vector3(-1.334,-0.5831,3.131),Vector3(-3.226,-0.6336,2.899),Vector3(-1.334,-1.253,1.537),Vector3(-3.662,-1.303,1.534),Vector3(-4.773,-0.5,1.576),Vector3(-4.147,-1.179,1.158),Vector3(-4.125,-1.096,-0.4311),Vector3(-0.0011,4.252,-2.726),Vector3(-0.0007,6.998,-2.272),Vector3(-0.0012,2.334,-2.855),Vector3(-0.001,0.3925,-3.436),Vector3(-0.001,-0.524,-2.55),Vector3(3.632,6.875,3.311),Vector3(2.93,10.3,2.438),Vector3(3.618,4.307,3.148),Vector3(3.632,6.875,3.311),Vector3(3.732,2.466,3.172),Vector3(3.618,4.307,3.148),Vector3(3.662,0.4951,3.308),Vector3(3.732,2.466,3.172),Vector3(4.511,-0.4626,-0.5779),Vector3(4.924,0.494,-0.8391),Vector3(4.924,0.494,-0.8391),Vector3(5.323,0.5624,1.576),Vector3(5.323,0.5624,1.576),Vector3(3.662,0.4951,3.308),Vector3(-2.93,10.3,2.438),Vector3(-3.632,6.875,3.311),Vector3(-3.632,6.875,3.311),Vector3(-3.618,4.307,3.148),Vector3(-3.618,4.307,3.148),Vector3(-3.732,2.466,3.172),Vector3(-3.732,2.466,3.172),Vector3(-3.662,0.4951,3.308),Vector3(-4.924,0.494,-0.8391),Vector3(-4.511,-0.4626,-0.5779),Vector3(-5.323,0.5624,1.576),Vector3(-4.924,0.494,-0.8391),Vector3(-3.662,0.4951,3.308),Vector3(-5.323,0.5624,1.576),Vector3(2.93,10.3,2.438),Vector3(3.632,6.875,3.311),Vector3(3.618,4.307,3.148),Vector3(3.732,2.466,3.172),Vector3(3.662,0.4951,3.308),Vector3(4.511,-0.4626,-0.5779),Vector3(1.127,8.846,2.842),Vector3(1.334,4.35,3.311),Vector3(1.334,2.428,3.311),Vector3(1.334,0.5456,3.311),Vector3(4.773,-0.5,1.576),Vector3(-2.93,10.3,2.438),Vector3(-3.632,6.875,3.311),Vector3(-3.618,4.307,3.148),Vector3(-3.732,2.466,3.172),Vector3(-3.662,0.4951,3.308),Vector3(-4.511,-0.4626,-0.5779),Vector3(-1.127,8.846,2.842),Vector3(-1.334,4.35,3.311),Vector3(-1.334,2.428,3.311),Vector3(-1.334,0.5456,3.311),Vector3(-4.773,-0.5,1.576),Vector3(4.773,-0.5,1.576),Vector3(-4.773,-0.5,1.576),Vector3(4.773,-0.5,1.576),Vector3(-4.773,-0.5,1.576),Vector3(0.6121,15.55,-1.302),Vector3(0,15.55,-1.383),Vector3(1.298,15.55,-0.9895),Vector3(1.781,15.55,0.0632),Vector3(1.39,15.55,0.7954),Vector3(0.6121,11.8,-1.302),Vector3(0,11.87,-1.383),Vector3(1.298,12.1,-0.9894),Vector3(1.781,12.07,0.0631),Vector3(1.39,11.65,0.7954),Vector3(0.6897,15.7,1.236),Vector3(0,15.06,1.343),Vector3(0,11.27,1.343),Vector3(0.6897,11.28,1.236),Vector3(-0.6121,15.55,-1.302),Vector3(-1.298,15.55,-0.9895),Vector3(-1.781,15.55,0.0631),Vector3(-1.39,15.55,0.7954),Vector3(-0.6121,11.8,-1.302),Vector3(-1.298,12.1,-0.9895),Vector3(-1.781,12.07,0.0631),Vector3(-1.39,11.65,0.7954),Vector3(-0.6897,15.7,1.236),Vector3(-0.6897,11.28,1.236)]);
{ .SetCoord }
IndexedFaceSet198.Coord := Coordinate199;
TextureCoordinate200 := TTextureCoordinateNode.Create;
TextureCoordinate200.SetPoint([Vector2(0.2661,0.5914),Vector2(0.3505,0.5919),Vector2(0.3554,0.5911),Vector2(0.2505,0.5754),Vector2(0.241,0.592),Vector2(0.2112,0.5805),Vector2(0.0763,0.4945),Vector2(0.1025,0.5076),Vector2(0.0865,0.5614),Vector2(0.0652,0.5465),Vector2(0.1412,0.5207),Vector2(0.1108,0.5655),Vector2(0.0786,0.5849),Vector2(0.1073,0.5839),Vector2(0.0877,0.4617),Vector2(0.1185,0.4741),Vector2(0.1474,0.4856),Vector2(0.1724,0.5255),Vector2(0.2089,0.5196),Vector2(0.2133,0.556),Vector2(0.1645,0.5709),Vector2(0.2067,0.5908),Vector2(0.1632,0.5887),Vector2(0.1708,0.4854),Vector2(0.1963,0.4863),Vector2(0.2708,0.4736),Vector2(0.347,0.4316),Vector2(0.3616,0.5328),Vector2(0.2733,0.5359),Vector2(0.238,0.493),Vector2(0.249,0.5451),Vector2(0.2638,0.4568),Vector2(0.3214,0.4203),Vector2(0.2252,0.4828),Vector2(0.0566,0.3896),Vector2(0.0976,0.3718),Vector2(0.2183,0.385),Vector2(0.3504,0.3844),Vector2(0.0529,0.3458),Vector2(0.1128,0.344),Vector2(0.1491,0.3449),Vector2(0.1525,0.3869),Vector2(0.1538,0.4251),Vector2(0.1784,0.4249),Vector2(0.1911,0.3858),Vector2(0.2175,0.3427),Vector2(0.3608,0.3469),Vector2(0.1838,0.3438),Vector2(0.0518,0.2941),Vector2(0.1116,0.2965),Vector2(0.1487,0.2975),Vector2(0.2175,0.2944),Vector2(0.3621,0.2922),Vector2(0.1849,0.2961),Vector2(0.0501,0.2428),Vector2(0.1011,0.241),Vector2(0.1445,0.2419),Vector2(0.2369,0.2375),Vector2(0.3561,0.2404),Vector2(0.1927,0.24),Vector2(0.0553,0.217),Vector2(0.1067,0.2154),Vector2(0.1463,0.2162),Vector2(0.227,0.2131),Vector2(0.3536,0.2151),Vector2(0.1879,0.2143),Vector2(0.1715,0.4655),Vector2(0.1797,0.4646),Vector2(0.1569,0.4642),Vector2(0.1544,0.4288),Vector2(0.1782,0.4286),Vector2(0.3477,0.431),Vector2(0.3623,0.5333),Vector2(0.3623,0.5333),Vector2(0.3505,0.5919),Vector2(0.3223,0.4192),Vector2(0.3477,0.431),Vector2(0.0976,0.3718),Vector2(0.0976,0.3718),Vector2(0.1445,0.2419),Vector2(0.1927,0.24),Vector2(0.0976,0.3718),Vector2(0.0976,0.3718),Vector2(0.1445,0.2419),Vector2(0.1927,0.24),Vector2(0.0976,0.3718),Vector2(0.0976,0.3718),Vector2(0.2661,0.5914),Vector2(0.3505,0.5919),Vector2(0.3554,0.5911),Vector2(0.2505,0.5754),Vector2(0.241,0.592),Vector2(0.2112,0.5805),Vector2(0.0763,0.4945),Vector2(0.1025,0.5076),Vector2(0.0865,0.5614),Vector2(0.0652,0.5465),Vector2(0.1412,0.5207),Vector2(0.1108,0.5655),Vector2(0.0786,0.5849),Vector2(0.1073,0.5839),Vector2(0.0877,0.4617),Vector2(0.1185,0.4741),Vector2(0.1474,0.4856),Vector2(0.1724,0.5255),Vector2(0.2089,0.5196),Vector2(0.2133,0.556),Vector2(0.1645,0.5709),Vector2(0.2067,0.5908),Vector2(0.1632,0.5887),Vector2(0.1708,0.4854),Vector2(0.1963,0.4863),Vector2(0.2708,0.4736),Vector2(0.347,0.4316),Vector2(0.3616,0.5328),Vector2(0.2733,0.5359),Vector2(0.238,0.493),Vector2(0.249,0.5451),Vector2(0.2638,0.4568),Vector2(0.3214,0.4203),Vector2(0.2252,0.4828),Vector2(0.0566,0.3896),Vector2(0.0976,0.3718),Vector2(0.2183,0.385),Vector2(0.3504,0.3844),Vector2(0.0529,0.3458),Vector2(0.1128,0.344),Vector2(0.1491,0.3449),Vector2(0.1525,0.3869),Vector2(0.1538,0.4251),Vector2(0.1784,0.4249),Vector2(0.1911,0.3858),Vector2(0.2175,0.3427),Vector2(0.3608,0.3469),Vector2(0.1838,0.3438),Vector2(0.0518,0.2941),Vector2(0.1116,0.2965),Vector2(0.1487,0.2975),Vector2(0.2175,0.2944),Vector2(0.3621,0.2922),Vector2(0.1849,0.2961),Vector2(0.0501,0.2428),Vector2(0.1011,0.241),Vector2(0.1445,0.2419),Vector2(0.2369,0.2375),Vector2(0.3561,0.2404),Vector2(0.1927,0.24),Vector2(0.0553,0.217),Vector2(0.1067,0.2154),Vector2(0.1463,0.2162),Vector2(0.227,0.2131),Vector2(0.3536,0.2151),Vector2(0.1879,0.2143),Vector2(0.1715,0.4655),Vector2(0.1797,0.4646),Vector2(0.1569,0.4642),Vector2(0.1544,0.4288),Vector2(0.1782,0.4286),Vector2(0.3477,0.431),Vector2(0.3623,0.5333),Vector2(0.3623,0.5333),Vector2(0.3505,0.5919),Vector2(0.3223,0.4192),Vector2(0.3477,0.431),Vector2(0.0976,0.3718),Vector2(0.0976,0.3718),Vector2(0.1445,0.2419),Vector2(0.1927,0.24),Vector2(0.0976,0.3718),Vector2(0.0976,0.3718),Vector2(0.1445,0.2419),Vector2(0.1927,0.24),Vector2(0.0976,0.3718),Vector2(0.0976,0.3718),Vector2(0.3608,0.3469),Vector2(0.3504,0.3844),Vector2(0.3621,0.2922),Vector2(0.3561,0.2404),Vector2(0.3536,0.2151),Vector2(0.9678,0.9614),Vector2(0.9599,0.9831),Vector2(0.9337,0.9943),Vector2(0.9208,0.9868),Vector2(0.9402,0.956),Vector2(0.9178,0.9949),Vector2(0.9107,0.9369),Vector2(0.8978,0.9801),Vector2(0.8751,0.9801),Vector2(0.8751,0.9369),Vector2(0.8751,0.8881),Vector2(0.9122,0.888),Vector2(0.9715,0.9294),Vector2(0.919,0.8344),Vector2(0.9947,0.8319),Vector2(0.8751,0.8381),Vector2(0.919,0.7602),Vector2(0.9942,0.7589),Vector2(0.8751,0.7639),Vector2(0.919,0.7055),Vector2(0.998,0.7066),Vector2(0.8751,0.7092),Vector2(0.919,0.652),Vector2(0.9957,0.6506),Vector2(0.8751,0.6557),Vector2(0.919,0.6199),Vector2(0.9813,0.6185),Vector2(0.8751,0.6236),Vector2(0.919,0.6009),Vector2(0.9957,0.5995),Vector2(0.8751,0.6046),Vector2(0.7823,0.9614),Vector2(0.8164,0.9943),Vector2(0.7903,0.9831),Vector2(0.8293,0.9868),Vector2(0.8099,0.956),Vector2(0.8323,0.9949),Vector2(0.8394,0.9369),Vector2(0.8523,0.9801),Vector2(0.8379,0.888),Vector2(0.7786,0.9294),Vector2(0.7555,0.8319),Vector2(0.8311,0.8344),Vector2(0.8311,0.7602),Vector2(0.7559,0.7589),Vector2(0.8311,0.7055),Vector2(0.7522,0.7066),Vector2(0.8311,0.652),Vector2(0.7545,0.6506),Vector2(0.8311,0.6199),Vector2(0.7688,0.6185),Vector2(0.8311,0.6009),Vector2(0.7545,0.5995),Vector2(0.3511,0.5932),Vector2(0.3511,0.5932),Vector2(0.2453,0.6431),Vector2(0.2344,0.6441),Vector2(0.2344,0.6969),Vector2(0.2453,0.6969),Vector2(0.2575,0.6474),Vector2(0.2575,0.6969),Vector2(0.2661,0.6469),Vector2(0.2661,0.6969),Vector2(0.2592,0.6409),Vector2(0.2592,0.6969),Vector2(0.2344,0.6355),Vector2(0.2467,0.6357),Vector2(0.2467,0.699),Vector2(0.2344,0.6898),Vector2(0.2235,0.6431),Vector2(0.2235,0.6969),Vector2(0.2112,0.6474),Vector2(0.2112,0.6969),Vector2(0.2026,0.6469),Vector2(0.2026,0.6969),Vector2(0.2096,0.6409),Vector2(0.2096,0.6969),Vector2(0.2221,0.699),Vector2(0.2221,0.6357)]);
{ .SetTexCoord }
IndexedFaceSet198.TexCoord := TextureCoordinate200;
{ .SetGeometry }
Shape194.Geometry := IndexedFaceSet198;
{ .AddChild }
Transform193.AddChildren([Shape194]);
{ .AddChildren }
HAnimSegment192.AddChildren([Transform193]);
{ .AddChildren }
HAnimJoint191.AddChildren([HAnimSegment192]);
HAnimJoint201 := THAnimJointNode.Create;
HAnimJoint201.NameField := 'skullbase';
HAnimJoint201.Center := Vector3(0,49.98,-0.5228);
HAnimJoint201.SetUlimit([0,0,0]);
HAnimJoint201.SetLlimit([0,0,0]);
HAnimSegment202 := THAnimSegmentNode.Create;
HAnimSegment202.NameField := 'skull';
Transform203 := TTransformNode.Create;
Transform203.Translation := Vector3(0,49.98,-0.5228);
Shape204 := TShapeNode.Create;
Appearance205 := TAppearanceNode.Create;
Material206 := TMaterialNode.Create;
Material206.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance205.Material := Material206;
ImageTexture207 := TImageTextureNode.Create;
ImageTexture207 := ImageTexture37;
{ .SetTexture }
Appearance205.Texture := ImageTexture207;
{ .SetAppearance }
Shape204.Appearance := Appearance205;
IndexedFaceSet208 := TIndexedFaceSetNode.Create;
IndexedFaceSet208.SetCoordIndex([118,28,42,-1,42,25,118,-1,26,40,27,-1,39,38,24,-1,24,23,39,-1,58,22,24,-1,24,38,58,-1,120,41,28,-1,28,118,120,-1,295,56,30,-1,30,32,295,-1,56,37,31,-1,29,31,35,-1,35,33,29,-1,29,33,34,-1,34,30,29,-1,30,34,36,-1,36,32,30,-1,37,35,31,-1,295,32,36,-1,40,33,35,-1,44,36,34,-1,37,40,35,-1,295,36,44,-1,57,58,38,-1,39,40,38,-1,27,39,23,-1,23,20,27,-1,40,39,27,-1,294,48,41,-1,41,19,294,-1,28,41,48,-1,48,49,28,-1,28,49,50,-1,50,42,28,-1,19,293,294,-1,54,48,294,-1,294,17,54,-1,17,294,293,-1,119,52,295,-1,90,93,45,-1,45,92,90,-1,14,81,45,-1,45,93,14,-1,16,72,14,-1,97,96,46,-1,95,97,46,-1,46,88,95,-1,96,90,46,-1,92,46,90,-1,92,87,46,-1,117,91,47,-1,47,103,117,-1,86,47,87,-1,87,102,86,-1,86,116,103,-1,103,47,86,-1,87,47,91,-1,49,53,51,-1,49,48,54,-1,54,53,49,-1,16,22,58,-1,58,72,16,-1,73,68,51,-1,51,53,73,-1,52,51,68,-1,68,295,52,-1,53,54,75,-1,75,74,53,-1,73,53,74,-1,75,54,76,-1,65,69,56,-1,56,69,70,-1,70,37,56,-1,37,70,71,-1,71,57,37,-1,66,64,67,-1,77,67,64,-1,65,64,66,-1,66,69,65,-1,67,59,60,-1,67,82,59,-1,82,111,59,-1,60,59,104,-1,104,59,62,-1,111,61,59,-1,61,63,59,-1,62,59,63,-1,77,64,65,-1,65,78,77,-1,68,73,78,-1,78,65,68,-1,69,66,79,-1,79,70,69,-1,70,79,80,-1,80,71,70,-1,14,72,81,-1,73,74,83,-1,83,78,73,-1,74,75,109,-1,109,83,74,-1,75,76,114,-1,114,109,75,-1,4,115,15,-1,76,15,115,-1,115,114,76,-1,60,66,67,-1,66,60,105,-1,82,67,77,-1,77,84,82,-1,78,83,84,-1,84,77,78,-1,105,106,79,-1,79,66,105,-1,106,100,80,-1,80,79,106,-1,110,111,82,-1,82,84,110,-1,110,84,83,-1,83,109,110,-1,113,85,108,-1,108,107,113,-1,85,99,116,-1,116,86,85,-1,89,88,87,-1,94,95,88,-1,88,89,94,-1,89,91,117,-1,117,94,89,-1,91,89,87,-1,14,93,13,-1,9,12,90,-1,90,96,9,-1,12,13,93,-1,93,90,12,-1,94,11,10,-1,10,95,94,-1,11,94,117,-1,117,0,11,-1,8,97,95,-1,95,10,8,-1,8,9,96,-1,96,97,8,-1,1,99,7,-1,3,6,98,-1,98,112,3,-1,7,99,98,-1,98,6,7,-1,113,112,98,-1,108,101,100,-1,100,106,108,-1,113,98,85,-1,99,85,98,-1,103,116,2,-1,2,5,103,-1,5,0,117,-1,117,103,5,-1,62,113,107,-1,107,104,62,-1,108,106,105,-1,105,107,108,-1,110,109,114,-1,114,115,110,-1,3,112,115,-1,115,4,3,-1,61,111,110,-1,110,115,61,-1,61,115,112,-1,112,63,61,-1,62,63,112,-1,112,113,62,-1,2,116,1,-1,116,99,1,-1,86,102,85,-1,102,101,108,-1,85,102,108,-1,57,38,40,-1,37,57,40,-1,105,60,104,-1,107,105,104,-1,15,76,54,-1,17,15,54,-1,87,88,46,-1,41,120,21,-1,19,41,21,-1,72,58,122,-1,123,100,101,-1,101,121,123,-1,100,123,124,-1,124,80,100,-1,80,124,122,-1,122,71,80,-1,101,87,121,-1,57,71,122,-1,58,57,122,-1,121,92,45,-1,45,123,121,-1,123,45,81,-1,81,124,123,-1,124,81,72,-1,72,122,124,-1,87,92,121,-1,87,101,102,-1,40,26,44,-1,119,295,44,-1,44,34,33,-1,40,44,33,-1,29,30,56,-1,31,29,56,-1,68,65,56,-1,295,68,56,-1,55,147,131,-1,132,131,147,-1,147,140,132,-1,132,140,141,-1,141,133,132,-1,133,141,142,-1,142,134,133,-1,134,142,125,-1,125,130,134,-1,129,135,18,-1,277,278,296,-1,137,279,280,-1,281,282,297,-1,304,136,49,-1,49,136,146,-1,146,52,49,-1,52,146,147,-1,298,283,284,-1,136,145,146,-1,128,126,143,-1,143,144,139,-1,145,139,144,-1,139,128,143,-1,136,139,145,-1,135,138,304,-1,304,43,135,-1,129,127,138,-1,138,135,129,-1,138,139,136,-1,136,304,138,-1,138,127,128,-1,128,139,138,-1,143,126,125,-1,125,142,143,-1,144,143,142,-1,142,141,144,-1,145,144,141,-1,141,140,145,-1,146,145,140,-1,140,147,146,-1,52,119,42,-1,42,50,52,-1,148,149,118,-1,118,25,148,-1,149,150,120,-1,120,118,149,-1,150,151,21,-1,21,120,150,-1,26,152,149,-1,149,148,26,-1,152,153,150,-1,150,149,152,-1,153,154,151,-1,151,150,153,-1,26,27,152,-1,153,152,27,-1,27,20,154,-1,154,153,27,-1,42,119,148,-1,148,25,42,-1,148,119,26,-1,119,44,26,-1,49,52,50,-1,172,158,248,-1,248,155,172,-1,156,157,170,-1,24,168,169,-1,169,23,24,-1,24,22,188,-1,188,168,24,-1,158,171,250,-1,250,248,158,-1,160,186,300,-1,300,162,160,-1,186,161,167,-1,165,161,159,-1,159,163,165,-1,164,163,159,-1,159,160,164,-1,166,164,160,-1,160,162,166,-1,167,161,165,-1,300,166,162,-1,170,165,163,-1,174,164,166,-1,167,165,170,-1,300,174,166,-1,187,168,188,-1,169,168,170,-1,23,169,157,-1,157,20,23,-1,170,157,169,-1,171,178,299,-1,299,19,171,-1,178,171,158,-1,158,179,178,-1,180,179,158,-1,158,172,180,-1,19,299,293,-1,299,178,184,-1,184,17,299,-1,17,293,299,-1,249,300,182,-1,175,223,220,-1,220,222,175,-1,175,211,14,-1,14,223,175,-1,16,14,202,-1,227,176,226,-1,176,227,225,-1,225,218,176,-1,226,176,220,-1,222,220,176,-1,222,176,217,-1,177,221,247,-1,247,233,177,-1,216,217,177,-1,217,216,232,-1,233,246,216,-1,216,177,233,-1,217,221,177,-1,179,181,183,-1,184,178,179,-1,179,183,184,-1,188,22,16,-1,16,202,188,-1,203,181,198,-1,181,203,183,-1,198,181,182,-1,182,300,198,-1,183,205,184,-1,205,183,204,-1,203,204,183,-1,205,206,184,-1,195,186,199,-1,200,199,186,-1,186,167,200,-1,201,200,167,-1,167,187,201,-1,196,197,194,-1,207,194,197,-1,196,194,195,-1,195,199,196,-1,197,190,189,-1,197,189,212,-1,212,189,241,-1,190,234,189,-1,234,192,189,-1,241,189,191,-1,191,189,193,-1,192,193,189,-1,195,194,207,-1,207,208,195,-1,208,203,198,-1,198,195,208,-1,209,196,199,-1,199,200,209,-1,210,209,200,-1,200,201,210,-1,14,211,202,-1,213,204,203,-1,203,208,213,-1,239,205,204,-1,204,213,239,-1,244,206,205,-1,205,239,244,-1,4,15,245,-1,245,15,206,-1,206,244,245,-1,190,197,196,-1,196,235,190,-1,207,197,212,-1,212,214,207,-1,214,213,208,-1,208,207,214,-1,209,236,235,-1,235,196,209,-1,210,230,236,-1,236,209,210,-1,212,241,240,-1,240,214,212,-1,213,214,240,-1,240,239,213,-1,238,215,243,-1,243,237,238,-1,246,229,215,-1,215,216,246,-1,219,217,218,-1,218,225,224,-1,224,219,218,-1,247,221,219,-1,219,224,247,-1,221,217,219,-1,14,13,223,-1,220,12,9,-1,9,226,220,-1,223,13,12,-1,12,220,223,-1,10,11,224,-1,224,225,10,-1,247,224,11,-1,11,0,247,-1,225,227,8,-1,8,10,225,-1,226,9,8,-1,8,227,226,-1,1,7,229,-1,228,6,3,-1,3,242,228,-1,228,229,7,-1,7,6,228,-1,243,228,242,-1,230,231,238,-1,238,236,230,-1,243,215,228,-1,229,228,215,-1,2,246,233,-1,233,5,2,-1,247,0,5,-1,5,233,247,-1,237,243,192,-1,192,234,237,-1,235,236,238,-1,238,237,235,-1,244,239,240,-1,240,245,244,-1,245,242,3,-1,3,4,245,-1,240,241,191,-1,191,245,240,-1,242,245,191,-1,191,193,242,-1,242,193,192,-1,192,243,242,-1,2,1,246,-1,246,1,229,-1,216,215,232,-1,232,238,231,-1,215,238,232,-1,187,170,168,-1,167,170,187,-1,235,234,190,-1,237,234,235,-1,15,184,206,-1,17,184,15,-1,217,176,218,-1,171,21,250,-1,19,21,171,-1,202,252,188,-1,231,230,253,-1,253,251,231,-1,254,253,230,-1,230,210,254,-1,252,254,210,-1,210,201,252,-1,231,251,217,-1,187,252,201,-1,188,252,187,-1,175,222,251,-1,251,253,175,-1,211,175,253,-1,253,254,211,-1,202,211,254,-1,254,252,202,-1,217,251,222,-1,217,232,231,-1,170,174,156,-1,249,174,300,-1,174,163,164,-1,170,163,174,-1,159,186,160,-1,161,186,159,-1,198,186,195,-1,300,186,198,-1,185,255,271,-1,271,255,256,-1,256,264,271,-1,265,264,256,-1,256,257,265,-1,266,265,257,-1,257,258,266,-1,125,266,258,-1,258,130,125,-1,129,18,301,-1,286,259,285,-1,261,287,288,-1,290,302,289,-1,305,179,260,-1,270,260,179,-1,179,182,270,-1,182,271,270,-1,303,291,292,-1,260,270,269,-1,128,267,126,-1,267,263,268,-1,269,268,263,-1,263,267,128,-1,260,269,263,-1,305,262,301,-1,301,173,305,-1,262,127,129,-1,129,301,262,-1,260,263,262,-1,262,305,260,-1,128,127,262,-1,262,263,128,-1,125,126,267,-1,267,266,125,-1,266,267,268,-1,268,265,266,-1,265,268,269,-1,269,264,265,-1,264,269,270,-1,270,271,264,-1,172,249,182,-1,182,180,172,-1,248,273,272,-1,272,155,248,-1,250,274,273,-1,273,248,250,-1,21,151,274,-1,274,250,21,-1,273,275,156,-1,156,272,273,-1,274,276,275,-1,275,273,274,-1,151,154,276,-1,276,274,151,-1,156,275,157,-1,276,157,275,-1,154,20,157,-1,157,276,154,-1,272,249,172,-1,172,155,272,-1,272,156,249,-1,249,156,174,-1,179,180,182,-1]);
IndexedFaceSet208.CreaseAngle := 1.57;
IndexedFaceSet208.SetTexCoordIndex([255,256,257,-1,257,258,255,-1,259,260,261,-1,0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,262,263,256,-1,256,255,262,-1,6,7,8,-1,8,9,6,-1,7,10,11,-1,12,11,13,-1,13,14,12,-1,12,14,15,-1,15,8,12,-1,8,15,16,-1,16,9,8,-1,10,13,11,-1,6,9,16,-1,17,14,13,-1,18,16,15,-1,10,17,13,-1,6,16,18,-1,19,4,1,-1,0,17,1,-1,261,264,265,-1,265,266,261,-1,260,264,261,-1,267,268,263,-1,263,269,267,-1,256,263,268,-1,268,270,256,-1,256,270,271,-1,271,257,256,-1,269,272,267,-1,186,187,188,-1,188,189,186,-1,189,188,190,-1,273,274,275,-1,20,21,22,-1,22,23,20,-1,24,25,22,-1,22,21,24,-1,26,27,24,-1,28,29,30,-1,31,28,30,-1,30,32,31,-1,29,20,30,-1,23,30,20,-1,23,33,30,-1,34,35,36,-1,36,37,34,-1,38,36,33,-1,33,39,38,-1,38,40,37,-1,37,36,38,-1,33,36,35,-1,191,192,193,-1,191,187,186,-1,186,192,191,-1,26,5,4,-1,4,27,26,-1,194,195,193,-1,193,192,194,-1,196,193,195,-1,195,197,196,-1,192,186,198,-1,198,199,192,-1,194,192,199,-1,198,186,200,-1,41,42,7,-1,7,42,43,-1,43,10,7,-1,10,43,44,-1,44,19,10,-1,45,46,47,-1,48,47,46,-1,41,46,45,-1,45,42,41,-1,47,49,50,-1,47,51,49,-1,51,52,49,-1,50,49,53,-1,53,49,54,-1,52,55,49,-1,55,56,49,-1,54,49,56,-1,48,46,41,-1,41,57,48,-1,58,59,57,-1,57,41,58,-1,42,45,60,-1,60,43,42,-1,43,60,61,-1,61,44,43,-1,24,27,25,-1,59,62,63,-1,63,57,59,-1,62,64,65,-1,65,63,62,-1,64,66,67,-1,67,65,64,-1,68,69,70,-1,66,70,69,-1,69,67,66,-1,50,45,47,-1,45,50,71,-1,51,47,48,-1,48,72,51,-1,57,63,72,-1,72,48,57,-1,71,73,60,-1,60,45,71,-1,73,74,61,-1,61,60,73,-1,75,52,51,-1,51,72,75,-1,75,72,63,-1,63,65,75,-1,76,77,78,-1,78,79,76,-1,77,80,40,-1,40,38,77,-1,81,32,33,-1,82,31,32,-1,32,81,82,-1,81,35,34,-1,34,82,81,-1,35,81,33,-1,24,21,83,-1,84,85,20,-1,20,29,84,-1,85,83,21,-1,21,20,85,-1,82,86,87,-1,87,31,82,-1,86,82,34,-1,34,88,86,-1,89,28,31,-1,31,87,89,-1,89,84,29,-1,29,28,89,-1,90,80,91,-1,92,93,94,-1,94,95,92,-1,91,80,94,-1,94,93,91,-1,76,95,94,-1,78,96,74,-1,74,73,78,-1,76,94,77,-1,80,77,94,-1,37,40,97,-1,97,98,37,-1,98,88,34,-1,34,37,98,-1,54,76,79,-1,79,53,54,-1,78,73,71,-1,71,79,78,-1,75,65,67,-1,67,69,75,-1,92,95,69,-1,69,68,92,-1,55,52,75,-1,75,69,55,-1,55,69,95,-1,95,56,55,-1,54,56,95,-1,95,76,54,-1,97,40,90,-1,40,80,90,-1,38,39,77,-1,39,96,78,-1,77,39,78,-1,19,1,17,-1,10,19,17,-1,71,50,53,-1,79,71,53,-1,201,200,186,-1,189,201,186,-1,33,32,30,-1,263,262,276,-1,269,263,276,-1,27,4,99,-1,100,74,96,-1,96,101,100,-1,74,100,102,-1,102,61,74,-1,61,102,99,-1,99,44,61,-1,96,33,101,-1,19,44,99,-1,4,19,99,-1,101,23,22,-1,22,100,101,-1,100,22,25,-1,25,102,100,-1,102,25,27,-1,27,99,102,-1,33,23,101,-1,33,96,39,-1,260,259,277,-1,273,275,277,-1,18,15,14,-1,17,18,14,-1,12,8,7,-1,11,12,7,-1,58,41,7,-1,6,58,7,-1,197,202,203,-1,204,203,202,-1,202,205,204,-1,204,205,206,-1,206,207,204,-1,207,206,208,-1,208,209,207,-1,209,208,210,-1,210,211,209,-1,212,213,190,-1,188,190,213,-1,214,187,188,-1,191,187,214,-1,214,215,191,-1,191,215,216,-1,216,196,191,-1,196,216,202,-1,202,197,196,-1,215,217,216,-1,218,219,220,-1,220,221,222,-1,217,222,221,-1,222,218,220,-1,215,222,217,-1,213,223,214,-1,214,188,213,-1,212,224,223,-1,223,213,212,-1,223,222,215,-1,215,214,223,-1,223,224,218,-1,218,222,223,-1,220,219,210,-1,210,208,220,-1,221,220,208,-1,208,206,221,-1,217,221,206,-1,206,205,217,-1,216,217,205,-1,205,202,216,-1,274,273,257,-1,257,271,274,-1,278,279,255,-1,255,258,278,-1,279,280,262,-1,262,255,279,-1,280,281,276,-1,276,262,280,-1,259,282,279,-1,279,278,259,-1,282,283,280,-1,280,279,282,-1,283,284,281,-1,281,280,283,-1,259,261,282,-1,283,282,261,-1,261,266,284,-1,284,283,261,-1,257,273,278,-1,278,258,257,-1,278,273,259,-1,273,277,259,-1,270,274,271,-1,286,287,285,-1,285,288,286,-1,289,290,291,-1,2,104,103,-1,103,3,2,-1,2,5,105,-1,105,104,2,-1,287,293,292,-1,292,285,287,-1,107,108,106,-1,106,109,107,-1,108,110,111,-1,113,110,112,-1,112,114,113,-1,115,114,112,-1,112,107,115,-1,116,115,107,-1,107,109,116,-1,111,110,113,-1,106,116,109,-1,117,113,114,-1,118,115,116,-1,111,113,117,-1,106,118,116,-1,119,104,105,-1,103,104,117,-1,265,294,290,-1,290,266,265,-1,291,290,294,-1,293,296,295,-1,295,269,293,-1,296,293,287,-1,287,297,296,-1,298,297,287,-1,287,286,298,-1,269,295,272,-1,226,227,225,-1,225,189,226,-1,189,190,226,-1,299,300,301,-1,121,122,120,-1,120,123,121,-1,121,124,24,-1,24,122,121,-1,26,24,125,-1,126,127,128,-1,127,126,129,-1,129,130,127,-1,128,127,120,-1,123,120,127,-1,123,127,131,-1,133,134,132,-1,132,135,133,-1,136,131,133,-1,131,136,137,-1,135,138,136,-1,136,133,135,-1,131,134,133,-1,228,229,230,-1,225,227,228,-1,228,230,225,-1,105,5,26,-1,26,125,105,-1,231,229,232,-1,229,231,230,-1,232,229,233,-1,233,234,232,-1,230,235,225,-1,235,230,236,-1,231,236,230,-1,235,237,225,-1,139,108,140,-1,141,140,108,-1,108,111,141,-1,142,141,111,-1,111,119,142,-1,143,144,145,-1,146,145,144,-1,143,145,139,-1,139,140,143,-1,144,147,148,-1,144,148,149,-1,149,148,150,-1,147,151,148,-1,151,152,148,-1,150,148,153,-1,153,148,154,-1,152,154,148,-1,139,145,146,-1,146,155,139,-1,155,157,156,-1,156,139,155,-1,158,143,140,-1,140,141,158,-1,159,158,141,-1,141,142,159,-1,24,124,125,-1,160,161,157,-1,157,155,160,-1,162,163,161,-1,161,160,162,-1,164,165,163,-1,163,162,164,-1,68,70,166,-1,166,70,165,-1,165,164,166,-1,147,144,143,-1,143,167,147,-1,146,144,149,-1,149,168,146,-1,168,160,155,-1,155,146,168,-1,158,169,167,-1,167,143,158,-1,159,170,169,-1,169,158,159,-1,149,150,171,-1,171,168,149,-1,160,168,171,-1,171,162,160,-1,173,174,172,-1,172,175,173,-1,138,176,174,-1,174,136,138,-1,177,131,130,-1,130,129,178,-1,178,177,130,-1,132,134,177,-1,177,178,132,-1,134,131,177,-1,24,83,122,-1,120,85,84,-1,84,128,120,-1,122,83,85,-1,85,120,122,-1,87,86,178,-1,178,129,87,-1,132,178,86,-1,86,88,132,-1,129,126,89,-1,89,87,129,-1,128,84,89,-1,89,126,128,-1,90,91,176,-1,179,93,92,-1,92,180,179,-1,179,176,91,-1,91,93,179,-1,172,179,180,-1,170,181,173,-1,173,169,170,-1,172,174,179,-1,176,179,174,-1,97,138,135,-1,135,98,97,-1,132,88,98,-1,98,135,132,-1,175,172,152,-1,152,151,175,-1,167,169,173,-1,173,175,167,-1,164,162,171,-1,171,166,164,-1,166,180,92,-1,92,68,166,-1,171,150,153,-1,153,166,171,-1,180,166,153,-1,153,154,180,-1,180,154,152,-1,152,172,180,-1,97,90,138,-1,138,90,176,-1,136,174,137,-1,137,173,181,-1,174,173,137,-1,119,117,104,-1,111,117,119,-1,167,151,147,-1,175,151,167,-1,201,225,237,-1,189,225,201,-1,131,127,130,-1,293,276,292,-1,269,276,293,-1,125,182,105,-1,181,170,183,-1,183,184,181,-1,185,183,170,-1,170,159,185,-1,182,185,159,-1,159,142,182,-1,181,184,131,-1,119,182,142,-1,105,182,119,-1,121,123,184,-1,184,183,121,-1,124,121,183,-1,183,185,124,-1,125,124,185,-1,185,182,125,-1,131,184,123,-1,131,137,181,-1,291,302,289,-1,299,302,300,-1,118,114,115,-1,117,114,118,-1,112,108,107,-1,110,108,112,-1,156,108,139,-1,106,108,156,-1,234,238,239,-1,239,238,240,-1,240,241,239,-1,242,241,240,-1,240,243,242,-1,244,242,243,-1,243,245,244,-1,210,244,245,-1,245,211,210,-1,212,190,246,-1,226,246,190,-1,247,226,227,-1,228,247,227,-1,247,228,248,-1,249,248,228,-1,228,233,249,-1,233,239,249,-1,239,233,234,-1,248,249,250,-1,218,251,219,-1,251,252,253,-1,250,253,252,-1,252,251,218,-1,248,250,252,-1,247,254,246,-1,246,226,247,-1,254,224,212,-1,212,246,254,-1,248,252,254,-1,254,247,248,-1,218,224,254,-1,254,252,218,-1,210,219,251,-1,251,244,210,-1,244,251,253,-1,253,242,244,-1,242,253,250,-1,250,241,242,-1,241,250,249,-1,249,239,241,-1,286,299,301,-1,301,298,286,-1,285,304,303,-1,303,288,285,-1,292,305,304,-1,304,285,292,-1,276,281,305,-1,305,292,276,-1,304,306,289,-1,289,303,304,-1,305,307,306,-1,306,304,305,-1,281,284,307,-1,307,305,281,-1,289,306,290,-1,307,290,306,-1,284,266,290,-1,290,307,284,-1,303,299,286,-1,286,288,303,-1,303,289,299,-1,299,289,302,-1,297,298,301,-1]);
Coordinate209 := TCoordinateNode.Create;
Coordinate209.SetPoint([Vector3(0,0.8783,4.87),Vector3(0,1.861,5.63),Vector3(0,1.441,5.349),Vector3(0,3.406,4.524),Vector3(0,5.199,4.739),Vector3(0,0.9739,5.064),Vector3(0,2.58,4.856),Vector3(0,2.211,5.292),Vector3(0,0.4934,4.678),Vector3(0,0.3902,4.306),Vector3(0,0.8352,4.754),Vector3(0,0.9007,4.555),Vector3(0,-0.3768,3.705),Vector3(0,-0.9384,3.319),Vector3(0,-1.033,2.94),Vector3(0,7.444,4.698),Vector3(0,-0.8666,2.171),Vector3(0,10.26,3.895),Vector3(0,11.43,1.016),Vector3(0,11.57,-3.24),Vector3(0,1.168,-4.095),Vector3(0,9.763,-5.461),Vector3(0,-0.6657,1.243),Vector3(0,0.1225,-1.991),Vector3(0,-0.2918,-0.2247),Vector3(4.339,9.081,-3.773),Vector3(3.945,3.241,-3.318),Vector3(1.995,1.287,-3.866),Vector3(3.386,10.76,-2.843),Vector3(4.399,1.696,-1.385),Vector3(5.135,4.015,-1.676),Vector3(3.93,1.384,-0.5102),Vector3(5.012,5.02,-0.863),Vector3(4.179,1.62,-1.577),Vector3(4.917,4.074,-1.855),Vector3(3.689,1.291,-0.4955),Vector3(4.7,5.188,-0.911),Vector3(3.751,1.809,0.7529),Vector3(1.233,0.0355,-0.2831),Vector3(1.256,0.3297,-1.757),Vector3(3.766,1.592,-0.562),Vector3(1.927,11.33,-3.108),Vector3(4.541,9.332,-2.466),Vector3(0.7067,11.67,0.9268),Vector3(4.05,3.993,-1.319),Vector3(1.616,-0.2444,3.292),Vector3(0.7396,0.7015,4.358),Vector3(0.7307,0.9735,4.618),Vector3(2.134,11.37,0.7594),Vector3(3.772,10.66,0.4192),Vector3(4.581,9.369,-0.6614),Vector3(4.316,8.634,1.467),Vector3(4.707,7.768,-0.1583),Vector3(3.633,9.55,2.656),Vector3(1.848,10.1,3.552),Vector3(4.587,4.881,-0.149),Vector3(4.05,3.362,0.5064),Vector3(2.763,0.5994,0.9473),Vector3(1.415,-0.2675,1.138),Vector3(2.49,3.399,3.625),Vector3(3.601,2.623,3.149),Vector3(1.532,4.49,4.051),Vector3(1.502,2.716,3.857),Vector3(1.091,3.336,3.968),Vector3(4.014,3.683,2.653),Vector3(4.028,4.155,1.569),Vector3(3.921,2.599,2.598),Vector3(3.779,3.553,3.132),Vector3(4.223,5.917,1.542),Vector3(3.974,2.959,1.578),Vector3(3.724,1.692,1.643),Vector3(3.359,0.8142,1.767),Vector3(1.601,-0.3245,2.04),Vector3(4.114,6.664,2.76),Vector3(3.62,7.036,3.46),Vector3(2.723,7.312,4.198),Vector3(1.683,7.392,4.557),Vector3(3.969,4.587,3.036),Vector3(4.034,5.408,2.903),Vector3(3.693,1.569,2.779),Vector3(3.402,0.8195,2.722),Vector3(1.687,-0.3262,2.823),Vector3(3.485,4.565,3.466),Vector3(3.572,5.843,3.535),Vector3(3.572,5.223,3.556),Vector3(1.042,1.903,4.858),Vector3(0.9314,1.432,4.927),Vector3(0.9418,0.9451,4.384),Vector3(0.6963,0.8861,4.43),Vector3(0.6638,0.9257,4.365),Vector3(0.5502,-0.2755,3.699),Vector3(0.7131,0.905,4.486),Vector3(1.383,0.1309,3.646),Vector3(0.3663,-0.8626,3.332),Vector3(0.2731,0.9315,4.501),Vector3(0.3499,0.8809,4.7),Vector3(0.4401,0.4508,4.283),Vector3(0.4464,0.5647,4.621),Vector3(0.311,2.525,4.725),Vector3(0.2368,2.079,5.244),Vector3(3.219,0.9094,3.374),Vector3(2.397,1.119,3.892),Vector3(1.62,1.297,4.523),Vector3(0.3865,1.035,4.944),Vector3(2.411,2.381,3.523),Vector3(3.662,2.337,3.281),Vector3(3.476,1.596,3.477),Vector3(2.523,2.207,3.795),Vector3(2.513,1.691,4.071),Vector3(2.7,6.076,4.217),Vector3(2.665,5.493,4.127),Vector3(2.554,4.827,3.836),Vector3(0.456,3.389,4.414),Vector3(1.234,2.402,4.284),Vector3(1.46,5.789,4.643),Vector3(0.8218,5.198,4.653),Vector3(0.3528,1.577,5.273),Vector3(0.3591,0.9104,4.775),Vector3(3.073,9.605,-4.613),Vector3(5.266,6.378,-1.609),Vector3(1.812,9.558,-5.35),Vector3(1.994,0.5092,3.665),Vector3(2.644,0.2584,1.892),Vector3(2.556,0.2974,3.27),Vector3(2.695,0.2342,2.718),Vector3(0,5.606,6.313),Vector3(0,8.234,5.987),Vector3(0,11.61,3.79),Vector3(0,10.53,4.971),Vector3(0,11.85,2.176),Vector3(0,4.926,6.099),Vector3(5.044,4.38,-0.2258),Vector3(4.871,4.698,2.585),Vector3(3.976,4.846,4.498),Vector3(2.355,4.991,5.59),Vector3(0.7709,11.88,1.826),Vector3(3.984,10.78,0.7706),Vector3(2.623,11.59,0.9046),Vector3(2.099,11.66,3.042),Vector3(3.181,10.64,4.067),Vector3(5.224,5.37,2.621),Vector3(4.17,5.521,4.626),Vector3(2.469,5.669,5.78),Vector3(2.456,8.276,5.491),Vector3(4.027,8.2,4.441),Vector3(5.098,8.218,2.779),Vector3(5.257,8.219,0.1574),Vector3(5.447,5.013,-0.1112),Vector3(4.139,6.465,-4.729),Vector3(3.113,6.989,-5.609),Vector3(1.419,5.872,-6.307),Vector3(0,6.077,-6.313),Vector3(3.05,2.794,-4.769),Vector3(1.818,2.754,-5.621),Vector3(0,2.959,-5.732),Vector3(-4.339,9.081,-3.773),Vector3(-3.945,3.241,-3.318),Vector3(-1.995,1.287,-3.866),Vector3(-3.386,10.76,-2.843),Vector3(-4.399,1.696,-1.385),Vector3(-5.135,4.015,-1.676),Vector3(-3.93,1.384,-0.5102),Vector3(-5.012,5.02,-0.863),Vector3(-4.179,1.62,-1.577),Vector3(-4.917,4.074,-1.855),Vector3(-3.689,1.291,-0.4955),Vector3(-4.7,5.188,-0.911),Vector3(-3.751,1.809,0.7529),Vector3(-1.233,0.0355,-0.2831),Vector3(-1.256,0.3297,-1.757),Vector3(-3.766,1.592,-0.562),Vector3(-1.927,11.33,-3.108),Vector3(-4.541,9.332,-2.466),Vector3(-0.7067,11.67,0.9268),Vector3(-4.05,3.993,-1.319),Vector3(-1.616,-0.2444,3.292),Vector3(-0.7395,0.7015,4.358),Vector3(-0.7307,0.9735,4.618),Vector3(-2.134,11.37,0.7594),Vector3(-3.772,10.66,0.4192),Vector3(-4.581,9.369,-0.6614),Vector3(-4.316,8.634,1.467),Vector3(-4.707,7.768,-0.1583),Vector3(-3.633,9.55,2.656),Vector3(-1.848,10.1,3.552),Vector3(-4.587,4.881,-0.149),Vector3(-4.05,3.362,0.5064),Vector3(-2.763,0.5994,0.9473),Vector3(-1.415,-0.2675,1.138),Vector3(-2.49,3.399,3.625),Vector3(-3.601,2.623,3.149),Vector3(-1.532,4.49,4.051),Vector3(-1.502,2.716,3.857),Vector3(-1.091,3.336,3.968),Vector3(-4.014,3.683,2.653),Vector3(-4.028,4.155,1.569),Vector3(-3.921,2.599,2.598),Vector3(-3.779,3.553,3.132),Vector3(-4.223,5.917,1.542),Vector3(-3.974,2.959,1.578),Vector3(-3.724,1.692,1.643),Vector3(-3.359,0.8142,1.767),Vector3(-1.601,-0.3245,2.04),Vector3(-4.114,6.664,2.76),Vector3(-3.62,7.036,3.46),Vector3(-2.723,7.312,4.198),Vector3(-1.683,7.392,4.557),Vector3(-3.969,4.587,3.036),Vector3(-4.034,5.408,2.903),Vector3(-3.693,1.569,2.779),Vector3(-3.402,0.8195,2.722),Vector3(-1.687,-0.3262,2.823),Vector3(-3.485,4.565,3.466),Vector3(-3.572,5.843,3.535),Vector3(-3.572,5.223,3.556),Vector3(-1.042,1.903,4.858),Vector3(-0.9314,1.432,4.927),Vector3(-0.9417,0.9451,4.384),Vector3(-0.6963,0.8861,4.43),Vector3(-0.6638,0.9257,4.365),Vector3(-0.5502,-0.2755,3.699),Vector3(-0.7131,0.905,4.486),Vector3(-1.383,0.1309,3.646),Vector3(-0.3663,-0.8626,3.332),Vector3(-0.2731,0.9315,4.501),Vector3(-0.3499,0.8809,4.7),Vector3(-0.4401,0.4508,4.283),Vector3(-0.4464,0.5647,4.621),Vector3(-0.311,2.525,4.725),Vector3(-0.2368,2.079,5.244),Vector3(-3.219,0.9094,3.374),Vector3(-2.397,1.119,3.892),Vector3(-1.62,1.297,4.523),Vector3(-0.3865,1.035,4.944),Vector3(-2.411,2.381,3.523),Vector3(-3.662,2.337,3.281),Vector3(-3.476,1.596,3.477),Vector3(-2.523,2.207,3.795),Vector3(-2.513,1.691,4.071),Vector3(-2.7,6.076,4.217),Vector3(-2.665,5.493,4.127),Vector3(-2.554,4.827,3.836),Vector3(-0.456,3.389,4.414),Vector3(-1.234,2.402,4.284),Vector3(-1.46,5.789,4.643),Vector3(-0.8218,5.198,4.653),Vector3(-0.3528,1.577,5.273),Vector3(-0.3591,0.9104,4.775),Vector3(-3.073,9.605,-4.613),Vector3(-5.266,6.378,-1.609),Vector3(-1.812,9.558,-5.35),Vector3(-1.994,0.5092,3.665),Vector3(-2.644,0.2584,1.892),Vector3(-2.556,0.2974,3.27),Vector3(-2.695,0.2342,2.718),Vector3(-5.044,4.38,-0.2258),Vector3(-4.871,4.698,2.585),Vector3(-3.976,4.846,4.498),Vector3(-2.355,4.991,5.59),Vector3(-0.7709,11.88,1.826),Vector3(-3.984,10.78,0.7706),Vector3(-2.623,11.59,0.9046),Vector3(-2.099,11.66,3.042),Vector3(-3.181,10.64,4.067),Vector3(-5.224,5.37,2.621),Vector3(-4.17,5.521,4.626),Vector3(-2.469,5.669,5.78),Vector3(-2.456,8.276,5.491),Vector3(-4.027,8.2,4.441),Vector3(-5.098,8.218,2.779),Vector3(-5.257,8.219,0.1574),Vector3(-5.447,5.013,-0.1112),Vector3(-4.139,6.465,-4.729),Vector3(-3.113,6.989,-5.609),Vector3(-1.419,5.872,-6.307),Vector3(-3.05,2.794,-4.769),Vector3(-1.818,2.754,-5.621),Vector3(0.7067,11.67,0.9268),Vector3(0,11.43,1.016),Vector3(2.134,11.37,0.7594),Vector3(0.7067,11.67,0.9268),Vector3(3.772,10.66,0.4192),Vector3(2.134,11.37,0.7594),Vector3(4.587,4.881,-0.149),Vector3(4.707,7.768,-0.1583),Vector3(0,11.43,1.016),Vector3(-0.7067,11.67,0.9268),Vector3(-0.7067,11.67,0.9268),Vector3(-2.134,11.37,0.7594),Vector3(-2.134,11.37,0.7594),Vector3(-3.772,10.66,0.4192),Vector3(-4.707,7.768,-0.1583),Vector3(-4.587,4.881,-0.149),Vector3(0,11.43,1.016),Vector3(0.7067,11.67,0.9268),Vector3(4.587,4.881,-0.149),Vector3(0.7709,11.88,1.826),Vector3(2.623,11.59,0.9046),Vector3(5.447,5.013,-0.1112),Vector3(-0.7067,11.67,0.9268),Vector3(-4.587,4.881,-0.149),Vector3(-0.7709,11.88,1.826),Vector3(-2.623,11.59,0.9046),Vector3(-5.447,5.013,-0.1112),Vector3(2.623,11.59,0.9046),Vector3(-2.623,11.59,0.9046)]);
{ .SetCoord }
IndexedFaceSet208.Coord := Coordinate209;
TextureCoordinate210 := TTextureCoordinateNode.Create;
TextureCoordinate210.SetPoint([Vector2(0.0573,0.6967),Vector2(0.0565,0.6829),Vector2(0.0109,0.668),Vector2(0.0107,0.6873),Vector2(0.0634,0.6688),Vector2(0.011,0.6506),Vector2(0.1803,0.9015),Vector2(0.1606,0.8328),Vector2(0.2007,0.8632),Vector2(0.196,0.9081),Vector2(0.1497,0.7628),Vector2(0.1564,0.7441),Vector2(0.1737,0.7586),Vector2(0.1475,0.7399),Vector2(0.1655,0.7552),Vector2(0.1926,0.8659),Vector2(0.1844,0.9156),Vector2(0.1503,0.7535),Vector2(0.1604,0.8619),Vector2(0.1133,0.7081),Vector2(0.0314,0.6673),Vector2(0.0247,0.641),Vector2(0.0709,0.669),Vector2(0.0622,0.6857),Vector2(0.0111,0.6334),Vector2(0.0735,0.6655),Vector2(0.011,0.6412),Vector2(0.0703,0.6659),Vector2(0.0275,0.7047),Vector2(0.0273,0.6997),Vector2(0.0383,0.711),Vector2(0.0239,0.7189),Vector2(0.0367,0.7193),Vector2(0.0458,0.722),Vector2(0.0242,0.7202),Vector2(0.0373,0.7201),Vector2(0.038,0.7232),Vector2(0.0252,0.7258),Vector2(0.0454,0.7437),Vector2(0.0709,0.7379),Vector2(0.0239,0.75),Vector2(0.1597,0.8681),Vector2(0.1579,0.8143),Vector2(0.1488,0.7571),Vector2(0.1354,0.7175),Vector2(0.156,0.7976),Vector2(0.1593,0.8464),Vector2(0.1506,0.8404),Vector2(0.1575,0.887),Vector2(0.1028,0.833),Vector2(0.1441,0.7985),Vector2(0.1396,0.8857),Vector2(0.105,0.8972),Vector2(0.1001,0.7872),Vector2(0.0663,0.802),Vector2(0.0672,0.8818),Vector2(0.051,0.8298),Vector2(0.1598,0.924),Vector2(0.1667,0.9474),Vector2(0.1637,0.9518),Vector2(0.1477,0.7512),Vector2(0.137,0.7174),Vector2(0.1454,0.9682),Vector2(0.1427,0.9433),Vector2(0.1121,0.9802),Vector2(0.1103,0.9533),Vector2(0.0735,0.9835),Vector2(0.0644,0.94),Vector2(0.0103,0.9132),Vector2(0.0408,0.9133),Vector2(0.0111,0.9855),Vector2(0.1464,0.7855),Vector2(0.1428,0.9153),Vector2(0.1397,0.7521),Vector2(0.1302,0.7212),Vector2(0.1091,0.9271),Vector2(0.0564,0.7877),Vector2(0.0494,0.765),Vector2(0.104,0.756),Vector2(0.1043,0.7793),Vector2(0.0195,0.7726),Vector2(0.0355,0.7211),Vector2(0.021,0.7213),Vector2(0.0111,0.6375),Vector2(0.011,0.6969),Vector2(0.011,0.6626),Vector2(0.0109,0.7198),Vector2(0.0109,0.7168),Vector2(0.0109,0.7187),Vector2(0.011,0.7014),Vector2(0.0108,0.7626),Vector2(0.0107,0.7785),Vector2(0.0105,0.8326),Vector2(0.0107,0.7953),Vector2(0.0222,0.7929),Vector2(0.0275,0.8319),Vector2(0.0997,0.7303),Vector2(0.0108,0.7438),Vector2(0.0109,0.7229),Vector2(0.1089,0.6924),Vector2(0.1057,0.6936),Vector2(0.0848,0.7029),Vector2(0.1109,0.691),Vector2(0.0573,0.697),Vector2(0.0564,0.6832),Vector2(0.063,0.669),Vector2(0.1814,0.9007),Vector2(0.2017,0.8622),Vector2(0.1613,0.8322),Vector2(0.1972,0.9071),Vector2(0.1566,0.7436),Vector2(0.15,0.7622),Vector2(0.1741,0.7579),Vector2(0.1476,0.7394),Vector2(0.1659,0.7545),Vector2(0.1936,0.8649),Vector2(0.1857,0.9148),Vector2(0.1505,0.753),Vector2(0.1614,0.8613),Vector2(0.1131,0.7079),Vector2(0.0308,0.6678),Vector2(0.0704,0.6692),Vector2(0.0239,0.6416),Vector2(0.0618,0.686),Vector2(0.073,0.6657),Vector2(0.0699,0.6661),Vector2(0.0271,0.7053),Vector2(0.038,0.7115),Vector2(0.0268,0.7003),Vector2(0.0235,0.7195),Vector2(0.0364,0.7198),Vector2(0.0455,0.7224),Vector2(0.0239,0.7208),Vector2(0.0377,0.7237),Vector2(0.037,0.7206),Vector2(0.0249,0.7263),Vector2(0.0452,0.7441),Vector2(0.0707,0.7381),Vector2(0.0237,0.7506),Vector2(0.1605,0.8675),Vector2(0.1583,0.8136),Vector2(0.1489,0.7566),Vector2(0.1353,0.7171),Vector2(0.1563,0.797),Vector2(0.1511,0.8398),Vector2(0.1599,0.8458),Vector2(0.1583,0.8864),Vector2(0.1444,0.798),Vector2(0.1033,0.8329),Vector2(0.1404,0.8853),Vector2(0.1058,0.8971),Vector2(0.1002,0.7872),Vector2(0.0665,0.8022),Vector2(0.0679,0.882),Vector2(0.0514,0.8302),Vector2(0.1609,0.9234),Vector2(0.168,0.9467),Vector2(0.1651,0.9511),Vector2(0.1477,0.7507),Vector2(0.1368,0.717),Vector2(0.1438,0.9428),Vector2(0.1468,0.9677),Vector2(0.1114,0.9531),Vector2(0.1136,0.98),Vector2(0.0654,0.9402),Vector2(0.075,0.9836),Vector2(0.0416,0.9138),Vector2(0.1466,0.785),Vector2(0.1437,0.9149),Vector2(0.1396,0.7517),Vector2(0.13,0.7208),Vector2(0.1101,0.9269),Vector2(0.0566,0.788),Vector2(0.1039,0.7559),Vector2(0.0493,0.7654),Vector2(0.1043,0.7792),Vector2(0.0195,0.7733),Vector2(0.0352,0.7216),Vector2(0.0207,0.7219),Vector2(0.0223,0.7935),Vector2(0.0278,0.8325),Vector2(0.0995,0.7302),Vector2(0.1086,0.6922),Vector2(0.1053,0.6934),Vector2(0.0845,0.7029),Vector2(0.1105,0.6908),Vector2(0.5672,0.9106),Vector2(0.5766,0.9675),Vector2(0.5296,0.9775),Vector2(0.5063,0.9145),Vector2(0.5063,0.9684),Vector2(0.6305,0.9446),Vector2(0.6259,0.8955),Vector2(0.6485,0.869),Vector2(0.6418,0.7943),Vector2(0.6455,0.7739),Vector2(0.6614,0.8463),Vector2(0.6575,0.7455),Vector2(0.596,0.8103),Vector2(0.6256,0.8041),Vector2(0.5618,0.8114),Vector2(0.5064,0.8126),Vector2(0.6858,0.7499),Vector2(0.6725,0.7284),Vector2(0.6668,0.7266),Vector2(0.6784,0.7499),Vector2(0.6437,0.7459),Vector2(0.6373,0.7229),Vector2(0.5876,0.7457),Vector2(0.5839,0.7229),Vector2(0.5064,0.7411),Vector2(0.5064,0.7183),Vector2(0.5063,0.978),Vector2(0.5317,0.9805),Vector2(0.5927,0.9748),Vector2(0.6375,0.9469),Vector2(0.6795,0.8606),Vector2(0.6742,0.8485),Vector2(0.5063,0.9189),Vector2(0.5063,0.8342),Vector2(0.5872,0.838),Vector2(0.6389,0.8402),Vector2(0.611,0.9271),Vector2(0.5754,0.9674),Vector2(0.5063,0.962),Vector2(0.4455,0.9105),Vector2(0.4831,0.9774),Vector2(0.4361,0.9675),Vector2(0.3822,0.9445),Vector2(0.3643,0.8689),Vector2(0.3867,0.8954),Vector2(0.371,0.7942),Vector2(0.3674,0.7737),Vector2(0.3514,0.8461),Vector2(0.3555,0.7453),Vector2(0.4167,0.8102),Vector2(0.3872,0.804),Vector2(0.4509,0.8114),Vector2(0.3404,0.7282),Vector2(0.3272,0.7498),Vector2(0.3461,0.7264),Vector2(0.3344,0.7497),Vector2(0.3691,0.7458),Vector2(0.3755,0.7228),Vector2(0.4251,0.7456),Vector2(0.4288,0.7229),Vector2(0.4809,0.9805),Vector2(0.42,0.9748),Vector2(0.3752,0.9468),Vector2(0.3334,0.8604),Vector2(0.3385,0.8483),Vector2(0.4255,0.8379),Vector2(0.4016,0.927),Vector2(0.3738,0.8401),Vector2(0.4372,0.9673),Vector2(0.5685,0.6871),Vector2(0.5861,0.6783),Vector2(0.5473,0.6455),Vector2(0.5496,0.6512),Vector2(0.3982,0.6623),Vector2(0.3199,0.6645),Vector2(0.3521,0.7176),Vector2(0.5721,0.7229),Vector2(0.6023,0.7197),Vector2(0.3139,0.7387),Vector2(0.3101,0.7743),Vector2(0.3506,0.7743),Vector2(0.5844,0.7546),Vector2(0.5777,0.714),Vector2(0.6092,0.7745),Vector2(0.5621,0.6675),Vector2(0.5363,0.6444),Vector2(0.5775,0.7746),Vector2(0.4666,0.6249),Vector2(0.4923,0.6408),Vector2(0.4189,0.6442),Vector2(0.5781,0.7743),Vector2(0.3814,0.6498),Vector2(0.4894,0.6568),Vector2(0.5086,0.6859),Vector2(0.4848,0.7339),Vector2(0.49,0.7742),Vector2(0.3964,0.6876),Vector2(0.401,0.7226),Vector2(0.407,0.7742),Vector2(0.5684,0.687),Vector2(0.5473,0.6452),Vector2(0.5861,0.678),Vector2(0.5496,0.651),Vector2(0.3981,0.6622),Vector2(0.3521,0.7177),Vector2(0.3199,0.6642),Vector2(0.5721,0.7228),Vector2(0.6023,0.7194),Vector2(0.3139,0.7386),Vector2(0.5844,0.7539),Vector2(0.5777,0.7134),Vector2(0.5621,0.6669),Vector2(0.5363,0.644),Vector2(0.4666,0.6246),Vector2(0.4189,0.6438),Vector2(0.4923,0.6404),Vector2(0.3814,0.6496),Vector2(0.4894,0.6567),Vector2(0.5085,0.6859),Vector2(0.4848,0.7341),Vector2(0.3964,0.6877),Vector2(0.401,0.7227)]);
{ .SetTexCoord }
IndexedFaceSet208.TexCoord := TextureCoordinate210;
{ .SetGeometry }
Shape204.Geometry := IndexedFaceSet208;
{ .AddChild }
Transform203.AddChildren([Shape204]);
{ .AddChildren }
HAnimSegment202.AddChildren([Transform203]);
{ .AddChildren }
HAnimJoint201.AddChildren([HAnimSegment202]);
{ .AddChildren }
HAnimJoint191.AddChildren([HAnimJoint201]);
{ .AddChildren }
HAnimJoint121.AddChildren([HAnimJoint191]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimJoint121]);
{ .AddSkeleton }
HAnimHumanoid23.SetSkeleton([HAnimJoint31]);
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211 := HAnimJoint31;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint211;
HAnimJoint212 := THAnimJointNode.Create;
HAnimJoint212 := HAnimJoint121;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint212;
HAnimJoint213 := THAnimJointNode.Create;
HAnimJoint213 := HAnimJoint201;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint213;
HAnimJoint214 := THAnimJointNode.Create;
HAnimJoint214 := HAnimJoint191;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint214;
HAnimJoint215 := THAnimJointNode.Create;
HAnimJoint215 := HAnimJoint141;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint215;
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216 := HAnimJoint171;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint216;
HAnimJoint217 := THAnimJointNode.Create;
HAnimJoint217 := HAnimJoint41;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint217;
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint218;
HAnimJoint219 := THAnimJointNode.Create;
HAnimJoint219 := HAnimJoint51;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint219;
HAnimJoint220 := THAnimJointNode.Create;
HAnimJoint220 := HAnimJoint91;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint220;
HAnimJoint221 := THAnimJointNode.Create;
HAnimJoint221 := HAnimJoint71;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint221;
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222 := HAnimJoint111;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint222;
HAnimJoint223 := THAnimJointNode.Create;
HAnimJoint223 := HAnimJoint151;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint223;
HAnimJoint224 := THAnimJointNode.Create;
HAnimJoint224 := HAnimJoint181;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint224;
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225 := HAnimJoint131;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint225;
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226 := HAnimJoint161;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint226;
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227 := HAnimJoint61;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint227;
HAnimJoint228 := THAnimJointNode.Create;
HAnimJoint228 := HAnimJoint101;
{ .AddJoints }
HAnimHumanoid23.Joints := HAnimJoint228;
HAnimSegment229 := THAnimSegmentNode.Create;
HAnimSegment229 := HAnimSegment192;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment229;
HAnimSegment230 := THAnimSegmentNode.Create;
HAnimSegment230 := HAnimSegment122;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment230;
HAnimSegment231 := THAnimSegmentNode.Create;
HAnimSegment231 := HAnimSegment32;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment231;
HAnimSegment232 := THAnimSegmentNode.Create;
HAnimSegment232 := HAnimSegment202;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment232;
HAnimSegment233 := THAnimSegmentNode.Create;
HAnimSegment233 := HAnimSegment52;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment233;
HAnimSegment234 := THAnimSegmentNode.Create;
HAnimSegment234 := HAnimSegment92;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment234;
HAnimSegment235 := THAnimSegmentNode.Create;
HAnimSegment235 := HAnimSegment152;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment235;
HAnimSegment236 := THAnimSegmentNode.Create;
HAnimSegment236 := HAnimSegment182;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment236;
HAnimSegment237 := THAnimSegmentNode.Create;
HAnimSegment237 := HAnimSegment142;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment237;
HAnimSegment238 := THAnimSegmentNode.Create;
HAnimSegment238 := HAnimSegment172;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment238;
HAnimSegment239 := THAnimSegmentNode.Create;
HAnimSegment239 := HAnimSegment62;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment239;
HAnimSegment240 := THAnimSegmentNode.Create;
HAnimSegment240 := HAnimSegment102;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment240;
HAnimSegment241 := THAnimSegmentNode.Create;
HAnimSegment241 := HAnimSegment72;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment241;
HAnimSegment242 := THAnimSegmentNode.Create;
HAnimSegment242 := HAnimSegment112;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment242;
HAnimSegment243 := THAnimSegmentNode.Create;
HAnimSegment243 := HAnimSegment42;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment243;
HAnimSegment244 := THAnimSegmentNode.Create;
HAnimSegment244 := HAnimSegment82;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment244;
HAnimSegment245 := THAnimSegmentNode.Create;
HAnimSegment245 := HAnimSegment132;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment245;
HAnimSegment246 := THAnimSegmentNode.Create;
HAnimSegment246 := HAnimSegment162;
{ .AddSegments }
HAnimHumanoid23.Segments := HAnimSegment246;
{ .AddChildren }
Group19.AddChildren([HAnimHumanoid23]);
{ .AddGroup }
X3D0.AddChildren([Group19]);
Result := X3D0;
end;
