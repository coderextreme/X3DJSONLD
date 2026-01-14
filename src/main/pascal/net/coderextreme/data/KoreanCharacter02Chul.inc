function KoreanCharacter02Chul: TX3DRootNode;
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
X3D0.Meta['title'] := 'KoreanCharacter02Chul.x3d';
X3D0.Meta['creator'] := 'Jin Hoon Lee and Min Joo Lee';
X3D0.Meta['translator'] := 'Chul Hee Jung and Myeong Won Lee';
X3D0.Meta['created'] := '31 March 2011';
X3D0.Meta['translated'] := '1 November 2014';
X3D0.Meta['modified'] := '23 December 2021';
X3D0.Meta['description'] := 'Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.';
X3D0.Meta['reference'] := 'KoreanCharacter00ReadMe.txt';
X3D0.Meta['reference'] := 'KoreanCharacterHumanMotion_Infotech2014_140706.pdf';
X3D0.Meta['reference'] := 'KoreanCharactersIllustrated.pdf';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter02Chul.x3d';
X3D0.Meta['generator'] := '3DS MAX, https://www.autodesk.com/products/autodesk-3ds-max/overview';
X3D0.Meta['generator'] := 'Suwon University HAnim Editor';
X3D0.Meta['generator'] := 'Gnu Image Manipulation Program, https://www.gimp.org';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group19 := TGroupNode.Create;
WorldInfo20 := TWorldInfoNode.Create;
WorldInfo20.Title := 'KoreanCharacter02Chul.x3d';
{ .AddChildren }
Group19.AddChildren([WorldInfo20]);
NavigationInfo21 := TNavigationInfoNode.Create;
NavigationInfo21.Speed := 1.5;
{ .AddChildren }
Group19.AddChildren([NavigationInfo21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.CenterOfRotation := Vector3(0,1,0);
Viewpoint22.Description := 'Chul';
Viewpoint22.Position := Vector3(0,1,3);
{ .AddChildren }
Group19.AddChildren([Viewpoint22]);
HAnimHumanoid23 := THAnimHumanoidNode.Create;
HAnimHumanoid23.NameField := 'Chul';
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
HAnimJoint31.Center := Vector3(0,44.07,-1.034);
HAnimJoint31.SetUlimit([0,0,0]);
HAnimJoint31.SetLlimit([0,0,0]);
HAnimSegment32 := THAnimSegmentNode.Create;
HAnimSegment32.NameField := 'sacrum';
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0,44.07,-1.034);
Shape34 := TShapeNode.Create;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
Material36.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance35.Material := Material36;
ImageTexture37 := TImageTextureNode.Create;
ImageTexture37.SetUrl(['images/Chul.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Chul.png']);
{ .SetTexture }
Appearance35.Texture := ImageTexture37;
{ .SetAppearance }
Shape34.Appearance := Appearance35;
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet38.CreaseAngle := 1.57;
IndexedFaceSet38.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate39 := TCoordinateNode.Create;
Coordinate39.SetPoint([Vector3(0,0.87,0.0225),Vector3(0,0.7535,-0.4472),Vector3(-0.3613,0.7535,-0.3842),Vector3(-0.6259,0.7535,-0.3083),Vector3(-0.7227,0.7535,0.0225),Vector3(-0.6259,0.7535,0.3534),Vector3(-0.3613,0.7535,0.4293),Vector3(0,0.7535,0.4922),Vector3(0.3613,0.7535,0.4293),Vector3(0.6259,0.7535,0.3534),Vector3(0.7227,0.7535,0.0225),Vector3(0.6259,0.7535,-0.3083),Vector3(0.3613,0.7535,-0.3842),Vector3(0,0.435,-0.7303),Vector3(-0.4673,0.435,-0.6294),Vector3(-0.8094,0.435,-0.3539),Vector3(-0.9347,0.435,0.0225),Vector3(-0.8094,0.435,0.399),Vector3(-0.4673,0.435,0.5769),Vector3(0,0.435,0.6777),Vector3(0.4673,0.435,0.5769),Vector3(0.8094,0.435,0.399),Vector3(0.9347,0.435,0.0225),Vector3(0.8094,0.435,-0.3539),Vector3(0.4673,0.435,-0.6294),Vector3(0,0,-0.7942),Vector3(-0.5396,0,-0.6777),Vector3(-0.9347,0,-0.3596),Vector3(-1.079,0,0.0225),Vector3(-0.9347,0,0.4572),Vector3(-0.5396,0,0.6777),Vector3(0,0,0.7942),Vector3(0.5396,0,0.6777),Vector3(0.9347,0,0.4572),Vector3(1.079,0,0.0225),Vector3(0.9347,0,-0.3596),Vector3(0.5396,0,-0.6777),Vector3(0,-0.435,-0.6777),Vector3(-0.4673,-0.435,-0.5769),Vector3(-0.8094,-0.435,-0.3013),Vector3(-0.9347,-0.435,0.0225),Vector3(-0.8094,-0.435,0.399),Vector3(-0.4673,-0.435,0.5769),Vector3(0,-0.435,0.6777),Vector3(0.4673,-0.435,0.5769),Vector3(0.8094,-0.435,0.399),Vector3(0.9347,-0.435,0.0225),Vector3(0.8094,-0.435,-0.3013),Vector3(0.4673,-0.435,-0.5769),Vector3(0,-0.7535,-0.3596),Vector3(-0.2698,-0.7535,-0.3013),Vector3(-0.4673,-0.7535,-0.1948),Vector3(-0.5396,-0.7535,0.0225),Vector3(-0.4673,-0.7535,0.2399),Vector3(-0.2698,-0.7535,0.399),Vector3(0,-0.7535,0.4572),Vector3(0.2698,-0.7535,0.399),Vector3(0.4673,-0.7535,0.2399),Vector3(0.5396,-0.7535,0.0225),Vector3(0.4673,-0.7535,-0.1948),Vector3(0.2698,-0.7535,-0.3013),Vector3(0,-0.87,0.0225)]);
{ .SetCoord }
IndexedFaceSet38.Coord := Coordinate39;
TextureCoordinate40 := TTextureCoordinateNode.Create;
TextureCoordinate40.SetPoint([Vector2(0.7418,0.2139),Vector2(0.7309,0.2139),Vector2(0.7342,0.26),Vector2(0.7342,0.2938),Vector2(0.7342,0.3062),Vector2(0.7342,0.2938),Vector2(0.7342,0.26),Vector2(0.7309,0.2139),Vector2(0.7343,0.2601),Vector2(0.7343,0.2939),Vector2(0.7343,0.3063),Vector2(0.7343,0.2939),Vector2(0.7343,0.2601),Vector2(0.7157,0.2139),Vector2(0.7156,0.2735),Vector2(0.7156,0.3173),Vector2(0.7156,0.3333),Vector2(0.7156,0.3173),Vector2(0.7156,0.2735),Vector2(0.7157,0.2139),Vector2(0.7157,0.2736),Vector2(0.7157,0.3174),Vector2(0.7157,0.3334),Vector2(0.7157,0.3174),Vector2(0.7157,0.2736),Vector2(0.7015,0.2147),Vector2(0.7014,0.2836),Vector2(0.7014,0.3341),Vector2(0.7014,0.3526),Vector2(0.7014,0.3341),Vector2(0.7014,0.2836),Vector2(0.7015,0.2147),Vector2(0.7015,0.2837),Vector2(0.7015,0.3342),Vector2(0.7015,0.3527),Vector2(0.7015,0.3342),Vector2(0.7015,0.2837),Vector2(0.6609,0.2147),Vector2(0.6608,0.2744),Vector2(0.6608,0.3181),Vector2(0.6608,0.3341),Vector2(0.6608,0.3181),Vector2(0.6608,0.2744),Vector2(0.6609,0.2147),Vector2(0.6609,0.2745),Vector2(0.6609,0.3182),Vector2(0.6609,0.3342),Vector2(0.6609,0.3182),Vector2(0.6609,0.2745),Vector2(0.6312,0.2147),Vector2(0.6311,0.2491),Vector2(0.6311,0.2744),Vector2(0.6311,0.2836),Vector2(0.6311,0.2744),Vector2(0.6311,0.2491),Vector2(0.6312,0.2147),Vector2(0.6312,0.2492),Vector2(0.6312,0.2745),Vector2(0.6312,0.2837),Vector2(0.6312,0.2745),Vector2(0.6312,0.2492),Vector2(0.6204,0.2147)]);
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
HAnimJoint41.Center := Vector3(4.001,41.139999,-1.119);
HAnimJoint41.SetUlimit([0,0,0]);
HAnimJoint41.SetLlimit([0,0,0]);
HAnimSegment42 := THAnimSegmentNode.Create;
HAnimSegment42.NameField := 'l_thigh';
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(4.001,41.139999,-1.119);
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
IndexedFaceSet48.SetCoordIndex([40,39,38,-1,38,37,36,-1,38,36,35,-1,40,38,35,-1,41,40,35,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,107,-1,107,106,14,-1,15,16,108,-1,108,107,15,-1,16,17,109,-1,109,108,16,-1,17,18,110,-1,110,109,17,-1,18,19,111,-1,111,110,18,-1,19,20,112,-1,112,111,19,-1,20,14,106,-1,106,112,20,-1,29,28,106,-1,106,107,29,-1,30,29,107,-1,107,108,30,-1,31,30,108,-1,108,109,31,-1,32,31,109,-1,109,110,32,-1,33,32,110,-1,110,111,33,-1,34,33,111,-1,111,112,34,-1,28,34,112,-1,112,106,28,-1,35,36,1,-1,1,0,35,-1,36,37,2,-1,2,1,36,-1,37,38,3,-1,3,2,37,-1,38,39,4,-1,4,3,38,-1,39,40,5,-1,5,4,39,-1,40,41,6,-1,6,5,40,-1,41,35,0,-1,0,6,41,-1,113,43,21,-1,50,51,42,-1,115,113,22,-1,52,53,44,-1,116,115,23,-1,54,55,45,-1,117,116,24,-1,56,57,46,-1,118,117,25,-1,58,59,47,-1,119,118,26,-1,60,61,48,-1,43,119,27,-1,62,63,114,-1,122,64,65,-1,66,67,130,-1,121,68,69,-1,70,71,129,-1,123,72,73,-1,74,75,131,-1,124,76,77,-1,78,79,132,-1,125,80,81,-1,82,83,133,-1,126,84,85,-1,86,87,134,-1,127,88,89,-1,90,91,135,-1,43,113,140,-1,113,115,140,-1,115,116,140,-1,116,117,140,-1,117,118,140,-1,118,119,140,-1,119,43,140,-1,92,93,49,-1,94,95,120,-1,96,97,128,-1,98,99,136,-1,100,101,137,-1,102,103,138,-1,104,105,139,-1]);
IndexedFaceSet48.CreaseAngle := 1.57;
IndexedFaceSet48.SetTexCoordIndex([5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,42,43,29,-1,29,28,42,-1,44,42,28,-1,28,30,44,-1,45,44,30,-1,30,31,45,-1,46,45,31,-1,31,32,46,-1,47,46,32,-1,32,33,47,-1,48,47,33,-1,33,34,48,-1,43,48,34,-1,34,29,43,-1,43,42,28,-1,28,29,43,-1,42,44,30,-1,30,28,42,-1,44,45,31,-1,31,30,44,-1,45,46,32,-1,32,31,45,-1,46,47,33,-1,33,32,46,-1,47,48,34,-1,34,33,47,-1,48,43,29,-1,29,34,48,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1,42,43,49,-1,44,42,49,-1,45,44,49,-1,46,45,49,-1,47,46,49,-1,48,47,49,-1,43,48,49,-1]);
Coordinate49 := TCoordinateNode.Create;
Coordinate49.SetPoint([Vector3(2.64,0.923,0),Vector3(1.465,0.923,2.862),Vector3(-1.174,0.923,3.569),Vector3(-3.002,0.923,1.588),Vector3(-3.002,0.923,-1.588),Vector3(-1.174,0.923,-3.569),Vector3(1.465,0.923,-2.862),Vector3(2.64,-2.421,0),Vector3(1.465,-2.421,2.862),Vector3(-1.174,-2.421,3.569),Vector3(-3.002,-2.421,1.588),Vector3(-3.002,-2.421,-1.588),Vector3(-1.174,-2.421,-3.569),Vector3(1.465,-2.421,-2.862),Vector3(2.64,-8.213,0),Vector3(1.465,-8.213,2.862),Vector3(-1.174,-8.213,3.569),Vector3(-3.002,-8.213,1.588),Vector3(-3.002,-8.213,-1.588),Vector3(-1.174,-8.213,-3.569),Vector3(1.465,-8.213,-2.862),Vector3(3.002,-14.12,0),Vector3(1.691,-14.12,3.194),Vector3(-1.255,-14.12,3.983),Vector3(-2.991,-14.12,1.773),Vector3(-2.991,-14.12,-1.773),Vector3(-1.255,-14.12,-3.983),Vector3(1.691,-14.12,-3.194),Vector3(1.914,-6.856,0),Vector3(1.013,-6.856,2.196),Vector3(-1.012,-6.856,2.738),Vector3(-2.348,-6.856,1.219),Vector3(-2.348,-6.856,-1.219),Vector3(-1.012,-6.856,-2.738),Vector3(1.013,-6.856,-2.196),Vector3(1.829,2.698,0),Vector3(0.9595,2.698,2.118),Vector3(-0.9934,2.698,2.641),Vector3(-2.56,2.698,1.175),Vector3(-2.56,2.698,-1.175),Vector3(-0.9934,2.698,-2.641),Vector3(0.9595,2.698,-2.118),Vector3(0.9751,-17.04,2.046),Vector3(1.815,-17.04,0),Vector3(-0.9119,-17.04,2.551),Vector3(-2.024,-17.04,1.136),Vector3(-2.024,-17.04,-1.136),Vector3(-0.9119,-17.04,-2.552),Vector3(0.9751,-17.04,-2.046),Vector3(-0.3011,-18.41,0),Vector3(3.002,-14.12,0),Vector3(1.691,-14.12,3.194),Vector3(1.691,-14.12,3.194),Vector3(-1.255,-14.12,3.983),Vector3(-1.255,-14.12,3.983),Vector3(-2.991,-14.12,1.773),Vector3(-2.991,-14.12,1.773),Vector3(-2.991,-14.12,-1.773),Vector3(-2.991,-14.12,-1.773),Vector3(-1.255,-14.12,-3.983),Vector3(-1.255,-14.12,-3.983),Vector3(1.691,-14.12,-3.194),Vector3(1.691,-14.12,-3.194),Vector3(3.002,-14.12,0),Vector3(0.9751,-17.04,2.046),Vector3(1.691,-14.12,3.194),Vector3(1.691,-14.12,3.194),Vector3(3.002,-14.12,0),Vector3(-0.9119,-17.04,2.551),Vector3(-1.255,-14.12,3.983),Vector3(-1.255,-14.12,3.983),Vector3(1.691,-14.12,3.194),Vector3(-2.024,-17.04,1.136),Vector3(-2.991,-14.12,1.773),Vector3(-2.991,-14.12,1.773),Vector3(-1.255,-14.12,3.983),Vector3(-2.024,-17.04,-1.136),Vector3(-2.991,-14.12,-1.773),Vector3(-2.991,-14.12,-1.773),Vector3(-2.991,-14.12,1.773),Vector3(-0.9119,-17.04,-2.552),Vector3(-1.255,-14.12,-3.983),Vector3(-1.255,-14.12,-3.983),Vector3(-2.991,-14.12,-1.773),Vector3(0.9751,-17.04,-2.046),Vector3(1.691,-14.12,-3.194),Vector3(1.691,-14.12,-3.194),Vector3(-1.255,-14.12,-3.983),Vector3(1.815,-17.04,0),Vector3(3.002,-14.12,0),Vector3(3.002,-14.12,0),Vector3(1.691,-14.12,-3.194),Vector3(0.9751,-17.04,2.046),Vector3(1.815,-17.04,0),Vector3(-0.9119,-17.04,2.551),Vector3(0.9751,-17.04,2.046),Vector3(-2.024,-17.04,1.136),Vector3(-0.9119,-17.04,2.551),Vector3(-2.024,-17.04,-1.136),Vector3(-2.024,-17.04,1.136),Vector3(-0.9119,-17.04,-2.552),Vector3(-2.024,-17.04,-1.136),Vector3(0.9751,-17.04,-2.046),Vector3(-0.9119,-17.04,-2.552),Vector3(1.815,-17.04,0),Vector3(0.9751,-17.04,-2.046),Vector3(3.002,-14.12,0),Vector3(1.691,-14.12,3.194),Vector3(-1.255,-14.12,3.983),Vector3(-2.991,-14.12,1.773),Vector3(-2.991,-14.12,-1.773),Vector3(-1.255,-14.12,-3.983),Vector3(1.691,-14.12,-3.194),Vector3(0.9751,-17.04,2.046),Vector3(1.815,-17.04,0),Vector3(-0.9119,-17.04,2.551),Vector3(-2.024,-17.04,1.136),Vector3(-2.024,-17.04,-1.136),Vector3(-0.9119,-17.04,-2.552),Vector3(0.9751,-17.04,-2.046),Vector3(-0.3011,-18.41,0),Vector3(0.9751,-17.04,2.046),Vector3(1.815,-17.04,0),Vector3(-0.9119,-17.04,2.551),Vector3(-2.024,-17.04,1.136),Vector3(-2.024,-17.04,-1.136),Vector3(-0.9119,-17.04,-2.552),Vector3(0.9751,-17.04,-2.046),Vector3(-0.3011,-18.41,0),Vector3(0.9751,-17.04,2.046),Vector3(1.815,-17.04,0),Vector3(-0.9119,-17.04,2.551),Vector3(-2.024,-17.04,1.136),Vector3(-2.024,-17.04,-1.136),Vector3(-0.9119,-17.04,-2.552),Vector3(0.9751,-17.04,-2.046),Vector3(-0.3011,-18.41,0),Vector3(-0.3011,-18.41,0),Vector3(-0.3011,-18.41,0),Vector3(-0.3011,-18.41,0),Vector3(-0.3011,-18.41,0)]);
{ .SetCoord }
IndexedFaceSet48.Coord := Coordinate49;
TextureCoordinate50 := TTextureCoordinateNode.Create;
TextureCoordinate50.SetPoint([Vector2(0.7014,0.3364),Vector2(0.7014,0.3621),Vector2(0.7014,0.2785),Vector2(0.7014,0.2321),Vector2(0.7014,0.2321),Vector2(0.7014,0.2785),Vector2(0.7014,0.3364),Vector2(0.6864,0.3861),Vector2(0.6582,0.3513),Vector2(0.6582,0.3861),Vector2(0.6864,0.3513),Vector2(0.6582,0.2731),Vector2(0.6864,0.2731),Vector2(0.6582,0.219),Vector2(0.6864,0.219),Vector2(0.6582,0.219),Vector2(0.6864,0.219),Vector2(0.6582,0.2731),Vector2(0.6864,0.2731),Vector2(0.6582,0.3513),Vector2(0.6864,0.3513),Vector2(0.5958,0.3513),Vector2(0.5958,0.3861),Vector2(0.5958,0.2731),Vector2(0.5958,0.219),Vector2(0.5958,0.219),Vector2(0.5958,0.2731),Vector2(0.5958,0.3513),Vector2(0.5417,0.3589),Vector2(0.5417,0.3977),Vector2(0.5417,0.2716),Vector2(0.5417,0.2202),Vector2(0.5417,0.2202),Vector2(0.5417,0.2716),Vector2(0.5417,0.3589),Vector2(0.6072,0.3379),Vector2(0.6072,0.3646),Vector2(0.6072,0.2779),Vector2(0.6072,0.2384),Vector2(0.6072,0.2384),Vector2(0.6072,0.2779),Vector2(0.6072,0.3379),Vector2(0.535,0.3368),Vector2(0.535,0.3617),Vector2(0.535,0.2809),Vector2(0.535,0.248),Vector2(0.535,0.248),Vector2(0.535,0.2809),Vector2(0.535,0.3368),Vector2(0.5235,0.299)]);
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
HAnimJoint51.Center := Vector3(4.315,25.190001,-1.119);
HAnimJoint51.SetUlimit([0,0,0]);
HAnimJoint51.SetLlimit([0,0,0]);
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.NameField := 'l_calf';
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(4.315,25.190001,-1.119);
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
IndexedFaceSet58.SetCoordIndex([40,39,38,-1,38,37,36,-1,38,36,35,-1,40,38,35,-1,41,40,35,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,35,36,1,-1,1,0,35,-1,36,37,2,-1,2,1,36,-1,37,38,3,-1,3,2,37,-1,38,39,4,-1,4,3,38,-1,39,40,5,-1,5,4,39,-1,40,41,6,-1,6,5,40,-1,41,35,0,-1,0,6,41,-1]);
IndexedFaceSet58.CreaseAngle := 1.57;
IndexedFaceSet58.SetTexCoordIndex([5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1]);
Coordinate59 := TCoordinateNode.Create;
Coordinate59.SetPoint([Vector3(2.59,-0.0184,0),Vector3(1.415,-0.0184,2.862),Vector3(-1.224,-0.0184,3.569),Vector3(-3.033,-0.0184,1.588),Vector3(-3.033,-0.0184,-1.588),Vector3(-1.224,-0.0184,-3.569),Vector3(1.415,-0.0184,-2.862),Vector3(2.59,-3.362,0),Vector3(1.415,-3.362,2.862),Vector3(-1.224,-3.362,3.569),Vector3(-3.033,-3.362,1.588),Vector3(-3.033,-3.362,-1.588),Vector3(-1.224,-3.362,-3.569),Vector3(1.415,-3.362,-2.862),Vector3(2.59,-13.66,0),Vector3(1.415,-13.66,2.862),Vector3(-1.224,-13.66,3.569),Vector3(-3.033,-13.66,1.588),Vector3(-3.033,-13.66,-1.588),Vector3(-1.224,-13.66,-3.569),Vector3(1.415,-13.66,-2.862),Vector3(3.239,-19.57,0),Vector3(1.813,-19.57,3.472),Vector3(-1.389,-19.57,4.33),Vector3(-3.239,-19.57,1.927),Vector3(-3.239,-19.57,-1.927),Vector3(-1.389,-19.57,-4.33),Vector3(1.813,-19.57,-3.472),Vector3(1.863,-12.3,0),Vector3(0.9622,-12.3,2.196),Vector3(-1.063,-12.3,2.738),Vector3(-2.378,-12.3,1.219),Vector3(-2.378,-12.3,-1.219),Vector3(-1.063,-12.3,-2.738),Vector3(0.9622,-12.3,-2.196),Vector3(1.778,1.756,0),Vector3(0.9091,1.756,2.118),Vector3(-1.044,1.756,2.641),Vector3(-2.61,1.756,1.175),Vector3(-2.61,1.756,-1.175),Vector3(-1.044,1.756,-2.641),Vector3(0.9091,1.756,-2.118)]);
{ .SetCoord }
IndexedFaceSet58.Coord := Coordinate59;
TextureCoordinate60 := TTextureCoordinateNode.Create;
TextureCoordinate60.SetPoint([Vector2(0.5993,0.2671),Vector2(0.5993,0.2423),Vector2(0.5993,0.3227),Vector2(0.5993,0.3673),Vector2(0.5993,0.3673),Vector2(0.5993,0.3227),Vector2(0.5993,0.2671),Vector2(0.5849,0.2192),Vector2(0.5579,0.2527),Vector2(0.5579,0.2192),Vector2(0.5849,0.2527),Vector2(0.5579,0.3279),Vector2(0.5849,0.3279),Vector2(0.5579,0.3793),Vector2(0.5849,0.3793),Vector2(0.5579,0.3793),Vector2(0.5849,0.3793),Vector2(0.5579,0.3279),Vector2(0.5849,0.3279),Vector2(0.5579,0.2527),Vector2(0.5849,0.2527),Vector2(0.4746,0.2527),Vector2(0.4746,0.2192),Vector2(0.4746,0.3279),Vector2(0.4746,0.3793),Vector2(0.4746,0.3793),Vector2(0.4746,0.3279),Vector2(0.4746,0.2527),Vector2(0.426,0.2592),Vector2(0.4268,0.2203),Vector2(0.4268,0.3325),Vector2(0.4268,0.3852),Vector2(0.4268,0.3852),Vector2(0.4268,0.3325),Vector2(0.426,0.2592),Vector2(0.4856,0.2656),Vector2(0.4856,0.2399),Vector2(0.4856,0.3232),Vector2(0.4856,0.3607),Vector2(0.4856,0.3607),Vector2(0.4856,0.3232),Vector2(0.4856,0.2656)]);
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
HAnimJoint61.Center := Vector3(4.574,6.838,-1.463);
HAnimJoint61.SetUlimit([0,0,0]);
HAnimJoint61.SetLlimit([0,0,0]);
HAnimSegment62 := THAnimSegmentNode.Create;
HAnimSegment62.NameField := 'l_talus';
Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(4.574,6.838,-1.463);
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
IndexedFaceSet68.SetCoordIndex([0,4,1,-1,1,2,0,-1,3,5,0,-1,0,2,3,-1,6,9,7,-1,7,8,6,-1,8,7,10,-1,10,11,8,-1,12,20,9,-1,9,6,12,-1,21,20,12,-1,12,13,21,-1,11,10,14,-1,14,15,11,-1,15,14,16,-1,16,17,15,-1,9,1,4,-1,4,7,9,-1,7,4,0,-1,0,10,7,-1,10,0,5,-1,5,14,10,-1,14,5,3,-1,3,16,14,-1,6,8,19,-1,8,11,19,-1,12,6,19,-1,13,12,19,-1,11,15,19,-1,15,17,19,-1,17,18,19,-1,18,13,19,-1,13,18,22,-1,22,21,13,-1,18,17,16,-1,16,22,18,-1,24,25,26,-1,26,27,28,-1,24,26,28,-1,24,28,29,-1,24,29,30,-1,24,30,23,-1,2,1,24,-1,24,23,2,-1,1,9,25,-1,25,24,1,-1,9,20,26,-1,26,25,9,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,16,29,-1,29,28,22,-1,16,3,30,-1,30,29,16,-1,3,2,23,-1,23,30,3,-1]);
IndexedFaceSet68.CreaseAngle := 1.57;
IndexedFaceSet68.SetTexCoordIndex([0,4,1,-1,1,2,0,-1,3,5,0,-1,0,2,3,-1,6,9,7,-1,7,8,6,-1,8,7,10,-1,10,11,8,-1,12,20,9,-1,9,6,12,-1,21,20,12,-1,12,13,21,-1,11,10,14,-1,14,15,11,-1,15,14,16,-1,16,17,15,-1,9,1,4,-1,4,7,9,-1,7,4,0,-1,0,10,7,-1,10,0,5,-1,5,14,10,-1,14,5,3,-1,3,16,14,-1,6,8,19,-1,8,11,19,-1,12,6,19,-1,13,12,19,-1,11,15,19,-1,15,17,19,-1,17,18,19,-1,18,13,19,-1,13,18,22,-1,22,21,13,-1,18,17,16,-1,16,22,18,-1,24,25,26,-1,26,27,28,-1,24,26,28,-1,24,28,29,-1,24,29,30,-1,24,30,23,-1,2,1,24,-1,24,23,2,-1,1,9,25,-1,25,24,1,-1,9,20,26,-1,26,25,9,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,16,29,-1,29,28,22,-1,16,3,30,-1,30,29,16,-1,3,2,23,-1,23,30,3,-1]);
Coordinate69 := TCoordinateNode.Create;
Coordinate69.SetPoint([Vector3(0.8202,-6.687,-3.411),Vector3(2.567,-6.814,0.3665),Vector3(0.4068,-6.835,0.5953),Vector3(-2.033,-6.8,0.7383),Vector3(2.347,-6.742,-2.364),Vector3(-2.159,-6.722,-2.362),Vector3(1.391,0.0721,-0.2632),Vector3(2.329,-3.518,-2.264),Vector3(1.029,0.4254,-1.355),Vector3(2.148,-3.639,0.4281),Vector3(0.578,-3.439,-3.248),Vector3(0.1667,-0.7673,-2.634),Vector3(0.6108,-0.1555,0.5745),Vector3(-1.165,-0.0864,1.722),Vector3(-2.436,-3.539,-2.293),Vector3(-1.3,-0.7319,-2.864),Vector3(-2.025,-3.634,0.7655),Vector3(-2.416,-1.184,-1.037),Vector3(-2.567,-0.7486,1.337),Vector3(-0.5315,0.4359,-0.5649),Vector3(1.591,-1.917,2.128),Vector3(-0.6895,-0.8855,3.411),Vector3(-2.449,-2.096,3.113),Vector3(0.575,-6.557,1.961),Vector3(2.022,-6.548,1.82),Vector3(1.675,-4.087,1.579),Vector3(1.205,-2.631,3.158),Vector3(-0.5196,-1.891,4.248),Vector3(-1.582,-2.617,4.058),Vector3(-1.245,-3.851,1.847),Vector3(-1.226,-6.514,2.023)]);
{ .SetCoord }
IndexedFaceSet68.Coord := Coordinate69;
TextureCoordinate70 := TTextureCoordinateNode.Create;
TextureCoordinate70.SetPoint([Vector2(0.2874,0.0046),Vector2(0.2798,0.0442),Vector2(0.2785,0.0523),Vector2(0.2806,0.06),Vector2(0.2841,0.0129),Vector2(0.2854,0.0243),Vector2(0.6233,0.0398),Vector2(0.3712,0.0119),Vector2(0.6447,0.028),Vector2(0.3638,0.0437),Vector2(0.376,0.0049),Vector2(0.5724,0.0153),Vector2(0.6095,0.0515),Vector2(0.6137,0.0693),Vector2(0.3699,0.0236),Vector2(0.5745,0.0163),Vector2(0.3642,0.0581),Vector2(0.5471,0.0403),Vector2(0.5735,0.0684),Vector2(0.6453,0.0411),Vector2(0.4855,0.066),Vector2(0.5541,0.0994),Vector2(0.4746,0.0876),Vector2(0.2785,0.0523),Vector2(0.2798,0.0442),Vector2(0.3638,0.0437),Vector2(0.4855,0.066),Vector2(0.5541,0.0994),Vector2(0.4746,0.0876),Vector2(0.3642,0.0581),Vector2(0.2806,0.06)]);
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
HAnimJoint71.Center := Vector3(4.809,5.583,1.492);
HAnimJoint71.SetUlimit([0,0,0]);
HAnimJoint71.SetLlimit([0,0,0]);
HAnimSegment72 := THAnimSegmentNode.Create;
HAnimSegment72.NameField := 'l_tarsal_proximal_phalanx_2';
Transform73 := TTransformNode.Create;
Transform73.Translation := Vector3(4.809,5.583,1.492);
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
IndexedFaceSet78.SetCoordIndex([0,1,19,-1,19,18,0,-1,1,2,20,-1,20,19,1,-1,22,5,25,-1,4,24,25,-1,25,5,4,-1,3,0,18,-1,18,21,3,-1,6,9,7,-1,7,8,6,-1,22,20,2,-1,2,5,22,-1,6,11,10,-1,10,9,6,-1,0,13,12,-1,12,1,0,-1,1,12,14,-1,14,2,1,-1,3,4,15,-1,15,16,3,-1,5,17,15,-1,15,4,5,-1,3,16,13,-1,13,0,3,-1,2,14,17,-1,17,5,2,-1,15,6,8,-1,8,16,15,-1,16,8,7,-1,7,13,16,-1,13,7,9,-1,9,12,13,-1,15,17,11,-1,11,6,15,-1,12,9,10,-1,10,14,12,-1,14,10,11,-1,11,17,14,-1,4,3,23,-1,23,24,4,-1,23,3,21,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,22,29,-1,29,28,20,-1,22,25,29,-1,23,21,30,-1,21,18,26,-1,26,30,21,-1,23,25,24,-1,29,25,23,-1,23,30,29,-1,27,28,29,-1,26,27,29,-1,30,26,29,-1]);
IndexedFaceSet78.CreaseAngle := 1.57;
IndexedFaceSet78.SetTexCoordIndex([0,1,19,-1,19,18,0,-1,1,2,20,-1,20,19,1,-1,22,5,25,-1,4,24,25,-1,25,5,4,-1,3,0,18,-1,18,21,3,-1,6,9,7,-1,7,8,6,-1,22,20,2,-1,2,5,22,-1,6,11,10,-1,10,9,6,-1,0,13,12,-1,12,1,0,-1,1,12,14,-1,14,2,1,-1,3,4,15,-1,15,16,3,-1,5,17,15,-1,15,4,5,-1,3,16,13,-1,13,0,3,-1,2,14,17,-1,17,5,2,-1,15,6,8,-1,8,16,15,-1,16,8,7,-1,7,13,16,-1,13,7,9,-1,9,12,13,-1,15,17,11,-1,11,6,15,-1,12,9,10,-1,10,14,12,-1,14,10,11,-1,11,17,14,-1,4,3,23,-1,23,24,4,-1,23,3,21,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,22,29,-1,29,28,20,-1,22,25,29,-1,23,21,30,-1,21,18,26,-1,26,30,21,-1,23,25,24,-1,29,25,23,-1,23,30,29,-1,27,28,29,-1,26,27,29,-1,30,26,29,-1]);
Coordinate79 := TCoordinateNode.Create;
Coordinate79.SetPoint([Vector3(2.803,-5.588,0.6731),Vector3(0.2267,-5.589,2.081),Vector3(-2.411,-5.604,1.896),Vector3(2.336,-2.423,0.7256),Vector3(-0.4491,-0.4293,2.144),Vector3(-2.566,-2.188,1.933),Vector3(-0.2886,-2.342,8.508),Vector3(2.628,-5.51,5.676),Vector3(2.567,-2.341,5.71),Vector3(-0.0624,-5.51,8.465),Vector3(-1.743,-5.522,7.68),Vector3(-1.73,-2.103,7.711),Vector3(-0.0387,-5.541,5.353),Vector3(2.584,-5.536,2.735),Vector3(-2.525,-5.553,5.417),Vector3(-0.265,-1.11,5.396),Vector3(2.299,-2.375,2.776),Vector3(-2.512,-2.385,5.448),Vector3(2.332,-5.559,-2.589),Vector3(0.1713,-5.58,-2.36),Vector3(-2.269,-5.545,-2.217),Vector3(1.912,-2.384,-2.527),Vector3(-2.26,-2.379,-2.19),Vector3(1.356,-0.6618,-0.8278),Vector3(-0.925,0.3698,0.4552),Vector3(-2.684,-0.8406,0.1573),Vector3(1.828,-3.703,-4.62),Vector3(0.0134,-3.719,-4.434),Vector3(-1.422,-3.68,-4.33),Vector3(-1.411,-0.7578,-4.754),Vector3(0.2889,-0.8748,-4.705)]);
{ .SetCoord }
IndexedFaceSet78.Coord := Coordinate79;
TextureCoordinate80 := TTextureCoordinateNode.Create;
TextureCoordinate80.SetPoint([Vector2(0.278,0.0809),Vector2(0.2779,0.1038),Vector2(0.277,0.1083),Vector2(0.3615,0.0805),Vector2(0.4946,0.1295),Vector2(0.3758,0.1069),Vector2(0.3664,0.1777),Vector2(0.2827,0.1396),Vector2(0.3665,0.1379),Vector2(0.2827,0.1788),Vector2(0.282,0.1739),Vector2(0.3809,0.172),Vector2(0.2808,0.1426),Vector2(0.2811,0.1055),Vector2(0.2801,0.1495),Vector2(0.4533,0.1669),Vector2(0.3644,0.1045),Vector2(0.3638,0.1477),Vector2(0.2798,0.0442),Vector2(0.2785,0.0523),Vector2(0.2806,0.06),Vector2(0.3638,0.0437),Vector2(0.3642,0.0581),Vector2(0.4855,0.066),Vector2(0.5541,0.0994),Vector2(0.4746,0.0876),Vector2(0.2798,0.0442),Vector2(0.2785,0.0523),Vector2(0.2806,0.06),Vector2(0.3642,0.0581),Vector2(0.3638,0.0437)]);
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
HAnimJoint81.Center := Vector3(-4.001,41.139999,-1.119);
HAnimJoint81.SetUlimit([0,0,0]);
HAnimJoint81.SetLlimit([0,0,0]);
HAnimSegment82 := THAnimSegmentNode.Create;
HAnimSegment82.NameField := 'r_thigh';
Transform83 := TTransformNode.Create;
Transform83.Translation := Vector3(-4.001,41.139999,-1.119);
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
IndexedFaceSet88.SetCoordIndex([36,37,38,-1,35,36,38,-1,38,39,40,-1,35,38,40,-1,41,35,40,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,106,107,-1,107,15,14,-1,15,107,108,-1,108,16,15,-1,16,108,109,-1,109,17,16,-1,17,109,110,-1,110,18,17,-1,18,110,111,-1,111,19,18,-1,19,111,112,-1,112,20,19,-1,20,112,106,-1,106,14,20,-1,29,107,106,-1,106,28,29,-1,30,108,107,-1,107,29,30,-1,31,109,108,-1,108,30,31,-1,32,110,109,-1,109,31,32,-1,33,111,110,-1,110,32,33,-1,34,112,111,-1,111,33,34,-1,28,106,112,-1,112,34,28,-1,35,0,1,-1,1,36,35,-1,36,1,2,-1,2,37,36,-1,37,2,3,-1,3,38,37,-1,38,3,4,-1,4,39,38,-1,39,4,5,-1,5,40,39,-1,40,5,6,-1,6,41,40,-1,41,6,0,-1,0,35,41,-1,113,21,43,-1,50,42,51,-1,115,22,113,-1,52,44,53,-1,116,23,115,-1,54,45,55,-1,117,24,116,-1,56,46,57,-1,118,25,117,-1,58,47,59,-1,119,26,118,-1,60,48,61,-1,43,27,119,-1,62,114,63,-1,122,65,64,-1,66,130,67,-1,121,69,68,-1,70,129,71,-1,123,73,72,-1,74,131,75,-1,124,77,76,-1,78,132,79,-1,125,81,80,-1,82,133,83,-1,126,85,84,-1,86,134,87,-1,127,89,88,-1,90,135,91,-1,43,140,113,-1,113,140,115,-1,115,140,116,-1,116,140,117,-1,117,140,118,-1,118,140,119,-1,119,140,43,-1,92,49,93,-1,94,120,95,-1,96,128,97,-1,98,136,99,-1,100,137,101,-1,102,138,103,-1,104,139,105,-1]);
IndexedFaceSet88.CreaseAngle := 1.57;
IndexedFaceSet88.SetTexCoordIndex([0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,42,29,43,-1,29,42,28,-1,44,28,42,-1,28,44,30,-1,45,30,44,-1,30,45,31,-1,46,31,45,-1,31,46,32,-1,47,32,46,-1,32,47,33,-1,48,33,47,-1,33,48,34,-1,43,34,48,-1,34,43,29,-1,43,28,42,-1,28,43,29,-1,42,30,44,-1,30,42,28,-1,44,31,45,-1,31,44,30,-1,45,32,46,-1,32,45,31,-1,46,33,47,-1,33,46,32,-1,47,34,48,-1,34,47,33,-1,48,29,43,-1,29,48,34,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1,42,49,43,-1,44,49,42,-1,45,49,44,-1,46,49,45,-1,47,49,46,-1,48,49,47,-1,43,49,48,-1]);
Coordinate89 := TCoordinateNode.Create;
Coordinate89.SetPoint([Vector3(-2.64,0.923,0),Vector3(-1.465,0.923,2.862),Vector3(1.174,0.923,3.569),Vector3(3.002,0.923,1.588),Vector3(3.002,0.923,-1.588),Vector3(1.174,0.923,-3.569),Vector3(-1.465,0.923,-2.862),Vector3(-2.64,-2.421,0),Vector3(-1.465,-2.421,2.862),Vector3(1.174,-2.421,3.569),Vector3(3.002,-2.421,1.588),Vector3(3.002,-2.421,-1.588),Vector3(1.174,-2.421,-3.569),Vector3(-1.465,-2.421,-2.862),Vector3(-2.64,-8.213,0),Vector3(-1.465,-8.213,2.862),Vector3(1.174,-8.213,3.569),Vector3(3.002,-8.213,1.588),Vector3(3.002,-8.213,-1.588),Vector3(1.174,-8.213,-3.569),Vector3(-1.465,-8.213,-2.862),Vector3(-3.002,-14.12,0),Vector3(-1.691,-14.12,3.194),Vector3(1.255,-14.12,3.983),Vector3(2.991,-14.12,1.773),Vector3(2.991,-14.12,-1.773),Vector3(1.255,-14.12,-3.983),Vector3(-1.691,-14.12,-3.194),Vector3(-1.914,-6.856,0),Vector3(-1.013,-6.856,2.196),Vector3(1.012,-6.856,2.738),Vector3(2.348,-6.856,1.219),Vector3(2.348,-6.856,-1.219),Vector3(1.012,-6.856,-2.738),Vector3(-1.013,-6.856,-2.196),Vector3(-1.829,2.698,0),Vector3(-0.9595,2.698,2.118),Vector3(0.9934,2.698,2.641),Vector3(2.56,2.698,1.175),Vector3(2.56,2.698,-1.175),Vector3(0.9934,2.698,-2.641),Vector3(-0.9595,2.698,-2.118),Vector3(-0.9751,-17.04,2.046),Vector3(-1.815,-17.04,0),Vector3(0.9119,-17.04,2.552),Vector3(2.024,-17.04,1.136),Vector3(2.024,-17.04,-1.136),Vector3(0.9119,-17.04,-2.552),Vector3(-0.9751,-17.04,-2.046),Vector3(0.3011,-18.41,0),Vector3(-3.002,-14.12,0),Vector3(-1.691,-14.12,3.194),Vector3(-1.691,-14.12,3.194),Vector3(1.255,-14.12,3.983),Vector3(1.255,-14.12,3.983),Vector3(2.991,-14.12,1.773),Vector3(2.991,-14.12,1.773),Vector3(2.991,-14.12,-1.773),Vector3(2.991,-14.12,-1.773),Vector3(1.255,-14.12,-3.983),Vector3(1.255,-14.12,-3.983),Vector3(-1.691,-14.12,-3.194),Vector3(-1.691,-14.12,-3.194),Vector3(-3.002,-14.12,0),Vector3(-0.9751,-17.04,2.046),Vector3(-1.691,-14.12,3.194),Vector3(-1.691,-14.12,3.194),Vector3(-3.002,-14.12,0),Vector3(0.9119,-17.04,2.552),Vector3(1.255,-14.12,3.983),Vector3(1.255,-14.12,3.983),Vector3(-1.691,-14.12,3.194),Vector3(2.024,-17.04,1.136),Vector3(2.991,-14.12,1.773),Vector3(2.991,-14.12,1.773),Vector3(1.255,-14.12,3.983),Vector3(2.024,-17.04,-1.136),Vector3(2.991,-14.12,-1.773),Vector3(2.991,-14.12,-1.773),Vector3(2.991,-14.12,1.773),Vector3(0.9119,-17.04,-2.552),Vector3(1.255,-14.12,-3.983),Vector3(1.255,-14.12,-3.983),Vector3(2.991,-14.12,-1.773),Vector3(-0.9751,-17.04,-2.046),Vector3(-1.691,-14.12,-3.194),Vector3(-1.691,-14.12,-3.194),Vector3(1.255,-14.12,-3.983),Vector3(-1.815,-17.04,0),Vector3(-3.002,-14.12,0),Vector3(-3.002,-14.12,0),Vector3(-1.691,-14.12,-3.194),Vector3(-0.9751,-17.04,2.046),Vector3(-1.815,-17.04,0),Vector3(0.9119,-17.04,2.552),Vector3(-0.9751,-17.04,2.046),Vector3(2.024,-17.04,1.136),Vector3(0.9119,-17.04,2.552),Vector3(2.024,-17.04,-1.136),Vector3(2.024,-17.04,1.136),Vector3(0.9119,-17.04,-2.552),Vector3(2.024,-17.04,-1.136),Vector3(-0.9751,-17.04,-2.046),Vector3(0.9119,-17.04,-2.552),Vector3(-1.815,-17.04,0),Vector3(-0.9751,-17.04,-2.046),Vector3(-3.002,-14.12,0),Vector3(-1.691,-14.12,3.194),Vector3(1.255,-14.12,3.983),Vector3(2.991,-14.12,1.773),Vector3(2.991,-14.12,-1.773),Vector3(1.255,-14.12,-3.983),Vector3(-1.691,-14.12,-3.194),Vector3(-0.9751,-17.04,2.046),Vector3(-1.815,-17.04,0),Vector3(0.9119,-17.04,2.552),Vector3(2.024,-17.04,1.136),Vector3(2.024,-17.04,-1.136),Vector3(0.9119,-17.04,-2.552),Vector3(-0.9751,-17.04,-2.046),Vector3(0.3011,-18.41,0),Vector3(-0.9751,-17.04,2.046),Vector3(-1.815,-17.04,0),Vector3(0.9119,-17.04,2.552),Vector3(2.024,-17.04,1.136),Vector3(2.024,-17.04,-1.136),Vector3(0.9119,-17.04,-2.552),Vector3(-0.9751,-17.04,-2.046),Vector3(0.3011,-18.41,0),Vector3(-0.9751,-17.04,2.046),Vector3(-1.815,-17.04,0),Vector3(0.9119,-17.04,2.552),Vector3(2.024,-17.04,1.136),Vector3(2.024,-17.04,-1.136),Vector3(0.9119,-17.04,-2.552),Vector3(-0.9751,-17.04,-2.046),Vector3(0.3011,-18.41,0),Vector3(0.3011,-18.41,0),Vector3(0.3011,-18.41,0),Vector3(0.3011,-18.41,0),Vector3(0.3011,-18.41,0)]);
{ .SetCoord }
IndexedFaceSet88.Coord := Coordinate89;
TextureCoordinate90 := TTextureCoordinateNode.Create;
TextureCoordinate90.SetPoint([Vector2(0.7014,0.3364),Vector2(0.7014,0.3621),Vector2(0.7014,0.2785),Vector2(0.7014,0.2321),Vector2(0.7014,0.2321),Vector2(0.7014,0.2785),Vector2(0.7014,0.3364),Vector2(0.6864,0.3861),Vector2(0.6582,0.3513),Vector2(0.6582,0.3861),Vector2(0.6864,0.3513),Vector2(0.6582,0.2731),Vector2(0.6864,0.2731),Vector2(0.6582,0.219),Vector2(0.6864,0.219),Vector2(0.6582,0.219),Vector2(0.6864,0.219),Vector2(0.6582,0.2731),Vector2(0.6864,0.2731),Vector2(0.6582,0.3513),Vector2(0.6864,0.3513),Vector2(0.5958,0.3513),Vector2(0.5958,0.3861),Vector2(0.5958,0.2731),Vector2(0.5958,0.219),Vector2(0.5958,0.219),Vector2(0.5958,0.2731),Vector2(0.5958,0.3513),Vector2(0.5417,0.3589),Vector2(0.5417,0.3977),Vector2(0.5417,0.2716),Vector2(0.5417,0.2202),Vector2(0.5417,0.2202),Vector2(0.5417,0.2716),Vector2(0.5417,0.3589),Vector2(0.6072,0.3379),Vector2(0.6072,0.3646),Vector2(0.6072,0.2779),Vector2(0.6072,0.2384),Vector2(0.6072,0.2384),Vector2(0.6072,0.2779),Vector2(0.6072,0.3379),Vector2(0.535,0.3368),Vector2(0.535,0.3617),Vector2(0.535,0.2809),Vector2(0.535,0.248),Vector2(0.535,0.248),Vector2(0.535,0.2809),Vector2(0.535,0.3368),Vector2(0.5235,0.299)]);
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
HAnimJoint91.Center := Vector3(-4.315,25.190001,-1.119);
HAnimJoint91.SetUlimit([0,0,0]);
HAnimJoint91.SetLlimit([0,0,0]);
HAnimSegment92 := THAnimSegmentNode.Create;
HAnimSegment92.NameField := 'r_calf';
Transform93 := TTransformNode.Create;
Transform93.Translation := Vector3(-4.315,25.190001,-1.119);
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
IndexedFaceSet98.SetCoordIndex([36,37,38,-1,35,36,38,-1,38,39,40,-1,35,38,40,-1,41,35,40,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,35,0,1,-1,1,36,35,-1,36,1,2,-1,2,37,36,-1,37,2,3,-1,3,38,37,-1,38,3,4,-1,4,39,38,-1,39,4,5,-1,5,40,39,-1,40,5,6,-1,6,41,40,-1,41,6,0,-1,0,35,41,-1]);
IndexedFaceSet98.CreaseAngle := 1.57;
IndexedFaceSet98.SetTexCoordIndex([0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1]);
Coordinate99 := TCoordinateNode.Create;
Coordinate99.SetPoint([Vector3(-2.59,-0.0184,0),Vector3(-1.415,-0.0184,2.862),Vector3(1.224,-0.0184,3.569),Vector3(3.033,-0.0184,1.588),Vector3(3.033,-0.0184,-1.588),Vector3(1.224,-0.0184,-3.569),Vector3(-1.415,-0.0184,-2.862),Vector3(-2.59,-3.362,0),Vector3(-1.415,-3.362,2.862),Vector3(1.224,-3.362,3.569),Vector3(3.033,-3.362,1.588),Vector3(3.033,-3.362,-1.588),Vector3(1.224,-3.362,-3.569),Vector3(-1.415,-3.362,-2.862),Vector3(-2.59,-13.66,0),Vector3(-1.415,-13.66,2.862),Vector3(1.224,-13.66,3.569),Vector3(3.033,-13.66,1.588),Vector3(3.033,-13.66,-1.588),Vector3(1.224,-13.66,-3.569),Vector3(-1.415,-13.66,-2.862),Vector3(-3.239,-19.57,0),Vector3(-1.813,-19.57,3.472),Vector3(1.389,-19.57,4.33),Vector3(3.239,-19.57,1.927),Vector3(3.239,-19.57,-1.927),Vector3(1.389,-19.57,-4.33),Vector3(-1.813,-19.57,-3.472),Vector3(-1.863,-12.3,0),Vector3(-0.9622,-12.3,2.196),Vector3(1.063,-12.3,2.738),Vector3(2.378,-12.3,1.219),Vector3(2.378,-12.3,-1.219),Vector3(1.063,-12.3,-2.738),Vector3(-0.9622,-12.3,-2.196),Vector3(-1.778,1.756,0),Vector3(-0.9091,1.756,2.118),Vector3(1.044,1.756,2.641),Vector3(2.61,1.756,1.175),Vector3(2.61,1.756,-1.175),Vector3(1.044,1.756,-2.641),Vector3(-0.9091,1.756,-2.118)]);
{ .SetCoord }
IndexedFaceSet98.Coord := Coordinate99;
TextureCoordinate100 := TTextureCoordinateNode.Create;
TextureCoordinate100.SetPoint([Vector2(0.5993,0.2671),Vector2(0.5993,0.2423),Vector2(0.5993,0.3227),Vector2(0.5993,0.3673),Vector2(0.5993,0.3673),Vector2(0.5993,0.3227),Vector2(0.5993,0.2671),Vector2(0.5849,0.2192),Vector2(0.5579,0.2527),Vector2(0.5579,0.2192),Vector2(0.5849,0.2527),Vector2(0.5579,0.3279),Vector2(0.5849,0.3279),Vector2(0.5579,0.3793),Vector2(0.5849,0.3793),Vector2(0.5579,0.3793),Vector2(0.5849,0.3793),Vector2(0.5579,0.3279),Vector2(0.5849,0.3279),Vector2(0.5579,0.2527),Vector2(0.5849,0.2527),Vector2(0.4746,0.2527),Vector2(0.4746,0.2192),Vector2(0.4746,0.3279),Vector2(0.4746,0.3793),Vector2(0.4746,0.3793),Vector2(0.4746,0.3279),Vector2(0.4746,0.2527),Vector2(0.426,0.2592),Vector2(0.4268,0.2203),Vector2(0.4268,0.3325),Vector2(0.4268,0.3852),Vector2(0.4268,0.3852),Vector2(0.4268,0.3325),Vector2(0.426,0.2592),Vector2(0.4856,0.2656),Vector2(0.4856,0.2399),Vector2(0.4856,0.3232),Vector2(0.4856,0.3607),Vector2(0.4856,0.3607),Vector2(0.4856,0.3232),Vector2(0.4856,0.2656)]);
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
HAnimJoint101.Center := Vector3(-4.574,6.838,-1.463);
HAnimJoint101.SetUlimit([0,0,0]);
HAnimJoint101.SetLlimit([0,0,0]);
HAnimSegment102 := THAnimSegmentNode.Create;
HAnimSegment102.NameField := 'r_talus';
Transform103 := TTransformNode.Create;
Transform103.Translation := Vector3(-4.574,6.838,-1.463);
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
IndexedFaceSet108.SetCoordIndex([0,2,1,-1,1,4,0,-1,3,2,0,-1,0,5,3,-1,6,8,7,-1,7,9,6,-1,8,11,10,-1,10,7,8,-1,12,6,9,-1,9,20,12,-1,21,13,12,-1,12,20,21,-1,11,15,14,-1,14,10,11,-1,15,17,16,-1,16,14,15,-1,9,7,4,-1,4,1,9,-1,7,10,0,-1,0,4,7,-1,10,14,5,-1,5,0,10,-1,14,16,3,-1,3,5,14,-1,6,19,8,-1,8,19,11,-1,12,19,6,-1,13,19,12,-1,11,19,15,-1,15,19,17,-1,17,19,18,-1,18,19,13,-1,13,21,22,-1,22,18,13,-1,18,22,16,-1,16,17,18,-1,24,23,30,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,24,26,25,-1,2,23,24,-1,24,1,2,-1,1,24,25,-1,25,9,1,-1,9,25,26,-1,26,20,9,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,16,22,-1,16,29,30,-1,30,3,16,-1,3,30,23,-1,23,2,3,-1]);
IndexedFaceSet108.CreaseAngle := 1.57;
IndexedFaceSet108.SetTexCoordIndex([0,2,1,-1,1,4,0,-1,3,2,0,-1,0,5,3,-1,6,8,7,-1,7,9,6,-1,8,11,10,-1,10,7,8,-1,12,6,9,-1,9,20,12,-1,21,13,12,-1,12,20,21,-1,11,15,14,-1,14,10,11,-1,15,17,16,-1,16,14,15,-1,9,7,4,-1,4,1,9,-1,7,10,0,-1,0,4,7,-1,10,14,5,-1,5,0,10,-1,14,16,3,-1,3,5,14,-1,6,19,8,-1,8,19,11,-1,12,19,6,-1,13,19,12,-1,11,19,15,-1,15,19,17,-1,17,19,18,-1,18,19,13,-1,13,21,22,-1,22,18,13,-1,18,22,16,-1,16,17,18,-1,24,23,30,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,24,26,25,-1,2,23,24,-1,24,1,2,-1,1,24,25,-1,25,9,1,-1,9,25,26,-1,26,20,9,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,16,22,-1,16,29,30,-1,30,3,16,-1,3,30,23,-1,23,2,3,-1]);
Coordinate109 := TCoordinateNode.Create;
Coordinate109.SetPoint([Vector3(-0.8202,-6.687,-3.411),Vector3(-2.567,-6.814,0.3665),Vector3(-0.4068,-6.835,0.5953),Vector3(2.033,-6.8,0.7383),Vector3(-2.347,-6.742,-2.364),Vector3(2.159,-6.722,-2.362),Vector3(-1.391,0.0721,-0.2632),Vector3(-2.329,-3.518,-2.264),Vector3(-1.029,0.4254,-1.355),Vector3(-2.148,-3.639,0.4281),Vector3(-0.578,-3.439,-3.248),Vector3(-0.1667,-0.7673,-2.634),Vector3(-0.6108,-0.1555,0.5745),Vector3(1.165,-0.0864,1.722),Vector3(2.436,-3.539,-2.293),Vector3(1.3,-0.7319,-2.864),Vector3(2.025,-3.634,0.7655),Vector3(2.416,-1.184,-1.037),Vector3(2.567,-0.7486,1.337),Vector3(0.5315,0.4359,-0.5649),Vector3(-1.591,-1.917,2.128),Vector3(0.6895,-0.8855,3.411),Vector3(2.449,-2.096,3.113),Vector3(-0.575,-6.557,1.961),Vector3(-2.022,-6.548,1.82),Vector3(-1.675,-4.087,1.579),Vector3(-1.205,-2.631,3.158),Vector3(0.5196,-1.891,4.248),Vector3(1.582,-2.617,4.058),Vector3(1.245,-3.851,1.847),Vector3(1.226,-6.514,2.023)]);
{ .SetCoord }
IndexedFaceSet108.Coord := Coordinate109;
TextureCoordinate110 := TTextureCoordinateNode.Create;
TextureCoordinate110.SetPoint([Vector2(0.2874,0.0046),Vector2(0.2798,0.0442),Vector2(0.2785,0.0523),Vector2(0.2806,0.06),Vector2(0.2841,0.0129),Vector2(0.2854,0.0243),Vector2(0.6233,0.0398),Vector2(0.3712,0.0119),Vector2(0.6447,0.028),Vector2(0.3638,0.0437),Vector2(0.376,0.0049),Vector2(0.5724,0.0153),Vector2(0.6095,0.0515),Vector2(0.6137,0.0693),Vector2(0.3699,0.0236),Vector2(0.5745,0.0163),Vector2(0.3642,0.0581),Vector2(0.5471,0.0403),Vector2(0.5735,0.0684),Vector2(0.6453,0.0411),Vector2(0.4855,0.066),Vector2(0.5541,0.0994),Vector2(0.4746,0.0876),Vector2(0.2785,0.0523),Vector2(0.2798,0.0442),Vector2(0.3638,0.0437),Vector2(0.4855,0.066),Vector2(0.5541,0.0994),Vector2(0.4746,0.0876),Vector2(0.3642,0.0581),Vector2(0.2806,0.06)]);
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
HAnimJoint111.Center := Vector3(-4.809,5.583,1.492);
HAnimJoint111.SetUlimit([0,0,0]);
HAnimJoint111.SetLlimit([0,0,0]);
HAnimSegment112 := THAnimSegmentNode.Create;
HAnimSegment112.NameField := 'r_tarsal_proximal_phalanx_2';
Transform113 := TTransformNode.Create;
Transform113.Translation := Vector3(-4.809,5.583,1.492);
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
IndexedFaceSet118.SetCoordIndex([0,18,19,-1,19,1,0,-1,1,19,20,-1,20,2,1,-1,22,25,5,-1,4,5,25,-1,25,24,4,-1,3,21,18,-1,18,0,3,-1,6,8,7,-1,7,9,6,-1,22,5,2,-1,2,20,22,-1,6,9,10,-1,10,11,6,-1,0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,3,16,15,-1,15,4,3,-1,5,4,15,-1,15,17,5,-1,3,0,13,-1,13,16,3,-1,2,5,17,-1,17,14,2,-1,15,16,8,-1,8,6,15,-1,16,13,7,-1,7,8,16,-1,13,12,9,-1,9,7,13,-1,15,6,11,-1,11,17,15,-1,12,14,10,-1,10,9,12,-1,14,17,11,-1,11,10,14,-1,4,24,23,-1,23,3,4,-1,23,21,3,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,22,20,-1,22,29,25,-1,23,30,21,-1,21,30,26,-1,26,18,21,-1,23,24,25,-1,29,30,23,-1,23,25,29,-1,29,28,27,-1,29,27,26,-1,30,29,26,-1]);
IndexedFaceSet118.CreaseAngle := 1.57;
IndexedFaceSet118.SetTexCoordIndex([0,18,19,-1,19,1,0,-1,1,19,20,-1,20,2,1,-1,22,25,5,-1,4,5,25,-1,25,24,4,-1,3,21,18,-1,18,0,3,-1,6,8,7,-1,7,9,6,-1,22,5,2,-1,2,20,22,-1,6,9,10,-1,10,11,6,-1,0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,3,16,15,-1,15,4,3,-1,5,4,15,-1,15,17,5,-1,3,0,13,-1,13,16,3,-1,2,5,17,-1,17,14,2,-1,15,16,8,-1,8,6,15,-1,16,13,7,-1,7,8,16,-1,13,12,9,-1,9,7,13,-1,15,6,11,-1,11,17,15,-1,12,14,10,-1,10,9,12,-1,14,17,11,-1,11,10,14,-1,4,24,23,-1,23,3,4,-1,23,21,3,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,22,20,-1,22,29,25,-1,23,30,21,-1,21,30,26,-1,26,18,21,-1,23,24,25,-1,29,30,23,-1,23,25,29,-1,29,28,27,-1,29,27,26,-1,30,29,26,-1]);
Coordinate119 := TCoordinateNode.Create;
Coordinate119.SetPoint([Vector3(-2.803,-5.588,0.6731),Vector3(-0.2267,-5.589,2.081),Vector3(2.411,-5.604,1.896),Vector3(-2.336,-2.423,0.7256),Vector3(0.4491,-0.4293,2.144),Vector3(2.566,-2.188,1.933),Vector3(0.2886,-2.342,8.508),Vector3(-2.628,-5.51,5.676),Vector3(-2.567,-2.341,5.71),Vector3(0.0624,-5.51,8.465),Vector3(1.743,-5.522,7.68),Vector3(1.73,-2.103,7.711),Vector3(0.0387,-5.541,5.353),Vector3(-2.584,-5.536,2.735),Vector3(2.525,-5.553,5.417),Vector3(0.265,-1.11,5.396),Vector3(-2.299,-2.375,2.776),Vector3(2.512,-2.385,5.448),Vector3(-2.332,-5.559,-2.589),Vector3(-0.1713,-5.58,-2.36),Vector3(2.269,-5.545,-2.217),Vector3(-1.912,-2.384,-2.527),Vector3(2.26,-2.379,-2.19),Vector3(-1.356,-0.6618,-0.8278),Vector3(0.925,0.3698,0.4552),Vector3(2.684,-0.8406,0.1573),Vector3(-1.828,-3.703,-4.62),Vector3(-0.0134,-3.719,-4.434),Vector3(1.422,-3.68,-4.33),Vector3(1.411,-0.7578,-4.754),Vector3(-0.2889,-0.8748,-4.705)]);
{ .SetCoord }
IndexedFaceSet118.Coord := Coordinate119;
TextureCoordinate120 := TTextureCoordinateNode.Create;
TextureCoordinate120.SetPoint([Vector2(0.278,0.0809),Vector2(0.2779,0.1038),Vector2(0.277,0.1083),Vector2(0.3615,0.0805),Vector2(0.4946,0.1295),Vector2(0.3758,0.1069),Vector2(0.3664,0.1777),Vector2(0.2827,0.1396),Vector2(0.3665,0.1379),Vector2(0.2827,0.1788),Vector2(0.282,0.1739),Vector2(0.3809,0.172),Vector2(0.2808,0.1426),Vector2(0.2811,0.1055),Vector2(0.2801,0.1495),Vector2(0.4533,0.1669),Vector2(0.3644,0.1045),Vector2(0.3638,0.1477),Vector2(0.2798,0.0442),Vector2(0.2785,0.0523),Vector2(0.2806,0.06),Vector2(0.3638,0.0437),Vector2(0.3642,0.0581),Vector2(0.4855,0.066),Vector2(0.5541,0.0994),Vector2(0.4746,0.0876),Vector2(0.2798,0.0442),Vector2(0.2785,0.0523),Vector2(0.2806,0.06),Vector2(0.3642,0.0581),Vector2(0.3638,0.0437)]);
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
HAnimJoint121.Center := Vector3(0,38.639999,-1.034);
HAnimJoint121.SetUlimit([0,0,0]);
HAnimJoint121.SetLlimit([0,0,0]);
HAnimSegment122 := THAnimSegmentNode.Create;
HAnimSegment122.NameField := 'pelvis';
Transform123 := TTransformNode.Create;
Transform123.Translation := Vector3(0,38.639999,-1.034);
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
IndexedFaceSet128.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet128.CreaseAngle := 1.57;
IndexedFaceSet128.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate129 := TCoordinateNode.Create;
Coordinate129.SetPoint([Vector3(0,9.77,0.127),Vector3(0,9.113,-2.519),Vector3(-2.036,9.113,-2.165),Vector3(-3.526,9.113,-1.737),Vector3(-4.072,9.113,0.127),Vector3(-3.526,9.113,1.991),Vector3(-2.036,9.113,2.419),Vector3(0,9.113,2.773),Vector3(2.036,9.113,2.419),Vector3(3.526,9.113,1.991),Vector3(4.072,9.113,0.127),Vector3(3.526,9.113,-1.737),Vector3(2.036,9.113,-2.165),Vector3(0,7.318,-4.115),Vector3(-2.633,7.318,-3.546),Vector3(-4.561,7.318,-1.994),Vector3(-5.266,7.318,0.127),Vector3(-4.561,7.318,2.248),Vector3(-2.633,7.318,3.25),Vector3(0,7.318,3.819),Vector3(2.633,7.318,3.25),Vector3(4.561,7.318,2.248),Vector3(5.266,7.318,0.127),Vector3(4.561,7.318,-1.994),Vector3(2.633,7.318,-3.546),Vector3(0,4.867,-4.475),Vector3(-3.04,4.867,-3.819),Vector3(-5.266,4.867,-2.026),Vector3(-6.081,4.867,0.127),Vector3(-5.266,4.867,2.576),Vector3(-3.04,4.867,3.819),Vector3(0,4.867,4.475),Vector3(3.04,4.867,3.819),Vector3(5.266,4.867,2.576),Vector3(6.081,4.867,0.127),Vector3(5.266,4.867,-2.026),Vector3(3.04,4.867,-3.819),Vector3(0,2.416,-3.819),Vector3(-2.633,2.416,-3.25),Vector3(-4.561,2.416,-1.698),Vector3(-5.266,2.416,0.127),Vector3(-4.561,2.416,2.248),Vector3(-2.633,2.416,3.25),Vector3(0,2.416,3.819),Vector3(2.633,2.416,3.25),Vector3(4.561,2.416,2.248),Vector3(5.266,2.416,0.127),Vector3(4.561,2.416,-1.698),Vector3(2.633,2.416,-3.25),Vector3(0,0.6221,-2.026),Vector3(-1.52,0.6221,-1.698),Vector3(-2.633,0.6221,-1.097),Vector3(-3.04,0.6221,0.127),Vector3(-2.633,0.6221,1.351),Vector3(-1.52,0.6221,2.248),Vector3(0,0.6221,2.576),Vector3(1.52,0.6221,2.248),Vector3(2.633,0.6221,1.351),Vector3(3.04,0.6221,0.127),Vector3(2.633,0.6221,-1.097),Vector3(1.52,0.6221,-1.698),Vector3(0,-0.0347,0.127)]);
{ .SetCoord }
IndexedFaceSet128.Coord := Coordinate129;
TextureCoordinate130 := TTextureCoordinateNode.Create;
TextureCoordinate130.SetPoint([Vector2(0.7418,0.2139),Vector2(0.7309,0.2139),Vector2(0.7342,0.26),Vector2(0.7342,0.2938),Vector2(0.7342,0.3062),Vector2(0.7342,0.2938),Vector2(0.7342,0.26),Vector2(0.7309,0.2139),Vector2(0.7343,0.2601),Vector2(0.7343,0.2939),Vector2(0.7343,0.3063),Vector2(0.7343,0.2939),Vector2(0.7343,0.2601),Vector2(0.7157,0.2139),Vector2(0.7156,0.2735),Vector2(0.7156,0.3173),Vector2(0.7156,0.3333),Vector2(0.7156,0.3173),Vector2(0.7156,0.2735),Vector2(0.7157,0.2139),Vector2(0.7157,0.2736),Vector2(0.7157,0.3174),Vector2(0.7157,0.3334),Vector2(0.7157,0.3174),Vector2(0.7157,0.2736),Vector2(0.7015,0.2147),Vector2(0.7014,0.2836),Vector2(0.7014,0.3341),Vector2(0.7014,0.3526),Vector2(0.7014,0.3341),Vector2(0.7014,0.2836),Vector2(0.7015,0.2147),Vector2(0.7015,0.2837),Vector2(0.7015,0.3342),Vector2(0.7015,0.3527),Vector2(0.7015,0.3342),Vector2(0.7015,0.2837),Vector2(0.6609,0.2147),Vector2(0.6608,0.2744),Vector2(0.6608,0.3181),Vector2(0.6608,0.3341),Vector2(0.6608,0.3181),Vector2(0.6608,0.2744),Vector2(0.6609,0.2147),Vector2(0.6609,0.2745),Vector2(0.6609,0.3182),Vector2(0.6609,0.3342),Vector2(0.6609,0.3182),Vector2(0.6609,0.2745),Vector2(0.6312,0.2147),Vector2(0.6311,0.2491),Vector2(0.6311,0.2744),Vector2(0.6311,0.2836),Vector2(0.6311,0.2744),Vector2(0.6311,0.2491),Vector2(0.6312,0.2147),Vector2(0.6312,0.2492),Vector2(0.6312,0.2745),Vector2(0.6312,0.2837),Vector2(0.6312,0.2745),Vector2(0.6312,0.2492),Vector2(0.6204,0.2147)]);
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
HAnimJoint131.Center := Vector3(7.699,59.419998,-1.567);
HAnimJoint131.SetUlimit([0,0,0]);
HAnimJoint131.SetLlimit([0,0,0]);
HAnimSegment132 := THAnimSegmentNode.Create;
HAnimSegment132.NameField := 'l_upperarm';
Transform133 := TTransformNode.Create;
Transform133.Translation := Vector3(7.699,59.419998,-1.567);
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
IndexedFaceSet138.SetCoordIndex([0,1,2,-1,3,4,5,-1,2,1,6,-1,6,7,2,-1,7,6,8,-1,8,9,7,-1,9,8,5,-1,5,4,9,-1,0,11,10,-1,10,1,0,-1,5,13,12,-1,12,3,5,-1,6,1,10,-1,10,14,6,-1,6,14,15,-1,15,8,6,-1,8,15,13,-1,13,5,8,-1,12,17,16,-1,16,11,12,-1,10,11,16,-1,16,18,10,-1,13,19,17,-1,17,12,13,-1,10,18,20,-1,20,14,10,-1,15,14,20,-1,20,21,15,-1,13,15,21,-1,21,19,13,-1,17,23,22,-1,22,16,17,-1,18,16,22,-1,22,24,18,-1,19,25,23,-1,23,17,19,-1,18,24,26,-1,26,20,18,-1,21,20,26,-1,26,27,21,-1,19,21,27,-1,27,25,19,-1,23,29,28,-1,28,22,23,-1,22,28,30,-1,30,24,22,-1,25,31,29,-1,29,23,25,-1,24,30,32,-1,32,26,24,-1,26,32,33,-1,33,27,26,-1,27,33,31,-1,31,25,27,-1,29,35,34,-1,34,28,29,-1,28,34,36,-1,36,30,28,-1,31,37,35,-1,35,29,31,-1,30,36,38,-1,38,32,30,-1,32,38,39,-1,39,33,32,-1,33,39,37,-1,37,31,33,-1,0,2,40,-1,40,41,0,-1,4,3,42,-1,42,43,4,-1,2,7,44,-1,44,40,2,-1,7,9,45,-1,45,44,7,-1,9,4,43,-1,43,45,9,-1,3,12,46,-1,46,42,3,-1,12,11,47,-1,47,46,12,-1,41,40,48,-1,43,42,48,-1,40,44,48,-1,44,45,48,-1,45,43,48,-1,42,46,48,-1,46,47,48,-1,34,35,49,-1,36,34,49,-1,35,37,49,-1,38,36,49,-1,39,38,49,-1,37,39,49,-1]);
IndexedFaceSet138.CreaseAngle := 1.57;
IndexedFaceSet138.SetTexCoordIndex([0,1,2,-1,3,4,5,-1,2,1,6,-1,6,7,2,-1,7,6,8,-1,8,9,7,-1,9,8,5,-1,5,4,9,-1,0,11,10,-1,10,1,0,-1,5,13,12,-1,12,3,5,-1,6,1,10,-1,10,14,6,-1,6,14,15,-1,15,8,6,-1,8,15,13,-1,13,5,8,-1,50,51,16,-1,16,11,50,-1,10,11,16,-1,16,18,10,-1,13,19,17,-1,17,12,13,-1,10,18,20,-1,20,14,10,-1,15,14,20,-1,20,21,15,-1,13,15,21,-1,21,19,13,-1,52,53,22,-1,22,16,52,-1,18,16,22,-1,22,24,18,-1,19,25,23,-1,23,17,19,-1,18,24,26,-1,26,20,18,-1,21,20,26,-1,26,27,21,-1,19,21,27,-1,27,25,19,-1,54,55,28,-1,28,22,54,-1,22,28,30,-1,30,24,22,-1,25,31,29,-1,29,23,25,-1,24,30,32,-1,32,26,24,-1,26,32,33,-1,33,27,26,-1,27,33,31,-1,31,25,27,-1,56,57,34,-1,34,28,56,-1,28,34,36,-1,36,30,28,-1,31,37,35,-1,35,29,31,-1,30,36,38,-1,38,32,30,-1,32,38,39,-1,39,33,32,-1,33,39,37,-1,37,31,33,-1,0,2,40,-1,40,41,0,-1,4,3,42,-1,42,43,4,-1,2,7,44,-1,44,40,2,-1,7,9,45,-1,45,69,7,-1,9,4,43,-1,43,45,9,-1,3,12,46,-1,46,42,3,-1,59,11,47,-1,47,58,59,-1,41,40,48,-1,60,61,48,-1,40,44,48,-1,44,62,48,-1,63,64,48,-1,65,66,48,-1,67,47,48,-1,34,68,49,-1,36,34,49,-1,35,37,49,-1,38,36,49,-1,39,38,49,-1,37,39,49,-1]);
Coordinate139 := TCoordinateNode.Create;
Coordinate139.SetPoint([Vector3(-1.805,-1.524,1.771),Vector3(0.0584,-1.838,2.197),Vector3(-0.3087,-0.8066,2.836),Vector3(-1.788,-1.533,-1.801),Vector3(-0.3087,-0.8066,-2.836),Vector3(0.0584,-1.838,-2.819),Vector3(2.954,-0.699,1.997),Vector3(2.155,1.069,1.997),Vector3(2.953,-0.699,-1.703),Vector3(2.11,1.038,-1.703),Vector3(0.4985,-2.844,2.197),Vector3(-1.762,-2.191,0.9288),Vector3(-1.762,-2.191,-0.8936),Vector3(0.4985,-2.844,-2.659),Vector3(3.097,-2.644,1.051),Vector3(3.097,-2.644,-0.8368),Vector3(-1.384,-5.116,0.973),Vector3(-1.384,-5.116,-0.9359),Vector3(0.5185,-5.524,1.801),Vector3(0.5185,-5.524,-2.058),Vector3(2.604,-5.03,0.9889),Vector3(2.604,-5.03,-0.7969),Vector3(-1.181,-8.251,0.8308),Vector3(-1.181,-8.251,-0.9379),Vector3(0.4076,-9.293,1.225),Vector3(0.4076,-9.293,-1.965),Vector3(2.159,-8.822,0.2392),Vector3(2.159,-8.822,-0.9061),Vector3(-1.254,-9.178,0.3009),Vector3(-1.254,-9.178,-1.07),Vector3(0.3261,-10.22,1.219),Vector3(0.3253,-10.22,-2.074),Vector3(2.012,-9.757,0.2392),Vector3(2.012,-9.757,-0.9059),Vector3(-1.568,-10.77,0.2995),Vector3(-1.568,-10.77,-1.067),Vector3(0.1923,-11.8,1.212),Vector3(0.1925,-11.8,-1.826),Vector3(1.877,-11.33,0.2366),Vector3(1.877,-11.33,-0.9017),Vector3(-0.743,-0.1609,2.331),Vector3(-1.942,-0.7259,1.447),Vector3(-1.928,-0.7331,-1.522),Vector3(-0.743,-0.1609,-2.382),Vector3(0.9954,2.188,1.635),Vector3(0.958,2.162,-1.44),Vector3(-1.686,-1.124,-0.768),Vector3(-1.686,-1.124,0.7466),Vector3(-1.597,0.8227,0.0058),Vector3(0.1065,-12.53,-0.3412)]);
{ .SetCoord }
IndexedFaceSet138.Coord := Coordinate139;
TextureCoordinate140 := TTextureCoordinateNode.Create;
TextureCoordinate140.SetPoint([Vector2(0.8175,0.3603),Vector2(0.8632,0.3546),Vector2(0.8605,0.3699),Vector2(0.9777,0.3334),Vector2(0.969,0.3634),Vector2(0.9603,0.3336),Vector2(0.8992,0.3596),Vector2(0.8908,0.3854),Vector2(0.9343,0.3596),Vector2(0.9435,0.3848),Vector2(0.8525,0.3149),Vector2(0.8059,0.3198),Vector2(0.9839,0.323),Vector2(0.9553,0.3189),Vector2(0.9082,0.3292),Vector2(0.9254,0.3292),Vector2(0.8055,0.2725),Vector2(0.9792,0.2777),Vector2(0.8587,0.2725),Vector2(0.9499,0.2765),Vector2(0.9085,0.29),Vector2(0.9252,0.29),Vector2(0.8162,0.2273),Vector2(0.9712,0.2286),Vector2(0.8696,0.2158),Vector2(0.944,0.2164),Vector2(0.9155,0.2287),Vector2(0.9256,0.2287),Vector2(0.8189,0.2013),Vector2(0.9684,0.2137),Vector2(0.8705,0.2008),Vector2(0.9438,0.2015),Vector2(0.9155,0.2135),Vector2(0.9255,0.2135),Vector2(0.8216,0.181),Vector2(0.969,0.1876),Vector2(0.872,0.1755),Vector2(0.9412,0.1762),Vector2(0.9157,0.1882),Vector2(0.9252,0.1882),Vector2(0.8292,0.3842),Vector2(0.8182,0.3733),Vector2(0.9806,0.3457),Vector2(0.9745,0.3724),Vector2(0.838,0.4052),Vector2(0.9619,0.3995),Vector2(0.9854,0.3401),Vector2(0.8086,0.3454),Vector2(0.8127,0.3778),Vector2(0.9241,0.1643),Vector2(0.7988,0.3204),Vector2(0.7988,0.2717),Vector2(0.7988,0.2717),Vector2(0.8096,0.2286),Vector2(0.8096,0.2286),Vector2(0.8053,0.2016),Vector2(0.8053,0.2016),Vector2(0.8125,0.1748),Vector2(0.8055,0.3493),Vector2(0.7988,0.3204),Vector2(0.8071,0.3803),Vector2(0.8007,0.3548),Vector2(0.8121,0.3995),Vector2(0.8121,0.3995),Vector2(0.8071,0.3803),Vector2(0.8007,0.3548),Vector2(0.8055,0.3493),Vector2(0.8055,0.3493),Vector2(0.8125,0.1748),Vector2(0.9181,0.4)]);
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
HAnimJoint141.Center := Vector3(8.026,48.450001,-1.959);
HAnimJoint141.SetUlimit([0,0,0]);
HAnimJoint141.SetLlimit([0,0,0]);
HAnimSegment142 := THAnimSegmentNode.Create;
HAnimSegment142.NameField := 'l_forearm';
Transform143 := TTransformNode.Create;
Transform143.Translation := Vector3(8.026,48.450001,-1.959);
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
IndexedFaceSet148.SetCoordIndex([0,3,1,-1,1,2,0,-1,2,1,4,-1,4,5,2,-1,6,7,3,-1,3,0,6,-1,5,4,8,-1,8,9,5,-1,9,8,10,-1,10,11,9,-1,11,10,7,-1,7,6,11,-1,3,13,12,-1,12,1,3,-1,4,1,12,-1,12,14,4,-1,13,3,7,-1,7,15,13,-1,4,14,16,-1,16,8,4,-1,8,16,17,-1,17,10,8,-1,7,10,17,-1,17,15,7,-1,13,19,18,-1,18,12,13,-1,12,18,20,-1,20,14,12,-1,13,15,21,-1,21,19,13,-1,16,14,20,-1,20,22,16,-1,16,22,23,-1,23,17,16,-1,17,23,21,-1,21,15,17,-1,24,25,19,-1,19,21,24,-1,26,20,18,-1,18,27,26,-1,25,27,18,-1,18,19,25,-1,24,21,23,-1,23,28,24,-1,28,23,22,-1,22,29,28,-1,26,29,22,-1,22,20,26,-1,0,2,30,-1,30,31,0,-1,2,5,32,-1,32,30,2,-1,6,0,31,-1,31,33,6,-1,5,9,34,-1,34,32,5,-1,9,11,35,-1,35,34,9,-1,11,6,33,-1,33,35,11,-1,31,30,36,-1,30,32,36,-1,33,31,36,-1,32,34,36,-1,34,35,36,-1,35,33,36,-1,25,24,37,-1,26,27,37,-1,27,25,37,-1,24,28,37,-1,28,29,37,-1,29,26,37,-1]);
IndexedFaceSet148.CreaseAngle := 1.57;
IndexedFaceSet148.SetTexCoordIndex([0,3,1,-1,1,2,0,-1,2,1,4,-1,4,5,2,-1,6,7,3,-1,3,0,6,-1,5,4,8,-1,8,9,5,-1,38,39,10,-1,10,11,38,-1,11,10,7,-1,7,6,11,-1,3,13,12,-1,12,1,3,-1,4,1,12,-1,12,14,4,-1,13,3,7,-1,7,15,13,-1,4,14,16,-1,16,8,4,-1,40,41,17,-1,17,10,40,-1,7,10,17,-1,17,15,7,-1,13,19,18,-1,18,12,13,-1,12,18,20,-1,20,14,12,-1,13,15,21,-1,21,19,13,-1,16,14,20,-1,20,22,16,-1,42,43,23,-1,23,17,42,-1,17,23,21,-1,21,15,17,-1,24,25,19,-1,19,21,24,-1,26,20,18,-1,18,27,26,-1,25,27,18,-1,18,19,25,-1,24,21,23,-1,23,28,24,-1,28,23,44,-1,44,45,28,-1,26,29,22,-1,22,20,26,-1,0,2,30,-1,30,31,0,-1,2,5,32,-1,32,30,2,-1,6,0,31,-1,31,33,6,-1,5,9,34,-1,34,32,5,-1,47,11,35,-1,35,46,47,-1,11,6,33,-1,33,35,11,-1,31,30,48,-1,30,32,36,-1,33,31,49,-1,32,34,36,-1,50,35,51,-1,35,33,52,-1,25,24,37,-1,26,27,37,-1,27,25,37,-1,24,28,37,-1,28,53,37,-1,29,26,37,-1]);
Coordinate149 := TCoordinateNode.Create;
Coordinate149.SetPoint([Vector3(-1.607,-0.3011,-0.7068),Vector3(-1.816,-1.259,0.7158),Vector3(-1.607,-0.3011,0.7173),Vector3(-1.816,-1.259,-0.7039),Vector3(0.0748,-2.207,1.664),Vector3(0.0977,-1.281,1.671),Vector3(0.0968,-1.282,-1.749),Vector3(0.075,-2.207,-1.492),Vector3(1.791,-1.616,0.6505),Vector3(1.816,-0.6919,0.6532),Vector3(1.791,-1.616,-0.5319),Vector3(1.816,-0.6919,-0.5362),Vector3(-1.323,-4.528,1.438),Vector3(-1.323,-4.528,-0.6341),Vector3(0.0101,-4.917,1.749),Vector3(0.01,-4.917,-1.419),Vector3(1.599,-4.353,0.9644),Vector3(1.599,-4.353,-0.4902),Vector3(-1.275,-7.552,0.9117),Vector3(-1.275,-7.552,-0.5772),Vector3(0.0603,-7.691,1.6),Vector3(0.0602,-7.691,-1.319),Vector3(1.34,-7.172,0.8445),Vector3(1.34,-7.172,-0.3992),Vector3(0.0847,-10.99,-0.7836),Vector3(-0.679,-10.66,-0.3055),Vector3(0.092,-10.99,1.088),Vector3(-0.6772,-10.65,0.6521),Vector3(0.6479,-10.85,-0.4597),Vector3(0.652,-10.87,0.7241),Vector3(-0.8326,0.9823,0.4058),Vector3(-0.8326,0.9823,-0.3926),Vector3(0.1232,0.4326,0.9405),Vector3(0.1227,0.4326,-0.977),Vector3(1.087,0.7632,0.3698),Vector3(1.087,0.7632,-0.297),Vector3(0.1182,1.187,0.0082),Vector3(-0.0134,-11.39,0.1526)]);
{ .SetCoord }
IndexedFaceSet148.Coord := Coordinate149;
TextureCoordinate150 := TTextureCoordinateNode.Create;
TextureCoordinate150.SetPoint([Vector2(0.9014,0.1592),Vector2(0.9207,0.1477),Vector2(0.9221,0.1592),Vector2(0.9028,0.1477),Vector2(0.9498,0.1348),Vector2(0.951,0.146),Vector2(0.8725,0.146),Vector2(0.8736,0.1348),Vector2(0.9793,0.1407),Vector2(0.9796,0.1519),Vector2(0.8426,0.1407),Vector2(0.8423,0.1519),Vector2(0.9299,0.1077),Vector2(0.9022,0.1077),Vector2(0.9466,0.102),Vector2(0.8775,0.102),Vector2(0.9732,0.1077),Vector2(0.8437,0.1077),Vector2(0.9238,0.071),Vector2(0.9036,0.071),Vector2(0.9446,0.0684),Vector2(0.8798,0.0684),Vector2(0.9704,0.0737),Vector2(0.845,0.0737),Vector2(0.8879,0.0318),Vector2(0.9059,0.0364),Vector2(0.939,0.0318),Vector2(0.9232,0.0366),Vector2(0.8712,0.0331),Vector2(0.9514,0.0329),Vector2(0.9243,0.1741),Vector2(0.8994,0.1741),Vector2(0.9551,0.1668),Vector2(0.8685,0.1668),Vector2(0.9806,0.1701),Vector2(0.8414,0.1701),Vector2(0.9871,0.1759),Vector2(0.9173,0.0271),Vector2(0.8271,0.1519),Vector2(0.8268,0.1407),Vector2(0.8268,0.1407),Vector2(0.8207,0.1077),Vector2(0.8207,0.1077),Vector2(0.8264,0.0737),Vector2(0.8264,0.0737),Vector2(0.8397,0.0329),Vector2(0.8281,0.1701),Vector2(0.8271,0.1519),Vector2(0.8346,0.1759),Vector2(0.8346,0.1759),Vector2(0.8281,0.1701),Vector2(0.8346,0.1759),Vector2(0.8346,0.1759),Vector2(0.8397,0.0329)]);
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
HAnimJoint151.Center := Vector3(7.617,37.689999,-1.663);
HAnimJoint151.SetUlimit([0,0,0]);
HAnimJoint151.SetLlimit([0,0,0]);
HAnimSegment152 := THAnimSegmentNode.Create;
HAnimSegment152.NameField := 'l_carpal';
Transform153 := TTransformNode.Create;
Transform153.Translation := Vector3(7.617,37.689999,-1.663);
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
IndexedFaceSet158.SetCoordIndex([0,3,1,-1,1,2,0,-1,4,7,5,-1,5,6,4,-1,10,11,8,-1,8,9,10,-1,14,15,12,-1,12,13,14,-1,11,14,13,-1,13,8,11,-1,17,10,9,-1,9,16,17,-1,19,17,16,-1,16,18,19,-1,15,19,18,-1,18,12,15,-1,20,21,11,-1,11,10,20,-1,24,25,22,-1,22,23,24,-1,21,26,14,-1,14,11,21,-1,27,20,10,-1,10,17,27,-1,28,27,17,-1,17,19,28,-1,29,28,19,-1,19,15,29,-1,2,1,21,-1,21,20,2,-1,3,0,29,-1,29,26,3,-1,1,3,26,-1,26,21,1,-1,30,2,20,-1,20,27,30,-1,31,30,27,-1,27,28,31,-1,0,31,28,-1,28,29,0,-1,32,33,0,-1,0,2,32,-1,34,32,2,-1,2,30,34,-1,35,34,30,-1,30,31,35,-1,33,35,31,-1,31,0,33,-1,36,37,32,-1,32,34,36,-1,38,36,34,-1,34,35,38,-1,39,38,35,-1,35,33,39,-1,37,39,33,-1,33,32,37,-1,6,5,37,-1,37,36,6,-1,4,6,36,-1,36,38,4,-1,7,4,38,-1,38,39,7,-1,5,7,39,-1,39,37,5,-1,23,22,15,-1,15,14,23,-1,24,23,14,-1,14,26,24,-1,42,43,40,-1,40,41,42,-1,22,25,29,-1,29,15,22,-1,44,45,25,-1,25,24,44,-1,46,47,26,-1,26,29,46,-1,47,44,24,-1,24,26,47,-1,45,46,29,-1,29,25,45,-1,41,40,47,-1,47,46,41,-1,42,41,46,-1,46,45,42,-1,43,42,45,-1,45,44,43,-1,40,43,44,-1,44,47,40,-1,9,8,48,-1,13,12,48,-1,8,13,48,-1,16,9,48,-1,18,16,48,-1,12,18,48,-1]);
IndexedFaceSet158.CreaseAngle := 1.57;
IndexedFaceSet158.SetTexCoordIndex([47,50,48,-1,48,49,47,-1,8,11,9,-1,9,10,8,-1,53,54,51,-1,51,52,53,-1,57,58,55,-1,55,56,57,-1,54,57,56,-1,56,51,54,-1,14,15,12,-1,12,13,14,-1,17,14,13,-1,13,16,17,-1,19,17,16,-1,16,18,19,-1,59,60,54,-1,54,53,59,-1,63,64,61,-1,61,62,63,-1,60,65,57,-1,57,54,60,-1,20,21,15,-1,15,14,20,-1,22,20,14,-1,14,17,22,-1,23,22,17,-1,17,19,23,-1,49,48,60,-1,60,59,49,-1,50,47,66,-1,66,65,50,-1,48,50,65,-1,65,60,48,-1,24,25,21,-1,21,20,24,-1,26,24,20,-1,20,22,26,-1,27,26,22,-1,22,23,27,-1,67,68,47,-1,47,49,67,-1,28,29,25,-1,25,24,28,-1,30,28,24,-1,24,26,30,-1,31,30,26,-1,26,27,31,-1,32,33,29,-1,29,28,32,-1,34,32,28,-1,28,30,34,-1,35,34,30,-1,30,31,35,-1,69,70,68,-1,68,67,69,-1,10,9,33,-1,33,32,10,-1,8,10,32,-1,32,34,8,-1,11,8,34,-1,34,35,11,-1,71,72,70,-1,70,69,71,-1,62,61,58,-1,58,57,62,-1,63,62,57,-1,57,65,63,-1,38,39,36,-1,36,37,38,-1,40,41,23,-1,23,19,40,-1,73,74,64,-1,64,63,73,-1,43,44,42,-1,42,23,43,-1,75,73,63,-1,63,65,75,-1,45,43,23,-1,23,41,45,-1,37,36,44,-1,44,43,37,-1,38,37,43,-1,43,45,38,-1,76,77,74,-1,74,73,76,-1,78,76,73,-1,73,75,78,-1,1,0,5,-1,3,2,6,-1,0,4,7,-1,13,12,46,-1,16,13,46,-1,18,16,46,-1]);
Coordinate159 := TCoordinateNode.Create;
Coordinate159.SetPoint([Vector3(0.428,-4.043,1.035),Vector3(-0.062,-2.76,-0.7256),Vector3(0.4283,-4.043,-1.325),Vector3(-0.0621,-2.759,0.4786),Vector3(0.5207,-5.808,0.5759),Vector3(-0.0026,-5.67,-1.325),Vector3(0.5207,-5.808,-0.9061),Vector3(-0.0026,-5.67,1.035),Vector3(-0.311,0.5832,-0.6014),Vector3(0.4947,0.3747,-1.08),Vector3(0.3587,-0.8063,-1.077),Vector3(-0.3511,-0.5647,-0.6024),Vector3(0.502,0.3752,0.7923),Vector3(-0.3112,0.5961,0.3561),Vector3(-0.3512,-0.5647,0.3516),Vector3(0.5145,-0.7545,0.7924),Vector3(1.03,0.5998,-0.7556),Vector3(1.03,-0.5583,-0.7457),Vector3(1.037,0.5778,0.4281),Vector3(1.031,-0.5582,0.4287),Vector3(0.3854,-2.321,-1.587),Vector3(-0.3249,-2.079,-0.8558),Vector3(0.2488,-1.494,1.332),Vector3(-0.4651,-1.238,0.8921),Vector3(-0.7055,-1.95,1.153),Vector3(-0.2884,-2.29,1.587),Vector3(-0.324,-2.079,0.6132),Vector3(1.057,-2.073,-1.077),Vector3(1.049,-2.091,0.6923),Vector3(0.3858,-2.321,1.292),Vector3(0.9501,-4.181,-0.9063),Vector3(0.9499,-4.181,0.5762),Vector3(0.2552,-4.694,-1.325),Vector3(0.2552,-4.694,1.035),Vector3(0.7786,-4.832,-0.9061),Vector3(0.7786,-4.832,0.5759),Vector3(0.6497,-5.32,-0.9061),Vector3(0.1263,-5.182,-1.325),Vector3(0.6497,-5.32,0.5759),Vector3(0.1263,-5.182,1.035),Vector3(-0.6755,-3.115,0.6119),Vector3(-0.214,-3.44,1.081),Vector3(-0.6399,-3.326,1.586),Vector3(-1.057,-2.987,1.151),Vector3(-0.8814,-2.469,1.15),Vector3(-0.4641,-2.808,1.587),Vector3(-0.0383,-2.922,1.082),Vector3(-0.4998,-2.597,0.6126),Vector3(0.4437,0.8321,-0.1433)]);
{ .SetCoord }
IndexedFaceSet158.Coord := Coordinate159;
TextureCoordinate160 := TTextureCoordinateNode.Create;
TextureCoordinate160.SetPoint([Vector2(0.1427,0.2125),Vector2(0.1222,0.2114),Vector2(0.072,0.2114),Vector2(0.0487,0.2146),Vector2(0.1648,0.2146),Vector2(0.1427,0.2125),Vector2(0.072,0.2114),Vector2(0.1648,0.2146),Vector2(0.1856,0.1891),Vector2(0.2639,0.1883),Vector2(0.2484,0.188),Vector2(0.1701,0.1891),Vector2(0.2529,0.0205),Vector2(0.2367,0.0146),Vector2(0.2411,0.0322),Vector2(0.2577,0.0389),Vector2(0.1901,0.0132),Vector2(0.1856,0.0283),Vector2(0.1719,0.0186),Vector2(0.1675,0.0336),Vector2(0.2484,0.0869),Vector2(0.2649,0.0843),Vector2(0.1864,0.0924),Vector2(0.1708,0.0905),Vector2(0.2488,0.1471),Vector2(0.2643,0.1474),Vector2(0.186,0.1482),Vector2(0.1705,0.1482),Vector2(0.2484,0.1644),Vector2(0.2639,0.1647),Vector2(0.1856,0.1655),Vector2(0.1701,0.1655),Vector2(0.2484,0.1762),Vector2(0.2639,0.1765),Vector2(0.1856,0.1773),Vector2(0.1701,0.1773),Vector2(0.1633,0.1308),Vector2(0.1534,0.1396),Vector2(0.1426,0.1381),Vector2(0.1476,0.1297),Vector2(0.1475,0.0465),Vector2(0.1445,0.0998),Vector2(0.1671,0.1111),Vector2(0.1534,0.127),Vector2(0.1633,0.1182),Vector2(0.1426,0.1255),Vector2(0.2062,0.0097),Vector2(0.1009,0.1405),Vector2(0.0196,0.0979),Vector2(0.0057,0.141),Vector2(0.0959,0.0953),Vector2(0.0453,0.0029),Vector2(0.0235,0.0102),Vector2(0.0236,0.0455),Vector2(0.0452,0.0373),Vector2(0.1089,0.0102),Vector2(0.089,0.0039),Vector2(0.0888,0.0373),Vector2(0.1089,0.0441),Vector2(0.005,0.081),Vector2(0.0337,0.0828),Vector2(0.1222,0.069),Vector2(0.1135,0.0574),Vector2(0.1162,0.0936),Vector2(0.1239,0.0947),Vector2(0.102,0.0746),Vector2(0.1039,0.0949),Vector2(0.0057,0.1603),Vector2(0.1009,0.1598),Vector2(0.0057,0.1748),Vector2(0.1009,0.1743),Vector2(0.0057,0.1892),Vector2(0.1009,0.1888),Vector2(0.1179,0.119),Vector2(0.1252,0.1262),Vector2(0.1098,0.1164),Vector2(0.1179,0.1343),Vector2(0.1252,0.1415),Vector2(0.1098,0.1317)]);
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
HAnimJoint161.Center := Vector3(-7.699,59.419998,-1.567);
HAnimJoint161.SetUlimit([0,0,0]);
HAnimJoint161.SetLlimit([0,0,0]);
HAnimSegment162 := THAnimSegmentNode.Create;
HAnimSegment162.NameField := 'r_upperarm';
Transform163 := TTransformNode.Create;
Transform163.Translation := Vector3(-7.699,59.419998,-1.567);
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
IndexedFaceSet168.SetCoordIndex([0,2,1,-1,3,5,4,-1,2,7,6,-1,6,1,2,-1,7,9,8,-1,8,6,7,-1,9,4,5,-1,5,8,9,-1,0,1,10,-1,10,11,0,-1,5,3,12,-1,12,13,5,-1,6,14,10,-1,10,1,6,-1,6,8,15,-1,15,14,6,-1,8,5,13,-1,13,15,8,-1,12,11,16,-1,16,17,12,-1,10,18,16,-1,16,11,10,-1,13,12,17,-1,17,19,13,-1,10,14,20,-1,20,18,10,-1,15,21,20,-1,20,14,15,-1,13,19,21,-1,21,15,13,-1,17,16,22,-1,22,23,17,-1,18,24,22,-1,22,16,18,-1,19,17,23,-1,23,25,19,-1,18,20,26,-1,26,24,18,-1,21,27,26,-1,26,20,21,-1,19,25,27,-1,27,21,19,-1,23,22,28,-1,28,29,23,-1,22,24,30,-1,30,28,22,-1,25,23,29,-1,29,31,25,-1,24,26,32,-1,32,30,24,-1,26,27,33,-1,33,32,26,-1,27,25,31,-1,31,33,27,-1,29,28,34,-1,34,35,29,-1,28,30,36,-1,36,34,28,-1,31,29,35,-1,35,37,31,-1,30,32,38,-1,38,36,30,-1,32,33,39,-1,39,38,32,-1,33,31,37,-1,37,39,33,-1,0,41,40,-1,40,2,0,-1,4,43,42,-1,42,3,4,-1,2,40,44,-1,44,7,2,-1,7,44,45,-1,45,9,7,-1,9,45,43,-1,43,4,9,-1,3,42,46,-1,46,12,3,-1,12,46,47,-1,47,11,12,-1,41,48,40,-1,43,48,42,-1,40,48,44,-1,44,48,45,-1,45,48,43,-1,42,48,46,-1,46,48,47,-1,34,49,35,-1,36,49,34,-1,35,49,37,-1,38,49,36,-1,39,49,38,-1,37,49,39,-1]);
IndexedFaceSet168.CreaseAngle := 1.57;
IndexedFaceSet168.SetTexCoordIndex([0,2,1,-1,3,5,4,-1,2,7,6,-1,6,1,2,-1,7,9,8,-1,8,6,7,-1,9,4,5,-1,5,8,9,-1,0,1,10,-1,10,11,0,-1,5,3,12,-1,12,13,5,-1,6,14,10,-1,10,1,6,-1,6,8,15,-1,15,14,6,-1,8,5,13,-1,13,15,8,-1,50,11,16,-1,16,51,50,-1,10,18,16,-1,16,11,10,-1,13,12,17,-1,17,19,13,-1,10,14,20,-1,20,18,10,-1,15,21,20,-1,20,14,15,-1,13,19,21,-1,21,15,13,-1,52,16,22,-1,22,53,52,-1,18,24,22,-1,22,16,18,-1,19,17,23,-1,23,25,19,-1,18,20,26,-1,26,24,18,-1,21,27,26,-1,26,20,21,-1,19,25,27,-1,27,21,19,-1,54,22,28,-1,28,55,54,-1,22,24,30,-1,30,28,22,-1,25,23,29,-1,29,31,25,-1,24,26,32,-1,32,30,24,-1,26,27,33,-1,33,32,26,-1,27,25,31,-1,31,33,27,-1,56,28,34,-1,34,57,56,-1,28,30,36,-1,36,34,28,-1,31,29,35,-1,35,37,31,-1,30,32,38,-1,38,36,30,-1,32,33,39,-1,39,38,32,-1,33,31,37,-1,37,39,33,-1,0,41,40,-1,40,2,0,-1,4,43,42,-1,42,3,4,-1,2,40,44,-1,44,7,2,-1,7,69,45,-1,45,9,7,-1,9,45,43,-1,43,4,9,-1,3,42,46,-1,46,12,3,-1,59,58,47,-1,47,11,59,-1,41,48,40,-1,60,48,61,-1,40,48,44,-1,44,48,62,-1,63,48,64,-1,65,48,66,-1,67,48,47,-1,34,49,68,-1,36,49,34,-1,35,49,37,-1,38,49,36,-1,39,49,38,-1,37,49,39,-1]);
Coordinate169 := TCoordinateNode.Create;
Coordinate169.SetPoint([Vector3(1.805,-1.524,1.771),Vector3(-0.0582,-1.838,2.197),Vector3(0.3089,-0.8066,2.836),Vector3(1.788,-1.533,-1.801),Vector3(0.3089,-0.8066,-2.836),Vector3(-0.0582,-1.838,-2.819),Vector3(-2.953,-0.699,1.997),Vector3(-2.154,1.069,1.997),Vector3(-2.953,-0.699,-1.703),Vector3(-2.109,1.038,-1.703),Vector3(-0.4983,-2.844,2.197),Vector3(1.762,-2.191,0.9288),Vector3(1.762,-2.191,-0.8936),Vector3(-0.4983,-2.844,-2.659),Vector3(-3.097,-2.644,1.051),Vector3(-3.097,-2.644,-0.8368),Vector3(1.384,-5.116,0.973),Vector3(1.384,-5.116,-0.9359),Vector3(-0.5183,-5.524,1.801),Vector3(-0.5183,-5.524,-2.058),Vector3(-2.604,-5.03,0.9889),Vector3(-2.604,-5.03,-0.7969),Vector3(1.181,-8.251,0.8308),Vector3(1.181,-8.251,-0.9379),Vector3(-0.4074,-9.293,1.225),Vector3(-0.4074,-9.293,-1.965),Vector3(-2.158,-8.822,0.2392),Vector3(-2.158,-8.822,-0.9061),Vector3(1.254,-9.178,0.3009),Vector3(1.254,-9.178,-1.07),Vector3(-0.3259,-10.22,1.219),Vector3(-0.3251,-10.22,-2.074),Vector3(-2.012,-9.757,0.2392),Vector3(-2.012,-9.757,-0.9059),Vector3(1.568,-10.77,0.2995),Vector3(1.568,-10.77,-1.067),Vector3(-0.1921,-11.8,1.212),Vector3(-0.1923,-11.8,-1.826),Vector3(-1.877,-11.33,0.2366),Vector3(-1.876,-11.33,-0.9017),Vector3(0.7432,-0.1609,2.331),Vector3(1.942,-0.7259,1.447),Vector3(1.928,-0.7331,-1.522),Vector3(0.7432,-0.1609,-2.382),Vector3(-0.9952,2.188,1.635),Vector3(-0.9578,2.162,-1.44),Vector3(1.686,-1.124,-0.768),Vector3(1.686,-1.124,0.7466),Vector3(1.597,0.8227,0.0058),Vector3(-0.1063,-12.53,-0.3412)]);
{ .SetCoord }
IndexedFaceSet168.Coord := Coordinate169;
TextureCoordinate170 := TTextureCoordinateNode.Create;
TextureCoordinate170.SetPoint([Vector2(0.8175,0.3603),Vector2(0.8632,0.3546),Vector2(0.8605,0.3699),Vector2(0.9777,0.3334),Vector2(0.969,0.3634),Vector2(0.9603,0.3336),Vector2(0.8992,0.3596),Vector2(0.8908,0.3854),Vector2(0.9343,0.3596),Vector2(0.9435,0.3848),Vector2(0.8525,0.3149),Vector2(0.8059,0.3198),Vector2(0.9839,0.323),Vector2(0.9553,0.3189),Vector2(0.9082,0.3292),Vector2(0.9254,0.3292),Vector2(0.8055,0.2725),Vector2(0.9792,0.2777),Vector2(0.8587,0.2725),Vector2(0.9499,0.2765),Vector2(0.9085,0.29),Vector2(0.9252,0.29),Vector2(0.8162,0.2273),Vector2(0.9712,0.2286),Vector2(0.8696,0.2158),Vector2(0.944,0.2164),Vector2(0.9155,0.2287),Vector2(0.9256,0.2287),Vector2(0.8189,0.2013),Vector2(0.9684,0.2137),Vector2(0.8705,0.2008),Vector2(0.9438,0.2015),Vector2(0.9155,0.2135),Vector2(0.9255,0.2135),Vector2(0.8216,0.181),Vector2(0.969,0.1876),Vector2(0.872,0.1755),Vector2(0.9412,0.1762),Vector2(0.9157,0.1882),Vector2(0.9252,0.1882),Vector2(0.8292,0.3842),Vector2(0.8182,0.3733),Vector2(0.9806,0.3457),Vector2(0.9745,0.3724),Vector2(0.838,0.4052),Vector2(0.9619,0.3995),Vector2(0.9854,0.3401),Vector2(0.8086,0.3454),Vector2(0.8127,0.3778),Vector2(0.9241,0.1643),Vector2(0.7988,0.3204),Vector2(0.7988,0.2717),Vector2(0.7988,0.2717),Vector2(0.8096,0.2286),Vector2(0.8096,0.2286),Vector2(0.8053,0.2016),Vector2(0.8053,0.2016),Vector2(0.8125,0.1748),Vector2(0.8055,0.3493),Vector2(0.7988,0.3204),Vector2(0.8071,0.3803),Vector2(0.8007,0.3548),Vector2(0.8121,0.3995),Vector2(0.8121,0.3995),Vector2(0.8071,0.3803),Vector2(0.8007,0.3548),Vector2(0.8055,0.3493),Vector2(0.8055,0.3493),Vector2(0.8125,0.1748),Vector2(0.9181,0.4)]);
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
HAnimJoint171.Center := Vector3(-8.026,48.450001,-1.959);
HAnimJoint171.SetUlimit([0,0,0]);
HAnimJoint171.SetLlimit([0,0,0]);
HAnimSegment172 := THAnimSegmentNode.Create;
HAnimSegment172.NameField := 'r_forearm';
Transform173 := TTransformNode.Create;
Transform173.Translation := Vector3(-8.026,48.450001,-1.959);
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
IndexedFaceSet178.SetCoordIndex([0,2,1,-1,1,3,0,-1,2,5,4,-1,4,1,2,-1,6,0,3,-1,3,7,6,-1,5,9,8,-1,8,4,5,-1,9,11,10,-1,10,8,9,-1,11,6,7,-1,7,10,11,-1,3,1,12,-1,12,13,3,-1,4,14,12,-1,12,1,4,-1,13,15,7,-1,7,3,13,-1,4,8,16,-1,16,14,4,-1,8,10,17,-1,17,16,8,-1,7,15,17,-1,17,10,7,-1,13,12,18,-1,18,19,13,-1,12,14,20,-1,20,18,12,-1,13,19,21,-1,21,15,13,-1,16,22,20,-1,20,14,16,-1,16,17,23,-1,23,22,16,-1,17,15,21,-1,21,23,17,-1,24,21,19,-1,19,25,24,-1,26,27,18,-1,18,20,26,-1,25,19,18,-1,18,27,25,-1,24,28,23,-1,23,21,24,-1,28,29,22,-1,22,23,28,-1,26,20,22,-1,22,29,26,-1,0,31,30,-1,30,2,0,-1,2,30,32,-1,32,5,2,-1,6,33,31,-1,31,0,6,-1,5,32,34,-1,34,9,5,-1,9,34,35,-1,35,11,9,-1,11,35,33,-1,33,6,11,-1,31,36,30,-1,30,36,32,-1,33,36,31,-1,32,36,34,-1,34,36,35,-1,35,36,33,-1,25,37,24,-1,26,37,27,-1,27,37,25,-1,24,37,28,-1,28,37,29,-1,29,37,26,-1]);
IndexedFaceSet178.CreaseAngle := 1.57;
IndexedFaceSet178.SetTexCoordIndex([0,2,1,-1,1,3,0,-1,2,5,4,-1,4,1,2,-1,6,0,3,-1,3,7,6,-1,5,9,8,-1,8,4,5,-1,38,11,10,-1,10,39,38,-1,11,6,7,-1,7,10,11,-1,3,1,12,-1,12,13,3,-1,4,14,12,-1,12,1,4,-1,13,15,7,-1,7,3,13,-1,4,8,16,-1,16,14,4,-1,40,10,17,-1,17,41,40,-1,7,15,17,-1,17,10,7,-1,13,12,18,-1,18,19,13,-1,12,14,20,-1,20,18,12,-1,13,19,21,-1,21,15,13,-1,16,22,20,-1,20,14,16,-1,42,17,23,-1,23,43,42,-1,17,15,21,-1,21,23,17,-1,24,21,19,-1,19,25,24,-1,26,27,18,-1,18,20,26,-1,25,19,18,-1,18,27,25,-1,24,28,23,-1,23,21,24,-1,28,45,44,-1,44,23,28,-1,26,20,22,-1,22,29,26,-1,0,31,30,-1,30,2,0,-1,2,30,32,-1,32,5,2,-1,6,33,31,-1,31,0,6,-1,5,32,34,-1,34,9,5,-1,47,46,35,-1,35,11,47,-1,11,35,33,-1,33,6,11,-1,31,48,30,-1,30,36,32,-1,33,49,31,-1,32,36,34,-1,50,51,35,-1,35,52,33,-1,25,37,24,-1,26,37,27,-1,27,37,25,-1,24,37,28,-1,28,37,53,-1,29,37,26,-1]);
Coordinate179 := TCoordinateNode.Create;
Coordinate179.SetPoint([Vector3(1.607,-0.3011,-0.7068),Vector3(1.816,-1.259,0.7158),Vector3(1.607,-0.3011,0.7173),Vector3(1.816,-1.259,-0.7039),Vector3(-0.0748,-2.207,1.664),Vector3(-0.0977,-1.281,1.671),Vector3(-0.0968,-1.282,-1.749),Vector3(-0.075,-2.207,-1.492),Vector3(-1.791,-1.616,0.6505),Vector3(-1.816,-0.6919,0.6532),Vector3(-1.791,-1.616,-0.5319),Vector3(-1.816,-0.6919,-0.5362),Vector3(1.323,-4.528,1.438),Vector3(1.323,-4.528,-0.6341),Vector3(-0.0101,-4.917,1.749),Vector3(-0.01,-4.917,-1.419),Vector3(-1.599,-4.353,0.9644),Vector3(-1.599,-4.353,-0.4902),Vector3(1.275,-7.552,0.9117),Vector3(1.275,-7.552,-0.5772),Vector3(-0.0603,-7.691,1.6),Vector3(-0.0602,-7.691,-1.319),Vector3(-1.34,-7.172,0.8445),Vector3(-1.34,-7.172,-0.3992),Vector3(-0.0847,-10.99,-0.7836),Vector3(0.679,-10.66,-0.3055),Vector3(-0.092,-10.99,1.088),Vector3(0.6772,-10.65,0.6521),Vector3(-0.6479,-10.85,-0.4597),Vector3(-0.652,-10.87,0.7241),Vector3(0.8326,0.9823,0.4058),Vector3(0.8326,0.9823,-0.3926),Vector3(-0.1232,0.4326,0.9405),Vector3(-0.1227,0.4326,-0.977),Vector3(-1.087,0.7632,0.3698),Vector3(-1.087,0.7632,-0.297),Vector3(-0.1182,1.187,0.0082),Vector3(0.0134,-11.39,0.1526)]);
{ .SetCoord }
IndexedFaceSet178.Coord := Coordinate179;
TextureCoordinate180 := TTextureCoordinateNode.Create;
TextureCoordinate180.SetPoint([Vector2(0.9014,0.1592),Vector2(0.9207,0.1477),Vector2(0.9221,0.1592),Vector2(0.9028,0.1477),Vector2(0.9498,0.1348),Vector2(0.951,0.146),Vector2(0.8725,0.146),Vector2(0.8736,0.1348),Vector2(0.9793,0.1407),Vector2(0.9796,0.1519),Vector2(0.8426,0.1407),Vector2(0.8423,0.1519),Vector2(0.9299,0.1077),Vector2(0.9022,0.1077),Vector2(0.9466,0.102),Vector2(0.8775,0.102),Vector2(0.9732,0.1077),Vector2(0.8437,0.1077),Vector2(0.9238,0.071),Vector2(0.9036,0.071),Vector2(0.9446,0.0684),Vector2(0.8798,0.0684),Vector2(0.9704,0.0737),Vector2(0.845,0.0737),Vector2(0.8879,0.0318),Vector2(0.9059,0.0364),Vector2(0.939,0.0318),Vector2(0.9232,0.0366),Vector2(0.8712,0.0331),Vector2(0.9514,0.0329),Vector2(0.9243,0.1741),Vector2(0.8994,0.1741),Vector2(0.9551,0.1668),Vector2(0.8685,0.1668),Vector2(0.9806,0.1701),Vector2(0.8414,0.1701),Vector2(0.9871,0.1759),Vector2(0.9173,0.0271),Vector2(0.8271,0.1519),Vector2(0.8268,0.1407),Vector2(0.8268,0.1407),Vector2(0.8207,0.1077),Vector2(0.8207,0.1077),Vector2(0.8264,0.0737),Vector2(0.8264,0.0737),Vector2(0.8397,0.0329),Vector2(0.8281,0.1701),Vector2(0.8271,0.1519),Vector2(0.8346,0.1759),Vector2(0.8346,0.1759),Vector2(0.8281,0.1701),Vector2(0.8346,0.1759),Vector2(0.8346,0.1759),Vector2(0.8397,0.0329)]);
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
HAnimJoint181.Center := Vector3(-7.617,37.689999,-1.663);
HAnimJoint181.SetUlimit([0,0,0]);
HAnimJoint181.SetLlimit([0,0,0]);
HAnimSegment182 := THAnimSegmentNode.Create;
HAnimSegment182.NameField := 'r_carpal';
Transform183 := TTransformNode.Create;
Transform183.Translation := Vector3(-7.617,37.689999,-1.663);
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
IndexedFaceSet188.SetCoordIndex([0,2,1,-1,1,3,0,-1,4,6,5,-1,5,7,4,-1,10,9,8,-1,8,11,10,-1,14,13,12,-1,12,15,14,-1,11,8,13,-1,13,14,11,-1,17,16,9,-1,9,10,17,-1,19,18,16,-1,16,17,19,-1,15,12,18,-1,18,19,15,-1,20,10,11,-1,11,21,20,-1,24,23,22,-1,22,25,24,-1,21,11,14,-1,14,26,21,-1,27,17,10,-1,10,20,27,-1,28,19,17,-1,17,27,28,-1,29,15,19,-1,19,28,29,-1,2,20,21,-1,21,1,2,-1,3,26,29,-1,29,0,3,-1,1,21,26,-1,26,3,1,-1,30,27,20,-1,20,2,30,-1,31,28,27,-1,27,30,31,-1,0,29,28,-1,28,31,0,-1,32,2,0,-1,0,33,32,-1,34,30,2,-1,2,32,34,-1,35,31,30,-1,30,34,35,-1,33,0,31,-1,31,35,33,-1,36,34,32,-1,32,37,36,-1,38,35,34,-1,34,36,38,-1,39,33,35,-1,35,38,39,-1,37,32,33,-1,33,39,37,-1,6,36,37,-1,37,5,6,-1,4,38,36,-1,36,6,4,-1,7,39,38,-1,38,4,7,-1,5,37,39,-1,39,7,5,-1,23,14,15,-1,15,22,23,-1,24,26,14,-1,14,23,24,-1,42,41,40,-1,40,43,42,-1,22,15,29,-1,29,25,22,-1,44,24,25,-1,25,45,44,-1,46,29,26,-1,26,47,46,-1,47,26,24,-1,24,44,47,-1,45,25,29,-1,29,46,45,-1,41,46,47,-1,47,40,41,-1,42,45,46,-1,46,41,42,-1,43,44,45,-1,45,42,43,-1,40,47,44,-1,44,43,40,-1,9,48,8,-1,13,48,12,-1,8,48,13,-1,16,48,9,-1,18,48,16,-1,12,48,18,-1]);
IndexedFaceSet188.CreaseAngle := 1.57;
IndexedFaceSet188.SetTexCoordIndex([47,49,48,-1,48,50,47,-1,8,10,9,-1,9,11,8,-1,53,52,51,-1,51,54,53,-1,57,56,55,-1,55,58,57,-1,54,51,56,-1,56,57,54,-1,14,13,12,-1,12,15,14,-1,17,16,13,-1,13,14,17,-1,19,18,16,-1,16,17,19,-1,59,53,54,-1,54,60,59,-1,63,62,61,-1,61,64,63,-1,60,54,57,-1,57,65,60,-1,20,14,15,-1,15,21,20,-1,22,17,14,-1,14,20,22,-1,23,19,17,-1,17,22,23,-1,49,59,60,-1,60,48,49,-1,50,65,66,-1,66,47,50,-1,48,60,65,-1,65,50,48,-1,24,20,21,-1,21,25,24,-1,26,22,20,-1,20,24,26,-1,27,23,22,-1,22,26,27,-1,67,49,47,-1,47,68,67,-1,28,24,25,-1,25,29,28,-1,30,26,24,-1,24,28,30,-1,31,27,26,-1,26,30,31,-1,32,28,29,-1,29,33,32,-1,34,30,28,-1,28,32,34,-1,35,31,30,-1,30,34,35,-1,69,67,68,-1,68,70,69,-1,10,32,33,-1,33,9,10,-1,8,34,32,-1,32,10,8,-1,11,35,34,-1,34,8,11,-1,71,69,70,-1,70,72,71,-1,62,57,58,-1,58,61,62,-1,63,65,57,-1,57,62,63,-1,38,37,36,-1,36,39,38,-1,40,19,23,-1,23,41,40,-1,73,63,64,-1,64,74,73,-1,43,23,42,-1,42,44,43,-1,75,65,63,-1,63,73,75,-1,45,41,23,-1,23,43,45,-1,37,43,44,-1,44,36,37,-1,38,45,43,-1,43,37,38,-1,76,73,74,-1,74,77,76,-1,78,75,73,-1,73,76,78,-1,1,5,0,-1,3,6,2,-1,0,7,4,-1,13,46,12,-1,16,46,13,-1,18,46,16,-1]);
Coordinate189 := TCoordinateNode.Create;
Coordinate189.SetPoint([Vector3(-0.428,-4.043,1.035),Vector3(0.062,-2.76,-0.7256),Vector3(-0.4283,-4.043,-1.325),Vector3(0.0621,-2.759,0.4786),Vector3(-0.5207,-5.808,0.5759),Vector3(0.0026,-5.67,-1.325),Vector3(-0.5208,-5.808,-0.9061),Vector3(0.0026,-5.67,1.035),Vector3(0.311,0.5832,-0.6014),Vector3(-0.4947,0.3747,-1.08),Vector3(-0.3587,-0.8063,-1.077),Vector3(0.3511,-0.5647,-0.6024),Vector3(-0.502,0.3752,0.7923),Vector3(0.3112,0.5961,0.3561),Vector3(0.3512,-0.5647,0.3515),Vector3(-0.5145,-0.7545,0.7924),Vector3(-1.03,0.5998,-0.7556),Vector3(-1.03,-0.5583,-0.7457),Vector3(-1.037,0.5778,0.4281),Vector3(-1.031,-0.5582,0.4287),Vector3(-0.3854,-2.321,-1.587),Vector3(0.3249,-2.079,-0.8558),Vector3(-0.2488,-1.494,1.332),Vector3(0.4651,-1.238,0.8921),Vector3(0.7055,-1.95,1.153),Vector3(0.2884,-2.29,1.587),Vector3(0.324,-2.079,0.6132),Vector3(-1.057,-2.073,-1.077),Vector3(-1.049,-2.091,0.6923),Vector3(-0.3858,-2.321,1.292),Vector3(-0.9501,-4.181,-0.9063),Vector3(-0.9499,-4.181,0.5762),Vector3(-0.2552,-4.694,-1.325),Vector3(-0.2552,-4.694,1.035),Vector3(-0.7786,-4.832,-0.9061),Vector3(-0.7786,-4.832,0.5759),Vector3(-0.6497,-5.32,-0.9061),Vector3(-0.1263,-5.182,-1.325),Vector3(-0.6497,-5.32,0.5759),Vector3(-0.1263,-5.182,1.035),Vector3(0.6755,-3.115,0.6119),Vector3(0.214,-3.44,1.081),Vector3(0.6399,-3.326,1.586),Vector3(1.057,-2.987,1.151),Vector3(0.8814,-2.469,1.15),Vector3(0.4641,-2.808,1.587),Vector3(0.0383,-2.922,1.082),Vector3(0.4998,-2.597,0.6126),Vector3(-0.4437,0.8321,-0.1433)]);
{ .SetCoord }
IndexedFaceSet188.Coord := Coordinate189;
TextureCoordinate190 := TTextureCoordinateNode.Create;
TextureCoordinate190.SetPoint([Vector2(0.1427,0.2125),Vector2(0.1222,0.2114),Vector2(0.072,0.2114),Vector2(0.0487,0.2146),Vector2(0.1648,0.2146),Vector2(0.1427,0.2125),Vector2(0.072,0.2114),Vector2(0.1648,0.2146),Vector2(0.1856,0.1891),Vector2(0.2639,0.1883),Vector2(0.2484,0.188),Vector2(0.1701,0.1891),Vector2(0.2529,0.0205),Vector2(0.2367,0.0146),Vector2(0.2411,0.0322),Vector2(0.2577,0.0389),Vector2(0.1901,0.0132),Vector2(0.1856,0.0283),Vector2(0.1719,0.0186),Vector2(0.1675,0.0336),Vector2(0.2484,0.0869),Vector2(0.2649,0.0843),Vector2(0.1864,0.0924),Vector2(0.1708,0.0905),Vector2(0.2488,0.1471),Vector2(0.2643,0.1474),Vector2(0.186,0.1482),Vector2(0.1705,0.1482),Vector2(0.2484,0.1644),Vector2(0.2639,0.1647),Vector2(0.1856,0.1655),Vector2(0.1701,0.1655),Vector2(0.2484,0.1762),Vector2(0.2639,0.1765),Vector2(0.1856,0.1773),Vector2(0.1701,0.1773),Vector2(0.1633,0.1308),Vector2(0.1534,0.1396),Vector2(0.1426,0.1381),Vector2(0.1476,0.1297),Vector2(0.1475,0.0465),Vector2(0.1445,0.0998),Vector2(0.1671,0.1111),Vector2(0.1534,0.127),Vector2(0.1633,0.1182),Vector2(0.1426,0.1255),Vector2(0.2062,0.0097),Vector2(0.1009,0.1405),Vector2(0.0196,0.0979),Vector2(0.0057,0.141),Vector2(0.0959,0.0953),Vector2(0.0453,0.0029),Vector2(0.0235,0.0102),Vector2(0.0236,0.0455),Vector2(0.0452,0.0373),Vector2(0.1089,0.0102),Vector2(0.089,0.0039),Vector2(0.0888,0.0373),Vector2(0.1089,0.0441),Vector2(0.005,0.081),Vector2(0.0337,0.0828),Vector2(0.1222,0.069),Vector2(0.1135,0.0574),Vector2(0.1162,0.0936),Vector2(0.1239,0.0947),Vector2(0.102,0.0746),Vector2(0.1039,0.0949),Vector2(0.0057,0.1603),Vector2(0.1009,0.1598),Vector2(0.0057,0.1748),Vector2(0.1009,0.1743),Vector2(0.0057,0.1892),Vector2(0.1009,0.1888),Vector2(0.1179,0.119),Vector2(0.1252,0.1262),Vector2(0.1098,0.1164),Vector2(0.1179,0.1343),Vector2(0.1252,0.1415),Vector2(0.1098,0.1317)]);
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
HAnimJoint191.Center := Vector3(0,47.330002,-0.5744);
HAnimJoint191.SetUlimit([0,0,0]);
HAnimJoint191.SetLlimit([0,0,0]);
HAnimSegment192 := THAnimSegmentNode.Create;
HAnimSegment192.NameField := 'l5';
Transform193 := TTransformNode.Create;
Transform193.Translation := Vector3(0,47.330002,-0.5744);
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
IndexedFaceSet198.SetCoordIndex([17,152,154,-1,154,25,17,-1,17,25,8,-1,8,4,17,-1,25,154,20,-1,20,181,25,-1,6,8,25,-1,25,181,6,-1,19,5,9,-1,9,26,19,-1,18,19,26,-1,26,27,18,-1,9,7,23,-1,23,26,9,-1,26,23,22,-1,22,27,26,-1,150,6,181,-1,181,3,150,-1,151,2,23,-1,23,7,151,-1,152,28,30,-1,30,18,152,-1,18,30,31,-1,31,19,18,-1,152,17,29,-1,29,28,152,-1,19,31,11,-1,11,5,19,-1,4,10,29,-1,29,17,4,-1,28,155,34,-1,34,30,28,-1,30,34,35,-1,35,31,30,-1,28,29,33,-1,33,155,28,-1,31,35,13,-1,13,11,31,-1,10,12,33,-1,33,29,10,-1,155,36,38,-1,38,34,155,-1,35,34,38,-1,38,39,35,-1,33,37,36,-1,36,155,33,-1,35,39,15,-1,15,13,35,-1,33,12,14,-1,14,37,33,-1,20,42,43,-1,43,22,20,-1,152,40,44,-1,44,154,152,-1,154,44,42,-1,42,20,154,-1,27,45,41,-1,41,18,27,-1,22,43,45,-1,45,27,22,-1,18,41,40,-1,40,152,18,-1,50,47,16,-1,108,109,158,-1,21,174,24,-1,110,111,153,-1,46,48,32,-1,156,112,113,-1,32,48,49,-1,115,157,114,-1,2,3,181,-1,53,116,117,-1,161,2,51,-1,2,151,52,-1,52,51,2,-1,22,23,181,-1,181,20,22,-1,181,23,2,-1,16,47,173,-1,119,182,118,-1,2,150,3,-1,121,0,120,-1,43,42,54,-1,54,55,43,-1,44,54,42,-1,45,43,55,-1,45,55,54,-1,54,44,45,-1,41,45,44,-1,44,40,41,-1,38,36,56,-1,56,57,38,-1,39,38,57,-1,57,58,39,-1,36,37,59,-1,59,56,36,-1,15,39,58,-1,58,60,15,-1,37,14,61,-1,61,59,37,-1,57,56,62,-1,58,57,62,-1,56,59,62,-1,60,58,62,-1,59,61,62,-1,178,162,66,-1,66,74,178,-1,8,74,66,-1,66,4,8,-1,69,178,74,-1,74,177,69,-1,74,8,6,-1,6,177,74,-1,9,5,68,-1,68,75,9,-1,75,68,67,-1,67,76,75,-1,72,7,9,-1,9,75,72,-1,71,72,75,-1,75,76,71,-1,177,6,150,-1,150,64,177,-1,72,63,151,-1,151,7,72,-1,79,77,162,-1,162,67,79,-1,80,79,67,-1,67,68,80,-1,78,66,162,-1,162,77,78,-1,11,80,68,-1,68,5,11,-1,78,10,4,-1,4,66,78,-1,83,165,77,-1,77,79,83,-1,84,83,79,-1,79,80,84,-1,82,78,77,-1,77,165,82,-1,13,84,80,-1,80,11,13,-1,82,12,10,-1,10,78,82,-1,87,85,165,-1,165,83,87,-1,87,83,84,-1,84,88,87,-1,85,86,82,-1,82,165,85,-1,15,88,84,-1,84,13,15,-1,14,12,82,-1,82,86,14,-1,92,91,69,-1,69,71,92,-1,93,89,162,-1,162,178,93,-1,91,93,178,-1,178,69,91,-1,90,94,76,-1,76,67,90,-1,94,92,71,-1,71,76,94,-1,89,90,67,-1,67,162,89,-1,99,65,96,-1,123,168,122,-1,70,73,180,-1,164,124,125,-1,95,81,97,-1,166,126,127,-1,81,98,97,-1,128,129,167,-1,63,177,64,-1,101,130,131,-1,170,100,63,-1,52,151,63,-1,63,100,52,-1,177,72,71,-1,71,69,177,-1,177,63,72,-1,65,179,96,-1,132,133,183,-1,63,64,150,-1,134,135,171,-1,102,91,92,-1,92,103,102,-1,93,91,102,-1,94,103,92,-1,102,103,94,-1,94,93,102,-1,93,94,90,-1,90,89,93,-1,104,85,87,-1,87,105,104,-1,105,87,88,-1,88,106,105,-1,107,86,85,-1,85,104,107,-1,106,88,15,-1,15,60,106,-1,61,14,86,-1,86,107,61,-1,105,62,104,-1,106,62,105,-1,104,62,107,-1,60,62,106,-1,107,62,61,-1,100,170,163,-1,169,136,137,-1,176,138,139,-1,140,141,172,-1,159,142,143,-1,175,144,145,-1,160,146,147,-1,148,149,1,-1,185,184,189,-1,189,190,185,-1,184,186,191,-1,191,189,184,-1,186,187,192,-1,192,191,186,-1,187,188,193,-1,193,192,187,-1,194,195,196,-1,196,197,194,-1,188,194,197,-1,197,193,188,-1,202,198,185,-1,185,190,202,-1,203,199,198,-1,198,202,203,-1,204,200,199,-1,199,203,204,-1,205,201,200,-1,200,204,205,-1,196,195,206,-1,206,207,196,-1,207,206,201,-1,201,205,207,-1]);
IndexedFaceSet198.CreaseAngle := 1.57;
IndexedFaceSet198.SetTexCoordIndex([2,3,0,-1,0,1,2,-1,2,1,4,-1,4,5,2,-1,1,0,6,-1,6,7,1,-1,8,4,1,-1,1,7,8,-1,38,39,36,-1,36,37,38,-1,41,38,37,-1,37,40,41,-1,36,43,42,-1,42,37,36,-1,37,42,44,-1,44,40,37,-1,9,8,7,-1,7,10,9,-1,45,46,42,-1,42,43,45,-1,47,49,48,-1,48,41,47,-1,41,48,50,-1,50,38,41,-1,3,2,11,-1,11,12,3,-1,38,50,51,-1,51,39,38,-1,5,13,11,-1,11,2,5,-1,49,53,52,-1,52,48,49,-1,48,52,54,-1,54,50,48,-1,12,11,14,-1,14,15,12,-1,50,54,55,-1,55,51,50,-1,13,16,14,-1,14,11,13,-1,53,57,56,-1,56,52,53,-1,54,52,56,-1,56,58,54,-1,14,18,17,-1,17,15,14,-1,54,58,59,-1,59,55,54,-1,14,16,19,-1,19,18,14,-1,60,62,61,-1,61,44,60,-1,47,65,63,-1,63,64,47,-1,64,63,62,-1,62,60,64,-1,40,67,66,-1,66,41,40,-1,44,61,67,-1,67,40,44,-1,41,66,65,-1,65,47,41,-1,68,69,47,-1,47,64,68,-1,70,68,64,-1,64,60,70,-1,71,72,53,-1,71,53,49,-1,53,72,73,-1,53,73,57,-1,20,10,7,-1,74,70,46,-1,74,46,75,-1,46,45,76,-1,76,75,46,-1,44,42,70,-1,70,60,44,-1,70,42,46,-1,47,69,71,-1,47,71,49,-1,20,9,10,-1,21,9,20,-1,61,62,77,-1,77,78,61,-1,63,77,62,-1,67,61,78,-1,67,78,77,-1,77,63,67,-1,66,67,63,-1,63,65,66,-1,56,57,79,-1,79,80,56,-1,58,56,80,-1,80,81,58,-1,57,83,82,-1,82,79,57,-1,59,58,81,-1,81,84,59,-1,83,129,128,-1,128,82,83,-1,80,79,87,-1,81,80,87,-1,79,82,87,-1,84,81,87,-1,82,130,87,-1,22,25,23,-1,23,24,22,-1,4,24,23,-1,23,5,4,-1,26,22,24,-1,24,27,26,-1,24,4,8,-1,8,27,24,-1,36,39,88,-1,88,89,36,-1,89,88,90,-1,90,91,89,-1,92,43,36,-1,36,89,92,-1,93,92,89,-1,89,91,93,-1,27,8,9,-1,9,28,27,-1,92,94,45,-1,45,43,92,-1,96,97,95,-1,95,90,96,-1,98,96,90,-1,90,88,98,-1,29,23,25,-1,25,30,29,-1,51,98,88,-1,88,39,51,-1,29,13,5,-1,5,23,29,-1,99,100,97,-1,97,96,99,-1,101,99,96,-1,96,98,101,-1,31,29,30,-1,30,32,31,-1,55,101,98,-1,98,51,55,-1,31,16,13,-1,13,29,31,-1,102,103,100,-1,100,99,102,-1,102,99,101,-1,101,104,102,-1,33,34,31,-1,31,32,33,-1,59,104,101,-1,101,55,59,-1,19,16,31,-1,31,34,19,-1,106,107,105,-1,105,93,106,-1,109,110,95,-1,95,108,109,-1,107,109,108,-1,108,105,107,-1,111,112,91,-1,91,90,111,-1,112,106,93,-1,93,91,112,-1,110,111,90,-1,90,95,110,-1,113,95,114,-1,95,113,108,-1,115,108,113,-1,108,115,105,-1,116,100,117,-1,116,97,100,-1,100,118,117,-1,100,103,118,-1,35,27,28,-1,119,94,115,-1,119,120,94,-1,76,45,94,-1,94,120,76,-1,115,92,93,-1,93,105,115,-1,115,94,92,-1,95,116,114,-1,95,97,116,-1,35,28,9,-1,21,35,9,-1,121,107,106,-1,106,122,121,-1,109,107,121,-1,112,122,106,-1,121,122,112,-1,112,109,121,-1,109,112,111,-1,111,110,109,-1,123,103,102,-1,102,124,123,-1,124,102,104,-1,104,125,124,-1,126,127,103,-1,103,123,126,-1,125,104,59,-1,59,84,125,-1,85,86,127,-1,127,126,85,-1,124,87,123,-1,125,87,124,-1,123,87,126,-1,84,87,125,-1,126,87,85,-1,120,119,115,-1,120,115,94,-1,74,75,46,-1,74,46,70,-1,75,76,45,-1,75,45,46,-1,76,120,94,-1,76,94,45,-1,132,131,136,-1,136,137,132,-1,131,133,138,-1,138,136,131,-1,133,134,139,-1,139,138,133,-1,134,135,140,-1,140,139,134,-1,141,142,143,-1,143,144,141,-1,135,141,144,-1,144,140,135,-1,149,145,132,-1,132,137,149,-1,150,146,145,-1,145,149,150,-1,151,147,146,-1,146,150,151,-1,152,148,147,-1,147,151,152,-1,143,142,153,-1,153,154,143,-1,154,153,148,-1,148,152,154,-1]);
Coordinate199 := TCoordinateNode.Create;
Coordinate199.SetPoint([Vector3(0,15.44,0.8112),Vector3(0,15.67,-3.376),Vector3(2.697,16.18,-2.249),Vector3(2.09,15.08,0.6152),Vector3(0,7.983,3.876),Vector3(0,7.41,-5.026),Vector3(0,13.72,2.98),Vector3(0,13.72,-4.072),Vector3(0,10.57,3.901),Vector3(0,10.57,-5.026),Vector3(0,7.042,3.812),Vector3(0,6.4,-5.026),Vector3(0,4.758,3.526),Vector3(0,4.249,-4.822),Vector3(0,-1.099,3.066),Vector3(0,-0.1768,-3.945),Vector3(6.699,7.869,2.172),Vector3(2.644,7.41,4.093),Vector3(6.699,7.869,-3.225),Vector3(2.644,7.41,-5.218),Vector3(5.274,14.26,1.005),Vector3(3.102,14.58,2.516),Vector3(5.144,15.02,-2.695),Vector3(3.953,15.51,-2.518),Vector3(6.378,10.57,2.332),Vector3(3.196,10.57,3.787),Vector3(2.622,10.57,-5.218),Vector3(6.378,10.57,-4.198),Vector3(6.321,6.859,1.479),Vector3(2.644,6.4,3.507),Vector3(6.321,6.859,-2.919),Vector3(2.644,6.4,-5.218),Vector3(5.721,3.445,1.299),Vector3(2.591,3.486,3.807),Vector3(5.72,3.443,-2.672),Vector3(2.598,4.609,-4.651),Vector3(4.449,-0.3754,0.925),Vector3(1.414,-0.8264,3.196),Vector3(4.449,0.1736,-2.369),Vector3(2.4,0.3773,-3.774),Vector3(6.937,8.714,0.7786),Vector3(6.954,8.723,-2.793),Vector3(6.109,14.39,1.005),Vector3(6.109,14.34,-2.695),Vector3(7.659,10.67,1.843),Vector3(7.659,10.67,-3.828),Vector3(3.082,5.41,4.545),Vector3(2.758,8.208,4.853),Vector3(3.018,1.961,4.928),Vector3(2.787,-1.072,4.799),Vector3(2.625,11.08,4.576),Vector3(2.697,17.34,-2.249),Vector3(0,17.14,-3.188),Vector3(3.38,16.55,2.416),Vector3(7.73,14.39,1.005),Vector3(7.729,14.34,-2.695),Vector3(2.528,-1.347,0.311),Vector3(2.527,-1.036,-1.556),Vector3(1.366,-0.9207,-2.352),Vector3(0.8074,-1.603,1.598),Vector3(0,-1.235,-2.449),Vector3(0,-1.757,1.525),Vector3(0,-1.516,-0.4923),Vector3(-2.697,16.18,-2.249),Vector3(-2.09,15.08,0.6152),Vector3(-6.699,7.869,2.172),Vector3(-2.644,7.41,4.093),Vector3(-6.699,7.869,-3.225),Vector3(-2.644,7.41,-5.218),Vector3(-5.274,14.26,1.005),Vector3(-3.102,14.58,2.516),Vector3(-5.144,15.02,-2.695),Vector3(-3.953,15.51,-2.518),Vector3(-6.378,10.57,2.332),Vector3(-3.196,10.57,3.787),Vector3(-2.622,10.57,-5.218),Vector3(-6.378,10.57,-4.198),Vector3(-6.321,6.859,1.479),Vector3(-2.644,6.4,3.507),Vector3(-6.321,6.859,-2.919),Vector3(-2.644,6.4,-5.218),Vector3(-5.721,3.445,1.299),Vector3(-2.591,3.486,3.807),Vector3(-5.72,3.443,-2.672),Vector3(-2.598,4.609,-4.651),Vector3(-4.449,-0.3754,0.925),Vector3(-1.414,-0.8264,3.196),Vector3(-4.449,0.1736,-2.369),Vector3(-2.4,0.3773,-3.774),Vector3(-6.937,8.714,0.7786),Vector3(-6.954,8.723,-2.793),Vector3(-6.109,14.39,1.005),Vector3(-6.109,14.34,-2.695),Vector3(-7.659,10.67,1.843),Vector3(-7.659,10.67,-3.828),Vector3(-3.082,5.41,4.545),Vector3(-2.758,8.208,4.853),Vector3(-3.018,1.961,4.928),Vector3(-2.787,-1.072,4.799),Vector3(-2.625,11.08,4.576),Vector3(-2.697,17.34,-2.249),Vector3(-3.38,16.55,2.416),Vector3(-7.73,14.39,1.005),Vector3(-7.729,14.34,-2.695),Vector3(-2.528,-1.347,0.311),Vector3(-2.527,-1.036,-1.556),Vector3(-1.366,-0.9207,-2.352),Vector3(-0.8074,-1.603,1.598),Vector3(6.699,7.869,2.172),Vector3(6.378,10.57,2.332),Vector3(6.378,10.57,2.332),Vector3(5.274,14.26,1.005),Vector3(5.721,3.445,1.299),Vector3(6.321,6.859,1.479),Vector3(4.449,-0.3754,0.925),Vector3(5.721,3.445,1.299),Vector3(3.102,14.58,2.516),Vector3(2.697,16.18,-2.249),Vector3(6.321,6.859,1.479),Vector3(6.699,7.869,2.172),Vector3(2.697,16.18,-2.249),Vector3(0,15.67,-3.376),Vector3(-6.378,10.57,2.332),Vector3(-6.699,7.869,2.172),Vector3(-3.102,14.58,2.516),Vector3(-5.274,14.26,1.005),Vector3(-6.321,6.859,1.479),Vector3(-5.721,3.445,1.299),Vector3(-5.721,3.445,1.299),Vector3(-4.449,-0.3754,0.925),Vector3(-2.697,16.18,-2.249),Vector3(-3.102,14.58,2.516),Vector3(-6.699,7.869,2.172),Vector3(-6.321,6.859,1.479),Vector3(0,15.67,-3.376),Vector3(-2.697,16.18,-2.249),Vector3(-3.102,14.58,2.516),Vector3(-2.697,16.18,-2.249),Vector3(2.697,17.34,-2.249),Vector3(2.697,16.18,-2.249),Vector3(3.38,16.55,2.416),Vector3(2.697,16.18,-2.249),Vector3(0,17.14,-3.188),Vector3(0,15.67,-3.376),Vector3(0,15.67,-3.376),Vector3(2.697,16.18,-2.249),Vector3(-2.697,17.34,-2.249),Vector3(-2.697,16.18,-2.249),Vector3(0,17.14,-3.188),Vector3(-2.697,16.18,-2.249),Vector3(0,15.44,0.8112),Vector3(0,15.67,-3.376),Vector3(6.699,7.869,2.172),Vector3(3.102,14.58,2.516),Vector3(6.378,10.57,2.332),Vector3(5.721,3.445,1.299),Vector3(3.082,5.41,4.545),Vector3(2.787,-1.072,4.799),Vector3(2.625,11.08,4.576),Vector3(2.697,17.34,-2.249),Vector3(0,17.14,-3.188),Vector3(3.38,16.55,2.416),Vector3(-6.699,7.869,2.172),Vector3(-3.102,14.58,2.516),Vector3(-6.378,10.57,2.332),Vector3(-5.721,3.445,1.299),Vector3(-3.082,5.41,4.545),Vector3(-2.787,-1.072,4.799),Vector3(-2.625,11.08,4.576),Vector3(-2.697,17.34,-2.249),Vector3(-3.38,16.55,2.416),Vector3(0,15.44,0.8112),Vector3(3.102,14.58,2.516),Vector3(3.082,5.41,4.545),Vector3(2.625,11.08,4.576),Vector3(2.697,17.34,-2.249),Vector3(3.38,16.55,2.416),Vector3(-3.102,14.58,2.516),Vector3(-6.378,10.57,2.332),Vector3(-3.082,5.41,4.545),Vector3(-2.625,11.08,4.576),Vector3(3.102,14.58,2.516),Vector3(3.082,5.41,4.545),Vector3(-3.082,5.41,4.545),Vector3(0.4788,19.29,-1.951),Vector3(0,19.29,-2.014),Vector3(1.016,19.29,-1.707),Vector3(1.393,19.29,-0.8835),Vector3(1.087,19.29,-0.3107),Vector3(0.4788,13.68,-1.951),Vector3(0,13.74,-2.014),Vector3(1.016,13.91,-1.707),Vector3(1.393,13.89,-0.8835),Vector3(1.087,13.56,-0.3107),Vector3(0.5395,19.41,0.0337),Vector3(0,18.91,0.1174),Vector3(0,13.27,0.1174),Vector3(0.5395,13.28,0.0337),Vector3(-0.4788,19.29,-1.951),Vector3(-1.016,19.29,-1.707),Vector3(-1.393,19.29,-0.8835),Vector3(-1.087,19.29,-0.3107),Vector3(-0.4788,13.68,-1.951),Vector3(-1.016,13.91,-1.707),Vector3(-1.393,13.89,-0.8835),Vector3(-1.087,13.56,-0.3107),Vector3(-0.5395,19.41,0.0337),Vector3(-0.5395,13.28,0.0337)]);
{ .SetCoord }
IndexedFaceSet198.Coord := Coordinate199;
TextureCoordinate200 := TTextureCoordinateNode.Create;
TextureCoordinate200.SetPoint([Vector2(0.1137,0.4353),Vector2(0.2462,0.4353),Vector2(0.2627,0.3623),Vector2(0.1041,0.3729),Vector2(0.3893,0.4353),Vector2(0.3893,0.3755),Vector2(0.1466,0.533),Vector2(0.2501,0.4926),Vector2(0.3893,0.4894),Vector2(0.3893,0.5602),Vector2(0.2792,0.5518),Vector2(0.2627,0.3389),Vector2(0.1154,0.3495),Vector2(0.3893,0.3537),Vector2(0.2643,0.2715),Vector2(0.1333,0.2706),Vector2(0.3893,0.3009),Vector2(0.1712,0.2298),Vector2(0.2994,0.2194),Vector2(0.3893,0.2131),Vector2(0.2611,0.5773),Vector2(0.3893,0.5655),Vector2(0.1138,0.4353),Vector2(0.2628,0.3623),Vector2(0.2463,0.4353),Vector2(0.1042,0.3729),Vector2(0.1467,0.533),Vector2(0.2502,0.4926),Vector2(0.2793,0.5518),Vector2(0.2628,0.3389),Vector2(0.1155,0.3495),Vector2(0.2644,0.2715),Vector2(0.1334,0.2706),Vector2(0.1713,0.2298),Vector2(0.2995,0.2194),Vector2(0.2612,0.5773),Vector2(0.6307,0.4386),Vector2(0.6307,0.4769),Vector2(0.755,0.4772),Vector2(0.7551,0.4386),Vector2(0.6307,0.5194),Vector2(0.7429,0.5302),Vector2(0.5323,0.5214),Vector2(0.5881,0.4386),Vector2(0.5452,0.5279),Vector2(0.5366,0.4386),Vector2(0.5197,0.5286),Vector2(0.7429,0.5917),Vector2(0.7696,0.5316),Vector2(0.7696,0.6269),Vector2(0.7817,0.4772),Vector2(0.7818,0.4386),Vector2(0.8599,0.5314),Vector2(0.8599,0.6265),Vector2(0.8291,0.4806),Vector2(0.8387,0.4386),Vector2(0.9464,0.5276),Vector2(0.9609,0.6256),Vector2(0.941,0.4855),Vector2(0.9557,0.4386),Vector2(0.5652,0.5822),Vector2(0.5633,0.5331),Vector2(0.5618,0.5799),Vector2(0.6278,0.5853),Vector2(0.6307,0.5947),Vector2(0.7205,0.5756),Vector2(0.7203,0.5356),Vector2(0.6278,0.5288),Vector2(0.6217,0.7512),Vector2(0.7384,0.7514),Vector2(0.5501,0.7437),Vector2(0.8124,0.7452),Vector2(0.9036,0.7488),Vector2(0.964,0.7479),Vector2(0.5066,0.7388),Vector2(0.4976,0.5286),Vector2(0.4976,0.4386),Vector2(0.5618,0.5768),Vector2(0.5633,0.5393),Vector2(0.9867,0.621),Vector2(0.9784,0.5239),Vector2(0.9754,0.4831),Vector2(0.9909,0.7092),Vector2(0.9703,0.7119),Vector2(0.9837,0.4386),Vector2(0.995,0.7441),Vector2(0.9775,0.7441),Vector2(0.9911,0.4386),Vector2(0.7551,0.4772),Vector2(0.6307,0.4769),Vector2(0.7429,0.5303),Vector2(0.6307,0.5194),Vector2(0.5324,0.5214),Vector2(0.5452,0.5279),Vector2(0.5197,0.5286),Vector2(0.7429,0.5917),Vector2(0.7696,0.5317),Vector2(0.7696,0.6269),Vector2(0.7818,0.4772),Vector2(0.86,0.5315),Vector2(0.8599,0.6265),Vector2(0.8291,0.4806),Vector2(0.9464,0.5276),Vector2(0.961,0.6256),Vector2(0.9411,0.4856),Vector2(0.5653,0.5822),Vector2(0.5633,0.5331),Vector2(0.5618,0.5799),Vector2(0.6307,0.5947),Vector2(0.6278,0.5854),Vector2(0.7206,0.5756),Vector2(0.7203,0.5357),Vector2(0.6279,0.5289),Vector2(0.6217,0.7512),Vector2(0.7384,0.7515),Vector2(0.5502,0.7437),Vector2(0.8124,0.7453),Vector2(0.9036,0.7488),Vector2(0.9641,0.7479),Vector2(0.5066,0.7389),Vector2(0.4976,0.5286),Vector2(0.5618,0.5768),Vector2(0.5633,0.5393),Vector2(0.9867,0.621),Vector2(0.9784,0.524),Vector2(0.9754,0.4831),Vector2(0.9909,0.7092),Vector2(0.9703,0.7119),Vector2(0.9949,0.7441),Vector2(0.9775,0.7441),Vector2(0.9949,0.7441),Vector2(0.3995,0.6721),Vector2(0.3906,0.6721),Vector2(0.4094,0.6721),Vector2(0.4164,0.6721),Vector2(0.4107,0.6721),Vector2(0.3995,0.6285),Vector2(0.3906,0.6293),Vector2(0.4094,0.632),Vector2(0.4164,0.6316),Vector2(0.4107,0.6267),Vector2(0.4006,0.6738),Vector2(0.3906,0.6664),Vector2(0.3906,0.6224),Vector2(0.4006,0.6225),Vector2(0.3818,0.6721),Vector2(0.3719,0.6721),Vector2(0.3649,0.6721),Vector2(0.3706,0.6721),Vector2(0.3818,0.6285),Vector2(0.3719,0.632),Vector2(0.3649,0.6316),Vector2(0.3706,0.6267),Vector2(0.3807,0.6738),Vector2(0.3807,0.6225)]);
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
HAnimJoint201.Center := Vector3(0,65.510002,-1.446);
HAnimJoint201.SetUlimit([0,0,0]);
HAnimJoint201.SetLlimit([0,0,0]);
HAnimSegment202 := THAnimSegmentNode.Create;
HAnimSegment202.NameField := 'skull';
Transform203 := TTransformNode.Create;
Transform203.Translation := Vector3(0,65.510002,-1.446);
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
IndexedFaceSet208.SetCoordIndex([58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1,83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1,221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1]);
IndexedFaceSet208.CreaseAngle := 1.57;
IndexedFaceSet208.SetTexCoordIndex([0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1,165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1,255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1]);
Coordinate209 := TCoordinateNode.Create;
Coordinate209.SetPoint([Vector3(4.222,2.176,-0.5181),Vector3(0,7.197,-6.644),Vector3(0,2.571,-6.826),Vector3(2.315,2.853,-6.435),Vector3(5.19,3.62,-2.089),Vector3(3.31,1.221,-2.134),Vector3(2.908,1.425,-3.883),Vector3(5.046,2.447,-1.86),Vector3(1.623,1.278,-4.697),Vector3(0,0.2518,-3.295),Vector3(2.136,4.543,5.567),Vector3(0.6921,4.509,6.046),Vector3(0,8.815,6.025),Vector3(3.931,8.336,3.184),Vector3(0,10.16,4.947),Vector3(1.984,9.841,4.638),Vector3(5.317,4.065,0.9472),Vector3(3.604,0.8767,3.05),Vector3(1.758,8.691,5.577),Vector3(2.262,6.373,5.581),Vector3(3.294,6.059,4.623),Vector3(0.399,6.676,6.474),Vector3(0.4575,6.102,6.257),Vector3(4.319,5.648,2.968),Vector3(3.466,6.008,4.323),Vector3(3.283,4.761,4.368),Vector3(3.412,4.589,4.067),Vector3(2.929,2.333,3.912),Vector3(4.051,3.807,3.029),Vector3(3.441,3.572,3.8),Vector3(4.08,3.511,3.48),Vector3(4.517,1.184,1.02),Vector3(4.336,1.672,2.022),Vector3(4.687,2.533,1.713),Vector3(4.949,5.063,2.328),Vector3(4.602,1.944,2.335),Vector3(4.853,3.587,2.483),Vector3(5.45,4.043,0.143),Vector3(3.623,5.362,3.673),Vector3(5.357,7.134,-0.5946),Vector3(6.261,1.61,-0.9085),Vector3(5.857,4.459,-0.7436),Vector3(5.641,4.313,-1.474),Vector3(5.556,0.8695,-3.16),Vector3(4.439,4.913,-5.151),Vector3(5.641,4.282,-2.723),Vector3(3.76,3.185,-4.668),Vector3(3.141,5.318,-6.483),Vector3(3.054,1.788,-6.582),Vector3(2.211,7.197,-6.117),Vector3(1.719,1.896,-8.02),Vector3(0,3.476,-7.631),Vector3(4.979,6.987,-2.571),Vector3(5.22,6.98,-1.672),Vector3(4.62,7.688,1.785),Vector3(2.709,9.748,3.871),Vector3(4.569,2.833,-4.822),Vector3(5.051,7.318,0.6887),Vector3(4.21,7.197,-4.781),Vector3(0,5.051,-7.195),Vector3(2.211,5.319,-6.765),Vector3(4.989,6.933,-2.001),Vector3(0,0.2386,-7.477),Vector3(1.046,1.763,-5.545),Vector3(3.547,2.201,-4.229),Vector3(2.601,-0.6988,-6.611),Vector3(2.963,1.984,-4.882),Vector3(1.755,-1.263,-4.562),Vector3(0,-0.7123,-5.924),Vector3(4.203,2.309,-3.193),Vector3(3.941,-0.1316,-4.084),Vector3(1.258,0.6232,-3.199),Vector3(0,1.052,-5.47),Vector3(2.029,0.9145,-3.447),Vector3(0.8389,0.7626,-4.138),Vector3(3.405,1.671,-2.891),Vector3(4.159,1.793,-1.372),Vector3(3.261,8.323,4.331),Vector3(0,6.861,6.511),Vector3(1.391,6.609,6.157),Vector3(2.489,4.625,5.274),Vector3(-4.222,2.176,-0.5181),Vector3(-2.315,2.853,-6.435),Vector3(-5.19,3.62,-2.089),Vector3(-3.31,1.221,-2.134),Vector3(-2.908,1.425,-3.883),Vector3(-5.046,2.447,-1.86),Vector3(-1.623,1.278,-4.697),Vector3(-2.136,4.543,5.567),Vector3(-0.6921,4.509,6.046),Vector3(-3.931,8.336,3.184),Vector3(-1.984,9.841,4.638),Vector3(-5.317,4.065,0.9472),Vector3(-3.604,0.8767,3.05),Vector3(-1.758,8.691,5.577),Vector3(-2.262,6.373,5.581),Vector3(-3.294,6.059,4.623),Vector3(-0.399,6.676,6.474),Vector3(-0.4575,6.102,6.257),Vector3(-4.319,5.648,2.968),Vector3(-3.466,6.008,4.323),Vector3(-3.283,4.761,4.368),Vector3(-3.412,4.589,4.067),Vector3(-2.929,2.333,3.912),Vector3(-4.051,3.807,3.029),Vector3(-3.441,3.572,3.8),Vector3(-4.08,3.511,3.48),Vector3(-4.517,1.184,1.02),Vector3(-4.336,1.672,2.022),Vector3(-4.687,2.533,1.713),Vector3(-4.949,5.063,2.328),Vector3(-4.602,1.944,2.335),Vector3(-4.853,3.587,2.483),Vector3(-5.45,4.043,0.143),Vector3(-3.623,5.362,3.673),Vector3(-5.357,7.134,-0.5946),Vector3(-6.261,1.61,-0.9085),Vector3(-5.857,4.459,-0.7436),Vector3(-5.641,4.313,-1.474),Vector3(-5.556,0.8695,-3.16),Vector3(-4.439,4.913,-5.151),Vector3(-5.641,4.282,-2.723),Vector3(-3.76,3.185,-4.668),Vector3(-3.141,5.318,-6.483),Vector3(-3.054,1.788,-6.582),Vector3(-2.211,7.197,-6.117),Vector3(-1.719,1.896,-8.02),Vector3(-4.979,6.987,-2.571),Vector3(-5.22,6.98,-1.672),Vector3(-4.62,7.688,1.785),Vector3(-2.709,9.748,3.871),Vector3(-4.569,2.833,-4.822),Vector3(-5.051,7.318,0.6887),Vector3(-4.21,7.197,-4.781),Vector3(-2.211,5.319,-6.765),Vector3(-4.989,6.933,-2.001),Vector3(-1.046,1.763,-5.545),Vector3(-3.547,2.201,-4.229),Vector3(-2.601,-0.6988,-6.611),Vector3(-2.963,1.984,-4.882),Vector3(-1.755,-1.263,-4.562),Vector3(-4.203,2.309,-3.193),Vector3(-3.941,-0.1316,-4.084),Vector3(-1.258,0.6232,-3.199),Vector3(-2.029,0.9145,-3.447),Vector3(-0.8389,0.7626,-4.138),Vector3(-3.405,1.671,-2.891),Vector3(-4.159,1.793,-1.372),Vector3(-3.261,8.323,4.331),Vector3(-1.391,6.609,6.157),Vector3(-2.489,4.625,5.274),Vector3(0,11.63,1.862),Vector3(2.211,11.36,1.862),Vector3(0,11.51,-2.832),Vector3(2.211,11.73,-0.6185),Vector3(0,11.99,-0.6185),Vector3(2.211,11.25,-2.832),Vector3(-2.211,11.36,1.862),Vector3(-2.211,11.73,-0.6185),Vector3(-2.211,11.25,-2.832),Vector3(0,11,3.537),Vector3(-2.211,10.65,3.176),Vector3(2.211,10.65,3.176),Vector3(-4.225,10.06,-0.6185),Vector3(-4.085,9.572,1.596),Vector3(4.225,10.06,-0.6185),Vector3(4.085,9.572,1.596),Vector3(-4.259,8.46,-3.886),Vector3(4.259,8.46,-3.886),Vector3(-4.147,9.888,-2.496),Vector3(4.147,9.888,-2.496),Vector3(0,9.854,-5.5),Vector3(-2.211,9.566,-5.329),Vector3(2.211,9.566,-5.329),Vector3(4.492,1.99,0.143),Vector3(4.772,2.153,0.1371),Vector3(4.972,4.581,0.343),Vector3(5.135,3.976,-0.6884),Vector3(5.058,2.911,-0.7058),Vector3(4.507,4.043,0.143),Vector3(4.117,3.624,1.674),Vector3(0,-1.03,3.727),Vector3(2.235,0.3183,3),Vector3(1.116,-0.4984,3.255),Vector3(1.945,1.28,4.102),Vector3(0.9662,-0.055,3.949),Vector3(0,3.651,5.101),Vector3(3.676,4.367,2.97),Vector3(0,4.104,5.73),Vector3(3.427,3.238,3.006),Vector3(0.5571,3.952,5.452),Vector3(3.464,4.891,3.604),Vector3(0.2332,3.651,5.101),Vector3(1.876,4.481,5.063),Vector3(1.426,3.897,4.75),Vector3(1.876,4.376,5.003),Vector3(1.94,4.073,4.627),Vector3(0.9465,2.663,4.581),Vector3(2.983,2.631,3.463),Vector3(2.262,2.574,3.974),Vector3(2.749,3.322,3.659),Vector3(3.003,3.765,3.524),Vector3(0.9307,3.594,4.772),Vector3(1.209,3.377,4.582),Vector3(2.878,3.435,3.574),Vector3(2.7,4.202,4.085),Vector3(2.204,1.933,4.119),Vector3(0.8199,2.229,4.707),Vector3(0,2.802,5.144),Vector3(3.135,2.09,3.146),Vector3(3.286,3.897,3.378),Vector3(0.9901,4.195,5.324),Vector3(0,1.146,5.23),Vector3(0.13,1.146,5.229),Vector3(0.4095,1.415,4.857),Vector3(0,1.692,5.982),Vector3(2.889,4.705,4.217),Vector3(0,-0.9679,3.096),Vector3(3.071,1.218,2.763),Vector3(0,5.995,5.73),Vector3(1.759,6.091,5.052),Vector3(3.166,5.897,4.064),Vector3(1.003,6.052,5.459),Vector3(2.496,0.3932,1.674),Vector3(1.283,-0.5664,2.512),Vector3(1.871,0.0736,0.2553),Vector3(3.872,2.799,2.123),Vector3(0,8.901,5.08),Vector3(1.758,9.206,4.633),Vector3(3.415,7.335,3.545),Vector3(4.24,5.051,2.557),Vector3(1.464,0.5323,4.104),Vector3(0,2.097,5.657),Vector3(2.492,3.311,3.918),Vector3(1.637,3.328,4.377),Vector3(2.892,4.756,4.212),Vector3(3.633,1.746,1.236),Vector3(3.632,1.5,-0.3157),Vector3(4.279,4.065,0.9472),Vector3(3.176,1.093,-1.478),Vector3(0,0.6573,4.697),Vector3(0.2001,0.6573,4.697),Vector3(0,-0.0579,4.322),Vector3(0,0.278,4.702),Vector3(0,0.8415,5.119),Vector3(0.3637,0.8168,5.021),Vector3(0.2001,0.8415,5.119),Vector3(1.055,0.576,4.273),Vector3(1.511,3.785,4.712),Vector3(1.946,3.93,4.509),Vector3(2.619,4.028,4.063),Vector3(-4.492,1.99,0.143),Vector3(-4.772,2.153,0.1371),Vector3(-4.972,4.581,0.343),Vector3(-5.135,3.976,-0.6884),Vector3(-5.058,2.911,-0.7058),Vector3(-4.507,4.043,0.143),Vector3(-4.117,3.624,1.674),Vector3(-2.235,0.3183,3),Vector3(-1.116,-0.4984,3.255),Vector3(-1.945,1.28,4.102),Vector3(-0.9662,-0.055,3.949),Vector3(-3.676,4.367,2.97),Vector3(-3.427,3.238,3.006),Vector3(-0.5571,3.952,5.452),Vector3(-3.464,4.891,3.604),Vector3(-0.2332,3.651,5.101),Vector3(-1.876,4.481,5.063),Vector3(-1.426,3.897,4.75),Vector3(-1.876,4.376,5.003),Vector3(-1.94,4.073,4.627),Vector3(-0.9465,2.663,4.581),Vector3(-2.983,2.631,3.463),Vector3(-2.262,2.574,3.974),Vector3(-2.749,3.322,3.659),Vector3(-3.003,3.765,3.524),Vector3(-0.9307,3.594,4.772),Vector3(-1.209,3.377,4.582),Vector3(-2.878,3.435,3.574),Vector3(-2.7,4.202,4.085),Vector3(-2.204,1.933,4.119),Vector3(-0.8199,2.229,4.707),Vector3(-3.135,2.09,3.146),Vector3(-3.286,3.897,3.378),Vector3(-0.9901,4.195,5.324),Vector3(-0.13,1.146,5.229),Vector3(-0.4095,1.415,4.857),Vector3(-2.889,4.705,4.217),Vector3(-3.071,1.218,2.763),Vector3(-1.759,6.091,5.052),Vector3(-3.166,5.897,4.064),Vector3(-1.003,6.052,5.459),Vector3(-2.496,0.3932,1.674),Vector3(-1.283,-0.5664,2.512),Vector3(-1.871,0.0736,0.2553),Vector3(-3.872,2.799,2.123),Vector3(-1.758,9.206,4.633),Vector3(-3.415,7.335,3.545),Vector3(-4.24,5.051,2.557),Vector3(-1.464,0.5323,4.104),Vector3(-2.492,3.311,3.918),Vector3(-1.637,3.328,4.377),Vector3(-2.892,4.756,4.212),Vector3(-3.633,1.746,1.236),Vector3(-3.632,1.5,-0.3157),Vector3(-4.279,4.065,0.9472),Vector3(-3.176,1.093,-1.478),Vector3(-0.2001,0.6573,4.697),Vector3(-0.3637,0.8168,5.021),Vector3(-0.2001,0.8415,5.119),Vector3(-1.055,0.576,4.273),Vector3(-1.511,3.785,4.712),Vector3(-1.946,3.93,4.509),Vector3(-2.619,4.028,4.063),Vector3(0,0.6559,4.853),Vector3(0.2001,0.6559,4.853),Vector3(-0.2001,0.6559,4.853),Vector3(-1.864,0.045,-1.544),Vector3(1.864,0.045,-1.544),Vector3(0,-0.437,1.275),Vector3(0.399,6.676,6.474),Vector3(0.6921,4.509,6.046),Vector3(0.6921,4.509,6.046),Vector3(0.399,6.676,6.474),Vector3(-0.6921,4.509,6.046),Vector3(-0.399,6.676,6.474),Vector3(-0.399,6.676,6.474),Vector3(-0.6921,4.509,6.046),Vector3(1.283,-0.5664,2.512),Vector3(1.871,0.0736,0.2553),Vector3(2.496,0.3932,1.674),Vector3(1.283,-0.5664,2.512),Vector3(4.222,2.176,-0.5181),Vector3(5.046,2.447,-1.86),Vector3(4.222,2.176,-0.5181),Vector3(3.31,1.221,-2.134),Vector3(-3.176,1.093,-1.478),Vector3(-1.871,0.0736,0.2553),Vector3(-1.283,-0.5664,2.512),Vector3(-2.496,0.3932,1.674),Vector3(-5.046,2.447,-1.86),Vector3(-4.222,2.176,-0.5181),Vector3(-3.31,1.221,-2.134),Vector3(-4.222,2.176,-0.5181),Vector3(5.046,2.447,-1.86),Vector3(0.4575,6.102,6.257),Vector3(0,6.861,6.511),Vector3(-5.046,2.447,-1.86),Vector3(-0.4575,6.102,6.257),Vector3(4.507,4.043,0.143),Vector3(3.176,1.093,-1.478),Vector3(-4.507,4.043,0.143),Vector3(-1.283,-0.5664,2.512),Vector3(-3.176,1.093,-1.478),Vector3(0,6.861,6.511),Vector3(3.176,1.093,-1.478)]);
{ .SetCoord }
IndexedFaceSet208.Coord := Coordinate209;
TextureCoordinate210 := TTextureCoordinateNode.Create;
TextureCoordinate210.SetPoint([Vector2(0.9175,0.8974),Vector2(0.9509,0.8981),Vector2(0.9421,0.8701),Vector2(0.924,0.8702),Vector2(0.9824,0.8971),Vector2(0.9824,0.8682),Vector2(0.9541,0.8718),Vector2(0.9147,0.8129),Vector2(0.9437,0.8153),Vector2(0.9638,0.8095),Vector2(0.9824,0.809),Vector2(0.9461,0.923),Vector2(0.9071,0.9135),Vector2(0.9824,0.9287),Vector2(0.7343,0.9169),Vector2(0.7616,0.9147),Vector2(0.7553,0.8982),Vector2(0.7343,0.8968),Vector2(0.7739,0.9327),Vector2(0.7343,0.9365),Vector2(0.8187,0.8433),Vector2(0.8348,0.9045),Vector2(0.8324,0.8647),Vector2(0.74,0.8745),Vector2(0.761,0.8768),Vector2(0.7497,0.8755),Vector2(0.777,0.8787),Vector2(0.7647,0.8593),Vector2(0.7596,0.8565),Vector2(0.7438,0.8546),Vector2(0.7343,0.8756),Vector2(0.7372,0.8736),Vector2(0.7394,0.8706),Vector2(0.7405,0.8536),Vector2(0.7808,0.8802),Vector2(0.7786,0.8666),Vector2(0.7875,0.8787),Vector2(0.7821,0.8667),Vector2(0.7952,0.9076),Vector2(0.8011,0.8823),Vector2(0.7745,0.9003),Vector2(0.7939,0.8518),Vector2(0.7845,0.8549),Vector2(0.7731,0.8049),Vector2(0.7979,0.8609),Vector2(0.8185,0.8054),Vector2(0.8439,0.8655),Vector2(0.8131,0.8741),Vector2(0.786,0.7876),Vector2(0.8107,0.8538),Vector2(0.8058,0.8252),Vector2(0.8096,0.8166),Vector2(0.8589,0.7975),Vector2(0.8767,0.8622),Vector2(0.8568,0.8668),Vector2(0.8669,0.8674),Vector2(0.9208,0.8549),Vector2(0.8792,0.7991),Vector2(0.8835,0.8633),Vector2(0.9139,0.8636),Vector2(0.9513,0.84),Vector2(0.9824,0.8358),Vector2(0.8845,0.9021),Vector2(0.888,0.931),Vector2(0.8761,0.9036),Vector2(0.8705,0.9018),Vector2(0.8544,0.902),Vector2(0.8538,0.9345),Vector2(0.8173,0.9068),Vector2(0.8156,0.9257),Vector2(0.7753,0.9186),Vector2(0.7832,0.9041),Vector2(0.7338,0.8385),Vector2(0.7279,0.8339),Vector2(0.7208,0.8401),Vector2(0.7397,0.7767),Vector2(0.7338,0.7681),Vector2(0.7338,0.7727),Vector2(0.7192,0.8201),Vector2(0.7171,0.8352),Vector2(0.7139,0.8364),Vector2(0.7127,0.8419),Vector2(0.7175,0.832),Vector2(0.7247,0.8312),Vector2(0.7224,0.8292),Vector2(0.7239,0.8169),Vector2(0.7146,0.8334),Vector2(0.7152,0.8309),Vector2(0.753,0.7762),Vector2(0.7452,0.772),Vector2(0.7409,0.7703),Vector2(0.756,0.7661),Vector2(0.7502,0.7748),Vector2(0.7102,0.837),Vector2(0.7574,0.7798),Vector2(0.7054,0.8378),Vector2(0.7338,0.8253),Vector2(0.7338,0.8299),Vector2(0.7267,0.8275),Vector2(0.7291,0.8283),Vector2(0.7338,0.8254),Vector2(0.7338,0.7682),Vector2(0.7385,0.7711),Vector2(0.7338,0.7628),Vector2(0.7338,0.82),Vector2(0.7437,0.7597),Vector2(0.7429,0.774),Vector2(0.7484,0.7629),Vector2(0.7505,0.778),Vector2(0.7116,0.8233),Vector2(0.7622,0.7806),Vector2(0.7576,0.779),Vector2(0.763,0.7872),Vector2(0.7046,0.8444),Vector2(0.7572,0.7769),Vector2(0.7524,0.7737),Vector2(0.7104,0.8341),Vector2(0.5511,0.8974),Vector2(0.5402,0.8731),Vector2(0.5264,0.883),Vector2(0.5177,0.911),Vector2(0.5145,0.8847),Vector2(0.4862,0.8812),Vector2(0.4862,0.91),Vector2(0.5538,0.8129),Vector2(0.5249,0.8282),Vector2(0.5048,0.8225),Vector2(0.4862,0.8219),Vector2(0.5225,0.936),Vector2(0.5615,0.9135),Vector2(0.4862,0.9416),Vector2(0.7132,0.8982),Vector2(0.707,0.9147),Vector2(0.6947,0.9327),Vector2(0.6362,0.8647),Vector2(0.6338,0.9045),Vector2(0.6499,0.8433),Vector2(0.7286,0.8745),Vector2(0.7189,0.8755),Vector2(0.7076,0.8768),Vector2(0.7039,0.8593),Vector2(0.6916,0.8787),Vector2(0.7247,0.8546),Vector2(0.709,0.8565),Vector2(0.7314,0.8736),Vector2(0.7292,0.8706),Vector2(0.728,0.8536),Vector2(0.69,0.8666),Vector2(0.6878,0.8802),Vector2(0.6865,0.8667),Vector2(0.6811,0.8787),Vector2(0.6675,0.8823),Vector2(0.6734,0.9076),Vector2(0.6941,0.9003),Vector2(0.6841,0.8549),Vector2(0.6747,0.8518),Vector2(0.6955,0.8049),Vector2(0.6707,0.8609),Vector2(0.65,0.8054),Vector2(0.6247,0.8655),Vector2(0.6555,0.8741),Vector2(0.6826,0.7876),Vector2(0.6628,0.8252),Vector2(0.6579,0.8538),Vector2(0.659,0.8166),Vector2(0.5919,0.8622),Vector2(0.6097,0.7975),Vector2(0.6017,0.8674),Vector2(0.6119,0.8668),Vector2(0.5894,0.7991),Vector2(0.5477,0.8549),Vector2(0.5851,0.8633),Vector2(0.5547,0.8636),Vector2(0.5173,0.8529),Vector2(0.4862,0.8488),Vector2(0.5841,0.9021),Vector2(0.5806,0.931),Vector2(0.5925,0.9036),Vector2(0.5981,0.9018),Vector2(0.6148,0.9345),Vector2(0.6142,0.902),Vector2(0.6513,0.9068),Vector2(0.653,0.9257),Vector2(0.6932,0.9186),Vector2(0.6854,0.9041),Vector2(0.7468,0.8401),Vector2(0.7397,0.8339),Vector2(0.7279,0.7767),Vector2(0.7484,0.8201),Vector2(0.7549,0.8419),Vector2(0.7538,0.8364),Vector2(0.7505,0.8352),Vector2(0.7502,0.832),Vector2(0.7452,0.8292),Vector2(0.7429,0.8312),Vector2(0.7437,0.8169),Vector2(0.753,0.8334),Vector2(0.7524,0.8309),Vector2(0.7267,0.7703),Vector2(0.7224,0.772),Vector2(0.7146,0.7762),Vector2(0.7175,0.7748),Vector2(0.7116,0.7661),Vector2(0.7574,0.837),Vector2(0.7102,0.7798),Vector2(0.7622,0.8378),Vector2(0.7385,0.8283),Vector2(0.7409,0.8275),Vector2(0.7291,0.7711),Vector2(0.7239,0.7597),Vector2(0.7192,0.7629),Vector2(0.7247,0.774),Vector2(0.7171,0.778),Vector2(0.756,0.8233),Vector2(0.7046,0.7872),Vector2(0.71,0.779),Vector2(0.7054,0.7806),Vector2(0.763,0.8444),Vector2(0.7104,0.7769),Vector2(0.7152,0.7737),Vector2(0.7572,0.8341),Vector2(0.7881,0.9479),Vector2(0.7343,0.9577),Vector2(0.8497,0.9637),Vector2(0.9158,0.9539),Vector2(0.7343,0.9872),Vector2(0.9824,0.9663),Vector2(0.6805,0.9479),Vector2(0.6189,0.9637),Vector2(0.5528,0.9539),Vector2(0.4862,0.9793),Vector2(0.4275,0.6313),Vector2(0.4434,0.6401),Vector2(0.4526,0.6369),Vector2(0.431,0.6421),Vector2(0.4397,0.644),Vector2(0.4398,0.6453),Vector2(0.4381,0.6647),Vector2(0.4333,0.6605),Vector2(0.4397,0.6604),Vector2(0.4463,0.6598),Vector2(0.4465,0.6514),Vector2(0.424,0.6505),Vector2(0.4275,0.657),Vector2(0.4205,0.6684),Vector2(0.4189,0.6379),Vector2(0.4388,0.6288),Vector2(0.4209,0.6237),Vector2(0.3384,0.9887),Vector2(0.2979,0.9448),Vector2(0.2441,0.9417),Vector2(0.2441,0.9723),Vector2(0.445,0.6455),Vector2(0.4531,0.6286),Vector2(0.3384,0.9469),Vector2(0.414,0.9365),Vector2(0.4578,0.6379),Vector2(0.417,0.6307),Vector2(0.415,0.6242),Vector2(0.2959,0.626),Vector2(0.3051,0.6166),Vector2(0.258,0.6076),Vector2(0.2606,0.6259),Vector2(0.2511,0.6816),Vector2(0.2548,0.6653),Vector2(0.2441,0.6653),Vector2(0.2441,0.6816),Vector2(0.2661,0.696),Vector2(0.2636,0.664),Vector2(0.3484,0.6888),Vector2(0.3007,0.651),Vector2(0.2881,0.7397),Vector2(0.3623,0.7239),Vector2(0.4164,0.6206),Vector2(0.4307,0.6247),Vector2(0.4116,0.6201),Vector2(0.4088,0.6855),Vector2(0.4123,0.7323),Vector2(0.4518,0.7703),Vector2(0.364,0.6372),Vector2(0.2441,0.7326),Vector2(0.2496,0.7705),Vector2(0.2441,0.7109),Vector2(0.2441,0.7705),Vector2(0.2441,0.816),Vector2(0.2441,0.8403),Vector2(0.274,0.8322),Vector2(0.2566,0.816),Vector2(0.2949,0.763),Vector2(0.3447,0.8549),Vector2(0.3206,0.8292),Vector2(0.4279,0.7939),Vector2(0.4413,0.8544),Vector2(0.3889,0.8456),Vector2(0.3991,0.8726),Vector2(0.4299,0.8825),Vector2(0.3482,0.8386),Vector2(0.4041,0.7613),Vector2(0.3654,0.7582),Vector2(0.3778,0.7978),Vector2(0.3319,0.7987),Vector2(0.3916,0.7984),Vector2(0.2943,0.815),Vector2(0.3252,0.8232),Vector2(0.3846,0.8362),Vector2(0.4052,0.8221),Vector2(0.3485,0.831),Vector2(0.309,0.8013),Vector2(0.3985,0.8044),Vector2(0.2937,0.8109),Vector2(0.4204,0.8292),Vector2(0.3447,0.8606),Vector2(0.2972,0.8452),Vector2(0.4715,0.8911),Vector2(0.431,0.9594),Vector2(0.4671,0.6302),Vector2(0.4663,0.6332),Vector2(0.3226,0.6487),Vector2(0.3993,0.8753),Vector2(0.2441,0.6554),Vector2(0.2548,0.6554),Vector2(0.2557,0.6351),Vector2(0.4557,0.6477),Vector2(0.1498,0.9887),Vector2(0.1903,0.9448),Vector2(0.1498,0.9469),Vector2(0.0742,0.9365),Vector2(0.2323,0.6076),Vector2(0.1853,0.6166),Vector2(0.1923,0.626),Vector2(0.2275,0.6259),Vector2(0.2371,0.6816),Vector2(0.2334,0.6653),Vector2(0.2246,0.664),Vector2(0.2221,0.696),Vector2(0.1875,0.651),Vector2(0.1398,0.6888),Vector2(0.1258,0.7239),Vector2(0.2001,0.7397),Vector2(0.0364,0.7703),Vector2(0.0759,0.7323),Vector2(0.0794,0.6855),Vector2(0.1242,0.6372),Vector2(0.2386,0.7705),Vector2(0.2316,0.816),Vector2(0.2142,0.8322),Vector2(0.1933,0.763),Vector2(0.1676,0.8292),Vector2(0.1435,0.8549),Vector2(0.0602,0.7939),Vector2(0.0469,0.8544),Vector2(0.0583,0.8825),Vector2(0.0891,0.8726),Vector2(0.0992,0.8456),Vector2(0.14,0.8386),Vector2(0.084,0.7613),Vector2(0.1228,0.7582),Vector2(0.1104,0.7978),Vector2(0.1563,0.7987),Vector2(0.0966,0.7984),Vector2(0.163,0.8232),Vector2(0.1939,0.815),Vector2(0.083,0.8221),Vector2(0.1036,0.8362),Vector2(0.1397,0.831),Vector2(0.1792,0.8013),Vector2(0.0897,0.8044),Vector2(0.1944,0.8109),Vector2(0.0678,0.8292),Vector2(0.1435,0.8606),Vector2(0.191,0.8452),Vector2(0.0166,0.8911),Vector2(0.0646,0.9594),Vector2(0.1656,0.6487),Vector2(0.0889,0.8753),Vector2(0.2325,0.6351),Vector2(0.2334,0.6554),Vector2(0.2548,0.6553),Vector2(0.2441,0.6553),Vector2(0.2334,0.6553),Vector2(0.4168,0.6329),Vector2(0.3796,0.63),Vector2(0.3997,0.6541),Vector2(0.4337,0.6769),Vector2(0.4455,0.6497),Vector2(0.4293,0.6072)]);
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
