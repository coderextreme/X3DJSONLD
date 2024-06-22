function KoreanCharacter05Ju: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group20: TGroupNode;
WorldInfo21: TWorldInfoNode;
NavigationInfo22: TNavigationInfoNode;
Viewpoint23: TViewpointNode;
HAnimHumanoid24: THAnimHumanoidNode;
MetadataSet25: TMetadataSetNode;
MetadataString26: TMetadataStringNode;
MetadataString27: TMetadataStringNode;
MetadataString28: TMetadataStringNode;
MetadataString29: TMetadataStringNode;
MetadataFloat30: TMetadataFloatNode;
MetadataString31: TMetadataStringNode;
HAnimJoint32: THAnimJointNode;
HAnimSegment33: THAnimSegmentNode;
Transform34: TTransformNode;
Shape35: TShapeNode;
Appearance36: TAppearanceNode;
Material37: TMaterialNode;
ImageTexture38: TImageTextureNode;
IndexedFaceSet39: TIndexedFaceSetNode;
Coordinate40: TCoordinateNode;
TextureCoordinate41: TTextureCoordinateNode;
HAnimJoint42: THAnimJointNode;
HAnimSegment43: THAnimSegmentNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
ImageTexture48: TImageTextureNode;
IndexedFaceSet49: TIndexedFaceSetNode;
Coordinate50: TCoordinateNode;
TextureCoordinate51: TTextureCoordinateNode;
HAnimJoint52: THAnimJointNode;
HAnimSegment53: THAnimSegmentNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
Appearance56: TAppearanceNode;
Material57: TMaterialNode;
ImageTexture58: TImageTextureNode;
IndexedFaceSet59: TIndexedFaceSetNode;
Coordinate60: TCoordinateNode;
TextureCoordinate61: TTextureCoordinateNode;
HAnimJoint62: THAnimJointNode;
HAnimSegment63: THAnimSegmentNode;
Transform64: TTransformNode;
Shape65: TShapeNode;
Appearance66: TAppearanceNode;
Material67: TMaterialNode;
ImageTexture68: TImageTextureNode;
IndexedFaceSet69: TIndexedFaceSetNode;
Coordinate70: TCoordinateNode;
TextureCoordinate71: TTextureCoordinateNode;
HAnimJoint72: THAnimJointNode;
HAnimSegment73: THAnimSegmentNode;
Transform74: TTransformNode;
Shape75: TShapeNode;
Appearance76: TAppearanceNode;
Material77: TMaterialNode;
ImageTexture78: TImageTextureNode;
IndexedFaceSet79: TIndexedFaceSetNode;
Coordinate80: TCoordinateNode;
TextureCoordinate81: TTextureCoordinateNode;
HAnimJoint82: THAnimJointNode;
HAnimSegment83: THAnimSegmentNode;
Transform84: TTransformNode;
Shape85: TShapeNode;
Appearance86: TAppearanceNode;
Material87: TMaterialNode;
ImageTexture88: TImageTextureNode;
IndexedFaceSet89: TIndexedFaceSetNode;
Coordinate90: TCoordinateNode;
TextureCoordinate91: TTextureCoordinateNode;
HAnimJoint92: THAnimJointNode;
HAnimSegment93: THAnimSegmentNode;
Transform94: TTransformNode;
Shape95: TShapeNode;
Appearance96: TAppearanceNode;
Material97: TMaterialNode;
ImageTexture98: TImageTextureNode;
IndexedFaceSet99: TIndexedFaceSetNode;
Coordinate100: TCoordinateNode;
TextureCoordinate101: TTextureCoordinateNode;
HAnimJoint102: THAnimJointNode;
HAnimSegment103: THAnimSegmentNode;
Transform104: TTransformNode;
Shape105: TShapeNode;
Appearance106: TAppearanceNode;
Material107: TMaterialNode;
ImageTexture108: TImageTextureNode;
IndexedFaceSet109: TIndexedFaceSetNode;
Coordinate110: TCoordinateNode;
TextureCoordinate111: TTextureCoordinateNode;
HAnimJoint112: THAnimJointNode;
HAnimSegment113: THAnimSegmentNode;
Transform114: TTransformNode;
Shape115: TShapeNode;
Appearance116: TAppearanceNode;
Material117: TMaterialNode;
ImageTexture118: TImageTextureNode;
IndexedFaceSet119: TIndexedFaceSetNode;
Coordinate120: TCoordinateNode;
TextureCoordinate121: TTextureCoordinateNode;
HAnimJoint122: THAnimJointNode;
HAnimSegment123: THAnimSegmentNode;
Transform124: TTransformNode;
Shape125: TShapeNode;
Appearance126: TAppearanceNode;
Material127: TMaterialNode;
ImageTexture128: TImageTextureNode;
IndexedFaceSet129: TIndexedFaceSetNode;
Coordinate130: TCoordinateNode;
TextureCoordinate131: TTextureCoordinateNode;
HAnimJoint132: THAnimJointNode;
HAnimSegment133: THAnimSegmentNode;
Transform134: TTransformNode;
Shape135: TShapeNode;
Appearance136: TAppearanceNode;
Material137: TMaterialNode;
ImageTexture138: TImageTextureNode;
IndexedFaceSet139: TIndexedFaceSetNode;
Coordinate140: TCoordinateNode;
TextureCoordinate141: TTextureCoordinateNode;
HAnimJoint142: THAnimJointNode;
HAnimSegment143: THAnimSegmentNode;
Transform144: TTransformNode;
Shape145: TShapeNode;
Appearance146: TAppearanceNode;
Material147: TMaterialNode;
ImageTexture148: TImageTextureNode;
IndexedFaceSet149: TIndexedFaceSetNode;
Coordinate150: TCoordinateNode;
TextureCoordinate151: TTextureCoordinateNode;
HAnimJoint152: THAnimJointNode;
HAnimSegment153: THAnimSegmentNode;
Transform154: TTransformNode;
Shape155: TShapeNode;
Appearance156: TAppearanceNode;
Material157: TMaterialNode;
ImageTexture158: TImageTextureNode;
IndexedFaceSet159: TIndexedFaceSetNode;
Coordinate160: TCoordinateNode;
TextureCoordinate161: TTextureCoordinateNode;
HAnimJoint162: THAnimJointNode;
HAnimSegment163: THAnimSegmentNode;
Transform164: TTransformNode;
Shape165: TShapeNode;
Appearance166: TAppearanceNode;
Material167: TMaterialNode;
ImageTexture168: TImageTextureNode;
IndexedFaceSet169: TIndexedFaceSetNode;
Coordinate170: TCoordinateNode;
TextureCoordinate171: TTextureCoordinateNode;
HAnimJoint172: THAnimJointNode;
HAnimSegment173: THAnimSegmentNode;
Transform174: TTransformNode;
Shape175: TShapeNode;
Appearance176: TAppearanceNode;
Material177: TMaterialNode;
ImageTexture178: TImageTextureNode;
IndexedFaceSet179: TIndexedFaceSetNode;
Coordinate180: TCoordinateNode;
TextureCoordinate181: TTextureCoordinateNode;
HAnimJoint182: THAnimJointNode;
HAnimSegment183: THAnimSegmentNode;
Transform184: TTransformNode;
Shape185: TShapeNode;
Appearance186: TAppearanceNode;
Material187: TMaterialNode;
ImageTexture188: TImageTextureNode;
IndexedFaceSet189: TIndexedFaceSetNode;
Coordinate190: TCoordinateNode;
TextureCoordinate191: TTextureCoordinateNode;
HAnimJoint192: THAnimJointNode;
HAnimSegment193: THAnimSegmentNode;
Transform194: TTransformNode;
Shape195: TShapeNode;
Appearance196: TAppearanceNode;
Material197: TMaterialNode;
ImageTexture198: TImageTextureNode;
IndexedFaceSet199: TIndexedFaceSetNode;
Coordinate200: TCoordinateNode;
TextureCoordinate201: TTextureCoordinateNode;
HAnimJoint202: THAnimJointNode;
HAnimSegment203: THAnimSegmentNode;
Transform204: TTransformNode;
Shape205: TShapeNode;
Appearance206: TAppearanceNode;
Material207: TMaterialNode;
ImageTexture208: TImageTextureNode;
IndexedFaceSet209: TIndexedFaceSetNode;
Coordinate210: TCoordinateNode;
TextureCoordinate211: TTextureCoordinateNode;
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
HAnimJoint229: THAnimJointNode;
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
HAnimSegment247: THAnimSegmentNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'KoreanCharacter05Ju.x3d';
X3D0.Meta['creator'] := 'Jin Hoon Lee and Min Joo Lee';
X3D0.Meta['translator'] := 'Chul Hee Jung and Myeong Won Lee';
X3D0.Meta['created'] := '31 March 2011';
X3D0.Meta['translated'] := '1 November 2014';
X3D0.Meta['modified'] := '23 December 2021';
X3D0.Meta['warning'] := 'HAnimJoint and HAnimSegment names upgraded to HAnim2 but graph topology has inconsistencies that do not match loa=1 specification hierarchy';
X3D0.Meta['description'] := 'Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.';
X3D0.Meta['reference'] := 'KoreanCharacter00ReadMe.txt';
X3D0.Meta['reference'] := 'KoreanCharacterHumanMotion_Infotech2014_140706.pdf';
X3D0.Meta['reference'] := 'KoreanCharactersIllustrated.pdf';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter05Ju.x3d';
X3D0.Meta['generator'] := '3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview';
X3D0.Meta['generator'] := 'Suwon University HAnim Editor';
X3D0.Meta['generator'] := 'Gnu Image Manipulation Program, http://www.gimp.org';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group20 := TGroupNode.Create;
WorldInfo21 := TWorldInfoNode.Create;
WorldInfo21.Title := 'KoreanCharacter05Ju.x3d';
{ .AddChildren }
Group20.AddChildren([WorldInfo21]);
NavigationInfo22 := TNavigationInfoNode.Create;
NavigationInfo22.Speed := 1.5;
{ .AddChildren }
Group20.AddChildren([NavigationInfo22]);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.CenterOfRotation := Vector3(0,1,0);
Viewpoint23.Description := 'Ju';
Viewpoint23.Position := Vector3(0,1,3);
{ .AddChildren }
Group20.AddChildren([Viewpoint23]);
HAnimHumanoid24 := THAnimHumanoidNode.Create;
HAnimHumanoid24.NameField := 'Ju';
HAnimHumanoid24.Scale := Vector3(0.0225,0.0225,0.0225);
HAnimHumanoid24.Version := '2.0';
{ original HAnimHumanoid info='"authorName=Chul Hee Jung and Myeong Won Lee" "authorEmail=myeongwonlee@gmail.com" "creationDate=31 March 2011" "humanoidVersion=2.0" "gender=female" "height=1.5"' }
MetadataSet25 := TMetadataSetNode.Create;
MetadataSet25.NameField := 'HAnimHumanoid.info';
MetadataSet25.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString26 := TMetadataStringNode.Create;
MetadataString26.NameField := 'authorName';
MetadataString26.SetValue(['Chul Hee Jung and Myeong Won Lee']);
{ .SetValue }
MetadataSet25.Value := MetadataString26;
MetadataString27 := TMetadataStringNode.Create;
MetadataString27.NameField := 'authorEmail';
MetadataString27.SetValue(['myeongwonlee@gmail.com']);
{ .SetValue }
MetadataSet25.Value := MetadataString27;
MetadataString28 := TMetadataStringNode.Create;
MetadataString28.NameField := 'creationDate';
MetadataString28.SetValue(['31 March 2011']);
{ .SetValue }
MetadataSet25.Value := MetadataString28;
MetadataString29 := TMetadataStringNode.Create;
MetadataString29.NameField := 'gender';
MetadataString29.SetValue(['female']);
{ .SetValue }
MetadataSet25.Value := MetadataString29;
MetadataFloat30 := TMetadataFloatNode.Create;
MetadataFloat30.NameField := 'height';
MetadataFloat30.SetValue([1.5]);
{ .SetValue }
MetadataSet25.Value := MetadataFloat30;
MetadataString31 := TMetadataStringNode.Create;
MetadataString31.NameField := 'humanoidVersion';
MetadataString31.SetValue(['2.0']);
{ .SetValue }
MetadataSet25.Value := MetadataString31;
{ .SetMetadata }
HAnimHumanoid24.Metadata := MetadataSet25;
HAnimJoint32 := THAnimJointNode.Create;
HAnimJoint32.NameField := 'humanoid_root';
HAnimJoint32.Center := Vector3(0,36,-0.008798);
HAnimJoint32.SetUlimit([0,0,0]);
HAnimJoint32.SetLlimit([0,0,0]);
HAnimSegment33 := THAnimSegmentNode.Create;
HAnimSegment33.NameField := 'sacrum';
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(0,36,-0.008798);
Shape35 := TShapeNode.Create;
Appearance36 := TAppearanceNode.Create;
Material37 := TMaterialNode.Create;
Material37.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance36.Material := Material37;
ImageTexture38 := TImageTextureNode.Create;
ImageTexture38.SetUrl(['images/Ju.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Ju.png']);
{ .SetTexture }
Appearance36.Texture := ImageTexture38;
{ .SetAppearance }
Shape35.Appearance := Appearance36;
IndexedFaceSet39 := TIndexedFaceSetNode.Create;
IndexedFaceSet39.SetCoordIndex([2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1]);
IndexedFaceSet39.CreaseAngle := 1.57;
IndexedFaceSet39.SetTexCoordIndex([2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1]);
Coordinate40 := TCoordinateNode.Create;
Coordinate40.SetPoint([Vector3(0,0.4454,-0.7459),Vector3(0,0.0007,-0.815),Vector3(-0.5564,0.0003,-0.695),Vector3(-0.4789,0.4454,-0.6425),Vector3(-0.9644,-0.0008,-0.4321),Vector3(-0.8298,0.4454,-0.3599),Vector3(-1.113,-0.0019,0.0252),Vector3(-0.958,0.4454,0.0246),Vector3(-0.967,-0.0019,0.4693),Vector3(-0.8331,0.4454,0.3868),Vector3(-0.5615,-0.0019,0.6928),Vector3(-0.4847,0.4454,0.5842),Vector3(0,-0.0021,0.815),Vector3(0,0.4454,0.7124),Vector3(0.5615,-0.0023,0.6928),Vector3(0.4843,0.4454,0.5843),Vector3(0.967,-0.0023,0.4693),Vector3(0.8333,0.4454,0.3864),Vector3(1.113,-0.0021,0.0254),Vector3(0.9579,0.4454,0.025),Vector3(0.9643,-0.001,-0.4322),Vector3(0.8295,0.4454,-0.3602),Vector3(0.5564,0.0003,-0.695),Vector3(0.4789,0.4454,-0.6425),Vector3(0,-0.4517,-0.6943),Vector3(-0.482,-0.4521,-0.5899),Vector3(-0.8344,-0.4524,-0.3056),Vector3(-0.9635,-0.4517,0.0254),Vector3(-0.8367,-0.4526,0.4089),Vector3(-0.4855,-0.4549,0.587),Vector3(0,-0.4553,0.6926),Vector3(0.4853,-0.4539,0.5876),Vector3(0.8372,-0.4519,0.4089),Vector3(0.9634,-0.4519,0.0254),Vector3(0.8348,-0.4521,-0.3053),Vector3(0.4817,-0.4517,-0.5903),Vector3(0,-0.7806,-0.3645),Vector3(-0.2802,-0.7803,-0.3039),Vector3(-0.481,-0.7808,-0.1965),Vector3(-0.5545,-0.7803,0.0248),Vector3(-0.4804,-0.7802,0.248),Vector3(-0.2774,-0.7821,0.4083),Vector3(0,-0.783,0.4674),Vector3(0.2758,-0.7826,0.4083),Vector3(0.4803,-0.7808,0.2466),Vector3(0.5547,-0.7802,0.0246),Vector3(0.4812,-0.7814,-0.1946),Vector3(0.2787,-0.7807,-0.3037),Vector3(0,-0.8996,0.0253),Vector3(-0.0001,0.7482,-0.476),Vector3(-0.3509,0.7482,-0.4061),Vector3(-0.5969,0.7482,-0.2229),Vector3(-0.6804,0.7482,0.0088),Vector3(-0.6042,0.7482,0.2133),Vector3(-0.3645,0.7482,0.3391),Vector3(-0.0001,0.7482,0.4284),Vector3(0.364,0.7482,0.3391),Vector3(0.6042,0.7482,0.213),Vector3(0.6802,0.7482,0.0091),Vector3(0.5965,0.7482,-0.2231),Vector3(0.3508,0.7482,-0.4061),Vector3(-0.0002,0.8996,-0.0243)]);
{ .SetCoord }
IndexedFaceSet39.Coord := Coordinate40;
TextureCoordinate41 := TTextureCoordinateNode.Create;
TextureCoordinate41.SetPoint([Vector2(0.995,0.6227),Vector2(0.9911,0.5634),Vector2(0.9445,0.5634),Vector2(0.9587,0.6143),Vector2(0.8611,0.5667),Vector2(0.8645,0.6158),Vector2(0.8296,0.5725),Vector2(0.8297,0.6181),Vector2(0.7843,0.5725),Vector2(0.7986,0.6221),Vector2(0.7343,0.5716),Vector2(0.7402,0.6181),Vector2(0.6899,0.5733),Vector2(0.7033,0.6238),Vector2(0.7343,0.5716),Vector2(0.7402,0.6181),Vector2(0.7843,0.5724),Vector2(0.7986,0.6221),Vector2(0.8296,0.5725),Vector2(0.8297,0.6181),Vector2(0.8611,0.5667),Vector2(0.8646,0.6158),Vector2(0.9445,0.5634),Vector2(0.9587,0.6143),Vector2(0.9874,0.5161),Vector2(0.9409,0.5169),Vector2(0.8667,0.527),Vector2(0.8296,0.5279),Vector2(0.7882,0.5304),Vector2(0.7381,0.5276),Vector2(0.6693,0.5234),Vector2(0.738,0.5277),Vector2(0.7882,0.5305),Vector2(0.8296,0.5279),Vector2(0.8666,0.5271),Vector2(0.9409,0.517),Vector2(0.9852,0.4793),Vector2(0.8833,0.4954),Vector2(0.8658,0.4954),Vector2(0.8297,0.4954),Vector2(0.7933,0.4954),Vector2(0.7672,0.4952),Vector2(0.6706,0.4859),Vector2(0.7672,0.4952),Vector2(0.7936,0.4954),Vector2(0.8297,0.4954),Vector2(0.8655,0.4953),Vector2(0.8832,0.4954),Vector2(0.8296,0.4836),Vector2(0.995,0.6227),Vector2(0.9587,0.6143),Vector2(0.8645,0.6158),Vector2(0.8297,0.6181),Vector2(0.7986,0.6221),Vector2(0.7402,0.6181),Vector2(0.7033,0.6238),Vector2(0.7402,0.6181),Vector2(0.7986,0.6221),Vector2(0.8297,0.6181),Vector2(0.8646,0.6158),Vector2(0.9587,0.6143),Vector2(0.8402,0.6186)]);
{ .SetTexCoord }
IndexedFaceSet39.TexCoord := TextureCoordinate41;
{ .SetGeometry }
Shape35.Geometry := IndexedFaceSet39;
{ .AddChild }
Transform34.AddChildren([Shape35]);
{ .AddChildren }
HAnimSegment33.AddChildren([Transform34]);
{ .AddChildren }
HAnimJoint32.AddChildren([HAnimSegment33]);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.NameField := 'l_hip';
HAnimJoint42.Center := Vector3(3.22,33.619999,-0.2832);
HAnimJoint42.SetUlimit([0,0,0]);
HAnimJoint42.SetLlimit([0,0,0]);
HAnimSegment43 := THAnimSegmentNode.Create;
HAnimSegment43.NameField := 'l_thigh';
Transform44 := TTransformNode.Create;
Transform44.Translation := Vector3(3.22,33.619999,-0.2832);
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance46.Material := Material47;
ImageTexture48 := TImageTextureNode.Create;
ImageTexture48 := ImageTexture38;
{ .SetTexture }
Appearance46.Texture := ImageTexture48;
{ .SetAppearance }
Shape45.Appearance := Appearance46;
IndexedFaceSet49 := TIndexedFaceSetNode.Create;
IndexedFaceSet49.SetCoordIndex([33,32,31,-1,31,30,29,-1,31,29,28,-1,33,31,28,-1,34,33,28,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,28,29,1,-1,1,0,28,-1,29,30,2,-1,2,1,29,-1,30,31,3,-1,3,2,30,-1,31,32,4,-1,4,3,31,-1,32,33,5,-1,5,4,32,-1,33,34,6,-1,6,5,33,-1,34,28,0,-1,0,6,34,-1,21,22,35,-1,35,36,21,-1,22,23,37,-1,37,35,22,-1,23,24,38,-1,38,37,23,-1,24,25,39,-1,39,38,24,-1,25,26,40,-1,40,39,25,-1,26,27,41,-1,41,40,26,-1,27,21,36,-1,36,41,27,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1]);
IndexedFaceSet49.CreaseAngle := 1.57;
IndexedFaceSet49.SetTexCoordIndex([5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,29,28,35,-1,35,36,29,-1,28,30,37,-1,37,35,28,-1,30,31,38,-1,38,37,30,-1,31,32,39,-1,39,38,31,-1,32,33,40,-1,40,39,32,-1,33,34,41,-1,41,40,33,-1,34,29,36,-1,36,41,34,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1]);
Coordinate50 := TCoordinateNode.Create;
Coordinate50.SetPoint([Vector3(2.617,2.231,0.2976),Vector3(1.527,2.231,2.592),Vector3(-0.9211,2.231,3.159),Vector3(-2.617,2.231,1.571),Vector3(-2.617,2.231,-1.571),Vector3(-0.9211,2.231,-3.159),Vector3(1.527,2.231,-2.29),Vector3(2.617,-1.238,0.2976),Vector3(1.527,-1.238,2.592),Vector3(-0.9211,-1.238,3.159),Vector3(-2.617,-1.238,1.571),Vector3(-2.617,-1.238,-0.9758),Vector3(-0.9211,-1.238,-3.009),Vector3(1.527,-1.238,-2.442),Vector3(2.617,-6.593,0.2976),Vector3(1.527,-6.593,2.58),Vector3(-0.9211,-6.593,3.147),Vector3(-2.617,-6.593,1.571),Vector3(-2.617,-6.593,-0.9758),Vector3(-0.9211,-6.593,-2.564),Vector3(1.527,-6.593,-1.997),Vector3(2.264,-11.92,0.2976),Vector3(1.321,-11.92,2.282),Vector3(-0.7969,-11.92,2.773),Vector3(-2.046,-11.92,1.399),Vector3(-2.046,-11.92,-0.8039),Vector3(-0.7969,-11.92,-2.177),Vector3(1.321,-11.92,-1.687),Vector3(1.864,4.073,0.2976),Vector3(1.058,4.073,1.995),Vector3(-0.7536,4.073,2.415),Vector3(-2.206,4.073,1.24),Vector3(-2.206,4.073,-0.6446),Vector3(-0.7536,4.073,-1.819),Vector3(1.058,4.073,-1.4),Vector3(1.033,-14.67,1.883),Vector3(1.786,-14.67,0.2976),Vector3(-0.6591,-14.67,2.275),Vector3(-1.657,-14.67,1.178),Vector3(-1.657,-14.67,-0.5825),Vector3(-0.6591,-14.67,-1.68),Vector3(1.033,-14.67,-1.288),Vector3(0.4256,-15.99,1.041),Vector3(0.7788,-15.99,0.2976),Vector3(-0.3682,-15.99,1.225),Vector3(-0.8362,-15.99,0.7104),Vector3(-0.8362,-15.99,-0.1152),Vector3(-0.3682,-15.99,-0.63),Vector3(0.4256,-15.99,-0.4463),Vector3(-0.1114,-16.17,0.2976)]);
{ .SetCoord }
IndexedFaceSet49.Coord := Coordinate50;
TextureCoordinate51 := TTextureCoordinateNode.Create;
TextureCoordinate51.SetPoint([Vector2(0.7387,0.5078),Vector2(0.7519,0.5078),Vector2(0.7092,0.5078),Vector2(0.6855,0.5078),Vector2(0.6855,0.5078),Vector2(0.7092,0.5078),Vector2(0.7387,0.5078),Vector2(0.7641,0.4868),Vector2(0.7464,0.4472),Vector2(0.7641,0.4472),Vector2(0.7464,0.4868),Vector2(0.7065,0.4472),Vector2(0.7065,0.4868),Vector2(0.6788,0.4472),Vector2(0.6788,0.4868),Vector2(0.6788,0.4472),Vector2(0.6788,0.4868),Vector2(0.7065,0.4472),Vector2(0.7065,0.4868),Vector2(0.7464,0.4472),Vector2(0.7464,0.4868),Vector2(0.7464,0.3861),Vector2(0.7641,0.3861),Vector2(0.7065,0.3861),Vector2(0.6788,0.3861),Vector2(0.6788,0.3861),Vector2(0.7065,0.3861),Vector2(0.7464,0.3861),Vector2(0.743,0.3252),Vector2(0.7584,0.3252),Vector2(0.7085,0.3252),Vector2(0.6882,0.3252),Vector2(0.6882,0.3252),Vector2(0.7085,0.3252),Vector2(0.743,0.3252),Vector2(0.7383,0.2938),Vector2(0.7506,0.2938),Vector2(0.7107,0.2938),Vector2(0.6945,0.2938),Vector2(0.6945,0.2938),Vector2(0.7107,0.2938),Vector2(0.7383,0.2938),Vector2(0.7284,0.2787),Vector2(0.7342,0.2787),Vector2(0.7155,0.2787),Vector2(0.7079,0.2787),Vector2(0.7079,0.2787),Vector2(0.7155,0.2787),Vector2(0.7284,0.2787),Vector2(0.7197,0.2768)]);
{ .SetTexCoord }
IndexedFaceSet49.TexCoord := TextureCoordinate51;
{ .SetGeometry }
Shape45.Geometry := IndexedFaceSet49;
{ .AddChild }
Transform44.AddChildren([Shape45]);
{ .AddChildren }
HAnimSegment43.AddChildren([Transform44]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimSegment43]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'l_knee';
HAnimJoint52.Center := Vector3(3.454,18.67,-0.02158);
HAnimJoint52.SetUlimit([0,0,0]);
HAnimJoint52.SetLlimit([0,0,0]);
HAnimSegment53 := THAnimSegmentNode.Create;
HAnimSegment53.NameField := 'l_calf';
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(3.454,18.67,-0.02158);
Shape55 := TShapeNode.Create;
Appearance56 := TAppearanceNode.Create;
Material57 := TMaterialNode.Create;
Material57.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance56.Material := Material57;
ImageTexture58 := TImageTextureNode.Create;
ImageTexture58 := ImageTexture38;
{ .SetTexture }
Appearance56.Texture := ImageTexture58;
{ .SetAppearance }
Shape55.Appearance := Appearance56;
IndexedFaceSet59 := TIndexedFaceSetNode.Create;
IndexedFaceSet59.SetCoordIndex([4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
IndexedFaceSet59.CreaseAngle := 1.57;
IndexedFaceSet59.SetTexCoordIndex([4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
Coordinate60 := TCoordinateNode.Create;
Coordinate60.SetPoint([Vector3(0.7406,0.9639,0.0216),Vector3(0.4117,0.9639,0.8655),Vector3(-0.3272,0.9639,1.036),Vector3(-0.9197,0.9639,0.5579),Vector3(-0.9197,0.9639,-0.3619),Vector3(-0.3272,0.9639,-0.8401),Vector3(0.4117,0.9639,-0.6694),Vector3(2.238,-4.201,0.0216),Vector3(1.426,-3.284,1.868),Vector3(1.219,-1.439,2.239),Vector3(2.036,-1.701,0.0216),Vector3(-0.6748,-3.284,2.375),Vector3(-0.6153,-1.439,2.686),Vector3(-2.01,-4.201,1.161),Vector3(-2.086,-1.701,0.9061),Vector3(-2.01,-4.913,-1.265),Vector3(-2.086,-1.701,-0.8628),Vector3(-0.6748,-4.913,-2.686),Vector3(-0.6153,-1.701,-2.191),Vector3(1.426,-4.913,-2.179),Vector3(1.219,-1.701,-1.744),Vector3(1.112,0.0646,1.755),Vector3(1.864,0.0646,0.0216),Vector3(-0.5772,0.0646,2.145),Vector3(-1.932,0.0646,1.051),Vector3(-1.932,0.0646,-0.8553),Vector3(-0.5772,0.0646,-1.907),Vector3(1.112,0.0646,-1.517),Vector3(2.345,-14.69,-0.0151),Vector3(1.416,-14.67,2.102),Vector3(-0.6712,-14.67,2.624),Vector3(-2.345,-14.69,1.16),Vector3(-2.345,-14.71,-1.342),Vector3(-0.6712,-14.71,-2.38),Vector3(1.416,-14.71,-1.857),Vector3(0.73,-16.18,0.0221),Vector3(0.4092,-16.17,0.7532),Vector3(-0.3118,-16.17,0.9337),Vector3(-0.89,-16.18,0.4278),Vector3(-0.89,-16.19,-0.4362),Vector3(-0.3118,-16.19,-0.7945),Vector3(0.4092,-16.19,-0.614)]);
{ .SetCoord }
IndexedFaceSet59.Coord := Coordinate60;
TextureCoordinate61 := TTextureCoordinateNode.Create;
TextureCoordinate61.SetPoint([Vector2(0.7637,0.172),Vector2(0.755,0.172),Vector2(0.7356,0.172),Vector2(0.72,0.172),Vector2(0.72,0.172),Vector2(0.7356,0.172),Vector2(0.755,0.172),Vector2(0.8032,0.2271),Vector2(0.7818,0.2173),Vector2(0.7763,0.1976),Vector2(0.7978,0.2004),Vector2(0.7264,0.2173),Vector2(0.728,0.1976),Vector2(0.6912,0.2271),Vector2(0.6892,0.2004),Vector2(0.6912,0.2347),Vector2(0.6892,0.2004),Vector2(0.7264,0.2347),Vector2(0.728,0.2004),Vector2(0.7818,0.2347),Vector2(0.7763,0.2004),Vector2(0.7735,0.1816),Vector2(0.7933,0.1816),Vector2(0.729,0.1816),Vector2(0.6933,0.1816),Vector2(0.6933,0.1816),Vector2(0.729,0.1816),Vector2(0.7735,0.1816),Vector2(0.806,0.339),Vector2(0.7815,0.3388),Vector2(0.7265,0.3388),Vector2(0.6824,0.339),Vector2(0.6824,0.3392),Vector2(0.7265,0.3392),Vector2(0.7815,0.3392),Vector2(0.7634,0.3549),Vector2(0.755,0.3548),Vector2(0.736,0.3548),Vector2(0.7207,0.3549),Vector2(0.7207,0.355),Vector2(0.736,0.355),Vector2(0.755,0.355)]);
{ .SetTexCoord }
IndexedFaceSet59.TexCoord := TextureCoordinate61;
{ .SetGeometry }
Shape55.Geometry := IndexedFaceSet59;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
HAnimSegment53.AddChildren([Transform54]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimSegment53]);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.NameField := 'l_talocrural';
HAnimJoint62.Center := Vector3(3.467,3.522,0.118);
HAnimJoint62.SetUlimit([0,0,0]);
HAnimJoint62.SetLlimit([0,0,0]);
HAnimSegment63 := THAnimSegmentNode.Create;
HAnimSegment63.NameField := 'l_talus';
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(3.467,3.522,0.118);
Shape65 := TShapeNode.Create;
Appearance66 := TAppearanceNode.Create;
Material67 := TMaterialNode.Create;
Material67.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance66.Material := Material67;
ImageTexture68 := TImageTextureNode.Create;
ImageTexture68 := ImageTexture38;
{ .SetTexture }
Appearance66.Texture := ImageTexture68;
{ .SetAppearance }
Shape65.Appearance := Appearance66;
IndexedFaceSet69 := TIndexedFaceSetNode.Create;
IndexedFaceSet69.SetCoordIndex([1,11,12,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,18,2,0,-1,0,17,18,-1,0,1,25,-1,25,17,0,-1,25,1,12,-1,7,13,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,18,21,10,-1,10,2,18,-1,10,21,27,-1,27,7,10,-1,27,13,7,-1,12,11,37,-1,37,35,12,-1,11,13,36,-1,36,37,11,-1,20,18,17,-1,17,14,20,-1,23,14,17,-1,17,25,23,-1,16,20,14,-1,14,15,16,-1,24,15,14,-1,14,23,24,-1,15,24,29,-1,29,16,15,-1,20,19,21,-1,21,18,20,-1,26,27,21,-1,21,19,26,-1,16,22,19,-1,19,20,16,-1,28,26,19,-1,19,22,28,-1,22,16,29,-1,29,28,22,-1,36,32,33,-1,34,30,31,-1,33,34,31,-1,36,33,31,-1,36,31,35,-1,24,23,31,-1,31,30,24,-1,23,25,35,-1,35,31,23,-1,27,26,32,-1,32,36,27,-1,26,28,33,-1,33,32,26,-1,28,29,34,-1,34,33,28,-1,29,24,30,-1,30,34,29,-1,36,35,37,-1,12,35,25,-1,27,36,13,-1]);
IndexedFaceSet69.CreaseAngle := 1.57;
IndexedFaceSet69.SetTexCoordIndex([1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,18,14,25,-1,25,24,18,-1,15,23,26,-1,26,25,15,-1,29,33,32,-1,32,27,29,-1,41,27,32,-1,32,43,41,-1,30,29,27,-1,27,28,30,-1,42,28,27,-1,27,41,42,-1,28,42,48,-1,48,31,28,-1,35,34,37,-1,37,36,35,-1,44,45,37,-1,37,34,44,-1,39,38,34,-1,34,35,39,-1,46,44,34,-1,34,38,46,-1,38,40,47,-1,47,46,38,-1,52,53,54,-1,55,49,50,-1,54,55,50,-1,52,54,50,-1,52,50,51,-1,42,41,50,-1,50,49,42,-1,41,43,51,-1,51,50,41,-1,45,44,53,-1,53,52,45,-1,44,46,54,-1,54,53,44,-1,46,47,55,-1,55,54,46,-1,48,42,49,-1,49,55,48,-1,52,51,56,-1,18,24,43,-1,22,52,23,-1]);
Coordinate70 := TCoordinateNode.Create;
Coordinate70.SetPoint([Vector3(0.8966,-0.0174,-1.568),Vector3(1.521,-0.0174,0.4019),Vector3(0,-0.0174,-1.568),Vector3(1.288,0.6634,0.3302),Vector3(0.7503,0.6634,-1.364),Vector3(0,0.6634,-1.364),Vector3(0,0.6634,1.372),Vector3(-1.521,-0.0174,0.4019),Vector3(-1.288,0.6634,0.3302),Vector3(-0.7503,0.6634,-1.364),Vector3(-0.8967,-0.0174,-1.568),Vector3(0,-0.0174,1.633),Vector3(1.556,-0.2684,1.333),Vector3(-1.556,-0.2684,1.333),Vector3(1.293,-1.746,-2.684),Vector3(1.293,-3.579,-1.568),Vector3(0,-3.579,-1.568),Vector3(1.018,-0.5447,-1.908),Vector3(0,-0.5447,-1.908),Vector3(-1.293,-1.746,-2.684),Vector3(0,-1.746,-2.684),Vector3(-1.018,-0.5447,-1.908),Vector3(-1.293,-3.579,-1.568),Vector3(2.687,-1.746,0.4019),Vector3(1.918,-3.579,0.4019),Vector3(1.877,-0.5447,0.4019),Vector3(-2.687,-1.746,0.4019),Vector3(-1.877,-0.5447,0.4019),Vector3(-1.918,-3.579,0.4019),Vector3(0,-3.579,0.4019),Vector3(1.708,-3.439,1.272),Vector3(2.332,-1.78,1.272),Vector3(-2.332,-1.78,1.272),Vector3(-1.708,-3.439,1.272),Vector3(0,-3.439,1.272),Vector3(1.469,-0.8455,1.311),Vector3(-1.469,-0.8455,1.311),Vector3(0,-0.5969,1.593)]);
{ .SetCoord }
IndexedFaceSet69.Coord := Coordinate70;
TextureCoordinate71 := TTextureCoordinateNode.Create;
TextureCoordinate71.SetPoint([Vector2(0.4269,0.4898),Vector2(0.4623,0.4901),Vector2(0.4269,0.4898),Vector2(0.4623,0.4901),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4777,0.4914),Vector2(0.4623,0.4901),Vector2(0.4777,0.4914),Vector2(0.4623,0.4901),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4777,0.4914),Vector2(0.4777,0.4914),Vector2(0.4309,0.4635),Vector2(0.4687,0.4544),Vector2(0.4611,0.4911),Vector2(0.4284,0.4641),Vector2(0.4284,0.4641),Vector2(0.4309,0.4635),Vector2(0.4687,0.4544),Vector2(0.4611,0.4911),Vector2(0.4611,0.4911),Vector2(0.4777,0.4914),Vector2(0.4611,0.4911),Vector2(0.4321,0.4164),Vector2(0.4315,0.3728),Vector2(0.4321,0.4164),Vector2(0.4315,0.3728),Vector2(0.4315,0.3728),Vector2(0.4309,0.4635),Vector2(0.4284,0.4641),Vector2(0.4321,0.4164),Vector2(0.4321,0.4164),Vector2(0.4284,0.4641),Vector2(0.4309,0.4635),Vector2(0.4315,0.3728),Vector2(0.4315,0.3728),Vector2(0.4315,0.3728),Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4687,0.4544),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4687,0.4544),Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4687,0.4544)]);
{ .SetTexCoord }
IndexedFaceSet69.TexCoord := TextureCoordinate71;
{ .SetGeometry }
Shape65.Geometry := IndexedFaceSet69;
{ .AddChild }
Transform64.AddChildren([Shape65]);
{ .AddChildren }
HAnimSegment63.AddChildren([Transform64]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimSegment63]);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.NameField := 'l_metatarsophalangeal_2';
HAnimJoint72.Center := Vector3(3.467,3.251,1.465);
HAnimJoint72.SetUlimit([0,0,0]);
HAnimJoint72.SetLlimit([0,0,0]);
HAnimSegment73 := THAnimSegmentNode.Create;
HAnimSegment73.NameField := 'l_tarsal_proximal_phalanx_2';
Transform74 := TTransformNode.Create;
Transform74.Translation := Vector3(3.467,3.251,1.465);
Shape75 := TShapeNode.Create;
Appearance76 := TAppearanceNode.Create;
Material77 := TMaterialNode.Create;
Material77.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance76.Material := Material77;
ImageTexture78 := TImageTextureNode.Create;
ImageTexture78 := ImageTexture38;
{ .SetTexture }
Appearance76.Texture := ImageTexture78;
{ .SetAppearance }
Shape75.Appearance := Appearance76;
IndexedFaceSet79 := TIndexedFaceSetNode.Create;
IndexedFaceSet79.SetCoordIndex([3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1]);
IndexedFaceSet79.CreaseAngle := 1.57;
IndexedFaceSet79.SetTexCoordIndex([4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,18,-1,18,3,1,-1,2,20,12,-1,12,5,2,-1,12,10,7,-1,15,12,7,-1,6,15,7,-1,8,16,15,-1,15,6,8,-1,8,11,17,-1,17,16,8,-1,9,10,12,-1,12,19,9,-1,23,24,25,-1,23,25,26,-1,23,26,27,-1,22,23,27,-1,22,27,21,-1,0,1,22,-1,22,21,0,-1,1,3,23,-1,23,22,1,-1,11,8,24,-1,24,23,11,-1,8,6,25,-1,25,24,8,-1,6,7,26,-1,26,25,6,-1,7,4,27,-1,27,26,7,-1,4,0,21,-1,21,27,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,29,30,12,-1,12,28,29,-1,31,32,30,-1,30,29,31,-1,32,31,33,-1,12,30,34,-1,34,12,12,-1,34,30,32,-1,32,35,34,-1,35,32,33,-1,33,36,35,-1,37,28,12,-1,12,12,37,-1,38,40,12,-1,12,39,38,-1,41,38,39,-1,39,42,41,-1,42,45,41,-1,12,12,43,-1,43,39,12,-1,43,44,42,-1,42,39,43,-1,44,46,45,-1,45,42,44,-1,47,12,12,-1,12,40,47,-1]);
Coordinate80 := TCoordinateNode.Create;
Coordinate80.SetPoint([Vector3(2.687,-1.475,-0.9449),Vector3(1.918,-3.308,-0.9449),Vector3(0,0.2536,0.2858),Vector3(1.877,-0.2736,-0.9449),Vector3(1.556,0.0026,-0.0141),Vector3(-2.687,-1.475,-0.9449),Vector3(-1.877,-0.2736,-0.9449),Vector3(-1.918,-3.308,-0.9449),Vector3(-1.556,0.0026,-0.0141),Vector3(0,-3.308,-0.9449),Vector3(1.965,-3.308,0.8573),Vector3(-1.965,-3.308,0.8573),Vector3(0,-3.308,0.8573),Vector3(2.208,-1.501,-1.786),Vector3(1.607,-2.668,-1.786),Vector3(0,-2.668,-1.786),Vector3(-1.607,-2.668,-1.786),Vector3(-2.208,-1.501,-1.786),Vector3(-1.599,-0.5151,-1.786),Vector3(1.599,-0.5151,-1.786),Vector3(1.638,-0.5877,2.175),Vector3(2.034,-2.055,3.865),Vector3(2.034,-3.308,3.522),Vector3(0,-2.055,5.096),Vector3(0,-0.4955,3.684),Vector3(1.597,-0.2925,1.08),Vector3(2.442,-1.692,0.8573),Vector3(-2.034,-2.055,3.865),Vector3(-1.638,-0.5877,2.175),Vector3(0,-3.308,4.753),Vector3(-2.034,-3.308,3.522),Vector3(-1.597,-0.2925,1.08),Vector3(-2.442,-1.692,0.8573),Vector3(0,-3.308,3.522),Vector3(0,-0.0249,1.55)]);
{ .SetCoord }
IndexedFaceSet79.Coord := Coordinate80;
TextureCoordinate81 := TTextureCoordinateNode.Create;
TextureCoordinate81.SetPoint([Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4777,0.4914),Vector2(0.4726,0.3714),Vector2(0.4687,0.4544),Vector2(0.4611,0.4911),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4726,0.3714),Vector2(0.4777,0.4914),Vector2(0.4611,0.4911),Vector2(0.4726,0.3714),Vector2(0.5184,0.4692),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.537,0.3715),Vector2(0.537,0.3715),Vector2(0.5123,0.477),Vector2(0.5123,0.477),Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4687,0.4544),Vector2(0.5785,0.4537),Vector2(0.601,0.4307),Vector2(0.5382,0.4079),Vector2(0.6345,0.3741),Vector2(0.5897,0.3729),Vector2(0.5897,0.3729),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.537,0.3715),Vector2(0.5123,0.477),Vector2(0.601,0.4307),Vector2(0.5382,0.4079),Vector2(0.5785,0.4537),Vector2(0.6345,0.3741),Vector2(0.5897,0.3729),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.5897,0.3729),Vector2(0.537,0.3715),Vector2(0.5123,0.477)]);
{ .SetTexCoord }
IndexedFaceSet79.TexCoord := TextureCoordinate81;
{ .SetGeometry }
Shape75.Geometry := IndexedFaceSet79;
{ .AddChild }
Transform74.AddChildren([Shape75]);
{ .AddChildren }
HAnimSegment73.AddChildren([Transform74]);
{ .AddChildren }
HAnimJoint72.AddChildren([HAnimSegment73]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint72]);
{ .AddChildren }
HAnimJoint52.AddChildren([HAnimJoint62]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimJoint52]);
{ .AddChildren }
HAnimJoint32.AddChildren([HAnimJoint42]);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'r_hip';
HAnimJoint82.Center := Vector3(-3.22,33.619999,-0.2832);
HAnimJoint82.SetUlimit([0,0,0]);
HAnimJoint82.SetLlimit([0,0,0]);
HAnimSegment83 := THAnimSegmentNode.Create;
HAnimSegment83.NameField := 'r_thigh';
Transform84 := TTransformNode.Create;
Transform84.Translation := Vector3(-3.22,33.619999,-0.2832);
Shape85 := TShapeNode.Create;
Appearance86 := TAppearanceNode.Create;
Material87 := TMaterialNode.Create;
Material87.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance86.Material := Material87;
ImageTexture88 := TImageTextureNode.Create;
ImageTexture88 := ImageTexture38;
{ .SetTexture }
Appearance86.Texture := ImageTexture88;
{ .SetAppearance }
Shape85.Appearance := Appearance86;
IndexedFaceSet89 := TIndexedFaceSetNode.Create;
IndexedFaceSet89.SetCoordIndex([29,30,31,-1,28,29,31,-1,31,32,33,-1,28,31,33,-1,34,28,33,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,28,0,1,-1,1,29,28,-1,29,1,2,-1,2,30,29,-1,30,2,3,-1,3,31,30,-1,31,3,4,-1,4,32,31,-1,32,4,5,-1,5,33,32,-1,33,5,6,-1,6,34,33,-1,34,6,0,-1,0,28,34,-1,21,36,35,-1,35,22,21,-1,22,35,37,-1,37,23,22,-1,23,37,38,-1,38,24,23,-1,24,38,39,-1,39,25,24,-1,25,39,40,-1,40,26,25,-1,26,40,41,-1,41,27,26,-1,27,41,36,-1,36,21,27,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1]);
IndexedFaceSet89.CreaseAngle := 1.57;
IndexedFaceSet89.SetTexCoordIndex([0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,29,36,35,-1,35,28,29,-1,28,35,37,-1,37,30,28,-1,30,37,38,-1,38,31,30,-1,31,38,39,-1,39,32,31,-1,32,39,40,-1,40,33,32,-1,33,40,41,-1,41,34,33,-1,34,41,36,-1,36,29,34,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1]);
Coordinate90 := TCoordinateNode.Create;
Coordinate90.SetPoint([Vector3(-2.617,2.231,0.2976),Vector3(-1.527,2.231,2.592),Vector3(0.9211,2.231,3.159),Vector3(2.617,2.231,1.571),Vector3(2.617,2.231,-1.571),Vector3(0.9211,2.231,-3.159),Vector3(-1.527,2.231,-2.29),Vector3(-2.617,-1.238,0.2976),Vector3(-1.527,-1.238,2.592),Vector3(0.9211,-1.238,3.159),Vector3(2.617,-1.238,1.571),Vector3(2.617,-1.238,-0.9758),Vector3(0.9211,-1.238,-3.009),Vector3(-1.527,-1.238,-2.442),Vector3(-2.617,-6.593,0.2976),Vector3(-1.527,-6.593,2.58),Vector3(0.9211,-6.593,3.147),Vector3(2.617,-6.593,1.571),Vector3(2.617,-6.593,-0.9758),Vector3(0.9211,-6.593,-2.564),Vector3(-1.527,-6.593,-1.997),Vector3(-2.264,-11.92,0.2976),Vector3(-1.321,-11.92,2.282),Vector3(0.7969,-11.92,2.773),Vector3(2.046,-11.92,1.399),Vector3(2.046,-11.92,-0.8039),Vector3(0.7969,-11.92,-2.177),Vector3(-1.321,-11.92,-1.687),Vector3(-1.864,4.073,0.2976),Vector3(-1.058,4.073,1.995),Vector3(0.7536,4.073,2.415),Vector3(2.206,4.073,1.24),Vector3(2.206,4.073,-0.6446),Vector3(0.7536,4.073,-1.819),Vector3(-1.058,4.073,-1.4),Vector3(-1.033,-14.67,1.883),Vector3(-1.786,-14.67,0.2976),Vector3(0.6591,-14.67,2.275),Vector3(1.657,-14.67,1.178),Vector3(1.657,-14.67,-0.5825),Vector3(0.6591,-14.67,-1.68),Vector3(-1.033,-14.67,-1.288),Vector3(-0.4256,-15.99,1.041),Vector3(-0.7788,-15.99,0.2976),Vector3(0.3682,-15.99,1.225),Vector3(0.8362,-15.99,0.7104),Vector3(0.8362,-15.99,-0.1152),Vector3(0.3682,-15.99,-0.63),Vector3(-0.4256,-15.99,-0.4463),Vector3(0.1114,-16.17,0.2976)]);
{ .SetCoord }
IndexedFaceSet89.Coord := Coordinate90;
TextureCoordinate91 := TTextureCoordinateNode.Create;
TextureCoordinate91.SetPoint([Vector2(0.7387,0.5078),Vector2(0.7519,0.5078),Vector2(0.7092,0.5078),Vector2(0.6855,0.5078),Vector2(0.6855,0.5078),Vector2(0.7092,0.5078),Vector2(0.7387,0.5078),Vector2(0.7641,0.4868),Vector2(0.7464,0.4472),Vector2(0.7641,0.4472),Vector2(0.7464,0.4868),Vector2(0.7065,0.4472),Vector2(0.7065,0.4868),Vector2(0.6788,0.4472),Vector2(0.6788,0.4868),Vector2(0.6788,0.4472),Vector2(0.6788,0.4868),Vector2(0.7065,0.4472),Vector2(0.7065,0.4868),Vector2(0.7464,0.4472),Vector2(0.7464,0.4868),Vector2(0.7464,0.3861),Vector2(0.7641,0.3861),Vector2(0.7065,0.3861),Vector2(0.6788,0.3861),Vector2(0.6788,0.3861),Vector2(0.7065,0.3861),Vector2(0.7464,0.3861),Vector2(0.743,0.3252),Vector2(0.7584,0.3252),Vector2(0.7085,0.3252),Vector2(0.6882,0.3252),Vector2(0.6882,0.3252),Vector2(0.7085,0.3252),Vector2(0.743,0.3252),Vector2(0.7383,0.2938),Vector2(0.7506,0.2938),Vector2(0.7107,0.2938),Vector2(0.6945,0.2938),Vector2(0.6945,0.2938),Vector2(0.7107,0.2938),Vector2(0.7383,0.2938),Vector2(0.7284,0.2787),Vector2(0.7342,0.2787),Vector2(0.7155,0.2787),Vector2(0.7079,0.2787),Vector2(0.7079,0.2787),Vector2(0.7155,0.2787),Vector2(0.7284,0.2787),Vector2(0.7197,0.2768)]);
{ .SetTexCoord }
IndexedFaceSet89.TexCoord := TextureCoordinate91;
{ .SetGeometry }
Shape85.Geometry := IndexedFaceSet89;
{ .AddChild }
Transform84.AddChildren([Shape85]);
{ .AddChildren }
HAnimSegment83.AddChildren([Transform84]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimSegment83]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'r_knee';
HAnimJoint92.Center := Vector3(-3.454,18.67,-0.02158);
HAnimJoint92.SetUlimit([0,0,0]);
HAnimJoint92.SetLlimit([0,0,0]);
HAnimSegment93 := THAnimSegmentNode.Create;
HAnimSegment93.NameField := 'r_calf';
Transform94 := TTransformNode.Create;
Transform94.Translation := Vector3(-3.454,18.67,-0.02158);
Shape95 := TShapeNode.Create;
Appearance96 := TAppearanceNode.Create;
Material97 := TMaterialNode.Create;
Material97.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance96.Material := Material97;
ImageTexture98 := TImageTextureNode.Create;
ImageTexture98 := ImageTexture38;
{ .SetTexture }
Appearance96.Texture := ImageTexture98;
{ .SetAppearance }
Shape95.Appearance := Appearance96;
IndexedFaceSet99 := TIndexedFaceSetNode.Create;
IndexedFaceSet99.SetCoordIndex([0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
IndexedFaceSet99.CreaseAngle := 1.57;
IndexedFaceSet99.SetTexCoordIndex([0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
Coordinate100 := TCoordinateNode.Create;
Coordinate100.SetPoint([Vector3(-0.7406,0.9639,0.0216),Vector3(-0.4117,0.9639,0.8655),Vector3(0.3272,0.9639,1.036),Vector3(0.9197,0.9639,0.5579),Vector3(0.9197,0.9639,-0.3619),Vector3(0.3272,0.9639,-0.8401),Vector3(-0.4117,0.9639,-0.6694),Vector3(-2.238,-4.201,0.0216),Vector3(-1.426,-3.284,1.868),Vector3(-1.219,-1.439,2.239),Vector3(-2.036,-1.701,0.0216),Vector3(0.6748,-3.284,2.375),Vector3(0.6153,-1.439,2.686),Vector3(2.01,-4.201,1.161),Vector3(2.086,-1.701,0.9061),Vector3(2.01,-4.913,-1.265),Vector3(2.086,-1.701,-0.8628),Vector3(0.6748,-4.913,-2.686),Vector3(0.6153,-1.701,-2.191),Vector3(-1.426,-4.913,-2.179),Vector3(-1.219,-1.701,-1.744),Vector3(-1.112,0.0646,1.755),Vector3(-1.864,0.0646,0.0216),Vector3(0.5772,0.0646,2.145),Vector3(1.932,0.0646,1.051),Vector3(1.932,0.0646,-0.8553),Vector3(0.5772,0.0646,-1.907),Vector3(-1.112,0.0646,-1.517),Vector3(-2.345,-14.69,-0.0151),Vector3(-1.416,-14.67,2.102),Vector3(0.6712,-14.67,2.624),Vector3(2.345,-14.69,1.16),Vector3(2.345,-14.71,-1.342),Vector3(0.6712,-14.71,-2.38),Vector3(-1.416,-14.71,-1.857),Vector3(-0.73,-16.18,0.0221),Vector3(-0.4092,-16.17,0.7532),Vector3(0.3118,-16.17,0.9337),Vector3(0.89,-16.18,0.4278),Vector3(0.89,-16.19,-0.4362),Vector3(0.3118,-16.19,-0.7945),Vector3(-0.4092,-16.19,-0.614)]);
{ .SetCoord }
IndexedFaceSet99.Coord := Coordinate100;
TextureCoordinate101 := TTextureCoordinateNode.Create;
TextureCoordinate101.SetPoint([Vector2(0.7637,0.172),Vector2(0.755,0.172),Vector2(0.7356,0.172),Vector2(0.72,0.172),Vector2(0.72,0.172),Vector2(0.7356,0.172),Vector2(0.755,0.172),Vector2(0.8032,0.2271),Vector2(0.7818,0.2173),Vector2(0.7763,0.1976),Vector2(0.7978,0.2004),Vector2(0.7264,0.2173),Vector2(0.728,0.1976),Vector2(0.6912,0.2271),Vector2(0.6892,0.2004),Vector2(0.6912,0.2347),Vector2(0.6892,0.2004),Vector2(0.7264,0.2347),Vector2(0.728,0.2004),Vector2(0.7818,0.2347),Vector2(0.7763,0.2004),Vector2(0.7735,0.1816),Vector2(0.7933,0.1816),Vector2(0.729,0.1816),Vector2(0.6933,0.1816),Vector2(0.6933,0.1816),Vector2(0.729,0.1816),Vector2(0.7735,0.1816),Vector2(0.806,0.339),Vector2(0.7815,0.3388),Vector2(0.7265,0.3388),Vector2(0.6824,0.339),Vector2(0.6824,0.3392),Vector2(0.7265,0.3392),Vector2(0.7815,0.3392),Vector2(0.7634,0.3549),Vector2(0.755,0.3548),Vector2(0.736,0.3548),Vector2(0.7207,0.3549),Vector2(0.7207,0.355),Vector2(0.736,0.355),Vector2(0.755,0.355)]);
{ .SetTexCoord }
IndexedFaceSet99.TexCoord := TextureCoordinate101;
{ .SetGeometry }
Shape95.Geometry := IndexedFaceSet99;
{ .AddChild }
Transform94.AddChildren([Shape95]);
{ .AddChildren }
HAnimSegment93.AddChildren([Transform94]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimSegment93]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'r_talocrural';
HAnimJoint102.Center := Vector3(-3.679,3.522,0.118);
HAnimJoint102.SetUlimit([0,0,0]);
HAnimJoint102.SetLlimit([0,0,0]);
HAnimSegment103 := THAnimSegmentNode.Create;
HAnimSegment103.NameField := 'r_talus';
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(-3.679,3.522,0.118);
Shape105 := TShapeNode.Create;
Appearance106 := TAppearanceNode.Create;
Material107 := TMaterialNode.Create;
Material107.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance106.Material := Material107;
ImageTexture108 := TImageTextureNode.Create;
ImageTexture108 := ImageTexture38;
{ .SetTexture }
Appearance106.Texture := ImageTexture108;
{ .SetAppearance }
Shape105.Appearance := Appearance106;
IndexedFaceSet109 := TIndexedFaceSetNode.Create;
IndexedFaceSet109.SetCoordIndex([1,12,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,18,17,0,-1,0,2,18,-1,0,17,25,-1,25,1,0,-1,25,12,1,-1,7,11,13,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,18,2,10,-1,10,21,18,-1,10,7,27,-1,27,21,10,-1,27,7,13,-1,12,35,37,-1,37,11,12,-1,11,37,36,-1,36,13,11,-1,20,14,17,-1,17,18,20,-1,23,25,17,-1,17,14,23,-1,16,15,14,-1,14,20,16,-1,24,23,14,-1,14,15,24,-1,15,16,29,-1,29,24,15,-1,20,18,21,-1,21,19,20,-1,26,19,21,-1,21,27,26,-1,16,20,19,-1,19,22,16,-1,28,22,19,-1,19,26,28,-1,22,28,29,-1,29,16,22,-1,36,35,31,-1,31,30,34,-1,31,34,33,-1,36,31,33,-1,36,33,32,-1,24,30,31,-1,31,23,24,-1,23,31,35,-1,35,25,23,-1,27,36,32,-1,32,26,27,-1,26,32,33,-1,33,28,26,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,24,29,-1,36,37,35,-1,12,25,35,-1,27,13,36,-1]);
IndexedFaceSet109.CreaseAngle := 1.57;
IndexedFaceSet109.SetTexCoordIndex([1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,18,24,25,-1,25,14,18,-1,15,25,26,-1,26,23,15,-1,29,27,32,-1,32,33,29,-1,41,43,32,-1,32,27,41,-1,30,28,27,-1,27,29,30,-1,42,41,27,-1,27,28,42,-1,28,31,48,-1,48,42,28,-1,35,36,37,-1,37,34,35,-1,44,34,37,-1,37,45,44,-1,39,35,34,-1,34,38,39,-1,46,38,34,-1,34,44,46,-1,38,46,47,-1,47,40,38,-1,52,51,50,-1,50,49,55,-1,50,55,54,-1,52,50,54,-1,52,54,53,-1,42,49,50,-1,50,41,42,-1,41,50,51,-1,51,43,41,-1,45,52,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,47,46,-1,48,55,49,-1,49,42,48,-1,52,56,51,-1,18,43,24,-1,22,23,52,-1]);
Coordinate110 := TCoordinateNode.Create;
Coordinate110.SetPoint([Vector3(-0.8966,-0.0174,-1.568),Vector3(-1.521,-0.0174,0.4019),Vector3(0,-0.0174,-1.568),Vector3(-1.288,0.6634,0.3302),Vector3(-0.7503,0.6634,-1.364),Vector3(0,0.6634,-1.364),Vector3(0,0.6634,1.372),Vector3(1.521,-0.0174,0.4019),Vector3(1.288,0.6634,0.3302),Vector3(0.7503,0.6634,-1.364),Vector3(0.8967,-0.0174,-1.568),Vector3(0,-0.0174,1.633),Vector3(-1.556,-0.2684,1.333),Vector3(1.556,-0.2684,1.333),Vector3(-1.293,-1.746,-2.684),Vector3(-1.293,-3.579,-1.568),Vector3(0,-3.579,-1.568),Vector3(-1.018,-0.5447,-1.908),Vector3(0,-0.5447,-1.908),Vector3(1.293,-1.746,-2.684),Vector3(0,-1.746,-2.684),Vector3(1.018,-0.5447,-1.908),Vector3(1.293,-3.579,-1.568),Vector3(-2.687,-1.746,0.4019),Vector3(-1.918,-3.579,0.4019),Vector3(-1.877,-0.5447,0.4019),Vector3(2.687,-1.746,0.4019),Vector3(1.877,-0.5447,0.4019),Vector3(1.918,-3.579,0.4019),Vector3(0,-3.579,0.4019),Vector3(-1.708,-3.439,1.272),Vector3(-2.332,-1.78,1.272),Vector3(2.332,-1.78,1.272),Vector3(1.708,-3.439,1.272),Vector3(0,-3.439,1.272),Vector3(-1.469,-0.8455,1.311),Vector3(1.469,-0.8455,1.311),Vector3(0,-0.5969,1.593)]);
{ .SetCoord }
IndexedFaceSet109.Coord := Coordinate110;
TextureCoordinate111 := TTextureCoordinateNode.Create;
TextureCoordinate111.SetPoint([Vector2(0.4269,0.4898),Vector2(0.4623,0.4901),Vector2(0.4269,0.4898),Vector2(0.4623,0.4901),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4777,0.4914),Vector2(0.4623,0.4901),Vector2(0.4777,0.4914),Vector2(0.4623,0.4901),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4269,0.4898),Vector2(0.4777,0.4914),Vector2(0.4777,0.4914),Vector2(0.4309,0.4635),Vector2(0.4687,0.4544),Vector2(0.4611,0.4911),Vector2(0.4284,0.4641),Vector2(0.4284,0.4641),Vector2(0.4309,0.4635),Vector2(0.4687,0.4544),Vector2(0.4611,0.4911),Vector2(0.4611,0.4911),Vector2(0.4777,0.4914),Vector2(0.4611,0.4911),Vector2(0.4321,0.4164),Vector2(0.4315,0.3728),Vector2(0.4321,0.4164),Vector2(0.4315,0.3728),Vector2(0.4315,0.3728),Vector2(0.4309,0.4635),Vector2(0.4284,0.4641),Vector2(0.4321,0.4164),Vector2(0.4321,0.4164),Vector2(0.4284,0.4641),Vector2(0.4309,0.4635),Vector2(0.4315,0.3728),Vector2(0.4315,0.3728),Vector2(0.4315,0.3728),Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4687,0.4544),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4687,0.4544),Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4687,0.4544)]);
{ .SetTexCoord }
IndexedFaceSet109.TexCoord := TextureCoordinate111;
{ .SetGeometry }
Shape105.Geometry := IndexedFaceSet109;
{ .AddChild }
Transform104.AddChildren([Shape105]);
{ .AddChildren }
HAnimSegment103.AddChildren([Transform104]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimSegment103]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'r_metatarsophalangeal_2';
HAnimJoint112.Center := Vector3(-3.679,3.251,1.465);
HAnimJoint112.SetUlimit([0,0,0]);
HAnimJoint112.SetLlimit([0,0,0]);
HAnimSegment113 := THAnimSegmentNode.Create;
HAnimSegment113.NameField := 'r_tarsal_proximal_phalanx_2';
Transform114 := TTransformNode.Create;
Transform114.Translation := Vector3(-3.679,3.251,1.465);
Shape115 := TShapeNode.Create;
Appearance116 := TAppearanceNode.Create;
Material117 := TMaterialNode.Create;
Material117.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance116.Material := Material117;
ImageTexture118 := TImageTextureNode.Create;
ImageTexture118 := ImageTexture38;
{ .SetTexture }
Appearance116.Texture := ImageTexture118;
{ .SetAppearance }
Shape115.Appearance := Appearance116;
IndexedFaceSet119 := TIndexedFaceSetNode.Create;
IndexedFaceSet119.SetCoordIndex([25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1]);
IndexedFaceSet119.CreaseAngle := 1.57;
IndexedFaceSet119.SetTexCoordIndex([12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,18,-1,18,14,1,-1,2,5,12,-1,12,20,2,-1,7,10,12,-1,7,12,15,-1,6,7,15,-1,8,6,15,-1,15,16,8,-1,8,16,17,-1,17,11,8,-1,9,19,12,-1,12,10,9,-1,22,21,27,-1,25,24,23,-1,26,25,23,-1,27,26,23,-1,22,27,23,-1,0,21,22,-1,22,1,0,-1,1,22,23,-1,23,3,1,-1,11,23,24,-1,24,8,11,-1,8,24,25,-1,25,6,8,-1,6,25,26,-1,26,7,6,-1,7,26,27,-1,27,4,7,-1,4,27,21,-1,21,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,29,28,12,-1,12,30,29,-1,31,29,30,-1,30,32,31,-1,32,33,31,-1,12,12,34,-1,34,30,12,-1,34,35,32,-1,32,30,34,-1,35,36,33,-1,33,32,35,-1,37,12,12,-1,12,28,37,-1,38,39,12,-1,12,40,38,-1,41,42,39,-1,39,38,41,-1,42,41,45,-1,12,39,43,-1,43,12,12,-1,43,39,42,-1,42,44,43,-1,44,42,45,-1,45,46,44,-1,47,40,12,-1,12,12,47,-1]);
Coordinate120 := TCoordinateNode.Create;
Coordinate120.SetPoint([Vector3(-2.687,-1.475,-0.9449),Vector3(-1.918,-3.308,-0.9449),Vector3(0,0.2536,0.2858),Vector3(-1.877,-0.2736,-0.9449),Vector3(-1.556,0.0026,-0.0141),Vector3(2.687,-1.475,-0.9449),Vector3(1.877,-0.2736,-0.9449),Vector3(1.918,-3.308,-0.9449),Vector3(1.556,0.0026,-0.0141),Vector3(0,-3.308,-0.9449),Vector3(-1.965,-3.308,0.8573),Vector3(1.965,-3.308,0.8573),Vector3(0,-3.308,0.8573),Vector3(-2.208,-1.501,-1.786),Vector3(-1.607,-2.668,-1.786),Vector3(0,-2.668,-1.786),Vector3(1.607,-2.668,-1.786),Vector3(2.208,-1.501,-1.786),Vector3(1.599,-0.5151,-1.786),Vector3(-1.599,-0.5151,-1.786),Vector3(-1.638,-0.5877,2.175),Vector3(-2.034,-2.055,3.865),Vector3(-2.034,-3.308,3.522),Vector3(0,-2.055,5.096),Vector3(0,-0.4955,3.684),Vector3(-1.597,-0.2925,1.08),Vector3(-2.442,-1.692,0.8573),Vector3(2.034,-2.055,3.865),Vector3(1.638,-0.5877,2.175),Vector3(0,-3.308,4.753),Vector3(2.034,-3.308,3.522),Vector3(1.597,-0.2925,1.08),Vector3(2.442,-1.692,0.8573),Vector3(0,-3.308,3.522),Vector3(0,-0.0249,1.55)]);
{ .SetCoord }
IndexedFaceSet119.Coord := Coordinate120;
TextureCoordinate121 := TTextureCoordinateNode.Create;
TextureCoordinate121.SetPoint([Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4777,0.4914),Vector2(0.4726,0.3714),Vector2(0.4687,0.4544),Vector2(0.4611,0.4911),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4726,0.3714),Vector2(0.4777,0.4914),Vector2(0.4611,0.4911),Vector2(0.4726,0.3714),Vector2(0.5246,0.4611),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.537,0.3715),Vector2(0.537,0.3715),Vector2(0.5123,0.477),Vector2(0.5123,0.477),Vector2(0.4804,0.417),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4726,0.3714),Vector2(0.4804,0.417),Vector2(0.4687,0.4544),Vector2(0.4687,0.4544),Vector2(0.5785,0.4537),Vector2(0.601,0.4307),Vector2(0.5382,0.4079),Vector2(0.6345,0.3741),Vector2(0.5897,0.3729),Vector2(0.5897,0.3729),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.537,0.3715),Vector2(0.5123,0.477),Vector2(0.601,0.4307),Vector2(0.5382,0.4079),Vector2(0.5785,0.4537),Vector2(0.6345,0.3741),Vector2(0.5897,0.3729),Vector2(0.5392,0.409),Vector2(0.5352,0.3721),Vector2(0.5897,0.3729),Vector2(0.537,0.3715),Vector2(0.5123,0.477)]);
{ .SetTexCoord }
IndexedFaceSet119.TexCoord := TextureCoordinate121;
{ .SetGeometry }
Shape115.Geometry := IndexedFaceSet119;
{ .AddChild }
Transform114.AddChildren([Shape115]);
{ .AddChildren }
HAnimSegment113.AddChildren([Transform114]);
{ .AddChildren }
HAnimJoint112.AddChildren([HAnimSegment113]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint112]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimJoint102]);
{ .AddChildren }
HAnimJoint82.AddChildren([HAnimJoint92]);
{ .AddChildren }
HAnimJoint32.AddChildren([HAnimJoint82]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'sacroiliac';
HAnimJoint122.Center := Vector3(0.000034,31.26,-0.008798);
HAnimJoint122.SetUlimit([0,0,0]);
HAnimJoint122.SetLlimit([0,0,0]);
HAnimSegment123 := THAnimSegmentNode.Create;
HAnimSegment123.NameField := 'pelvis';
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0.000034,31.26,-0.008798);
Shape125 := TShapeNode.Create;
Appearance126 := TAppearanceNode.Create;
Material127 := TMaterialNode.Create;
Material127.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance126.Material := Material127;
ImageTexture128 := TImageTextureNode.Create;
ImageTexture128 := ImageTexture38;
{ .SetTexture }
Appearance126.Texture := ImageTexture128;
{ .SetAppearance }
Shape125.Appearance := Appearance126;
IndexedFaceSet129 := TIndexedFaceSetNode.Create;
IndexedFaceSet129.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,63,62,-1,62,25,26,-1,27,64,63,-1,63,26,27,-1,28,65,64,-1,64,27,28,-1,29,66,65,-1,65,28,29,-1,30,67,66,-1,66,29,30,-1,31,68,67,-1,67,30,31,-1,32,69,68,-1,68,31,32,-1,33,70,69,-1,69,32,33,-1,34,71,70,-1,70,33,34,-1,35,72,71,-1,71,34,35,-1,36,73,72,-1,72,35,36,-1,25,62,73,-1,73,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1,62,63,14,-1,14,13,62,-1,63,64,15,-1,15,14,63,-1,64,65,16,-1,16,15,64,-1,65,66,17,-1,17,16,65,-1,66,67,18,-1,18,17,66,-1,67,68,19,-1,19,18,67,-1,68,69,20,-1,20,19,68,-1,69,70,21,-1,21,20,69,-1,70,71,22,-1,22,21,70,-1,71,72,23,-1,23,22,71,-1,72,73,24,-1,24,23,72,-1,73,62,13,-1,13,24,73,-1]);
IndexedFaceSet129.CreaseAngle := 1.57;
IndexedFaceSet129.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,39,40,37,-1,37,38,39,-1,41,42,40,-1,40,39,41,-1,43,44,42,-1,42,41,43,-1,45,46,44,-1,44,43,45,-1,47,48,46,-1,46,45,47,-1,49,50,48,-1,48,47,49,-1,51,52,50,-1,50,49,51,-1,53,54,52,-1,52,51,53,-1,55,56,54,-1,54,53,55,-1,57,58,56,-1,56,55,57,-1,59,60,58,-1,58,57,59,-1,38,37,60,-1,60,59,38,-1,62,39,38,-1,38,61,62,-1,63,41,39,-1,39,62,63,-1,64,43,41,-1,41,63,64,-1,65,45,43,-1,43,64,65,-1,66,47,45,-1,45,65,66,-1,67,49,47,-1,47,66,67,-1,68,51,49,-1,49,67,68,-1,69,53,51,-1,51,68,69,-1,70,55,53,-1,53,69,70,-1,71,57,55,-1,55,70,71,-1,72,59,57,-1,57,71,72,-1,61,38,59,-1,59,72,61,-1,74,62,61,-1,61,73,74,-1,75,63,62,-1,62,74,75,-1,76,64,63,-1,63,75,76,-1,77,65,64,-1,64,76,77,-1,78,66,65,-1,65,77,78,-1,79,67,66,-1,66,78,79,-1,80,68,67,-1,67,79,80,-1,81,69,68,-1,68,80,81,-1,82,70,69,-1,69,81,82,-1,83,71,70,-1,70,82,83,-1,84,72,71,-1,71,83,84,-1,73,61,72,-1,72,84,73,-1,85,74,73,-1,85,75,74,-1,85,76,75,-1,85,77,76,-1,85,78,77,-1,85,79,78,-1,85,80,79,-1,85,81,80,-1,85,82,81,-1,85,83,82,-1,85,84,83,-1,85,73,84,-1,25,26,14,-1,14,13,25,-1,26,27,15,-1,15,14,26,-1,27,28,16,-1,16,15,27,-1,28,29,17,-1,17,16,28,-1,29,30,18,-1,18,17,29,-1,30,31,19,-1,19,18,30,-1,31,32,20,-1,20,19,31,-1,32,33,21,-1,21,20,32,-1,33,34,22,-1,22,21,33,-1,34,35,23,-1,23,22,34,-1,35,36,24,-1,24,23,35,-1,36,25,13,-1,13,24,36,-1]);
Coordinate130 := TCoordinateNode.Create;
Coordinate130.SetPoint([Vector3(0,10.03,0.1297),Vector3(0,9.057,-2.567),Vector3(-2.075,9.057,-2.206),Vector3(-3.594,9.057,-1.77),Vector3(-4.15,9.057,0.1297),Vector3(-3.594,9.057,2.03),Vector3(-2.075,9.057,2.465),Vector3(0,9.057,2.827),Vector3(2.075,9.057,2.465),Vector3(3.594,9.057,2.03),Vector3(4.15,9.057,0.1297),Vector3(3.594,9.057,-1.77),Vector3(2.075,9.057,-2.206),Vector3(0,6.725,-4.193),Vector3(-2.684,7.001,-3.614),Vector3(-4.648,7.228,-2.032),Vector3(-5.367,7.228,0.1297),Vector3(-4.648,7.4,2.189),Vector3(-2.684,7.228,3.313),Vector3(0,7.024,4.004),Vector3(2.684,7.228,3.313),Vector3(4.648,7.4,2.189),Vector3(5.367,7.228,0.1297),Vector3(4.648,7.228,-2.032),Vector3(2.684,7.001,-3.614),Vector3(0,4.745,-4.3),Vector3(-2.936,4.743,-3.667),Vector3(-5.089,4.738,-2.28),Vector3(-5.874,4.731,0.133),Vector3(-5.102,4.731,2.476),Vector3(-2.963,4.731,3.656),Vector3(0,4.73,4.3),Vector3(2.963,4.73,3.656),Vector3(5.102,4.73,2.476),Vector3(5.874,4.731,0.134),Vector3(5.088,4.737,-2.281),Vector3(2.936,4.743,-3.667),Vector3(0,2.358,-3.663),Vector3(-2.543,2.356,-3.113),Vector3(-4.402,2.355,-1.613),Vector3(-5.084,2.358,0.134),Vector3(-4.415,2.354,2.157),Vector3(-2.562,2.341,3.097),Vector3(0,2.339,3.654),Vector3(2.56,2.347,3.101),Vector3(4.417,2.357,2.158),Vector3(5.083,2.357,0.1338),Vector3(4.404,2.356,-1.611),Vector3(2.542,2.358,-3.115),Vector3(0,0.6228,-1.923),Vector3(-1.478,0.6244,-1.603),Vector3(-2.538,0.622,-1.037),Vector3(-2.926,0.6243,0.1308),Vector3(-2.535,0.6248,1.308),Vector3(-1.464,0.6148,2.154),Vector3(0,0.6102,2.466),Vector3(1.455,0.6123,2.154),Vector3(2.534,0.6219,1.301),Vector3(2.927,0.6248,0.1297),Vector3(2.539,0.6184,-1.027),Vector3(1.471,0.6221,-1.602),Vector3(0,-0.0048,0.1335),Vector3(0,6.687,-3.936),Vector3(-2.527,6.96,-3.39),Vector3(-4.378,7.174,-1.899),Vector3(-5.055,7.161,0.1297),Vector3(-4.396,7.33,2.041),Vector3(-2.558,7.161,3.082),Vector3(0,6.834,3.759),Vector3(2.555,7.163,3.083),Vector3(4.397,7.332,2.039),Vector3(5.054,7.163,0.1318),Vector3(4.376,7.176,-1.9),Vector3(2.527,6.96,-3.39)]);
{ .SetCoord }
IndexedFaceSet129.Coord := Coordinate130;
TextureCoordinate131 := TTextureCoordinateNode.Create;
TextureCoordinate131.SetPoint([Vector2(0.2061,0.2498),Vector2(0.2067,0.1822),Vector2(0.1471,0.1822),Vector2(0.1035,0.1822),Vector2(0.0875,0.1822),Vector2(0.1035,0.1822),Vector2(0.1471,0.1822),Vector2(0.2067,0.1822),Vector2(0.2663,0.1822),Vector2(0.31,0.1822),Vector2(0.3259,0.1822),Vector2(0.31,0.1822),Vector2(0.2663,0.1822),Vector2(0.208,0.1494),Vector2(0.1373,0.1495),Vector2(0.0855,0.1495),Vector2(0.0666,0.1495),Vector2(0.0855,0.1496),Vector2(0.1373,0.1495),Vector2(0.208,0.1495),Vector2(0.2788,0.1495),Vector2(0.3305,0.1496),Vector2(0.3495,0.1495),Vector2(0.3305,0.1495),Vector2(0.2788,0.1495),Vector2(0.208,0.1494),Vector2(0.1414,0.1495),Vector2(0.0926,0.1495),Vector2(0.0748,0.1495),Vector2(0.0922,0.1495),Vector2(0.1406,0.1495),Vector2(0.208,0.1495),Vector2(0.2754,0.1495),Vector2(0.3239,0.1495),Vector2(0.3412,0.1495),Vector2(0.3234,0.1495),Vector2(0.2746,0.1495),Vector2(0.995,0.6227),Vector2(0.9911,0.5634),Vector2(0.9445,0.5634),Vector2(0.9587,0.6143),Vector2(0.8611,0.5667),Vector2(0.8645,0.6158),Vector2(0.8296,0.5725),Vector2(0.8297,0.6181),Vector2(0.7843,0.5725),Vector2(0.7986,0.6221),Vector2(0.7343,0.5716),Vector2(0.7402,0.6181),Vector2(0.6899,0.5733),Vector2(0.7033,0.6238),Vector2(0.7343,0.5716),Vector2(0.7402,0.6181),Vector2(0.7843,0.5724),Vector2(0.7986,0.6221),Vector2(0.8296,0.5725),Vector2(0.8297,0.6181),Vector2(0.8611,0.5667),Vector2(0.8646,0.6158),Vector2(0.9445,0.5634),Vector2(0.9587,0.6143),Vector2(0.9874,0.5161),Vector2(0.9409,0.5169),Vector2(0.8667,0.527),Vector2(0.8296,0.5279),Vector2(0.7882,0.5304),Vector2(0.7381,0.5276),Vector2(0.6693,0.5234),Vector2(0.738,0.5277),Vector2(0.7882,0.5305),Vector2(0.8296,0.5279),Vector2(0.8666,0.5271),Vector2(0.9409,0.517),Vector2(0.9852,0.4793),Vector2(0.8833,0.4954),Vector2(0.8658,0.4954),Vector2(0.8297,0.4954),Vector2(0.7933,0.4954),Vector2(0.7672,0.4952),Vector2(0.6706,0.4859),Vector2(0.7672,0.4952),Vector2(0.7936,0.4954),Vector2(0.8297,0.4954),Vector2(0.8655,0.4953),Vector2(0.8832,0.4954),Vector2(0.8296,0.4836)]);
{ .SetTexCoord }
IndexedFaceSet129.TexCoord := TextureCoordinate131;
{ .SetGeometry }
Shape125.Geometry := IndexedFaceSet129;
{ .AddChild }
Transform124.AddChildren([Shape125]);
{ .AddChildren }
HAnimSegment123.AddChildren([Transform124]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimSegment123]);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.NameField := 'l_shoulder';
HAnimJoint132.Center := Vector3(4.778,51.029999,-2.069);
HAnimJoint132.SetUlimit([0,0,0]);
HAnimJoint132.SetLlimit([0,0,0]);
HAnimSegment133 := THAnimSegmentNode.Create;
HAnimSegment133.NameField := 'l_upperarm';
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(4.778,51.029999,-2.069);
Shape135 := TShapeNode.Create;
Appearance136 := TAppearanceNode.Create;
Material137 := TMaterialNode.Create;
Material137.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance136.Material := Material137;
ImageTexture138 := TImageTextureNode.Create;
ImageTexture138 := ImageTexture38;
{ .SetTexture }
Appearance136.Texture := ImageTexture138;
{ .SetAppearance }
Shape135.Appearance := Appearance136;
IndexedFaceSet139 := TIndexedFaceSetNode.Create;
IndexedFaceSet139.SetCoordIndex([2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]);
IndexedFaceSet139.CreaseAngle := 1.57;
IndexedFaceSet139.SetTexCoordIndex([2,0,53,-1,3,2,53,-1,54,3,53,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,34,35,36,-1,33,34,36,-1,37,33,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,40,39,-1,39,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,48,40,-1,40,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,34,48,-1,48,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1]);
Coordinate140 := TCoordinateNode.Create;
Coordinate140.SetPoint([Vector3(0.7458,1.679,-1.189),Vector3(1.565,1.679,0.0238),Vector3(0.6631,1.679,1.177),Vector3(-0.714,1.679,0.6762),Vector3(-0.6628,1.679,-0.7857),Vector3(0.9082,0.4486,-1.634),Vector3(2.04,0.4486,0.0404),Vector3(0.794,0.4486,1.632),Vector3(-1.108,0.4486,0.9413),Vector3(-1.037,0.4486,-1.078),Vector3(0.9397,-2.611,-1.634),Vector3(2.071,-2.611,0.0404),Vector3(0.8254,-2.611,1.632),Vector3(-1.076,-2.611,0.9413),Vector3(-1.006,-2.611,-1.078),Vector3(0.9738,-3.656,-1.728),Vector3(2.171,-3.656,0.0439),Vector3(0.8529,-3.656,1.728),Vector3(-1.159,-3.656,0.9971),Vector3(-1.084,-3.656,-1.139),Vector3(0.598,-1.86,-1.372),Vector3(1.463,-1.86,-0.3215),Vector3(1.015,-1.86,1.153),Vector3(-0.1265,-1.86,1.013),Vector3(-0.3843,-1.86,-0.5473),Vector3(0.6162,-6.896,-1.11),Vector3(1.515,-6.896,-0.2675),Vector3(1.049,-6.896,0.9149),Vector3(-0.1364,-6.896,0.8029),Vector3(-0.4042,-6.896,-0.4486),Vector3(0.6445,-10.84,-1.07),Vector3(1.509,-10.84,-0.2583),Vector3(1.062,-10.84,0.88),Vector3(-0.0801,-10.84,0.7722),Vector3(-0.3379,-10.84,-0.4327),Vector3(0.6093,-11.37,-0.6358),Vector3(1.116,-11.37,-0.1604),Vector3(0.8538,-11.37,0.5067),Vector3(0.1847,-11.37,0.4436),Vector3(0.0336,-11.37,-0.2626)]);
{ .SetCoord }
IndexedFaceSet139.Coord := Coordinate140;
TextureCoordinate141 := TTextureCoordinateNode.Create;
TextureCoordinate141.SetPoint([Vector2(0.2661,0.1332),Vector2(0.3717,0.1332),Vector2(0.1245,0.1332),Vector2(0.0067,0.1321),Vector2(0.2119,0.1332),Vector2(0.2707,0.1099),Vector2(0.3728,0.1099),Vector2(0.1275,0.1099),Vector2(0.0049,0.1088),Vector2(0.2167,0.1099),Vector2(0.271,0.0284),Vector2(0.3751,0.0284),Vector2(0.1295,0.0284),Vector2(0.0061,0.0273),Vector2(0.2178,0.0284),Vector2(0.2716,0.0086),Vector2(0.3751,0.0086),Vector2(0.1299,0.0086),Vector2(0.0058,0.0075),Vector2(0.2184,0.0086),Vector2(0.2836,0.0426),Vector2(0.3685,0.0426),Vector2(0.1368,0.0426),Vector2(0.0085,0.0415),Vector2(0.2198,0.0426),Vector2(0.0067,0.1343),Vector2(0.0084,0.111),Vector2(0.0084,0.111),Vector2(0.0073,0.0295),Vector2(0.0073,0.0295),Vector2(0.0076,0.0097),Vector2(0.0076,0.0097),Vector2(0.0065,0.0437),Vector2(0.6285,0.3174),Vector2(0.6285,0.3316),Vector2(0.6285,0.3312),Vector2(0.6285,0.3167),Vector2(0.6285,0.3082),Vector2(0.5864,0.3116),Vector2(0.5864,0.3376),Vector2(0.6087,0.339),Vector2(0.6087,0.3139),Vector2(0.5864,0.3394),Vector2(0.6087,0.3383),Vector2(0.5864,0.3146),Vector2(0.6087,0.3128),Vector2(0.5864,0.2974),Vector2(0.6087,0.2977),Vector2(0.6261,0.339),Vector2(0.6261,0.3148),Vector2(0.6261,0.3383),Vector2(0.6261,0.3137),Vector2(0.6261,0.2992),Vector2(0.0441,0.1287),Vector2(-0.1162,0.128)]);
{ .SetTexCoord }
IndexedFaceSet139.TexCoord := TextureCoordinate141;
{ .SetGeometry }
Shape135.Geometry := IndexedFaceSet139;
{ .AddChild }
Transform134.AddChildren([Shape135]);
{ .AddChildren }
HAnimSegment133.AddChildren([Transform134]);
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimSegment133]);
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142.NameField := 'l_elbow';
HAnimJoint142.Center := Vector3(5.297,40.119999,-2.055);
HAnimJoint142.SetUlimit([0,0,0]);
HAnimJoint142.SetLlimit([0,0,0]);
HAnimSegment143 := THAnimSegmentNode.Create;
HAnimSegment143.NameField := 'l_forearm';
Transform144 := TTransformNode.Create;
Transform144.Translation := Vector3(5.297,40.119999,-2.055);
Shape145 := TShapeNode.Create;
Appearance146 := TAppearanceNode.Create;
Material147 := TMaterialNode.Create;
Material147.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance146.Material := Material147;
ImageTexture148 := TImageTextureNode.Create;
ImageTexture148 := ImageTexture38;
{ .SetTexture }
Appearance146.Texture := ImageTexture148;
{ .SetAppearance }
Shape145.Appearance := Appearance146;
IndexedFaceSet149 := TIndexedFaceSetNode.Create;
IndexedFaceSet149.SetCoordIndex([3,2,1,-1,3,1,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
IndexedFaceSet149.CreaseAngle := 1.57;
IndexedFaceSet149.SetTexCoordIndex([3,2,0,-1,3,0,1,-1,4,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,16,-1,16,15,21,-1,22,21,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,16,20,-1]);
Coordinate150 := TCoordinateNode.Create;
Coordinate150.SetPoint([Vector3(0.1284,0.6566,-0.794),Vector3(0.7947,0.6566,-0.1619),Vector3(0.4154,0.6566,0.757),Vector3(-0.4852,0.6566,0.6929),Vector3(-0.6626,0.6566,-0.2657),Vector3(0.0855,-0.4623,-1.129),Vector3(1.027,-0.4623,-0.281),Vector3(0.4911,-0.4623,1.171),Vector3(-0.7817,-0.4623,1.07),Vector3(-1.032,-0.4623,-0.445),Vector3(0.0941,-3.046,-1.116),Vector3(1.1,-3.046,-0.2777),Vector3(0.55,-2.481,1.16),Vector3(-0.8091,-2.481,1.06),Vector3(-1.1,-3.046,-0.4401),Vector3(0.084,-8.01,-1.171),Vector3(1.025,-7.982,-0.1359),Vector3(0.3907,-8.118,1.09),Vector3(-0.6003,-8.118,0.9957),Vector3(-0.9132,-8.109,-0.2244),Vector3(0.0434,-8.725,-0.6054),Vector3(0.5441,-8.725,0.0272),Vector3(0.2591,-8.725,0.759),Vector3(-0.4177,-8.725,0.6949),Vector3(-0.551,-8.725,-0.0767)]);
{ .SetCoord }
IndexedFaceSet149.Coord := Coordinate150;
TextureCoordinate151 := TTextureCoordinateNode.Create;
TextureCoordinate151.SetPoint([Vector2(0.5159,0.3385),Vector2(0.5159,0.3244),Vector2(0.5159,0.3332),Vector2(0.5159,0.3157),Vector2(0.5159,0.3103),Vector2(0.521,0.3428),Vector2(0.521,0.3229),Vector2(0.521,0.3355),Vector2(0.521,0.3108),Vector2(0.521,0.3029),Vector2(0.5327,0.3442),Vector2(0.5327,0.3231),Vector2(0.5302,0.3366),Vector2(0.5302,0.3103),Vector2(0.5327,0.3016),Vector2(0.5558,0.339),Vector2(0.5558,0.323),Vector2(0.5558,0.3334),Vector2(0.5558,0.3141),Vector2(0.5558,0.3079),Vector2(0.5585,0.3232),Vector2(0.5585,0.3341),Vector2(0.5585,0.3302),Vector2(0.5585,0.317),Vector2(0.5585,0.3129)]);
{ .SetTexCoord }
IndexedFaceSet149.TexCoord := TextureCoordinate151;
{ .SetGeometry }
Shape145.Geometry := IndexedFaceSet149;
{ .AddChild }
Transform144.AddChildren([Shape145]);
{ .AddChildren }
HAnimSegment143.AddChildren([Transform144]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimSegment143]);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.NameField := 'l_radiocarpal';
HAnimJoint152.Center := Vector3(5.07,31.99,-1.559);
HAnimJoint152.SetUlimit([0,0,0]);
HAnimJoint152.SetLlimit([0,0,0]);
HAnimSegment153 := THAnimSegmentNode.Create;
HAnimSegment153.NameField := 'l_carpal';
Transform154 := TTransformNode.Create;
Transform154.Translation := Vector3(5.07,31.99,-1.559);
Shape155 := TShapeNode.Create;
Appearance156 := TAppearanceNode.Create;
Material157 := TMaterialNode.Create;
Material157.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance156.Material := Material157;
ImageTexture158 := TImageTextureNode.Create;
ImageTexture158 := ImageTexture38;
{ .SetTexture }
Appearance156.Texture := ImageTexture158;
{ .SetAppearance }
Shape155.Appearance := Appearance156;
IndexedFaceSet159 := TIndexedFaceSetNode.Create;
IndexedFaceSet159.SetCoordIndex([4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,3,2,0,-1,0,1,3,-1]);
IndexedFaceSet159.CreaseAngle := 1.57;
IndexedFaceSet159.SetTexCoordIndex([0,2,1,-1,1,3,0,-1,36,38,37,-1,37,39,36,-1,28,30,29,-1,29,31,28,-1,4,5,2,-1,2,0,4,-1,40,41,38,-1,38,36,40,-1,32,33,31,-1,31,29,32,-1,6,7,5,-1,5,4,6,-1,42,43,41,-1,41,40,42,-1,34,35,33,-1,33,32,34,-1,10,12,11,-1,12,14,13,-1,13,11,12,-1,15,17,16,-1,16,18,15,-1,19,11,13,-1,13,20,19,-1,21,19,22,-1,22,19,20,-1,20,23,22,-1,24,22,23,-1,23,25,24,-1,4,0,8,-1,8,9,4,-1,10,11,16,-1,16,17,10,-1,11,19,18,-1,18,16,11,-1,19,21,15,-1,15,18,19,-1,14,12,26,-1,26,27,14,-1]);
Coordinate160 := TCoordinateNode.Create;
Coordinate160.SetPoint([Vector3(0.8732,0.4437,0.6298),Vector3(0.8463,0.4584,-1.065),Vector3(-0.5135,0.3661,0.7037),Vector3(-0.5196,0.3675,-1.013),Vector3(-0.6654,-0.1688,1.167),Vector3(1.16,0.015,1.096),Vector3(1.119,0.0434,-1.571),Vector3(-0.747,-0.1537,-1.566),Vector3(-0.5777,-1.832,1.902),Vector3(1.387,-1.647,1.643),Vector3(1.345,-1.619,-1.902),Vector3(-0.8391,-1.916,-1.775),Vector3(-0.3897,-3.083,1.338),Vector3(0.6425,-3.283,1.382),Vector3(0.6009,-3.255,-1.636),Vector3(-0.5412,-3.094,-1.527),Vector3(-0.742,-0.1555,-0.1478),Vector3(-1.159,-1.873,1.533),Vector3(-1.387,-0.4699,0.0458),Vector3(-1.361,-0.5281,1.488),Vector3(-1.163,-1.872,0.1088),Vector3(-0.7494,-1.912,-0.1591)]);
{ .SetCoord }
IndexedFaceSet159.Coord := Coordinate160;
TextureCoordinate161 := TTextureCoordinateNode.Create;
TextureCoordinate161.SetPoint([Vector2(0.4675,0.2229),Vector2(0.4534,0.3224),Vector2(0.4709,0.3268),Vector2(0.4579,0.2308),Vector2(0.5552,0.233),Vector2(0.5504,0.3288),Vector2(0.6215,0.2576),Vector2(0.6159,0.3282),Vector2(0.478,0.1884),Vector2(0.5527,0.2007),Vector2(0.4618,0.1862),Vector2(0.4629,0.1191),Vector2(0.4583,0.192),Vector2(0.4802,0.0435),Vector2(0.4672,0.0405),Vector2(0.5177,0.1794),Vector2(0.4789,0.1246),Vector2(0.4811,0.1812),Vector2(0.515,0.132),Vector2(0.538,0.1232),Vector2(0.5459,0.0341),Vector2(0.5348,0.1824),Vector2(0.6006,0.1887),Vector2(0.5977,0.0452),Vector2(0.6323,0.1888),Vector2(0.629,0.0403),Vector2(0.4501,0.1899),Vector2(0.4535,0.0388),Vector2(0.5577,0.3108),Vector2(0.5496,0.3395),Vector2(0.5573,0.3333),Vector2(0.5503,0.3041),Vector2(0.5263,0.3468),Vector2(0.527,0.2997),Vector2(0.5106,0.3433),Vector2(0.5113,0.3032),Vector2(0.4584,0.3225),Vector2(0.4544,0.2224),Vector2(0.4607,0.2253),Vector2(0.4525,0.325),Vector2(0.5365,0.3334),Vector2(0.5532,0.2053),Vector2(0.6323,0.3251),Vector2(0.6179,0.2145)]);
{ .SetTexCoord }
IndexedFaceSet159.TexCoord := TextureCoordinate161;
{ .SetGeometry }
Shape155.Geometry := IndexedFaceSet159;
{ .AddChild }
Transform154.AddChildren([Shape155]);
{ .AddChildren }
HAnimSegment153.AddChildren([Transform154]);
{ .AddChildren }
HAnimJoint152.AddChildren([HAnimSegment153]);
{ .AddChildren }
HAnimJoint142.AddChildren([HAnimJoint152]);
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimJoint142]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint132]);
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162.NameField := 'r_shoulder';
HAnimJoint162.Center := Vector3(-4.778,51.029999,-2.069);
HAnimJoint162.SetUlimit([0,0,0]);
HAnimJoint162.SetLlimit([0,0,0]);
HAnimSegment163 := THAnimSegmentNode.Create;
HAnimSegment163.NameField := 'r_upperarm';
Transform164 := TTransformNode.Create;
Transform164.Translation := Vector3(-4.778,51.029999,-2.069);
Shape165 := TShapeNode.Create;
Appearance166 := TAppearanceNode.Create;
Material167 := TMaterialNode.Create;
Material167.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance166.Material := Material167;
ImageTexture168 := TImageTextureNode.Create;
ImageTexture168 := ImageTexture38;
{ .SetTexture }
Appearance166.Texture := ImageTexture168;
{ .SetAppearance }
Shape165.Appearance := Appearance166;
IndexedFaceSet169 := TIndexedFaceSetNode.Create;
IndexedFaceSet169.SetCoordIndex([0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]);
IndexedFaceSet169.CreaseAngle := 1.57;
IndexedFaceSet169.SetTexCoordIndex([53,0,2,-1,53,2,3,-1,54,53,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,34,-1,36,34,33,-1,37,36,33,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,39,-1,39,40,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,40,-1,40,48,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,48,-1,48,34,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1]);
Coordinate170 := TCoordinateNode.Create;
Coordinate170.SetPoint([Vector3(-0.7458,1.679,-1.189),Vector3(-1.565,1.679,0.0238),Vector3(-0.6631,1.679,1.177),Vector3(0.714,1.679,0.6762),Vector3(0.6628,1.679,-0.7857),Vector3(-0.9082,0.4486,-1.634),Vector3(-2.04,0.4486,0.0404),Vector3(-0.794,0.4486,1.632),Vector3(1.108,0.4486,0.9413),Vector3(1.037,0.4486,-1.078),Vector3(-0.9397,-2.611,-1.634),Vector3(-2.071,-2.611,0.0404),Vector3(-0.8254,-2.611,1.632),Vector3(1.076,-2.611,0.9413),Vector3(1.006,-2.611,-1.078),Vector3(-0.9738,-3.656,-1.728),Vector3(-2.171,-3.656,0.0439),Vector3(-0.8529,-3.656,1.728),Vector3(1.159,-3.656,0.9971),Vector3(1.084,-3.656,-1.139),Vector3(-0.598,-1.86,-1.372),Vector3(-1.463,-1.86,-0.3215),Vector3(-1.015,-1.86,1.153),Vector3(0.1265,-1.86,1.013),Vector3(0.3843,-1.86,-0.5473),Vector3(-0.6162,-6.896,-1.11),Vector3(-1.515,-6.896,-0.2675),Vector3(-1.049,-6.896,0.9149),Vector3(0.1364,-6.896,0.8029),Vector3(0.4042,-6.896,-0.4486),Vector3(-0.6445,-10.84,-1.07),Vector3(-1.509,-10.84,-0.2583),Vector3(-1.062,-10.84,0.88),Vector3(0.0801,-10.84,0.7722),Vector3(0.3379,-10.84,-0.4327),Vector3(-0.6093,-11.37,-0.6358),Vector3(-1.116,-11.37,-0.1604),Vector3(-0.8538,-11.37,0.5067),Vector3(-0.1847,-11.37,0.4436),Vector3(-0.0336,-11.37,-0.2626)]);
{ .SetCoord }
IndexedFaceSet169.Coord := Coordinate170;
TextureCoordinate171 := TTextureCoordinateNode.Create;
TextureCoordinate171.SetPoint([Vector2(0.2661,0.1332),Vector2(0.3717,0.1332),Vector2(0.1245,0.1332),Vector2(0.0067,0.1321),Vector2(0.2119,0.1332),Vector2(0.2707,0.1099),Vector2(0.3728,0.1099),Vector2(0.1275,0.1099),Vector2(0.0049,0.1088),Vector2(0.2167,0.1099),Vector2(0.271,0.0284),Vector2(0.3751,0.0284),Vector2(0.1295,0.0284),Vector2(0.0061,0.0273),Vector2(0.2178,0.0284),Vector2(0.2716,0.0086),Vector2(0.3751,0.0086),Vector2(0.1299,0.0086),Vector2(0.0058,0.0075),Vector2(0.2184,0.0086),Vector2(0.2836,0.0426),Vector2(0.3685,0.0426),Vector2(0.1368,0.0426),Vector2(0.0085,0.0415),Vector2(0.2198,0.0426),Vector2(0.0067,0.1343),Vector2(0.0084,0.111),Vector2(0.0084,0.111),Vector2(0.0073,0.0295),Vector2(0.0073,0.0295),Vector2(0.0076,0.0097),Vector2(0.0076,0.0097),Vector2(0.0065,0.0437),Vector2(0.6285,0.3174),Vector2(0.6285,0.3316),Vector2(0.6285,0.3312),Vector2(0.6285,0.3167),Vector2(0.6285,0.3082),Vector2(0.5864,0.3116),Vector2(0.5864,0.3376),Vector2(0.6087,0.339),Vector2(0.6087,0.3139),Vector2(0.5864,0.3394),Vector2(0.6087,0.3383),Vector2(0.5864,0.3146),Vector2(0.6087,0.3128),Vector2(0.5864,0.2974),Vector2(0.6087,0.2977),Vector2(0.6261,0.339),Vector2(0.6261,0.3148),Vector2(0.6261,0.3383),Vector2(0.6261,0.3137),Vector2(0.6261,0.2992),Vector2(0.0441,0.1287),Vector2(-0.1162,0.128)]);
{ .SetTexCoord }
IndexedFaceSet169.TexCoord := TextureCoordinate171;
{ .SetGeometry }
Shape165.Geometry := IndexedFaceSet169;
{ .AddChild }
Transform164.AddChildren([Shape165]);
{ .AddChildren }
HAnimSegment163.AddChildren([Transform164]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimSegment163]);
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172.NameField := 'r_elbow';
HAnimJoint172.Center := Vector3(-5.297,40.119999,-2.055);
HAnimJoint172.SetUlimit([0,0,0]);
HAnimJoint172.SetLlimit([0,0,0]);
HAnimSegment173 := THAnimSegmentNode.Create;
HAnimSegment173.NameField := 'r_forearm';
Transform174 := TTransformNode.Create;
Transform174.Translation := Vector3(-5.297,40.119999,-2.055);
Shape175 := TShapeNode.Create;
Appearance176 := TAppearanceNode.Create;
Material177 := TMaterialNode.Create;
Material177.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance176.Material := Material177;
ImageTexture178 := TImageTextureNode.Create;
ImageTexture178 := ImageTexture38;
{ .SetTexture }
Appearance176.Texture := ImageTexture178;
{ .SetAppearance }
Shape175.Appearance := Appearance176;
IndexedFaceSet179 := TIndexedFaceSetNode.Create;
IndexedFaceSet179.SetCoordIndex([1,2,3,-1,0,1,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
IndexedFaceSet179.CreaseAngle := 1.57;
IndexedFaceSet179.SetTexCoordIndex([0,2,3,-1,1,0,3,-1,4,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,15,16,-1,16,20,21,-1,22,17,15,-1,15,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,16,19,-1,19,24,20,-1]);
Coordinate180 := TCoordinateNode.Create;
Coordinate180.SetPoint([Vector3(-0.1284,0.6566,-0.794),Vector3(-0.7947,0.6566,-0.1619),Vector3(-0.4154,0.6566,0.757),Vector3(0.4852,0.6566,0.6929),Vector3(0.6626,0.6566,-0.2657),Vector3(-0.0855,-0.4623,-1.129),Vector3(-1.027,-0.4623,-0.281),Vector3(-0.4911,-0.4623,1.171),Vector3(0.7817,-0.4623,1.07),Vector3(1.032,-0.4623,-0.445),Vector3(-0.0941,-3.046,-1.116),Vector3(-1.1,-3.046,-0.2777),Vector3(-0.55,-2.481,1.16),Vector3(0.8091,-2.481,1.06),Vector3(1.1,-3.046,-0.4401),Vector3(-0.084,-8.01,-1.171),Vector3(-1.025,-7.982,-0.1359),Vector3(-0.3907,-8.118,1.09),Vector3(0.6003,-8.118,0.9957),Vector3(0.9132,-8.109,-0.2244),Vector3(-0.0434,-8.725,-0.6054),Vector3(-0.5441,-8.725,0.0272),Vector3(-0.2591,-8.725,0.759),Vector3(0.4177,-8.725,0.6949),Vector3(0.551,-8.725,-0.0767)]);
{ .SetCoord }
IndexedFaceSet179.Coord := Coordinate180;
TextureCoordinate181 := TTextureCoordinateNode.Create;
TextureCoordinate181.SetPoint([Vector2(0.5159,0.3385),Vector2(0.5159,0.3244),Vector2(0.5159,0.3332),Vector2(0.5159,0.3157),Vector2(0.5159,0.3103),Vector2(0.521,0.3428),Vector2(0.521,0.3229),Vector2(0.521,0.3355),Vector2(0.521,0.3108),Vector2(0.521,0.3029),Vector2(0.5327,0.3442),Vector2(0.5327,0.3231),Vector2(0.5302,0.3366),Vector2(0.5302,0.3103),Vector2(0.5327,0.3016),Vector2(0.5558,0.339),Vector2(0.5558,0.323),Vector2(0.5558,0.3334),Vector2(0.5558,0.3141),Vector2(0.5558,0.3079),Vector2(0.5585,0.3232),Vector2(0.5585,0.3341),Vector2(0.5585,0.3302),Vector2(0.5585,0.317),Vector2(0.5585,0.3129)]);
{ .SetTexCoord }
IndexedFaceSet179.TexCoord := TextureCoordinate181;
{ .SetGeometry }
Shape175.Geometry := IndexedFaceSet179;
{ .AddChild }
Transform174.AddChildren([Shape175]);
{ .AddChildren }
HAnimSegment173.AddChildren([Transform174]);
{ .AddChildren }
HAnimJoint172.AddChildren([HAnimSegment173]);
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182.NameField := 'r_radiocarpal';
HAnimJoint182.Center := Vector3(-5.07,31.99,-1.559);
HAnimJoint182.SetUlimit([0,0,0]);
HAnimJoint182.SetLlimit([0,0,0]);
HAnimSegment183 := THAnimSegmentNode.Create;
HAnimSegment183.NameField := 'r_carpal';
Transform184 := TTransformNode.Create;
Transform184.Translation := Vector3(-5.07,31.99,-1.559);
Shape185 := TShapeNode.Create;
Appearance186 := TAppearanceNode.Create;
Material187 := TMaterialNode.Create;
Material187.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance186.Material := Material187;
ImageTexture188 := TImageTextureNode.Create;
ImageTexture188 := ImageTexture38;
{ .SetTexture }
Appearance186.Texture := ImageTexture188;
{ .SetAppearance }
Shape185.Appearance := Appearance186;
IndexedFaceSet189 := TIndexedFaceSetNode.Create;
IndexedFaceSet189.SetCoordIndex([4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,3,1,0,-1,0,2,3,-1]);
IndexedFaceSet189.CreaseAngle := 1.57;
IndexedFaceSet189.SetTexCoordIndex([0,3,1,-1,1,2,0,-1,36,39,37,-1,37,38,36,-1,28,31,29,-1,29,30,28,-1,4,0,2,-1,2,5,4,-1,40,36,38,-1,38,41,40,-1,32,29,31,-1,31,33,32,-1,6,4,5,-1,5,7,6,-1,42,40,41,-1,41,43,42,-1,34,32,33,-1,33,35,34,-1,10,11,12,-1,12,11,13,-1,13,14,12,-1,15,18,16,-1,16,17,15,-1,19,20,13,-1,13,11,19,-1,21,22,19,-1,22,23,20,-1,20,19,22,-1,24,25,23,-1,23,22,24,-1,4,9,8,-1,8,0,4,-1,10,17,16,-1,16,11,10,-1,11,16,18,-1,18,19,11,-1,19,18,15,-1,15,21,19,-1,14,27,26,-1,26,12,14,-1]);
Coordinate190 := TCoordinateNode.Create;
Coordinate190.SetPoint([Vector3(-0.8732,0.4437,0.6298),Vector3(-0.8463,0.4584,-1.065),Vector3(0.5135,0.3661,0.7037),Vector3(0.5196,0.3675,-1.013),Vector3(0.6654,-0.1688,1.167),Vector3(-1.16,0.015,1.096),Vector3(-1.119,0.0434,-1.571),Vector3(0.747,-0.1537,-1.566),Vector3(0.5777,-1.832,1.902),Vector3(-1.387,-1.647,1.643),Vector3(-1.345,-1.619,-1.902),Vector3(0.8391,-1.916,-1.775),Vector3(0.3897,-3.083,1.338),Vector3(-0.6425,-3.283,1.382),Vector3(-0.6009,-3.255,-1.636),Vector3(0.5412,-3.094,-1.527),Vector3(0.742,-0.1555,-0.1478),Vector3(1.159,-1.873,1.533),Vector3(1.387,-0.4699,0.0458),Vector3(1.361,-0.5281,1.488),Vector3(1.163,-1.872,0.1088),Vector3(0.7494,-1.912,-0.1591)]);
{ .SetCoord }
IndexedFaceSet189.Coord := Coordinate190;
TextureCoordinate191 := TTextureCoordinateNode.Create;
TextureCoordinate191.SetPoint([Vector2(0.4675,0.2229),Vector2(0.4534,0.3224),Vector2(0.4709,0.3268),Vector2(0.4579,0.2308),Vector2(0.5552,0.233),Vector2(0.5504,0.3288),Vector2(0.6215,0.2576),Vector2(0.6159,0.3282),Vector2(0.478,0.1884),Vector2(0.5527,0.2007),Vector2(0.4618,0.1862),Vector2(0.4629,0.1191),Vector2(0.4583,0.192),Vector2(0.4802,0.0435),Vector2(0.4672,0.0405),Vector2(0.5177,0.1794),Vector2(0.4789,0.1246),Vector2(0.4811,0.1812),Vector2(0.515,0.132),Vector2(0.538,0.1232),Vector2(0.5459,0.0341),Vector2(0.5348,0.1824),Vector2(0.6006,0.1887),Vector2(0.5977,0.0452),Vector2(0.6323,0.1888),Vector2(0.629,0.0403),Vector2(0.4501,0.1899),Vector2(0.4535,0.0388),Vector2(0.5577,0.3108),Vector2(0.5496,0.3395),Vector2(0.5573,0.3333),Vector2(0.5503,0.3041),Vector2(0.5263,0.3468),Vector2(0.527,0.2997),Vector2(0.5106,0.3433),Vector2(0.5113,0.3032),Vector2(0.4584,0.3225),Vector2(0.4544,0.2224),Vector2(0.4607,0.2253),Vector2(0.4525,0.325),Vector2(0.5365,0.3334),Vector2(0.5532,0.2053),Vector2(0.6323,0.3251),Vector2(0.6179,0.2145)]);
{ .SetTexCoord }
IndexedFaceSet189.TexCoord := TextureCoordinate191;
{ .SetGeometry }
Shape185.Geometry := IndexedFaceSet189;
{ .AddChild }
Transform184.AddChildren([Shape185]);
{ .AddChildren }
HAnimSegment183.AddChildren([Transform184]);
{ .AddChildren }
HAnimJoint182.AddChildren([HAnimSegment183]);
{ .AddChildren }
HAnimJoint172.AddChildren([HAnimJoint182]);
{ .AddChildren }
HAnimJoint162.AddChildren([HAnimJoint172]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint162]);
HAnimJoint192 := THAnimJointNode.Create;
HAnimJoint192.NameField := 'vl5';
HAnimJoint192.Center := Vector3(0.000025,39.84,0.1163);
HAnimJoint192.SetUlimit([0,0,0]);
HAnimJoint192.SetLlimit([0,0,0]);
HAnimSegment193 := THAnimSegmentNode.Create;
HAnimSegment193.NameField := 'l5';
Transform194 := TTransformNode.Create;
Transform194.Translation := Vector3(0.000025,39.84,0.1163);
Shape195 := TShapeNode.Create;
Appearance196 := TAppearanceNode.Create;
Material197 := TMaterialNode.Create;
Material197.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance196.Material := Material197;
ImageTexture198 := TImageTextureNode.Create;
ImageTexture198 := ImageTexture38;
{ .SetTexture }
Appearance196.Texture := ImageTexture198;
{ .SetAppearance }
Shape195.Appearance := Appearance196;
IndexedFaceSet199 := TIndexedFaceSetNode.Create;
IndexedFaceSet199.SetCoordIndex([7,10,11,-1,11,9,7,-1,33,10,7,-1,34,10,33,-1,7,9,13,-1,13,12,7,-1,12,33,7,-1,11,8,9,-1,8,13,9,-1,33,12,0,-1,14,17,1,-1,14,1,0,-1,17,2,1,-1,16,42,17,-1,42,2,17,-1,42,16,15,-1,15,4,42,-1,11,16,8,-1,11,15,16,-1,11,6,15,-1,6,11,10,-1,34,6,10,-1,19,6,5,-1,22,16,17,-1,17,23,22,-1,23,17,14,-1,14,21,23,-1,23,21,20,-1,20,22,23,-1,13,21,14,-1,21,13,20,-1,8,20,13,-1,6,19,15,-1,18,15,19,-1,18,4,15,-1,52,4,18,-1,14,0,12,-1,13,14,12,-1,5,6,34,-1,3,5,34,-1,19,5,24,-1,24,25,19,-1,18,19,25,-1,25,26,18,-1,52,18,26,-1,26,27,52,-1,5,3,28,-1,28,24,5,-1,16,22,20,-1,20,8,16,-1,31,30,29,-1,29,32,31,-1,33,31,32,-1,34,33,32,-1,31,36,35,-1,35,30,31,-1,36,31,33,-1,29,30,37,-1,37,30,35,-1,33,0,36,-1,38,40,39,-1,38,0,40,-1,39,40,2,-1,41,39,42,-1,42,39,2,-1,42,4,43,-1,43,41,42,-1,29,37,41,-1,29,41,43,-1,29,43,44,-1,44,32,29,-1,34,32,44,-1,45,46,44,-1,48,47,39,-1,39,41,48,-1,47,49,38,-1,38,39,47,-1,47,48,50,-1,50,49,47,-1,35,38,49,-1,49,50,35,-1,37,35,50,-1,44,43,45,-1,51,45,43,-1,51,43,4,-1,52,51,4,-1,38,36,0,-1,35,36,38,-1,46,34,44,-1,3,34,46,-1,45,54,53,-1,53,46,45,-1,51,55,54,-1,54,45,51,-1,52,27,55,-1,55,51,52,-1,46,53,28,-1,28,3,46,-1,41,37,50,-1,50,48,41,-1,68,69,58,-1,58,56,68,-1,56,58,59,-1,59,57,56,-1,69,60,61,-1,61,58,69,-1,58,61,62,-1,62,59,58,-1,59,62,75,-1,75,72,59,-1,60,76,63,-1,63,61,60,-1,61,63,64,-1,64,62,61,-1,66,63,76,-1,76,65,66,-1,67,64,63,-1,63,66,67,-1,64,67,80,-1,80,78,64,-1,68,71,70,-1,70,69,68,-1,71,73,72,-1,72,70,71,-1,73,57,59,-1,59,72,73,-1,69,70,74,-1,74,60,69,-1,70,72,75,-1,75,74,70,-1,60,74,77,-1,77,76,60,-1,74,75,78,-1,78,77,74,-1,75,62,64,-1,64,78,75,-1,79,65,76,-1,76,77,79,-1,80,79,77,-1,77,78,80,-1,57,73,71,-1,57,71,68,-1,56,57,68,-1,80,67,66,-1,79,80,66,-1,65,79,66,-1]);
IndexedFaceSet199.CreaseAngle := 1.57;
IndexedFaceSet199.SetTexCoordIndex([2,3,0,-1,0,1,2,-1,4,3,2,-1,5,3,4,-1,2,1,6,-1,6,7,2,-1,7,4,2,-1,0,8,1,-1,8,6,1,-1,4,7,9,-1,10,11,12,-1,10,12,9,-1,11,13,12,-1,14,15,11,-1,15,13,11,-1,15,14,16,-1,16,17,15,-1,0,14,8,-1,0,16,14,-1,0,18,16,-1,18,0,3,-1,5,18,3,-1,19,18,20,-1,22,14,11,-1,11,21,22,-1,21,11,10,-1,10,23,21,-1,21,23,24,-1,24,22,21,-1,6,23,10,-1,23,6,24,-1,8,24,6,-1,18,19,16,-1,25,16,19,-1,25,17,16,-1,26,17,25,-1,10,9,7,-1,6,10,7,-1,20,18,5,-1,27,20,5,-1,19,20,28,-1,28,29,19,-1,25,19,29,-1,29,30,25,-1,26,25,30,-1,30,31,26,-1,20,27,32,-1,32,28,20,-1,14,22,24,-1,24,8,14,-1,35,34,33,-1,33,36,35,-1,37,35,36,-1,38,37,36,-1,35,40,39,-1,39,34,35,-1,40,35,37,-1,33,34,41,-1,41,34,39,-1,37,42,40,-1,43,45,44,-1,43,42,45,-1,44,45,46,-1,47,44,48,-1,48,44,46,-1,48,50,49,-1,49,47,48,-1,33,41,47,-1,33,47,49,-1,33,49,51,-1,51,36,33,-1,38,36,51,-1,52,53,51,-1,55,54,44,-1,44,47,55,-1,54,56,43,-1,43,44,54,-1,54,55,57,-1,57,56,54,-1,39,43,56,-1,56,57,39,-1,41,39,57,-1,51,49,52,-1,58,52,49,-1,58,49,50,-1,59,58,50,-1,43,40,42,-1,39,40,43,-1,53,38,51,-1,60,38,53,-1,52,62,61,-1,61,53,52,-1,58,63,62,-1,62,52,58,-1,59,64,63,-1,63,58,59,-1,53,61,65,-1,65,60,53,-1,47,41,57,-1,57,55,47,-1,67,70,69,-1,69,66,67,-1,66,69,71,-1,71,68,66,-1,70,73,72,-1,72,69,70,-1,69,72,74,-1,74,71,69,-1,71,74,89,-1,89,85,71,-1,73,76,75,-1,75,72,73,-1,72,75,77,-1,77,74,72,-1,79,75,76,-1,76,78,79,-1,80,77,75,-1,75,79,80,-1,77,80,95,-1,95,92,77,-1,81,84,83,-1,83,82,81,-1,84,86,85,-1,85,83,84,-1,86,68,71,-1,71,85,86,-1,82,83,88,-1,88,87,82,-1,83,85,89,-1,89,88,83,-1,87,88,91,-1,91,90,87,-1,88,89,92,-1,92,91,88,-1,89,74,77,-1,77,92,89,-1,94,93,90,-1,90,91,94,-1,95,94,91,-1,91,92,95,-1,68,86,84,-1,68,84,81,-1,66,68,81,-1,95,80,79,-1,94,95,79,-1,78,94,79,-1]);
Coordinate200 := TCoordinateNode.Create;
Coordinate200.SetPoint([Vector3(0,13.41,-0.7672),Vector3(1.02,13.85,-2.25),Vector3(0,13.51,-3.769),Vector3(0,0.8188,3.156),Vector3(0,3.563,-3.333),Vector3(3.661,0.1281,2.243),Vector3(3.621,3.118,2.023),Vector3(2.814,9.08,2.9),Vector3(4.406,8.825,0.0214),Vector3(4.314,8.846,1.719),Vector3(2.299,6.538,2.734),Vector3(4.032,6.41,1.262),Vector3(2.29,10.91,1.179),Vector3(3.407,10.95,0.0607),Vector3(2.621,13.27,-1.246),Vector3(3.715,3.086,-1.788),Vector3(4.067,8.723,-3.836),Vector3(2.341,13.3,-3.687),Vector3(4.289,0.3935,-1.658),Vector3(4.734,0.1406,-0.1384),Vector3(5.652,10.72,-0.9836),Vector3(4.811,12.9,-1.603),Vector3(5.345,10.47,-3.647),Vector3(4.811,12.9,-3.594),Vector3(2.517,-1.669,1.502),Vector3(3.255,-1.66,-0.1346),Vector3(2.948,-1.486,-1.868),Vector3(0,-1.281,-2.313),Vector3(0,-1.194,2.304),Vector3(-4.032,6.41,1.262),Vector3(-4.314,8.846,1.719),Vector3(-2.814,9.08,2.9),Vector3(-2.299,6.538,2.734),Vector3(0,9.136,2.246),Vector3(0,4.716,3.226),Vector3(-3.407,10.95,0.0607),Vector3(-2.29,10.91,1.179),Vector3(-4.406,8.825,0.0214),Vector3(-2.621,13.27,-1.246),Vector3(-2.341,13.3,-3.687),Vector3(-1.02,13.85,-2.25),Vector3(-4.067,8.723,-3.836),Vector3(0,8.074,-4.277),Vector3(-3.715,3.086,-1.788),Vector3(-3.621,3.118,2.023),Vector3(-4.734,0.1406,-0.1384),Vector3(-3.661,0.1281,2.243),Vector3(-4.811,12.9,-3.594),Vector3(-5.345,10.47,-3.647),Vector3(-4.811,12.9,-1.603),Vector3(-5.652,10.72,-0.9836),Vector3(-4.289,0.3935,-1.658),Vector3(0,0.6918,-2.992),Vector3(-2.517,-1.669,1.502),Vector3(-3.255,-1.66,-0.1346),Vector3(-2.948,-1.486,-1.868),Vector3(0.8892,12.94,-2.608),Vector3(0.516,12.73,-1.431),Vector3(1.146,13.39,-2.694),Vector3(0.6275,13.06,-0.8358),Vector3(0,14.57,-3.544),Vector3(1.236,14.38,-2.522),Vector3(0.6992,13.84,-0.7186),Vector3(1.176,16.23,-2.013),Vector3(0.5348,16,-0.4293),Vector3(0,16.62,-2.52),Vector3(0.6489,16.47,-1.739),Vector3(0.3707,16.31,-0.8024),Vector3(0,13.08,-3.382),Vector3(0,13.59,-3.731),Vector3(-1.146,13.39,-2.694),Vector3(-0.8893,12.94,-2.608),Vector3(-0.6275,13.06,-0.8358),Vector3(-0.516,12.73,-1.431),Vector3(-1.236,14.38,-2.522),Vector3(-0.6992,13.84,-0.7186),Vector3(0,16.47,-3.285),Vector3(-1.176,16.23,-2.013),Vector3(-0.5348,16,-0.4293),Vector3(-0.6489,16.47,-1.739),Vector3(-0.3708,16.31,-0.8024)]);
{ .SetCoord }
IndexedFaceSet199.Coord := Coordinate200;
TextureCoordinate201 := TTextureCoordinateNode.Create;
TextureCoordinate201.SetPoint([Vector2(0.2049,0.3383),Vector2(0.2002,0.3958),Vector2(0.136,0.3803),Vector2(0.1281,0.3329),Vector2(0.0546,0.3857),Vector2(0.0447,0.2768),Vector2(0.1678,0.4532),Vector2(0.1416,0.4193),Vector2(0.2035,0.3953),Vector2(0.0762,0.5156),Vector2(0.1396,0.5164),Vector2(0.1296,0.5174),Vector2(0.0824,0.5324),Vector2(0.0762,0.5185),Vector2(0.1914,0.3925),Vector2(0.0546,0.383),Vector2(0.2122,0.2712),Vector2(0.0453,0.2902),Vector2(0.2088,0.2721),Vector2(0.2379,0.2057),Vector2(0.1995,0.2053),Vector2(0.2239,0.5518),Vector2(0.2203,0.4727),Vector2(0.2239,0.5518),Vector2(0.2313,0.4794),Vector2(0.2219,0.2126),Vector2(0.0439,0.2148),Vector2(0.0439,0.2182),Vector2(0.1625,0.1691),Vector2(0.1889,0.1693),Vector2(0.1779,0.1741),Vector2(0.0675,0.1679),Vector2(0.0675,0.1702),Vector2(0.2049,0.3383),Vector2(0.2002,0.3958),Vector2(0.136,0.3803),Vector2(0.1281,0.3329),Vector2(0.0546,0.3857),Vector2(0.0447,0.2768),Vector2(0.1678,0.4532),Vector2(0.1416,0.4193),Vector2(0.2035,0.3953),Vector2(0.0762,0.5156),Vector2(0.1396,0.5164),Vector2(0.1296,0.5174),Vector2(0.0824,0.5324),Vector2(0.0762,0.5185),Vector2(0.1914,0.3925),Vector2(0.0546,0.383),Vector2(0.2122,0.2712),Vector2(0.0453,0.2902),Vector2(0.2088,0.2721),Vector2(0.2379,0.2057),Vector2(0.1995,0.2053),Vector2(0.2239,0.5518),Vector2(0.2203,0.4727),Vector2(0.2239,0.5518),Vector2(0.2313,0.4794),Vector2(0.2219,0.2126),Vector2(0.0439,0.2148),Vector2(0.0439,0.2182),Vector2(0.1625,0.1691),Vector2(0.1889,0.1693),Vector2(0.1779,0.1741),Vector2(0.0675,0.1679),Vector2(0.0675,0.1702),Vector2(0.5159,0.3385),Vector2(0.5159,0.3244),Vector2(0.5159,0.3332),Vector2(0.521,0.3428),Vector2(0.521,0.3229),Vector2(0.521,0.3355),Vector2(0.5327,0.3442),Vector2(0.5327,0.3231),Vector2(0.5302,0.3366),Vector2(0.5558,0.339),Vector2(0.5558,0.323),Vector2(0.5558,0.3334),Vector2(0.5585,0.3232),Vector2(0.5585,0.3341),Vector2(0.5585,0.3302),Vector2(0.5159,0.3244),Vector2(0.521,0.3229),Vector2(0.521,0.3428),Vector2(0.5159,0.3385),Vector2(0.521,0.3355),Vector2(0.5159,0.3332),Vector2(0.5327,0.3231),Vector2(0.5327,0.3442),Vector2(0.5302,0.3366),Vector2(0.5558,0.323),Vector2(0.5558,0.339),Vector2(0.5558,0.3334),Vector2(0.5585,0.3232),Vector2(0.5585,0.3341),Vector2(0.5585,0.3302)]);
{ .SetTexCoord }
IndexedFaceSet199.TexCoord := TextureCoordinate201;
{ .SetGeometry }
Shape195.Geometry := IndexedFaceSet199;
{ .AddChild }
Transform194.AddChildren([Shape195]);
{ .AddChildren }
HAnimSegment193.AddChildren([Transform194]);
{ .AddChildren }
HAnimJoint192.AddChildren([HAnimSegment193]);
HAnimJoint202 := THAnimJointNode.Create;
HAnimJoint202.NameField := 'skullbase';
HAnimJoint202.Center := Vector3(0.000025,56.07,-1.554);
HAnimJoint202.SetUlimit([0,0,0]);
HAnimJoint202.SetLlimit([0,0,0]);
HAnimSegment203 := THAnimSegmentNode.Create;
HAnimSegment203.NameField := 'skull';
Transform204 := TTransformNode.Create;
Transform204.Translation := Vector3(0.000025,56.07,-1.554);
Shape205 := TShapeNode.Create;
Appearance206 := TAppearanceNode.Create;
Material207 := TMaterialNode.Create;
Material207.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance206.Material := Material207;
ImageTexture208 := TImageTextureNode.Create;
ImageTexture208 := ImageTexture38;
{ .SetTexture }
Appearance206.Texture := ImageTexture208;
{ .SetAppearance }
Shape205.Appearance := Appearance206;
IndexedFaceSet209 := TIndexedFaceSetNode.Create;
IndexedFaceSet209.SetCoordIndex([66,67,10,-1,10,9,66,-1,67,66,0,-1,0,1,67,-1,9,10,8,-1,8,119,9,-1,2,11,5,-1,6,11,2,-1,69,12,68,-1,10,67,68,-1,68,12,10,-1,10,12,7,-1,7,8,10,-1,71,72,7,-1,7,12,71,-1,70,12,69,-1,70,71,12,-1,72,73,13,-1,13,7,72,-1,73,72,3,-1,3,4,73,-1,73,74,13,-1,66,9,149,-1,149,153,66,-1,119,149,9,-1,149,119,16,-1,16,15,149,-1,74,14,18,-1,18,13,74,-1,19,17,18,-1,18,14,19,-1,22,25,27,-1,27,21,22,-1,26,25,16,-1,27,25,26,-1,18,17,26,-1,22,23,28,-1,28,25,22,-1,25,28,15,-1,15,16,25,-1,65,153,149,-1,149,24,65,-1,15,24,149,-1,15,28,24,-1,28,23,24,-1,38,37,36,-1,36,34,38,-1,29,161,16,-1,16,119,29,-1,30,29,119,-1,119,164,30,-1,29,30,31,-1,18,161,13,-1,18,26,161,-1,17,27,26,-1,13,161,7,-1,7,161,8,-1,147,130,119,-1,160,161,130,-1,119,130,161,-1,161,131,119,-1,164,119,131,-1,131,132,164,-1,150,132,131,-1,32,33,26,-1,26,16,35,-1,32,26,35,-1,33,34,161,-1,161,26,33,-1,16,161,34,-1,34,36,35,-1,16,34,35,-1,37,35,36,-1,34,33,38,-1,37,38,33,-1,33,32,37,-1,35,37,32,-1,20,21,27,-1,41,20,27,-1,43,41,27,-1,43,27,44,-1,17,46,45,-1,17,45,39,-1,17,39,44,-1,17,44,27,-1,20,41,152,-1,39,43,44,-1,151,45,46,-1,52,47,39,-1,39,45,52,-1,51,49,41,-1,41,43,51,-1,49,50,152,-1,152,41,49,-1,47,51,43,-1,43,39,47,-1,48,52,45,-1,45,151,48,-1,58,53,47,-1,47,52,58,-1,57,55,49,-1,49,51,57,-1,53,57,51,-1,51,47,53,-1,55,56,50,-1,50,49,55,-1,54,58,52,-1,52,48,54,-1,64,59,53,-1,53,58,64,-1,63,61,55,-1,55,57,63,-1,59,63,57,-1,57,53,59,-1,61,62,56,-1,56,55,61,-1,60,64,58,-1,58,54,60,-1,65,148,153,-1,0,66,153,-1,153,148,0,-1,5,68,67,-1,67,1,5,-1,11,69,68,-1,68,5,11,-1,6,70,69,-1,69,11,6,-1,3,71,70,-1,70,6,3,-1,71,3,72,-1,14,74,73,-1,73,4,14,-1,75,78,77,-1,77,76,75,-1,0,77,78,-1,78,1,0,-1,79,75,76,-1,76,136,79,-1,2,5,80,-1,6,2,80,-1,81,83,82,-1,83,78,75,-1,75,82,83,-1,84,82,75,-1,75,79,84,-1,84,88,85,-1,85,82,84,-1,86,81,82,-1,86,82,85,-1,87,89,88,-1,88,84,87,-1,3,88,89,-1,89,4,3,-1,89,87,90,-1,163,76,77,-1,77,156,163,-1,136,76,163,-1,92,136,163,-1,163,93,92,-1,94,91,90,-1,90,87,94,-1,94,17,19,-1,19,91,94,-1,95,96,22,-1,22,21,95,-1,97,92,96,-1,95,97,96,-1,94,97,17,-1,98,23,22,-1,22,96,98,-1,93,98,96,-1,96,92,93,-1,163,156,65,-1,65,24,163,-1,93,163,24,-1,93,24,98,-1,98,24,23,-1,101,110,100,-1,100,99,101,-1,92,103,102,-1,102,136,92,-1,136,102,104,-1,104,165,136,-1,102,105,104,-1,94,87,103,-1,94,103,97,-1,17,97,95,-1,139,165,134,-1,87,84,103,-1,84,79,103,-1,154,139,135,-1,162,135,103,-1,139,103,135,-1,103,139,137,-1,165,137,136,-1,137,165,138,-1,157,137,138,-1,165,139,155,-1,107,92,97,-1,108,107,97,-1,108,97,109,-1,103,99,109,-1,109,97,103,-1,107,101,99,-1,92,107,99,-1,92,99,103,-1,110,101,107,-1,99,100,109,-1,109,100,110,-1,110,108,109,-1,107,108,110,-1,111,106,95,-1,95,21,20,-1,95,20,152,-1,111,95,152,-1,17,95,106,-1,17,106,112,-1,17,112,151,-1,17,151,46,-1,140,141,42,-1,112,106,111,-1,142,143,40,-1,65,156,148,-1,156,77,0,-1,0,148,156,-1,78,83,5,-1,5,1,78,-1,83,81,80,-1,80,5,83,-1,81,86,6,-1,6,80,81,-1,86,85,3,-1,3,6,86,-1,85,88,3,-1,89,90,91,-1,91,4,89,-1,112,113,48,-1,48,151,112,-1,152,50,114,-1,114,111,152,-1,111,114,113,-1,113,112,111,-1,113,115,54,-1,54,48,113,-1,50,56,116,-1,116,114,50,-1,114,116,115,-1,115,113,114,-1,115,117,60,-1,60,54,115,-1,56,62,118,-1,118,116,56,-1,116,118,117,-1,117,115,116,-1,122,125,158,-1,158,121,122,-1,120,121,158,-1,158,124,120,-1,122,123,119,-1,119,125,122,-1,129,127,126,-1,126,159,129,-1,126,120,124,-1,124,159,126,-1,128,127,129,-1,129,139,128,-1,124,144,146,-1,146,159,124,-1,144,124,158,-1,158,145,144,-1,125,133,145,-1,145,158,125,-1,159,146,155,-1,155,129,159,-1,155,139,129,-1,133,125,119,-1,4,19,14,-1,4,91,19,-1,167,168,169,-1,169,170,171,-1,167,169,171,-1,171,172,173,-1,171,173,166,-1,167,171,166,-1,166,59,64,-1,64,167,166,-1,64,60,168,-1,168,167,64,-1,60,117,169,-1,169,168,60,-1,117,118,170,-1,170,169,117,-1,118,62,171,-1,171,170,118,-1,62,61,172,-1,172,171,62,-1,61,63,173,-1,173,172,61,-1,63,59,166,-1,166,173,63,-1]);
IndexedFaceSet209.CreaseAngle := 1.57;
IndexedFaceSet209.SetTexCoordIndex([55,58,53,-1,53,54,55,-1,58,55,56,-1,56,57,58,-1,54,53,59,-1,59,60,54,-1,61,62,63,-1,64,62,61,-1,65,66,67,-1,53,58,67,-1,67,66,53,-1,53,66,68,-1,68,59,53,-1,69,72,68,-1,68,66,69,-1,70,66,65,-1,70,69,66,-1,72,75,71,-1,71,68,72,-1,75,72,73,-1,73,74,75,-1,75,76,71,-1,30,1,4,-1,4,29,30,-1,2,4,1,-1,136,137,134,-1,134,135,136,-1,157,160,158,-1,158,159,157,-1,161,162,158,-1,158,160,161,-1,165,166,163,-1,163,164,165,-1,167,166,168,-1,163,166,167,-1,158,162,167,-1,165,171,170,-1,170,166,165,-1,166,170,172,-1,172,168,166,-1,139,145,136,-1,136,138,139,-1,135,138,136,-1,172,170,173,-1,170,171,173,-1,78,83,79,-1,79,77,78,-1,140,141,134,-1,134,137,140,-1,143,140,137,-1,137,142,143,-1,140,143,144,-1,158,174,159,-1,158,167,174,-1,162,163,167,-1,71,80,68,-1,68,80,59,-1,59,81,60,-1,59,80,81,-1,137,134,141,-1,141,140,137,-1,142,137,140,-1,140,143,142,-1,144,143,140,-1,177,178,167,-1,167,168,176,-1,177,167,176,-1,178,179,174,-1,174,167,178,-1,81,80,77,-1,77,79,82,-1,81,77,82,-1,83,82,79,-1,77,84,78,-1,83,78,84,-1,84,85,83,-1,82,83,85,-1,169,164,163,-1,181,169,163,-1,180,181,163,-1,180,163,175,-1,162,186,182,-1,162,182,183,-1,162,183,175,-1,162,175,163,-1,169,181,184,-1,183,180,175,-1,185,182,186,-1,16,13,6,-1,6,9,16,-1,17,15,8,-1,8,7,17,-1,14,20,11,-1,11,5,14,-1,13,17,7,-1,7,6,13,-1,18,19,12,-1,12,10,18,-1,24,21,13,-1,13,16,24,-1,25,23,15,-1,15,17,25,-1,21,25,17,-1,17,13,21,-1,22,28,20,-1,20,14,22,-1,26,27,19,-1,19,18,26,-1,207,208,205,-1,205,206,207,-1,211,212,209,-1,209,210,211,-1,208,211,210,-1,210,205,208,-1,212,214,213,-1,213,209,212,-1,216,207,206,-1,206,215,216,-1,139,146,145,-1,0,30,29,-1,29,3,0,-1,63,67,58,-1,58,57,63,-1,62,65,67,-1,67,63,62,-1,64,70,65,-1,65,62,64,-1,73,69,70,-1,70,64,73,-1,69,73,72,-1,86,76,75,-1,75,74,86,-1,87,90,88,-1,88,89,87,-1,56,88,90,-1,90,57,56,-1,91,87,89,-1,89,92,91,-1,61,63,93,-1,64,61,93,-1,94,95,96,-1,95,90,87,-1,87,96,95,-1,97,96,87,-1,87,91,97,-1,97,101,98,-1,98,96,97,-1,99,94,96,-1,99,96,98,-1,100,102,101,-1,101,97,100,-1,73,101,102,-1,102,74,73,-1,102,100,103,-1,35,31,32,-1,32,36,35,-1,34,31,35,-1,147,150,148,-1,148,149,147,-1,189,190,187,-1,187,188,189,-1,189,162,161,-1,161,190,189,-1,191,192,165,-1,165,164,191,-1,193,194,192,-1,191,193,192,-1,189,193,162,-1,195,171,165,-1,165,192,195,-1,196,195,192,-1,192,194,196,-1,148,156,139,-1,139,138,148,-1,149,148,138,-1,196,173,195,-1,195,173,171,-1,105,110,106,-1,106,104,105,-1,147,152,151,-1,151,150,147,-1,150,151,153,-1,153,154,150,-1,151,155,153,-1,189,188,197,-1,189,197,193,-1,162,193,191,-1,38,39,37,-1,100,97,107,-1,97,91,107,-1,91,92,108,-1,91,108,107,-1,150,152,147,-1,152,150,151,-1,154,151,150,-1,151,154,153,-1,155,151,153,-1,154,150,148,-1,199,194,193,-1,200,199,193,-1,200,193,201,-1,197,202,201,-1,201,193,197,-1,109,105,104,-1,108,109,104,-1,108,104,107,-1,110,105,109,-1,104,106,111,-1,111,106,110,-1,110,112,111,-1,109,112,110,-1,203,198,191,-1,191,164,169,-1,191,169,184,-1,203,191,184,-1,162,191,198,-1,162,198,204,-1,162,204,185,-1,162,185,186,-1,169,181,184,-1,204,198,203,-1,182,186,185,-1,139,156,146,-1,36,32,33,-1,33,40,36,-1,90,95,63,-1,63,57,90,-1,95,94,93,-1,93,63,95,-1,94,99,64,-1,64,93,94,-1,99,98,73,-1,73,64,99,-1,98,101,73,-1,102,103,113,-1,113,74,102,-1,41,44,43,-1,43,42,41,-1,45,48,47,-1,47,46,45,-1,46,47,44,-1,44,41,46,-1,44,50,49,-1,49,43,44,-1,48,52,51,-1,51,47,48,-1,47,51,50,-1,50,44,47,-1,217,218,216,-1,216,215,217,-1,213,214,219,-1,219,220,213,-1,220,219,218,-1,218,217,220,-1,117,118,115,-1,115,116,117,-1,120,116,115,-1,115,119,120,-1,117,122,121,-1,121,118,117,-1,125,126,123,-1,123,124,125,-1,123,120,119,-1,119,124,123,-1,128,126,125,-1,125,127,128,-1,119,130,129,-1,129,124,119,-1,130,119,115,-1,115,131,130,-1,118,132,131,-1,131,115,118,-1,124,129,133,-1,133,125,124,-1,133,127,125,-1,132,118,121,-1,74,114,86,-1,74,113,114,-1,222,223,224,-1,224,225,226,-1,222,224,226,-1,226,227,228,-1,226,228,221,-1,222,226,221,-1,221,208,207,-1,207,222,221,-1,207,216,223,-1,223,222,207,-1,216,218,224,-1,224,223,216,-1,218,219,225,-1,225,224,218,-1,219,214,226,-1,226,225,219,-1,214,212,227,-1,227,226,214,-1,212,211,228,-1,228,227,212,-1,211,208,221,-1,221,228,211,-1]);
Coordinate210 := TCoordinateNode.Create;
Coordinate210.SetPoint([Vector3(0,6.248,3.861),Vector3(0,3.604,3.332),Vector3(0,1.678,4.132),Vector3(0,-1.06,2.132),Vector3(0,-0.6113,0.4257),Vector3(0,2.508,3.48),Vector3(0,1.056,3.569),Vector3(3.122,1.031,1.087),Vector3(3.864,3.37,0.8051),Vector3(3.096,6.185,2.785),Vector3(2.962,3.586,2.468),Vector3(0.6641,1.54,3.44),Vector3(2.605,1.26,2.524),Vector3(3.041,1.031,-0.4007),Vector3(1.088,-0.0485,-0.7313),Vector3(3.008,9.038,-0.4634),Vector3(4.599,7.193,-1.764),Vector3(0,0.878,-3.276),Vector3(1.883,1.069,-2.26),Vector3(0,0.1453,-2.244),Vector3(0,2.477,-5.252),Vector3(0,3.279,-5.606),Vector3(0,8.131,-5.026),Vector3(0,9.834,-2.714),Vector3(0,10.08,0.3393),Vector3(2.985,7.677,-4.117),Vector3(3.321,2.779,-2.866),Vector3(2.485,2.748,-4.523),Vector3(2.609,9.148,-2.623),Vector3(3.922,0.9315,0.1364),Vector3(3.294,1.489,2.328),Vector3(2.942,-0.3907,1.64),Vector3(4.119,4.301,-2.311),Vector3(3.711,3.021,-2.417),Vector3(3.874,2.792,-1.643),Vector3(4.338,5.172,-1.863),Vector3(4.171,4.342,-1.796),Vector3(4.413,4.651,-2.881),Vector3(4.005,2.883,-2.59),Vector3(0.4904,1.513,-4.362),Vector3(-0.2841,1.361,-4.319),Vector3(0.2529,1.879,-4.875),Vector3(-0.2529,1.879,-4.875),Vector3(0.4533,1.752,-4.772),Vector3(0.9863,1.737,-4.557),Vector3(0.2841,1.361,-4.319),Vector3(0,1.064,-3.769),Vector3(0.4904,1.313,-4.729),Vector3(-0.2841,1.093,-4.661),Vector3(0.2529,1.691,-5.12),Vector3(-0.2529,1.691,-5.12),Vector3(0.4533,1.524,-4.947),Vector3(0.2841,1.093,-4.661),Vector3(0.3923,1.387,-4.921),Vector3(-0.2512,1.186,-4.739),Vector3(0.2427,1.709,-5.058),Vector3(-0.2427,1.709,-5.058),Vector3(0.3975,1.636,-5.002),Vector3(0.2512,1.291,-4.92),Vector3(0.8498,0.4808,-5.345),Vector3(-0.4084,0.2239,-5.621),Vector3(0.4082,1.526,-5.625),Vector3(-0.2698,1.635,-6.083),Vector3(0.8735,0.8532,-5.488),Vector3(0.414,0.3346,-5.233),Vector3(0,9.598,1.657),Vector3(1.799,6.211,3.236),Vector3(1.607,3.596,2.915),Vector3(1.383,1.845,2.973),Vector3(1.393,1.434,3.096),Vector3(1.392,1.165,3.011),Vector3(1.525,-0.0858,2.343),Vector3(1.629,-0.2382,1.67),Vector3(1.191,0.0201,0.2184),Vector3(1.805,0.3477,-0.61),Vector3(-2.962,3.586,2.468),Vector3(-3.096,6.185,2.785),Vector3(-1.799,6.211,3.236),Vector3(-1.607,3.596,2.915),Vector3(-3.864,3.37,0.8051),Vector3(-0.6641,1.54,3.44),Vector3(-1.393,1.434,3.096),Vector3(-2.605,1.26,2.524),Vector3(-1.383,1.845,2.973),Vector3(-3.122,1.031,1.087),Vector3(-1.525,-0.0858,2.343),Vector3(-1.392,1.165,3.011),Vector3(-3.041,1.031,-0.4007),Vector3(-1.629,-0.2382,1.67),Vector3(-1.191,0.0201,0.2184),Vector3(-1.805,0.3477,-0.61),Vector3(-1.088,-0.0485,-0.7313),Vector3(-4.599,6.495,-1.764),Vector3(-3.008,9.038,-0.4634),Vector3(-1.883,1.069,-2.26),Vector3(-2.485,2.748,-4.523),Vector3(-2.985,7.677,-4.117),Vector3(-3.321,2.779,-2.866),Vector3(-2.609,9.148,-2.623),Vector3(-3.874,2.792,-1.643),Vector3(-4.005,2.883,-2.59),Vector3(-4.171,4.342,-1.796),Vector3(-3.924,0.7167,0.1364),Vector3(-3.703,1.852,-1.574),Vector3(-3.294,1.526,2.328),Vector3(-2.944,-0.6055,1.64),Vector3(-0.9863,1.737,-4.557),Vector3(-4.338,5.172,-1.863),Vector3(-4.119,4.301,-2.311),Vector3(-3.711,3.021,-2.417),Vector3(-4.413,4.651,-2.881),Vector3(-0.4533,1.752,-4.772),Vector3(-0.4904,1.513,-4.362),Vector3(-0.4904,1.313,-4.729),Vector3(-0.4533,1.524,-4.947),Vector3(-0.3923,1.387,-4.921),Vector3(-0.3975,1.636,-5.002),Vector3(-0.861,0.4917,-5.679),Vector3(-0.8735,1.084,-5.873),Vector3(4.42,6.072,0.8408),Vector3(0,4.078,5.465),Vector3(2.609,4.238,4.383),Vector3(4.491,4.519,2.859),Vector3(4.812,4.641,0.25),Vector3(0,7.281,4.847),Vector3(4.089,6.811,2.657),Vector3(-2.609,4.238,4.383),Vector3(-4.491,4.519,2.859),Vector3(-4.812,4.641,0.25),Vector3(-4.089,6.811,2.657),Vector3(4.599,7.193,-1.764),Vector3(3.922,0.9315,0.1364),Vector3(3.294,1.489,2.328),Vector3(3.051,8.417,1.903),Vector3(-3.051,8.417,1.903),Vector3(-4.599,6.495,-1.764),Vector3(-4.573,6.071,0.8593),Vector3(-3.924,0.7167,0.1364),Vector3(-3.294,1.526,2.328),Vector3(-4.573,6.071,0.8593),Vector3(0,2.477,-5.252),Vector3(0.2529,1.879,-4.875),Vector3(0.2841,1.361,-4.319),Vector3(0,1.064,-3.769),Vector3(0,8.876,2.944),Vector3(1.401,8.728,2.443),Vector3(-1.401,8.728,2.443),Vector3(3.864,3.37,0.8051),Vector3(0,8.876,2.944),Vector3(3.051,8.417,1.903),Vector3(2.942,-0.3907,1.64),Vector3(-0.2841,1.361,-4.319),Vector3(-0.2529,1.879,-4.875),Vector3(1.401,8.728,2.443),Vector3(-3.864,3.37,0.8051),Vector3(-3.051,8.417,1.903),Vector3(-1.401,8.728,2.443),Vector3(-2.944,-0.6055,1.64),Vector3(2.16,7.239,4.144),Vector3(-2.16,7.239,4.144),Vector3(3.864,3.37,0.8051),Vector3(3.703,2.55,-1.574),Vector3(-3.864,3.37,0.8051),Vector3(-3.051,8.417,1.903),Vector3(3.887,6.402,2.215),Vector3(-3.887,5.704,2.215),Vector3(0.0275,0.6889,-6.368),Vector3(0.0275,0.6889,-6.368),Vector3(0.0275,0.6889,-6.368),Vector3(0.0275,0.6889,-6.368),Vector3(0.0275,0.6889,-6.368),Vector3(0.0275,0.6889,-6.368),Vector3(0.0275,0.6889,-6.368),Vector3(0.0275,0.6889,-6.368)]);
{ .SetCoord }
IndexedFaceSet209.Coord := Coordinate210;
TextureCoordinate211 := TTextureCoordinateNode.Create;
TextureCoordinate211.SetPoint([Vector2(0.0199,0.7411),Vector2(0.304,0.7353),Vector2(0.4514,0.7245),Vector2(0.0199,0.9847),Vector2(0.3019,0.9545),Vector2(0.315,0.9067),Vector2(0.2582,0.5588),Vector2(0.2318,0.8287),Vector2(0.315,0.9067),Vector2(0.3537,0.4343),Vector2(0.5009,0.4343),Vector2(0.5516,0.8015),Vector2(0.4488,0.3265),Vector2(0.2582,0.5588),Vector2(0.315,0.9067),Vector2(0.315,0.9067),Vector2(0.3537,0.4343),Vector2(0.2318,0.8287),Vector2(0.5009,0.4343),Vector2(0.4488,0.3265),Vector2(0.5516,0.8015),Vector2(0.2582,0.5588),Vector2(0.315,0.9067),Vector2(0.315,0.9067),Vector2(0.3537,0.4343),Vector2(0.2318,0.8287),Vector2(0.5009,0.4343),Vector2(0.4488,0.3265),Vector2(0.5516,0.8015),Vector2(0.1984,0.9656),Vector2(0.185,0.7377),Vector2(0.304,0.7353),Vector2(0.185,0.7377),Vector2(0.0199,0.7411),Vector2(0.4514,0.7245),Vector2(0.3019,0.9545),Vector2(0.1984,0.9656),Vector2(0.0634,0.8794),Vector2(0.0815,0.8144),Vector2(0.0592,0.7948),Vector2(0.0199,0.9847),Vector2(0.2582,0.5588),Vector2(0.3537,0.4343),Vector2(0.3537,0.4343),Vector2(0.2582,0.5588),Vector2(0.315,0.9067),Vector2(0.2318,0.8287),Vector2(0.2318,0.8287),Vector2(0.315,0.9067),Vector2(0.3537,0.4343),Vector2(0.2582,0.5588),Vector2(0.2318,0.8287),Vector2(0.315,0.9067),Vector2(0.4022,0.8072),Vector2(0.4092,0.9332),Vector2(0.3423,0.9345),Vector2(0.2496,0.9363),Vector2(0.2496,0.808),Vector2(0.3324,0.8076),Vector2(0.4487,0.7966),Vector2(0.4853,0.9277),Vector2(0.2496,0.7146),Vector2(0.2838,0.7079),Vector2(0.2496,0.7548),Vector2(0.2496,0.6844),Vector2(0.3214,0.7028),Vector2(0.3839,0.6943),Vector2(0.3208,0.7227),Vector2(0.4105,0.6832),Vector2(0.3282,0.629),Vector2(0.3213,0.6897),Vector2(0.4063,0.6832),Vector2(0.3336,0.6217),Vector2(0.2485,0.6026),Vector2(0.2485,0.6244),Vector2(0.3109,0.6342),Vector2(0.3426,0.6501),Vector2(0.4492,0.7686),Vector2(0.456,0.773),Vector2(0.4645,0.8438),Vector2(0.4405,0.723),Vector2(0.4866,0.9483),Vector2(0.4732,0.8841),Vector2(0.477,0.8588),Vector2(0.4408,0.7797),Vector2(0.4619,0.8418),Vector2(0.3056,0.6309),Vector2(0.0969,0.8072),Vector2(0.1568,0.9345),Vector2(0.09,0.9332),Vector2(0.1668,0.8076),Vector2(0.0504,0.7966),Vector2(0.0139,0.9277),Vector2(0.2154,0.7079),Vector2(0.1778,0.7028),Vector2(0.1783,0.7227),Vector2(0.1153,0.6943),Vector2(0.0887,0.6832),Vector2(0.171,0.629),Vector2(0.1778,0.6897),Vector2(0.0928,0.6832),Vector2(0.1656,0.6217),Vector2(0.1882,0.6342),Vector2(0.1566,0.6501),Vector2(0.0499,0.7686),Vector2(0.0346,0.8438),Vector2(0.0432,0.773),Vector2(0.0587,0.723),Vector2(0.0125,0.9483),Vector2(0.026,0.8841),Vector2(0.0222,0.8588),Vector2(0.0583,0.7797),Vector2(0.0373,0.8418),Vector2(0.1935,0.6309),Vector2(0.2496,0.6403),Vector2(0.5986,0.9248),Vector2(0.6012,0.8499),Vector2(0.689,0.8561),Vector2(0.6892,0.9241),Vector2(0.5242,0.9216),Vector2(0.5225,0.8475),Vector2(0.7915,0.897),Vector2(0.8075,0.8685),Vector2(0.6012,0.8499),Vector2(0.5986,0.9248),Vector2(0.6892,0.9241),Vector2(0.689,0.8561),Vector2(0.7915,0.897),Vector2(0.8075,0.8685),Vector2(0.6078,0.9826),Vector2(0.5191,0.9846),Vector2(0.6077,0.9826),Vector2(0.7007,0.9832),Vector2(0.7008,0.9832),Vector2(0.9771,0.7722),Vector2(0.9707,0.8593),Vector2(0.8581,0.8585),Vector2(0.8839,0.7747),Vector2(0.9591,0.9681),Vector2(0.9,0.9681),Vector2(0.9199,0.6984),Vector2(0.9684,0.7206),Vector2(0.8499,0.7752),Vector2(0.8458,0.7262),Vector2(0.8298,0.6747),Vector2(0.865,0.9347),Vector2(0.8697,0.9696),Vector2(0.9771,0.7722),Vector2(0.8581,0.8585),Vector2(0.9707,0.8593),Vector2(0.8839,0.7747),Vector2(0.9199,0.6984),Vector2(0.9684,0.7206),Vector2(0.8458,0.7262),Vector2(0.8499,0.7752),Vector2(0.8298,0.6747),Vector2(0.865,0.9347),Vector2(0.5498,0.7202),Vector2(0.5638,0.7169),Vector2(0.5718,0.7409),Vector2(0.5371,0.7082),Vector2(0.5326,0.6846),Vector2(0.5382,0.6801),Vector2(0.5866,0.6942),Vector2(0.5873,0.668),Vector2(0.6438,0.6775),Vector2(0.6181,0.7065),Vector2(0.5894,0.7192),Vector2(0.6547,0.751),Vector2(0.5605,0.6719),Vector2(0.679,0.7289),Vector2(0.7191,0.6946),Vector2(0.7036,0.762),Vector2(0.7595,0.76),Vector2(0.592,0.7489),Vector2(0.5625,0.6941),Vector2(0.638,0.7485),Vector2(0.6245,0.7448),Vector2(0.6138,0.7412),Vector2(0.6107,0.7461),Vector2(0.5568,0.6838),Vector2(0.5564,0.6793),Vector2(0.5495,0.6819),Vector2(0.5528,0.6851),Vector2(0.5564,0.6793),Vector2(0.5495,0.6819),Vector2(0.5416,0.6788),Vector2(0.5498,0.7202),Vector2(0.5718,0.7409),Vector2(0.5638,0.7169),Vector2(0.5371,0.7082),Vector2(0.5866,0.6942),Vector2(0.6181,0.7065),Vector2(0.5894,0.7191),Vector2(0.6547,0.751),Vector2(0.679,0.7289),Vector2(0.7036,0.7619),Vector2(0.592,0.7489),Vector2(0.5625,0.6941),Vector2(0.638,0.7485),Vector2(0.6245,0.7448),Vector2(0.6138,0.7412),Vector2(0.6107,0.7461),Vector2(0.5568,0.6838),Vector2(0.5528,0.6851),Vector2(0.9104,0.746),Vector2(0.9034,0.7467),Vector2(0.9112,0.7728),Vector2(0.9336,0.7719),Vector2(0.903,0.7463),Vector2(0.9106,0.7457),Vector2(0.9342,0.7713),Vector2(0.9112,0.7717),Vector2(0.8789,0.7463),Vector2(0.8707,0.7717),Vector2(0.8785,0.7467),Vector2(0.8707,0.7728),Vector2(0.8715,0.746),Vector2(0.8483,0.7719),Vector2(0.8477,0.7713),Vector2(0.8713,0.7457),Vector2(0.9336,0.7719),Vector2(0.9112,0.7728),Vector2(0.8707,0.7728),Vector2(0.8483,0.7719),Vector2(0.8477,0.7713),Vector2(0.8707,0.7717),Vector2(0.9112,0.7717),Vector2(0.9342,0.7713)]);
{ .SetTexCoord }
IndexedFaceSet209.TexCoord := TextureCoordinate211;
{ .SetGeometry }
Shape205.Geometry := IndexedFaceSet209;
{ .AddChild }
Transform204.AddChildren([Shape205]);
{ .AddChildren }
HAnimSegment203.AddChildren([Transform204]);
{ .AddChildren }
HAnimJoint202.AddChildren([HAnimSegment203]);
{ .AddChildren }
HAnimJoint192.AddChildren([HAnimJoint202]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint192]);
{ .AddChildren }
HAnimJoint32.AddChildren([HAnimJoint122]);
{ .AddSkeleton }
HAnimHumanoid24.SetSkeleton([HAnimJoint32]);
HAnimJoint212 := THAnimJointNode.Create;
HAnimJoint212 := HAnimJoint32;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint212;
HAnimJoint213 := THAnimJointNode.Create;
HAnimJoint213 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint213;
HAnimJoint214 := THAnimJointNode.Create;
HAnimJoint214 := HAnimJoint202;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint214;
HAnimJoint215 := THAnimJointNode.Create;
HAnimJoint215 := HAnimJoint192;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint215;
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216 := HAnimJoint142;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint216;
HAnimJoint217 := THAnimJointNode.Create;
HAnimJoint217 := HAnimJoint172;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint217;
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218 := HAnimJoint42;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint218;
HAnimJoint219 := THAnimJointNode.Create;
HAnimJoint219 := HAnimJoint82;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint219;
HAnimJoint220 := THAnimJointNode.Create;
HAnimJoint220 := HAnimJoint52;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint220;
HAnimJoint221 := THAnimJointNode.Create;
HAnimJoint221 := HAnimJoint92;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint221;
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222 := HAnimJoint72;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint222;
HAnimJoint223 := THAnimJointNode.Create;
HAnimJoint223 := HAnimJoint112;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint223;
HAnimJoint224 := THAnimJointNode.Create;
HAnimJoint224 := HAnimJoint152;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint224;
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225 := HAnimJoint182;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint225;
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226 := HAnimJoint132;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint226;
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227 := HAnimJoint162;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint227;
HAnimJoint228 := THAnimJointNode.Create;
HAnimJoint228 := HAnimJoint62;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint228;
HAnimJoint229 := THAnimJointNode.Create;
HAnimJoint229 := HAnimJoint102;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint229;
HAnimSegment230 := THAnimSegmentNode.Create;
HAnimSegment230 := HAnimSegment193;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment230;
HAnimSegment231 := THAnimSegmentNode.Create;
HAnimSegment231 := HAnimSegment123;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment231;
HAnimSegment232 := THAnimSegmentNode.Create;
HAnimSegment232 := HAnimSegment33;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment232;
HAnimSegment233 := THAnimSegmentNode.Create;
HAnimSegment233 := HAnimSegment203;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment233;
HAnimSegment234 := THAnimSegmentNode.Create;
HAnimSegment234 := HAnimSegment53;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment234;
HAnimSegment235 := THAnimSegmentNode.Create;
HAnimSegment235 := HAnimSegment93;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment235;
HAnimSegment236 := THAnimSegmentNode.Create;
HAnimSegment236 := HAnimSegment153;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment236;
HAnimSegment237 := THAnimSegmentNode.Create;
HAnimSegment237 := HAnimSegment183;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment237;
HAnimSegment238 := THAnimSegmentNode.Create;
HAnimSegment238 := HAnimSegment143;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment238;
HAnimSegment239 := THAnimSegmentNode.Create;
HAnimSegment239 := HAnimSegment173;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment239;
HAnimSegment240 := THAnimSegmentNode.Create;
HAnimSegment240 := HAnimSegment63;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment240;
HAnimSegment241 := THAnimSegmentNode.Create;
HAnimSegment241 := HAnimSegment103;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment241;
HAnimSegment242 := THAnimSegmentNode.Create;
HAnimSegment242 := HAnimSegment73;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment242;
HAnimSegment243 := THAnimSegmentNode.Create;
HAnimSegment243 := HAnimSegment113;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment243;
HAnimSegment244 := THAnimSegmentNode.Create;
HAnimSegment244 := HAnimSegment43;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment244;
HAnimSegment245 := THAnimSegmentNode.Create;
HAnimSegment245 := HAnimSegment83;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment245;
HAnimSegment246 := THAnimSegmentNode.Create;
HAnimSegment246 := HAnimSegment133;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment246;
HAnimSegment247 := THAnimSegmentNode.Create;
HAnimSegment247 := HAnimSegment163;
{ .AddSegments }
HAnimHumanoid24.Segments := HAnimSegment247;
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid24]);
{ .AddGroup }
X3D0.AddChildren([Group20]);
Result := X3D0;
end;
