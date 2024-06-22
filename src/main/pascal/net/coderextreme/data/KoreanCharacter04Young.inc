function KoreanCharacter04Young: TX3DRootNode;
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
X3D0.Meta['title'] := 'KoreanCharacter04Young.x3d';
X3D0.Meta['creator'] := 'Jin Hoon Lee and Min Joo Lee';
X3D0.Meta['translator'] := 'Chul Hee Jung and Myeong Won Lee';
X3D0.Meta['created'] := '31 March 2011';
X3D0.Meta['translated'] := '1 November 2014';
X3D0.Meta['modified'] := '23 December 2021';
X3D0.Meta['description'] := 'Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.';
X3D0.Meta['reference'] := 'KoreanCharacter00ReadMe.txt';
X3D0.Meta['reference'] := 'KoreanCharacterHumanMotion_Infotech2014_140706.pdf';
X3D0.Meta['reference'] := 'KoreanCharactersIllustrated.pdf';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter04Young.x3d';
X3D0.Meta['generator'] := '3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview';
X3D0.Meta['generator'] := 'Suwon University HAnim Editor';
X3D0.Meta['generator'] := 'Gnu Image Manipulation Program, http://www.gimp.org';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group19 := TGroupNode.Create;
WorldInfo20 := TWorldInfoNode.Create;
WorldInfo20.Title := 'KoreanCharacter04Young.x3d';
{ .AddChildren }
Group19.AddChildren([WorldInfo20]);
NavigationInfo21 := TNavigationInfoNode.Create;
NavigationInfo21.Speed := 1.5;
{ .AddChildren }
Group19.AddChildren([NavigationInfo21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.CenterOfRotation := Vector3(0,1,0);
Viewpoint22.Description := 'Young';
Viewpoint22.Position := Vector3(0,1,3);
{ .AddChildren }
Group19.AddChildren([Viewpoint22]);
HAnimHumanoid23 := THAnimHumanoidNode.Create;
HAnimHumanoid23.NameField := 'Young';
HAnimHumanoid23.Scale := Vector3(0.0225,0.0225,0.0225);
HAnimHumanoid23.Version := '2.0';
{ original HAnimHumanoid info='"authorName=Chul Hee Jung and Myeong Won Lee" "authorEmail=myeongwonlee@gmail.com" "creationDate=31 March 2011" "humanoidVersion=2.0" "gender=female" "height=1.5"' }
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
MetadataString28.SetValue(['female']);
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
HAnimJoint31.Center := Vector3(0,31.540001,-0.3172);
HAnimJoint31.SetUlimit([0,0,0]);
HAnimJoint31.SetLlimit([0,0,0]);
HAnimSegment32 := THAnimSegmentNode.Create;
HAnimSegment32.NameField := 'sacrum';
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0,31.540001,-0.3172);
Shape34 := TShapeNode.Create;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
Material36.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance35.Material := Material36;
ImageTexture37 := TImageTextureNode.Create;
ImageTexture37.SetUrl(['images/Young.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Young.png']);
{ .SetTexture }
Appearance35.Texture := ImageTexture37;
{ .SetAppearance }
Shape34.Appearance := Appearance35;
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet38.CreaseAngle := 1.57;
IndexedFaceSet38.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate39 := TCoordinateNode.Create;
Coordinate39.SetPoint([Vector3(0,0.9084,0.0235),Vector3(0,0.7867,-0.4669),Vector3(-0.3773,0.7867,-0.4012),Vector3(-0.6534,0.7867,-0.3219),Vector3(-0.7545,0.7867,0.0235),Vector3(-0.6534,0.7867,0.369),Vector3(-0.3773,0.7867,0.4482),Vector3(0,0.7867,0.5139),Vector3(0.3773,0.7867,0.4482),Vector3(0.6534,0.7867,0.369),Vector3(0.7545,0.7867,0.0235),Vector3(0.6534,0.7867,-0.3219),Vector3(0.3773,0.7867,-0.4012),Vector3(0,0.4542,-0.7625),Vector3(-0.4879,0.4542,-0.6572),Vector3(-0.8451,0.4542,-0.3695),Vector3(-0.9758,0.4542,0.0235),Vector3(-0.8451,0.4542,0.4165),Vector3(-0.4879,0.4542,0.6023),Vector3(0,0.4542,0.7076),Vector3(0.4879,0.4542,0.6023),Vector3(0.8451,0.4542,0.4165),Vector3(0.9758,0.4542,0.0235),Vector3(0.8451,0.4542,-0.3695),Vector3(0.4879,0.4542,-0.6572),Vector3(0,0,-0.8292),Vector3(-0.5634,0,-0.7076),Vector3(-0.9758,0,-0.3754),Vector3(-1.127,0,0.0235),Vector3(-0.9758,0,0.4773),Vector3(-0.5634,0,0.7076),Vector3(0,0,0.8292),Vector3(0.5634,0,0.7076),Vector3(0.9758,0,0.4773),Vector3(1.127,0,0.0235),Vector3(0.9758,0,-0.3754),Vector3(0.5634,0,-0.7076),Vector3(0,-0.4542,-0.7076),Vector3(-0.4879,-0.4542,-0.6023),Vector3(-0.8451,-0.4542,-0.3146),Vector3(-0.9758,-0.4542,0.0235),Vector3(-0.8451,-0.4542,0.4165),Vector3(-0.4879,-0.4542,0.6023),Vector3(0,-0.4542,0.7076),Vector3(0.4879,-0.4542,0.6023),Vector3(0.8451,-0.4542,0.4165),Vector3(0.9758,-0.4542,0.0235),Vector3(0.8451,-0.4542,-0.3146),Vector3(0.4879,-0.4542,-0.6023),Vector3(0,-0.7867,-0.3754),Vector3(-0.2817,-0.7867,-0.3146),Vector3(-0.4879,-0.7867,-0.2034),Vector3(-0.5634,-0.7867,0.0235),Vector3(-0.4879,-0.7867,0.2504),Vector3(-0.2817,-0.7867,0.4165),Vector3(0,-0.7867,0.4773),Vector3(0.2817,-0.7867,0.4165),Vector3(0.4879,-0.7867,0.2504),Vector3(0.5634,-0.7867,0.0235),Vector3(0.4879,-0.7867,-0.2034),Vector3(0.2817,-0.7867,-0.3146),Vector3(0,-0.9084,0.0235)]);
{ .SetCoord }
IndexedFaceSet38.Coord := Coordinate39;
TextureCoordinate40 := TTextureCoordinateNode.Create;
TextureCoordinate40.SetPoint([Vector2(0.6211,0.5754),Vector2(0.7851,0.572),Vector2(0.7614,0.572),Vector2(0.6907,0.5698),Vector2(0.62,0.5698),Vector2(0.6158,0.5702),Vector2(0.5451,0.5702),Vector2(0.4167,0.5698),Vector2(0.5451,0.5702),Vector2(0.6158,0.5702),Vector2(0.62,0.5698),Vector2(0.6907,0.5698),Vector2(0.7614,0.572),Vector2(0.8036,0.5346),Vector2(0.7761,0.5346),Vector2(0.6989,0.4838),Vector2(0.6219,0.4428),Vector2(0.6154,0.4438),Vector2(0.5492,0.4639),Vector2(0.4166,0.5346),Vector2(0.5492,0.4639),Vector2(0.6154,0.4438),Vector2(0.6219,0.4428),Vector2(0.6989,0.4838),Vector2(0.7761,0.5346),Vector2(0.7912,0.4044),Vector2(0.7635,0.4044),Vector2(0.7042,0.3925),Vector2(0.6194,0.3907),Vector2(0.6148,0.3907),Vector2(0.545,0.3974),Vector2(0.4163,0.4938),Vector2(0.545,0.3974),Vector2(0.6148,0.3907),Vector2(0.6194,0.3907),Vector2(0.7042,0.3925),Vector2(0.7635,0.4044),Vector2(0.795,0.3772),Vector2(0.7662,0.3772),Vector2(0.6945,0.3645),Vector2(0.6236,0.3695),Vector2(0.616,0.3695),Vector2(0.5438,0.378),Vector2(0.416,0.453),Vector2(0.5438,0.378),Vector2(0.616,0.3695),Vector2(0.6236,0.3695),Vector2(0.6945,0.3645),Vector2(0.7662,0.3772),Vector2(0.7887,0.3451),Vector2(0.7635,0.3451),Vector2(0.698,0.3508),Vector2(0.6262,0.3508),Vector2(0.6297,0.3503),Vector2(0.5389,0.3503),Vector2(0.4181,0.3884),Vector2(0.5389,0.3503),Vector2(0.6297,0.3503),Vector2(0.6262,0.3508),Vector2(0.698,0.3508),Vector2(0.7635,0.3451),Vector2(0.6237,0.3398)]);
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
HAnimJoint41.Center := Vector3(3.504,29.040001,-0.4027);
HAnimJoint41.SetUlimit([0,0,0]);
HAnimJoint41.SetLlimit([0,0,0]);
HAnimSegment42 := THAnimSegmentNode.Create;
HAnimSegment42.NameField := 'l_thigh';
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(3.504,29.040001,-0.4027);
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
IndexedFaceSet48.SetCoordIndex([47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,56,58,60,-1,56,60,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1]);
IndexedFaceSet48.CreaseAngle := 1.57;
IndexedFaceSet48.SetTexCoordIndex([5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,42,44,46,-1,42,46,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1]);
Coordinate49 := TCoordinateNode.Create;
Coordinate49.SetPoint([Vector3(2.61,2.495,-0.0096),Vector3(1.449,2.495,2.82),Vector3(-1.16,2.495,3.518),Vector3(-2.968,2.495,1.56),Vector3(-2.968,2.495,-1.58),Vector3(-1.16,2.495,-3.537),Vector3(1.449,2.495,-2.839),Vector3(2.61,-0.8104,-0.0096),Vector3(1.449,-0.8104,2.819),Vector3(-1.16,-0.8104,3.518),Vector3(-2.968,-0.8104,1.56),Vector3(-2.968,-0.8104,-1.58),Vector3(-1.16,-0.8104,-3.537),Vector3(1.449,-0.8104,-2.839),Vector3(2.61,-3.375,-0.0096),Vector3(1.449,-3.375,2.819),Vector3(-1.16,-3.375,3.518),Vector3(-2.968,-3.375,1.56),Vector3(-2.968,-3.375,-1.58),Vector3(-1.16,-3.375,-3.537),Vector3(1.449,-3.375,-2.839),Vector3(2.968,-6.68,-0.0096),Vector3(1.672,-6.68,3.148),Vector3(-1.24,-6.68,3.928),Vector3(-2.957,-6.68,1.743),Vector3(-2.957,-6.68,-1.762),Vector3(-1.24,-6.68,-3.947),Vector3(1.672,-6.68,-3.167),Vector3(1.892,-5.194,-0.0096),Vector3(1.001,-5.194,2.161),Vector3(-1.001,-5.194,2.697),Vector3(-2.321,-5.194,1.195),Vector3(-2.321,-5.194,-1.214),Vector3(-1.001,-5.194,-2.716),Vector3(1.001,-5.194,-2.18),Vector3(1.9,-10.89,-0.0096),Vector3(1.08,-10.89,1.714),Vector3(-0.7636,-10.89,2.14),Vector3(-2.242,-10.89,0.9472),Vector3(-2.242,-10.89,-0.9663),Vector3(-0.7636,-10.89,-2.159),Vector3(1.08,-10.89,-1.734),Vector3(1.807,4.249,-0.0096),Vector3(0.9484,4.249,2.084),Vector3(-0.982,4.249,2.601),Vector3(-2.53,4.249,1.152),Vector3(-2.53,4.249,-1.171),Vector3(-0.982,4.249,-2.62),Vector3(0.9484,4.249,-2.103),Vector3(1.624,-14.13,-0.0096),Vector3(0.9076,-14.13,1.641),Vector3(-0.7021,-14.13,2.013),Vector3(-1.993,-14.13,0.9715),Vector3(-1.993,-14.13,-0.8451),Vector3(-0.7021,-14.13,-1.887),Vector3(0.9076,-14.13,-1.515),Vector3(0.5533,-14.99,-0.0096),Vector3(0.2401,-14.99,0.7943),Vector3(-0.4639,-14.99,0.9569),Vector3(-1.028,-14.99,0.5013),Vector3(-1.028,-14.99,-0.3749),Vector3(-0.4639,-14.99,-0.8305),Vector3(0.2401,-14.99,-0.6679)]);
{ .SetCoord }
IndexedFaceSet48.Coord := Coordinate49;
TextureCoordinate50 := TTextureCoordinateNode.Create;
TextureCoordinate50.SetPoint([Vector2(0.719,0.5576),Vector2(0.6284,0.5576),Vector2(0.7414,0.5576),Vector2(0.6787,0.5576),Vector2(0.5781,0.5576),Vector2(0.5154,0.5576),Vector2(0.5378,0.5576),Vector2(0.6284,0.5029),Vector2(0.7509,0.3997),Vector2(0.6284,0.3997),Vector2(0.7509,0.5029),Vector2(0.7811,0.3997),Vector2(0.7811,0.5029),Vector2(0.6964,0.3997),Vector2(0.6964,0.5029),Vector2(0.5604,0.3997),Vector2(0.5604,0.5029),Vector2(0.4756,0.3997),Vector2(0.4756,0.5029),Vector2(0.5059,0.3997),Vector2(0.5059,0.5029),Vector2(0.7509,0.3197),Vector2(0.6284,0.3197),Vector2(0.7811,0.3197),Vector2(0.6964,0.3197),Vector2(0.5604,0.3197),Vector2(0.4756,0.3197),Vector2(0.5059,0.3197),Vector2(0.7651,0.2166),Vector2(0.6284,0.2166),Vector2(0.7989,0.2166),Vector2(0.7043,0.2166),Vector2(0.5525,0.2166),Vector2(0.4579,0.2166),Vector2(0.4917,0.2166),Vector2(0.7224,0.263),Vector2(0.6284,0.263),Vector2(0.7456,0.263),Vector2(0.6805,0.263),Vector2(0.5762,0.263),Vector2(0.5112,0.263),Vector2(0.5344,0.263),Vector2(0.8705,0.5452),Vector2(0.8705,0.5383),Vector2(0.8705,0.5369),Vector2(0.8705,0.5408),Vector2(0.8705,0.5483),Vector2(0.8705,0.5522),Vector2(0.8705,0.5509),Vector2(0.917,0.5452),Vector2(0.917,0.5266),Vector2(0.89,0.5304),Vector2(0.89,0.5452),Vector2(0.917,0.522),Vector2(0.89,0.5268),Vector2(0.917,0.5349),Vector2(0.89,0.537),Vector2(0.917,0.5555),Vector2(0.89,0.5534),Vector2(0.917,0.5684),Vector2(0.89,0.5636),Vector2(0.917,0.5638),Vector2(0.89,0.56),Vector2(0.8746,0.531),Vector2(0.8746,0.5452),Vector2(0.8746,0.5279),Vector2(0.8746,0.5368),Vector2(0.8746,0.5524),Vector2(0.8746,0.5613),Vector2(0.8746,0.5581)]);
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
HAnimJoint51.Center := Vector3(3.414,14.95,-0.4549);
HAnimJoint51.SetUlimit([0,0,0]);
HAnimJoint51.SetLlimit([0,0,0]);
HAnimSegment52 := THAnimSegmentNode.Create;
HAnimSegment52.NameField := 'l_calf';
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(3.414,14.95,-0.4549);
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
IndexedFaceSet58.SetCoordIndex([4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
IndexedFaceSet58.CreaseAngle := 1.57;
IndexedFaceSet58.SetTexCoordIndex([4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
Coordinate59 := TCoordinateNode.Create;
Coordinate59.SetPoint([Vector3(0.6335,1.142,0.0206),Vector3(0.3202,1.142,0.8245),Vector3(-0.3837,1.142,0.9871),Vector3(-0.9483,1.142,0.5315),Vector3(-0.9483,1.142,-0.3447),Vector3(-0.3837,1.142,-0.8003),Vector3(0.3202,1.142,-0.6377),Vector3(2.06,-3.778,0.0206),Vector3(1.287,-2.905,1.78),Vector3(1.089,-1.147,2.133),Vector3(1.867,-1.397,0.0206),Vector3(-0.715,-2.905,2.263),Vector3(-0.6583,-1.147,2.559),Vector3(-1.987,-3.778,1.106),Vector3(-2.06,-1.397,0.8632),Vector3(-1.987,-4.457,-1.205),Vector3(-2.06,-1.397,-0.822),Vector3(-0.715,-4.457,-2.559),Vector3(-0.6583,-1.397,-2.087),Vector3(1.287,-4.457,-2.076),Vector3(1.089,-1.397,-1.661),Vector3(0.9877,0.2851,1.672),Vector3(1.704,0.2851,0.0206),Vector3(-0.622,0.2851,2.043),Vector3(-1.913,0.2851,1.002),Vector3(-1.913,0.2851,-0.8149),Vector3(-0.622,0.2851,-1.817),Vector3(0.9877,0.2851,-1.445),Vector3(1.417,-11.1,0.0028),Vector3(0.8123,-11.09,1.38),Vector3(-0.5457,-11.09,1.72),Vector3(-1.635,-11.1,0.767),Vector3(-1.635,-11.11,-0.8605),Vector3(-0.5457,-11.11,-1.535),Vector3(0.8123,-11.11,-1.195),Vector3(0.6234,-12.52,0.021),Vector3(0.3177,-12.52,0.7175),Vector3(-0.3691,-12.52,0.8896),Vector3(-0.9199,-12.52,0.4076),Vector3(-0.9199,-12.53,-0.4156),Vector3(-0.3691,-12.53,-0.7569),Vector3(0.3177,-12.53,-0.5849)]);
{ .SetCoord }
IndexedFaceSet58.Coord := Coordinate59;
TextureCoordinate60 := TTextureCoordinateNode.Create;
TextureCoordinate60.SetPoint([Vector2(0.9309,0.5848),Vector2(0.919,0.5848),Vector2(0.8921,0.5848),Vector2(0.8706,0.5848),Vector2(0.8706,0.5848),Vector2(0.8921,0.5848),Vector2(0.919,0.5848),Vector2(0.9845,0.5321),Vector2(0.955,0.5475),Vector2(0.9491,0.5599),Vector2(0.9788,0.5571),Vector2(0.8787,0.5475),Vector2(0.8825,0.5599),Vector2(0.8302,0.5321),Vector2(0.8291,0.5571),Vector2(0.8302,0.52),Vector2(0.8291,0.5571),Vector2(0.8787,0.52),Vector2(0.8825,0.5571),Vector2(0.955,0.52),Vector2(0.9491,0.5571),Vector2(0.9444,0.5755),Vector2(0.9717,0.5755),Vector2(0.8831,0.5755),Vector2(0.8339,0.5755),Vector2(0.8339,0.5755),Vector2(0.8831,0.5755),Vector2(0.9444,0.5755),Vector2(0.9679,0.2444),Vector2(0.9449,0.2445),Vector2(0.8931,0.2445),Vector2(0.8516,0.2444),Vector2(0.8516,0.2442),Vector2(0.8931,0.2442),Vector2(0.9449,0.2442),Vector2(0.9372,0.2243),Vector2(0.9255,0.2244),Vector2(0.8993,0.2244),Vector2(0.8783,0.2243),Vector2(0.8783,0.2243),Vector2(0.8993,0.2243),Vector2(0.9255,0.2243)]);
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
HAnimJoint61.Center := Vector3(3.18,3.449,-0.3088);
HAnimJoint61.SetUlimit([0,0,0]);
HAnimJoint61.SetLlimit([0,0,0]);
HAnimSegment62 := THAnimSegmentNode.Create;
HAnimSegment62.NameField := 'l_talus';
Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(3.18,3.449,-0.3088);
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
HAnimJoint71.Center := Vector3(3.18,3.189,0.9724);
HAnimJoint71.SetUlimit([0,0,0]);
HAnimJoint71.SetLlimit([0,0,0]);
HAnimSegment72 := THAnimSegmentNode.Create;
HAnimSegment72.NameField := 'l_tarsal_proximal_phalanx_2';
Transform73 := TTransformNode.Create;
Transform73.Translation := Vector3(3.18,3.189,0.9724);
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
HAnimJoint81.Center := Vector3(-3.504,29.040001,-0.4027);
HAnimJoint81.SetUlimit([0,0,0]);
HAnimJoint81.SetLlimit([0,0,0]);
HAnimSegment82 := THAnimSegmentNode.Create;
HAnimSegment82.NameField := 'r_thigh';
Transform83 := TTransformNode.Create;
Transform83.Translation := Vector3(-3.504,29.040001,-0.4027);
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
IndexedFaceSet88.SetCoordIndex([43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,58,57,56,-1,60,58,56,-1,61,60,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1]);
IndexedFaceSet88.CreaseAngle := 1.57;
IndexedFaceSet88.SetTexCoordIndex([0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,44,43,42,-1,46,44,42,-1,47,46,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1]);
Coordinate89 := TCoordinateNode.Create;
Coordinate89.SetPoint([Vector3(-2.61,2.495,-0.0096),Vector3(-1.449,2.495,2.819),Vector3(1.16,2.495,3.518),Vector3(2.968,2.495,1.56),Vector3(2.968,2.495,-1.58),Vector3(1.16,2.495,-3.537),Vector3(-1.449,2.495,-2.839),Vector3(-2.61,-0.8104,-0.0096),Vector3(-1.449,-0.8104,2.819),Vector3(1.16,-0.8104,3.518),Vector3(2.968,-0.8104,1.56),Vector3(2.968,-0.8104,-1.58),Vector3(1.16,-0.8104,-3.537),Vector3(-1.449,-0.8104,-2.839),Vector3(-2.61,-3.375,-0.0096),Vector3(-1.449,-3.375,2.819),Vector3(1.16,-3.375,3.518),Vector3(2.968,-3.375,1.56),Vector3(2.968,-3.375,-1.58),Vector3(1.16,-3.375,-3.537),Vector3(-1.449,-3.375,-2.839),Vector3(-2.968,-6.68,-0.0096),Vector3(-1.672,-6.68,3.148),Vector3(1.24,-6.68,3.928),Vector3(2.957,-6.68,1.743),Vector3(2.957,-6.68,-1.762),Vector3(1.24,-6.68,-3.947),Vector3(-1.672,-6.68,-3.167),Vector3(-1.892,-5.194,-0.0096),Vector3(-1.001,-5.194,2.161),Vector3(1.001,-5.194,2.697),Vector3(2.321,-5.194,1.195),Vector3(2.321,-5.194,-1.214),Vector3(1.001,-5.194,-2.716),Vector3(-1.001,-5.194,-2.18),Vector3(-1.9,-10.89,-0.0096),Vector3(-1.08,-10.89,1.714),Vector3(0.7636,-10.89,2.14),Vector3(2.242,-10.89,0.9472),Vector3(2.242,-10.89,-0.9663),Vector3(0.7636,-10.89,-2.159),Vector3(-1.08,-10.89,-1.734),Vector3(-1.807,4.249,-0.0096),Vector3(-0.9484,4.249,2.084),Vector3(0.982,4.249,2.601),Vector3(2.53,4.249,1.152),Vector3(2.53,4.249,-1.171),Vector3(0.982,4.249,-2.62),Vector3(-0.9484,4.249,-2.103),Vector3(-1.624,-14.13,-0.0096),Vector3(-0.9076,-14.13,1.641),Vector3(0.7021,-14.13,2.013),Vector3(1.993,-14.13,0.9715),Vector3(1.993,-14.13,-0.8451),Vector3(0.7021,-14.13,-1.887),Vector3(-0.9076,-14.13,-1.515),Vector3(-0.5533,-14.99,-0.0096),Vector3(-0.2401,-14.99,0.7943),Vector3(0.4639,-14.99,0.9569),Vector3(1.028,-14.99,0.5013),Vector3(1.028,-14.99,-0.3749),Vector3(0.4639,-14.99,-0.8305),Vector3(-0.2401,-14.99,-0.6679)]);
{ .SetCoord }
IndexedFaceSet88.Coord := Coordinate89;
TextureCoordinate90 := TTextureCoordinateNode.Create;
TextureCoordinate90.SetPoint([Vector2(0.719,0.5576),Vector2(0.6284,0.5576),Vector2(0.7414,0.5576),Vector2(0.6787,0.5576),Vector2(0.5781,0.5576),Vector2(0.5154,0.5576),Vector2(0.5378,0.5576),Vector2(0.6284,0.5029),Vector2(0.7509,0.3997),Vector2(0.6284,0.3997),Vector2(0.7509,0.5029),Vector2(0.7811,0.3997),Vector2(0.7811,0.5029),Vector2(0.6964,0.3997),Vector2(0.6964,0.5029),Vector2(0.5604,0.3997),Vector2(0.5604,0.5029),Vector2(0.4756,0.3997),Vector2(0.4756,0.5029),Vector2(0.5059,0.3997),Vector2(0.5059,0.5029),Vector2(0.7509,0.3197),Vector2(0.6284,0.3197),Vector2(0.7811,0.3197),Vector2(0.6964,0.3197),Vector2(0.5604,0.3197),Vector2(0.4756,0.3197),Vector2(0.5059,0.3197),Vector2(0.7651,0.2166),Vector2(0.6284,0.2166),Vector2(0.7989,0.2166),Vector2(0.7043,0.2166),Vector2(0.5525,0.2166),Vector2(0.4579,0.2166),Vector2(0.4917,0.2166),Vector2(0.7224,0.263),Vector2(0.6284,0.263),Vector2(0.7456,0.263),Vector2(0.6805,0.263),Vector2(0.5762,0.263),Vector2(0.5112,0.263),Vector2(0.5344,0.263),Vector2(0.8705,0.5452),Vector2(0.8705,0.5383),Vector2(0.8705,0.5369),Vector2(0.8705,0.5408),Vector2(0.8705,0.5483),Vector2(0.8705,0.5522),Vector2(0.8705,0.5509),Vector2(0.917,0.5452),Vector2(0.917,0.5266),Vector2(0.89,0.5304),Vector2(0.89,0.5452),Vector2(0.917,0.522),Vector2(0.89,0.5268),Vector2(0.917,0.5349),Vector2(0.89,0.537),Vector2(0.917,0.5555),Vector2(0.89,0.5534),Vector2(0.917,0.5684),Vector2(0.89,0.5636),Vector2(0.917,0.5638),Vector2(0.89,0.56),Vector2(0.8746,0.531),Vector2(0.8746,0.5452),Vector2(0.8746,0.5279),Vector2(0.8746,0.5368),Vector2(0.8746,0.5524),Vector2(0.8746,0.5613),Vector2(0.8746,0.5581)]);
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
HAnimJoint91.Center := Vector3(-3.414,14.95,-0.4549);
HAnimJoint91.SetUlimit([0,0,0]);
HAnimJoint91.SetLlimit([0,0,0]);
HAnimSegment92 := THAnimSegmentNode.Create;
HAnimSegment92.NameField := 'r_calf';
Transform93 := TTransformNode.Create;
Transform93.Translation := Vector3(-3.414,14.95,-0.4549);
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
IndexedFaceSet98.SetCoordIndex([0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
IndexedFaceSet98.CreaseAngle := 1.57;
IndexedFaceSet98.SetTexCoordIndex([0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
Coordinate99 := TCoordinateNode.Create;
Coordinate99.SetPoint([Vector3(-0.6335,1.142,0.0206),Vector3(-0.3202,1.142,0.8245),Vector3(0.3837,1.142,0.9871),Vector3(0.9483,1.142,0.5315),Vector3(0.9483,1.142,-0.3447),Vector3(0.3837,1.142,-0.8003),Vector3(-0.3202,1.142,-0.6377),Vector3(-2.06,-3.778,0.0206),Vector3(-1.287,-2.905,1.78),Vector3(-1.089,-1.147,2.133),Vector3(-1.867,-1.397,0.0206),Vector3(0.715,-2.905,2.263),Vector3(0.6583,-1.147,2.559),Vector3(1.987,-3.778,1.106),Vector3(2.06,-1.397,0.8632),Vector3(1.987,-4.457,-1.205),Vector3(2.06,-1.397,-0.822),Vector3(0.715,-4.457,-2.559),Vector3(0.6583,-1.397,-2.087),Vector3(-1.287,-4.457,-2.076),Vector3(-1.089,-1.397,-1.661),Vector3(-0.9877,0.2851,1.672),Vector3(-1.704,0.2851,0.0206),Vector3(0.622,0.2851,2.043),Vector3(1.913,0.2851,1.002),Vector3(1.913,0.2851,-0.8149),Vector3(0.622,0.2851,-1.817),Vector3(-0.9877,0.2851,-1.445),Vector3(-1.417,-11.1,0.0028),Vector3(-0.8123,-11.09,1.38),Vector3(0.5457,-11.09,1.72),Vector3(1.635,-11.1,0.767),Vector3(1.635,-11.11,-0.8605),Vector3(0.5457,-11.11,-1.535),Vector3(-0.8123,-11.11,-1.195),Vector3(-0.6234,-12.52,0.021),Vector3(-0.3177,-12.52,0.7175),Vector3(0.3691,-12.52,0.8896),Vector3(0.9199,-12.52,0.4076),Vector3(0.9199,-12.53,-0.4156),Vector3(0.3691,-12.53,-0.7569),Vector3(-0.3177,-12.53,-0.5849)]);
{ .SetCoord }
IndexedFaceSet98.Coord := Coordinate99;
TextureCoordinate100 := TTextureCoordinateNode.Create;
TextureCoordinate100.SetPoint([Vector2(0.9309,0.5848),Vector2(0.919,0.5848),Vector2(0.8921,0.5848),Vector2(0.8706,0.5848),Vector2(0.8706,0.5848),Vector2(0.8921,0.5848),Vector2(0.919,0.5848),Vector2(0.9845,0.5321),Vector2(0.955,0.5475),Vector2(0.9491,0.5599),Vector2(0.9788,0.5571),Vector2(0.8787,0.5475),Vector2(0.8825,0.5599),Vector2(0.8302,0.5321),Vector2(0.8291,0.5571),Vector2(0.8302,0.52),Vector2(0.8291,0.5571),Vector2(0.8787,0.52),Vector2(0.8825,0.5571),Vector2(0.955,0.52),Vector2(0.9491,0.5571),Vector2(0.9444,0.5755),Vector2(0.9717,0.5755),Vector2(0.8831,0.5755),Vector2(0.8339,0.5755),Vector2(0.8339,0.5755),Vector2(0.8831,0.5755),Vector2(0.9444,0.5755),Vector2(0.9679,0.2444),Vector2(0.9449,0.2445),Vector2(0.8931,0.2445),Vector2(0.8516,0.2444),Vector2(0.8516,0.2442),Vector2(0.8931,0.2442),Vector2(0.9449,0.2442),Vector2(0.9372,0.2243),Vector2(0.9255,0.2244),Vector2(0.8993,0.2244),Vector2(0.8783,0.2243),Vector2(0.8783,0.2243),Vector2(0.8993,0.2243),Vector2(0.9255,0.2243)]);
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
HAnimJoint101.Center := Vector3(-3.18,3.449,-0.3088);
HAnimJoint101.SetUlimit([0,0,0]);
HAnimJoint101.SetLlimit([0,0,0]);
HAnimSegment102 := THAnimSegmentNode.Create;
HAnimSegment102.NameField := 'r_talus';
Transform103 := TTransformNode.Create;
Transform103.Translation := Vector3(-3.18,3.449,-0.3088);
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
HAnimJoint111.Center := Vector3(-3.18,3.189,0.9724);
HAnimJoint111.SetUlimit([0,0,0]);
HAnimJoint111.SetLlimit([0,0,0]);
HAnimSegment112 := THAnimSegmentNode.Create;
HAnimSegment112.NameField := 'r_tarsal_proximal_phalanx_2';
Transform113 := TTransformNode.Create;
Transform113.Translation := Vector3(-3.18,3.189,0.9724);
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
HAnimJoint121.Center := Vector3(0,27.07,-0.3172);
HAnimJoint121.SetUlimit([0,0,0]);
HAnimJoint121.SetLlimit([0,0,0]);
HAnimSegment122 := THAnimSegmentNode.Create;
HAnimSegment122.NameField := 'pelvis';
Transform123 := TTransformNode.Create;
Transform123.Translation := Vector3(0,27.07,-0.3172);
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
Coordinate129.SetPoint([Vector3(0,9.369,0.1256),Vector3(0,8.719,-2.49),Vector3(-2.012,8.719,-2.14),Vector3(-3.486,8.719,-1.717),Vector3(-4.025,8.719,0.1256),Vector3(-3.486,8.719,1.968),Vector3(-2.012,8.719,2.391),Vector3(0,8.719,2.741),Vector3(2.012,8.719,2.391),Vector3(3.486,8.719,1.968),Vector3(4.025,8.719,0.1256),Vector3(3.486,8.719,-1.717),Vector3(2.012,8.719,-2.14),Vector3(0,6.946,-4.067),Vector3(-2.603,6.946,-3.506),Vector3(-4.508,6.946,-1.971),Vector3(-5.205,6.946,0.1256),Vector3(-4.508,6.946,2.222),Vector3(-2.603,6.946,3.213),Vector3(0,6.946,3.775),Vector3(2.603,6.946,3.213),Vector3(4.508,6.946,2.222),Vector3(5.205,6.946,0.1256),Vector3(4.508,6.946,-1.971),Vector3(2.603,6.946,-3.506),Vector3(0,4.523,-4.423),Vector3(-3.005,4.523,-3.775),Vector3(-5.205,4.523,-2.003),Vector3(-6.011,4.523,0.1256),Vector3(-5.205,4.523,2.546),Vector3(-3.005,4.523,3.775),Vector3(0,4.523,4.423),Vector3(3.005,4.523,3.775),Vector3(5.205,4.523,2.546),Vector3(6.011,4.523,0.1256),Vector3(5.205,4.523,-2.003),Vector3(3.005,4.523,-3.775),Vector3(0,2.1,-3.775),Vector3(-2.603,2.1,-3.213),Vector3(-4.508,2.1,-1.678),Vector3(-5.205,2.1,0.1256),Vector3(-4.508,2.1,2.222),Vector3(-2.603,2.1,3.213),Vector3(0,2.1,3.775),Vector3(2.603,2.1,3.213),Vector3(4.508,2.1,2.222),Vector3(5.205,2.1,0.1255),Vector3(4.508,2.1,-1.678),Vector3(2.603,2.1,-3.213),Vector3(0,0.3265,-2.003),Vector3(-1.503,0.3265,-1.678),Vector3(-2.603,0.3265,-1.085),Vector3(-3.005,0.3265,0.1255),Vector3(-2.603,0.3265,1.336),Vector3(-1.503,0.3265,2.222),Vector3(0,0.3265,2.546),Vector3(1.503,0.3265,2.222),Vector3(2.603,0.3265,1.336),Vector3(3.005,0.3265,0.1255),Vector3(2.603,0.3265,-1.085),Vector3(1.503,0.3265,-1.678),Vector3(0,-0.3227,0.1255)]);
{ .SetCoord }
IndexedFaceSet128.Coord := Coordinate129;
TextureCoordinate130 := TTextureCoordinateNode.Create;
TextureCoordinate130.SetPoint([Vector2(0.6211,0.5754),Vector2(0.7851,0.572),Vector2(0.7614,0.572),Vector2(0.6907,0.5698),Vector2(0.62,0.5698),Vector2(0.6158,0.5702),Vector2(0.5451,0.5702),Vector2(0.4167,0.5698),Vector2(0.5451,0.5702),Vector2(0.6158,0.5702),Vector2(0.62,0.5698),Vector2(0.6907,0.5698),Vector2(0.7614,0.572),Vector2(0.8036,0.5346),Vector2(0.7761,0.5346),Vector2(0.6989,0.4838),Vector2(0.6219,0.4428),Vector2(0.6154,0.4438),Vector2(0.5492,0.4639),Vector2(0.4166,0.5346),Vector2(0.5492,0.4639),Vector2(0.6154,0.4438),Vector2(0.6219,0.4428),Vector2(0.6989,0.4838),Vector2(0.7761,0.5346),Vector2(0.7912,0.4044),Vector2(0.7635,0.4044),Vector2(0.7042,0.3925),Vector2(0.6194,0.3907),Vector2(0.6148,0.3907),Vector2(0.545,0.3974),Vector2(0.4163,0.4938),Vector2(0.545,0.3974),Vector2(0.6148,0.3907),Vector2(0.6194,0.3907),Vector2(0.7042,0.3925),Vector2(0.7635,0.4044),Vector2(0.795,0.3772),Vector2(0.7662,0.3772),Vector2(0.6945,0.3645),Vector2(0.6236,0.3695),Vector2(0.616,0.3695),Vector2(0.5438,0.378),Vector2(0.416,0.453),Vector2(0.5438,0.378),Vector2(0.616,0.3695),Vector2(0.6236,0.3695),Vector2(0.6945,0.3645),Vector2(0.7662,0.3772),Vector2(0.7887,0.3451),Vector2(0.7635,0.3451),Vector2(0.698,0.3508),Vector2(0.6262,0.3508),Vector2(0.6297,0.3503),Vector2(0.5389,0.3503),Vector2(0.4181,0.3884),Vector2(0.5389,0.3503),Vector2(0.6297,0.3503),Vector2(0.6262,0.3508),Vector2(0.698,0.3508),Vector2(0.7635,0.3451),Vector2(0.6237,0.3398)]);
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
HAnimJoint131.Center := Vector3(5.441,45.830002,0.1786);
HAnimJoint131.SetUlimit([0,0,0]);
HAnimJoint131.SetLlimit([0,0,0]);
HAnimSegment132 := THAnimSegmentNode.Create;
HAnimSegment132.NameField := 'l_upperarm';
Transform133 := TTransformNode.Create;
Transform133.Translation := Vector3(5.441,45.830002,0.1786);
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
IndexedFaceSet138.SetCoordIndex([2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]);
IndexedFaceSet138.CreaseAngle := 1.57;
IndexedFaceSet138.SetTexCoordIndex([2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1]);
Coordinate139 := TCoordinateNode.Create;
Coordinate139.SetPoint([Vector3(1.592,1.817,-1.481),Vector3(2.611,1.817,0.0297),Vector3(1.489,1.817,1.466),Vector3(-0.2232,1.817,0.8423),Vector3(-0.1596,1.817,-0.9787),Vector3(1.794,0.7023,-2.036),Vector3(3.201,0.7023,0.0503),Vector3(1.652,0.7023,2.033),Vector3(-0.7128,0.7023,1.173),Vector3(-0.625,0.7023,-1.342),Vector3(1.794,-1.513,-2.036),Vector3(3.201,-1.513,0.0503),Vector3(1.652,-1.513,2.033),Vector3(-0.7128,-1.513,1.173),Vector3(-0.625,-1.513,-1.342),Vector3(1.836,-2.461,-2.153),Vector3(3.325,-2.461,0.0546),Vector3(1.686,-2.461,2.153),Vector3(-0.8158,-2.461,1.242),Vector3(-0.7229,-2.461,-1.419),Vector3(1.369,-0.8329,-1.709),Vector3(2.445,-0.8329,-0.4004),Vector3(1.888,-0.8329,1.436),Vector3(0.4682,-0.8329,1.262),Vector3(0.1476,-0.8329,-0.6818),Vector3(1.431,-5.952,-1.383),Vector3(2.548,-5.952,-0.3332),Vector3(1.97,-5.952,1.14),Vector3(0.495,-5.952,1),Vector3(0.162,-5.952,-0.5588),Vector3(1.466,-9.522,-1.332),Vector3(2.541,-9.522,-0.3218),Vector3(1.985,-9.522,1.096),Vector3(0.565,-9.522,0.9618),Vector3(0.2445,-9.522,-0.539),Vector3(1.422,-10.01,-0.792),Vector3(2.053,-10.01,-0.1998),Vector3(1.726,-10.01,0.6312),Vector3(0.8942,-10.01,0.5525),Vector3(0.7063,-10.01,-0.3271)]);
{ .SetCoord }
IndexedFaceSet138.Coord := Coordinate139;
TextureCoordinate140 := TTextureCoordinateNode.Create;
TextureCoordinate140.SetPoint([Vector2(0.2986,0.2114),Vector2(0.2726,0.2114),Vector2(0.3201,0.2114),Vector2(0.3415,0.2114),Vector2(0.2466,0.2114),Vector2(0.2979,0.2417),Vector2(0.2726,0.2417),Vector2(0.3197,0.2417),Vector2(0.3418,0.2417),Vector2(0.2473,0.2417),Vector2(0.2979,0.3018),Vector2(0.2726,0.3018),Vector2(0.3197,0.3018),Vector2(0.3418,0.3018),Vector2(0.2473,0.3018),Vector2(0.2978,0.3276),Vector2(0.2726,0.3276),Vector2(0.3197,0.3276),Vector2(0.3419,0.3276),Vector2(0.2474,0.3276),Vector2(0.2932,0.2834),Vector2(0.2689,0.2834),Vector2(0.316,0.2834),Vector2(0.3322,0.2834),Vector2(0.245,0.2834),Vector2(0.2251,0.2114),Vector2(0.2255,0.2417),Vector2(0.2255,0.2417),Vector2(0.2255,0.3018),Vector2(0.2255,0.3018),Vector2(0.2255,0.3276),Vector2(0.2255,0.3276),Vector2(0.2159,0.2834),Vector2(0.4315,0.6736),Vector2(0.442,0.6736),Vector2(0.3947,0.6736),Vector2(0.4041,0.6736),Vector2(0.418,0.6736),Vector2(0.4296,0.6167),Vector2(0.4409,0.6167),Vector2(0.4415,0.6485),Vector2(0.4303,0.6485),Vector2(0.3965,0.6167),Vector2(0.3953,0.6485),Vector2(0.4047,0.6167),Vector2(0.4053,0.6485),Vector2(0.4189,0.6167),Vector2(0.418,0.6485),Vector2(0.4415,0.6706),Vector2(0.4306,0.6706),Vector2(0.395,0.6706),Vector2(0.4051,0.6706),Vector2(0.4182,0.6706),Vector2(0.3746,0.6736),Vector2(0.3851,0.6736),Vector2(0.384,0.6167),Vector2(0.3845,0.6485),Vector2(0.3845,0.6485),Vector2(0.3846,0.6706),Vector2(0.3846,0.6706),Vector2(0.3851,0.6736),Vector2(0.3481,0.2114)]);
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
HAnimJoint141.Center := Vector3(6.823,36.080002,0.08607);
HAnimJoint141.SetUlimit([0,0,0]);
HAnimJoint141.SetLlimit([0,0,0]);
HAnimSegment142 := THAnimSegmentNode.Create;
HAnimSegment142.NameField := 'l_forearm';
Transform143 := TTransformNode.Create;
Transform143.Translation := Vector3(6.823,36.080002,0.08607);
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
IndexedFaceSet148.SetCoordIndex([3,2,1,-1,3,1,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
IndexedFaceSet148.CreaseAngle := 1.57;
IndexedFaceSet148.SetTexCoordIndex([3,2,25,-1,3,25,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
Coordinate149 := TCoordinateNode.Create;
Coordinate149.SetPoint([Vector3(0.1597,0.4908,-1.015),Vector3(0.9881,0.4908,-0.2281),Vector3(0.5166,0.4908,0.9165),Vector3(-0.6033,0.4908,0.8366),Vector3(-0.8239,0.4908,-0.3574),Vector3(0.1063,-0.5229,-1.433),Vector3(1.277,-0.5229,-0.3764),Vector3(0.6107,-0.5229,1.433),Vector3(-0.972,-0.5229,1.306),Vector3(-1.284,-0.5229,-0.5807),Vector3(0.117,-2.864,-1.416),Vector3(1.367,-2.864,-0.3724),Vector3(0.6839,-2.352,1.419),Vector3(-1.006,-2.352,1.294),Vector3(-1.367,-2.864,-0.5747),Vector3(0.0931,-7.459,-1.267),Vector3(1.005,-7.459,-0.1128),Vector3(0.4859,-7.459,1.331),Vector3(-0.7465,-7.459,1.214),Vector3(-0.9892,-7.459,-0.3022),Vector3(0.0539,-8.009,-0.7805),Vector3(0.6765,-8.009,0.0074),Vector3(0.3221,-8.009,0.919),Vector3(-0.5194,-8.009,0.8391),Vector3(-0.6852,-8.009,-0.1219)]);
{ .SetCoord }
IndexedFaceSet148.Coord := Coordinate149;
TextureCoordinate150 := TTextureCoordinateNode.Create;
TextureCoordinate150.SetPoint([Vector2(0.4222,0.6201),Vector2(0.4327,0.6201),Vector2(0.3884,0.6201),Vector2(0.3987,0.6201),Vector2(0.4103,0.6201),Vector2(0.4213,0.6265),Vector2(0.4321,0.6265),Vector2(0.3894,0.6265),Vector2(0.399,0.6265),Vector2(0.4105,0.6265),Vector2(0.4214,0.6413),Vector2(0.4323,0.6413),Vector2(0.389,0.6381),Vector2(0.3992,0.6381),Vector2(0.4103,0.6413),Vector2(0.4213,0.6705),Vector2(0.4336,0.6705),Vector2(0.3899,0.6705),Vector2(0.3981,0.6705),Vector2(0.4094,0.6705),Vector2(0.4215,0.674),Vector2(0.4346,0.674),Vector2(0.3899,0.674),Vector2(0.398,0.674),Vector2(0.4083,0.674),Vector2(0.3787,0.6201),Vector2(0.3682,0.6201),Vector2(0.3787,0.6201),Vector2(0.3782,0.6265),Vector2(0.3782,0.6265),Vector2(0.3783,0.6413),Vector2(0.3783,0.6413),Vector2(0.3796,0.6705),Vector2(0.3676,0.674),Vector2(0.3806,0.674),Vector2(0.3796,0.6705),Vector2(0.3806,0.674)]);
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
HAnimJoint151.Center := Vector3(6.915,28.41,0.3752);
HAnimJoint151.SetUlimit([0,0,0]);
HAnimJoint151.SetLlimit([0,0,0]);
HAnimSegment152 := THAnimSegmentNode.Create;
HAnimSegment152.NameField := 'l_carpal';
Transform153 := TTransformNode.Create;
Transform153.Translation := Vector3(6.915,28.41,0.3752);
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
IndexedFaceSet158.SetCoordIndex([4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,22,27,23,-1,26,25,24,-1]);
IndexedFaceSet158.CreaseAngle := 1.57;
IndexedFaceSet158.SetTexCoordIndex([4,6,5,-1,5,7,4,-1,2,3,1,-1,1,0,2,-1,14,16,15,-1,15,17,14,-1,8,9,6,-1,6,4,8,-1,38,40,39,-1,39,41,38,-1,18,19,36,-1,36,37,18,-1,10,11,9,-1,9,8,10,-1,42,43,40,-1,40,38,42,-1,20,21,19,-1,19,18,20,-1,22,24,23,-1,24,26,25,-1,25,23,24,-1,27,29,28,-1,28,30,27,-1,31,23,25,-1,25,32,31,-1,33,31,34,-1,34,31,32,-1,32,35,34,-1,20,34,35,-1,35,21,20,-1,8,4,12,-1,12,13,8,-1,22,23,28,-1,28,29,22,-1,23,31,30,-1,30,28,23,-1,31,33,27,-1,27,30,31,-1,14,24,26,-1,14,16,24,-1]);
Coordinate159 := TCoordinateNode.Create;
Coordinate159.SetPoint([Vector3(0.6237,0.0984,0.703),Vector3(0.5903,0.1133,-1.189),Vector3(-1.101,0.02,0.7856),Vector3(-1.108,0.0215,-1.131),Vector3(-1.289,-0.5207,1.303),Vector3(0.9805,-0.3349,1.224),Vector3(0.9287,-0.3062,-1.753),Vector3(-1.391,-0.5055,-1.749),Vector3(-1.18,-2.202,2.123),Vector3(1.263,-2.015,1.834),Vector3(1.211,-1.986,-2.123),Vector3(-1.505,-2.287,-1.981),Vector3(-0.9466,-3.466,1.493),Vector3(0.3369,-3.669,1.543),Vector3(0.2851,-3.64,-1.826),Vector3(-1.135,-3.477,-1.705),Vector3(-1.385,-0.5072,-0.165),Vector3(-1.903,-2.244,1.711),Vector3(-2.187,-0.825,0.0512),Vector3(-2.154,-0.8839,1.662),Vector3(-1.908,-2.242,0.1214),Vector3(-1.394,-2.282,-0.1776),Vector3(0.5903,0.1133,-1.189),Vector3(-1.108,0.0215,-1.131),Vector3(-1.101,0.02,0.7856),Vector3(0.6237,0.0984,0.703),Vector3(0.5903,0.1133,-1.189),Vector3(-1.101,0.02,0.7856)]);
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
HAnimJoint161.Center := Vector3(-5.441,45.830002,0.1786);
HAnimJoint161.SetUlimit([0,0,0]);
HAnimJoint161.SetLlimit([0,0,0]);
HAnimSegment162 := THAnimSegmentNode.Create;
HAnimSegment162.NameField := 'r_upperarm';
Transform163 := TTransformNode.Create;
Transform163.Translation := Vector3(-5.441,45.830002,0.1786);
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
IndexedFaceSet168.SetCoordIndex([0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]);
IndexedFaceSet168.CreaseAngle := 1.57;
IndexedFaceSet168.SetTexCoordIndex([1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1]);
Coordinate169 := TCoordinateNode.Create;
Coordinate169.SetPoint([Vector3(-1.592,1.817,-1.481),Vector3(-2.611,1.817,0.0297),Vector3(-1.489,1.817,1.466),Vector3(0.2232,1.817,0.8423),Vector3(0.1596,1.817,-0.9787),Vector3(-1.794,0.7023,-2.036),Vector3(-3.201,0.7023,0.0503),Vector3(-1.652,0.7023,2.033),Vector3(0.7128,0.7023,1.173),Vector3(0.625,0.7023,-1.342),Vector3(-1.794,-1.513,-2.036),Vector3(-3.201,-1.513,0.0503),Vector3(-1.652,-1.513,2.033),Vector3(0.7128,-1.513,1.173),Vector3(0.625,-1.513,-1.342),Vector3(-1.836,-2.461,-2.153),Vector3(-3.325,-2.461,0.0546),Vector3(-1.686,-2.461,2.153),Vector3(0.8158,-2.461,1.242),Vector3(0.7229,-2.461,-1.419),Vector3(-1.369,-0.8329,-1.709),Vector3(-2.445,-0.8329,-0.4004),Vector3(-1.888,-0.8329,1.436),Vector3(-0.4682,-0.8329,1.262),Vector3(-0.1476,-0.8329,-0.6818),Vector3(-1.431,-5.952,-1.383),Vector3(-2.548,-5.952,-0.3332),Vector3(-1.97,-5.952,1.14),Vector3(-0.495,-5.952,1),Vector3(-0.162,-5.952,-0.5588),Vector3(-1.466,-9.522,-1.332),Vector3(-2.541,-9.522,-0.3218),Vector3(-1.985,-9.522,1.096),Vector3(-0.565,-9.522,0.9618),Vector3(-0.2445,-9.522,-0.539),Vector3(-1.422,-10.01,-0.792),Vector3(-2.053,-10.01,-0.1998),Vector3(-1.726,-10.01,0.6312),Vector3(-0.8942,-10.01,0.5525),Vector3(-0.7063,-10.01,-0.3271)]);
{ .SetCoord }
IndexedFaceSet168.Coord := Coordinate169;
TextureCoordinate170 := TTextureCoordinateNode.Create;
TextureCoordinate170.SetPoint([Vector2(0.2986,0.2114),Vector2(0.2726,0.2114),Vector2(0.3201,0.2114),Vector2(0.3415,0.2114),Vector2(0.2466,0.2114),Vector2(0.2979,0.2417),Vector2(0.2726,0.2417),Vector2(0.3197,0.2417),Vector2(0.3418,0.2417),Vector2(0.2473,0.2417),Vector2(0.2979,0.3018),Vector2(0.2726,0.3018),Vector2(0.3197,0.3018),Vector2(0.3418,0.3018),Vector2(0.2473,0.3018),Vector2(0.2978,0.3276),Vector2(0.2726,0.3276),Vector2(0.3197,0.3276),Vector2(0.3419,0.3276),Vector2(0.2474,0.3276),Vector2(0.2932,0.2834),Vector2(0.2689,0.2834),Vector2(0.316,0.2834),Vector2(0.3322,0.2834),Vector2(0.245,0.2834),Vector2(0.2251,0.2114),Vector2(0.2255,0.2417),Vector2(0.2255,0.2417),Vector2(0.2255,0.3018),Vector2(0.2255,0.3018),Vector2(0.2255,0.3276),Vector2(0.2255,0.3276),Vector2(0.2159,0.2834),Vector2(0.4315,0.6736),Vector2(0.442,0.6736),Vector2(0.3947,0.6736),Vector2(0.4041,0.6736),Vector2(0.418,0.6736),Vector2(0.4296,0.6167),Vector2(0.4409,0.6167),Vector2(0.4415,0.6485),Vector2(0.4303,0.6485),Vector2(0.3965,0.6167),Vector2(0.3953,0.6485),Vector2(0.4047,0.6167),Vector2(0.4053,0.6485),Vector2(0.4189,0.6167),Vector2(0.418,0.6485),Vector2(0.4415,0.6706),Vector2(0.4306,0.6706),Vector2(0.395,0.6706),Vector2(0.4051,0.6706),Vector2(0.4182,0.6706),Vector2(0.3746,0.6736),Vector2(0.3851,0.6736),Vector2(0.384,0.6167),Vector2(0.3845,0.6485),Vector2(0.3845,0.6485),Vector2(0.3846,0.6706),Vector2(0.3846,0.6706),Vector2(0.3851,0.6736),Vector2(0.3481,0.2114)]);
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
HAnimJoint171.Center := Vector3(-6.823,36.080002,0.08607);
HAnimJoint171.SetUlimit([0,0,0]);
HAnimJoint171.SetLlimit([0,0,0]);
HAnimSegment172 := THAnimSegmentNode.Create;
HAnimSegment172.NameField := 'r_forearm';
Transform173 := TTransformNode.Create;
Transform173.Translation := Vector3(-6.823,36.080002,0.08607);
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
IndexedFaceSet178.SetCoordIndex([1,2,3,-1,0,1,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
IndexedFaceSet178.CreaseAngle := 1.57;
IndexedFaceSet178.SetTexCoordIndex([25,2,3,-1,26,25,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
Coordinate179 := TCoordinateNode.Create;
Coordinate179.SetPoint([Vector3(-0.1597,0.4908,-1.015),Vector3(-0.9881,0.4908,-0.2281),Vector3(-0.5166,0.4908,0.9165),Vector3(0.6033,0.4908,0.8366),Vector3(0.8239,0.4908,-0.3574),Vector3(-0.1063,-0.5229,-1.433),Vector3(-1.277,-0.5229,-0.3764),Vector3(-0.6107,-0.5229,1.433),Vector3(0.972,-0.5229,1.306),Vector3(1.284,-0.5229,-0.5807),Vector3(-0.117,-2.864,-1.416),Vector3(-1.367,-2.864,-0.3724),Vector3(-0.6839,-2.352,1.419),Vector3(1.006,-2.352,1.294),Vector3(1.367,-2.864,-0.5747),Vector3(-0.0931,-7.459,-1.267),Vector3(-1.005,-7.459,-0.1128),Vector3(-0.4859,-7.459,1.331),Vector3(0.7465,-7.459,1.214),Vector3(0.9892,-7.459,-0.3022),Vector3(-0.054,-8.009,-0.7805),Vector3(-0.6765,-8.009,0.0074),Vector3(-0.3221,-8.009,0.919),Vector3(0.5194,-8.009,0.8391),Vector3(0.6852,-8.009,-0.1219)]);
{ .SetCoord }
IndexedFaceSet178.Coord := Coordinate179;
TextureCoordinate180 := TTextureCoordinateNode.Create;
TextureCoordinate180.SetPoint([Vector2(0.4222,0.6201),Vector2(0.4327,0.6201),Vector2(0.3884,0.6201),Vector2(0.3987,0.6201),Vector2(0.4103,0.6201),Vector2(0.4213,0.6265),Vector2(0.4321,0.6265),Vector2(0.3894,0.6265),Vector2(0.399,0.6265),Vector2(0.4105,0.6265),Vector2(0.4214,0.6413),Vector2(0.4323,0.6413),Vector2(0.389,0.6381),Vector2(0.3992,0.6381),Vector2(0.4103,0.6413),Vector2(0.4213,0.6705),Vector2(0.4336,0.6705),Vector2(0.3899,0.6705),Vector2(0.3981,0.6705),Vector2(0.4094,0.6705),Vector2(0.4215,0.674),Vector2(0.4346,0.674),Vector2(0.3899,0.674),Vector2(0.398,0.674),Vector2(0.4083,0.674),Vector2(0.3787,0.6201),Vector2(0.3682,0.6201),Vector2(0.3787,0.6201),Vector2(0.3782,0.6265),Vector2(0.3782,0.6265),Vector2(0.3783,0.6413),Vector2(0.3783,0.6413),Vector2(0.3796,0.6705),Vector2(0.3676,0.674),Vector2(0.3806,0.674),Vector2(0.3796,0.6705),Vector2(0.3806,0.674)]);
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
HAnimJoint181.Center := Vector3(-6.915,28.41,0.3752);
HAnimJoint181.SetUlimit([0,0,0]);
HAnimJoint181.SetLlimit([0,0,0]);
HAnimSegment182 := THAnimSegmentNode.Create;
HAnimSegment182.NameField := 'r_carpal';
Transform183 := TTransformNode.Create;
Transform183.Translation := Vector3(-6.915,28.41,0.3752);
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
IndexedFaceSet188.SetCoordIndex([4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,22,23,27,-1,26,24,25,-1]);
IndexedFaceSet188.CreaseAngle := 1.57;
IndexedFaceSet188.SetTexCoordIndex([4,7,5,-1,5,6,4,-1,2,0,1,-1,1,3,2,-1,14,17,15,-1,15,16,14,-1,8,4,6,-1,6,9,8,-1,38,41,39,-1,39,40,38,-1,18,37,36,-1,36,19,18,-1,10,8,9,-1,9,11,10,-1,42,38,40,-1,40,43,42,-1,20,18,19,-1,19,21,20,-1,22,23,24,-1,24,23,25,-1,25,26,24,-1,27,30,28,-1,28,29,27,-1,31,32,25,-1,25,23,31,-1,33,34,31,-1,34,35,32,-1,32,31,34,-1,20,21,35,-1,35,34,20,-1,8,13,12,-1,12,4,8,-1,22,29,28,-1,28,23,22,-1,23,28,30,-1,30,31,23,-1,31,30,27,-1,27,33,31,-1,14,26,24,-1,14,24,16,-1]);
Coordinate189 := TCoordinateNode.Create;
Coordinate189.SetPoint([Vector3(-0.6237,0.0984,0.703),Vector3(-0.5903,0.1133,-1.189),Vector3(1.101,0.02,0.7856),Vector3(1.108,0.0215,-1.131),Vector3(1.289,-0.5207,1.303),Vector3(-0.9805,-0.3349,1.224),Vector3(-0.9287,-0.3062,-1.753),Vector3(1.391,-0.5055,-1.749),Vector3(1.18,-2.202,2.123),Vector3(-1.263,-2.015,1.834),Vector3(-1.211,-1.986,-2.123),Vector3(1.505,-2.287,-1.981),Vector3(0.9466,-3.466,1.493),Vector3(-0.3369,-3.669,1.543),Vector3(-0.2851,-3.64,-1.826),Vector3(1.135,-3.477,-1.705),Vector3(1.385,-0.5072,-0.165),Vector3(1.903,-2.244,1.711),Vector3(2.187,-0.825,0.0512),Vector3(2.154,-0.8839,1.662),Vector3(1.908,-2.242,0.1214),Vector3(1.394,-2.282,-0.1776),Vector3(-0.5903,0.1133,-1.189),Vector3(1.108,0.0215,-1.131),Vector3(1.101,0.02,0.7856),Vector3(-0.6237,0.0984,0.703),Vector3(-0.5903,0.1133,-1.189),Vector3(1.101,0.02,0.7856)]);
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
HAnimJoint191.Center := Vector3(0,35.75,-0.445);
HAnimJoint191.SetUlimit([0,0,0]);
HAnimJoint191.SetLlimit([0,0,0]);
HAnimSegment192 := THAnimSegmentNode.Create;
HAnimSegment192.NameField := 'l5';
Transform193 := TTransformNode.Create;
Transform193.Translation := Vector3(0,35.75,-0.445);
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
IndexedFaceSet198.SetCoordIndex([3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1,121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1,79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1]);
IndexedFaceSet198.CreaseAngle := 1.57;
IndexedFaceSet198.SetTexCoordIndex([2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,13,11,-1,11,12,10,-1,14,16,13,-1,13,15,14,-1,13,10,15,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1,140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,12,11,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,16,14,9,-1,9,8,16,-1,105,101,93,-1,93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,184,183,188,-1,188,189,184,-1,183,185,190,-1,190,188,183,-1,185,186,191,-1,191,190,185,-1,186,187,192,-1,192,191,186,-1,193,194,195,-1,195,196,193,-1,187,193,196,-1,196,192,187,-1,201,197,184,-1,184,189,201,-1,202,198,197,-1,197,201,202,-1,203,199,198,-1,198,202,203,-1,204,200,199,-1,199,203,204,-1,195,194,205,-1,205,206,195,-1,206,205,200,-1,200,204,206,-1]);
Coordinate199 := TCoordinateNode.Create;
Coordinate199.SetPoint([Vector3(0.6107,12.56,-1.113),Vector3(0,12.61,-1.194),Vector3(1.295,12.75,-0.8021),Vector3(1.777,12.73,0.248),Vector3(1.387,12.47,0.9786),Vector3(2.569,12.34,0.2936),Vector3(2.291,13.13,-1.24),Vector3(2.809,11.57,1.36),Vector3(1.974,11.38,2.848),Vector3(0.8488,13.15,-2.779),Vector3(0,13.13,-2.924),Vector3(1.794,13.17,-2.481),Vector3(2.923,10.45,2.618),Vector3(4.483,11.16,1.773),Vector3(2.628,12.14,1.922),Vector3(1.979,11.38,3.368),Vector3(2.76,10.73,3.438),Vector3(3.896,11.87,1.856),Vector3(4.938,11.69,0.1642),Vector3(4.823,11.1,-1.28),Vector3(3.031,13.07,0.3237),Vector3(3.485,12.31,-1.963),Vector3(4.472,12.61,0.3237),Vector3(4.103,11.48,-1.569),Vector3(1.597,8.259,-2.142),Vector3(0,7.991,-2.26),Vector3(3.738,9.105,-1.801),Vector3(0.9095,10.64,-3.903),Vector3(0,10.65,-4.021),Vector3(2.106,10.98,-3.451),Vector3(1.479,7.69,-2.774),Vector3(0,7.406,-2.879),Vector3(3.632,9.027,-2.673),Vector3(3.766,6.756,3.69),Vector3(5.601,7.314,1.36),Vector3(1.886,7.153,-2.082),Vector3(3.79,7.244,-1.629),Vector3(3.257,4.51,2.44),Vector3(4.479,4.543,1.327),Vector3(5.374,8.636,1.472),Vector3(5.204,8.627,-0.2911),Vector3(4.877,7.273,-0.6872),Vector3(1.251,4.413,-1.956),Vector3(3.156,4.461,-1.264),Vector3(4.225,4.505,-0.2194),Vector3(3.245,2.754,2.489),Vector3(4.476,2.788,1.346),Vector3(1.13,2.499,-2.085),Vector3(3.161,2.674,-1.267),Vector3(4.224,2.739,-0.2643),Vector3(3.683,0.6999,3.482),Vector3(5.077,0.7315,1.758),Vector3(1.34,0.562,-3.242),Vector3(3.482,0.5706,-2.236),Vector3(4.68,0.6632,-0.6521),Vector3(3.34,-0.2471,2.828),Vector3(4.554,-0.2191,1.485),Vector3(1.405,-0.3523,-2.359),Vector3(3.174,-0.3325,-1.628),Vector3(4.268,-0.2911,-0.3915),Vector3(6.522,11.45,0.1642),Vector3(6.152,10.73,-1.28),Vector3(6.169,10.78,1.674),Vector3(5.552,8.771,1.472),Vector3(5.546,8.764,-0.2911),Vector3(0,12.23,1.525),Vector3(0.688,12.24,1.418),Vector3(0,10.3,3.439),Vector3(1.21,10.77,3.233),Vector3(0,9.33,3.389),Vector3(1.51,9.991,3.233),Vector3(1.216,10.77,3.647),Vector3(0,9.677,3.844),Vector3(1.404,10.27,3.824),Vector3(1.392,7.29,3.597),Vector3(1.139,4.483,2.845),Vector3(1.129,2.572,2.941),Vector3(1.441,0.673,4.021),Vector3(1.406,-0.2812,3.213),Vector3(0,10.35,3.579),Vector3(-0.6107,12.56,-1.113),Vector3(-1.295,12.75,-0.8021),Vector3(-1.777,12.73,0.248),Vector3(-1.387,12.47,0.9786),Vector3(-2.569,12.34,0.2936),Vector3(-2.291,13.13,-1.24),Vector3(-2.809,11.57,1.36),Vector3(-1.974,11.38,2.848),Vector3(-0.8488,13.15,-2.779),Vector3(-1.794,13.17,-2.481),Vector3(-2.923,10.45,2.618),Vector3(-4.483,11.16,1.773),Vector3(-2.628,12.14,1.922),Vector3(-1.979,11.38,3.368),Vector3(-2.76,10.73,3.438),Vector3(-3.896,11.87,1.856),Vector3(-4.938,11.69,0.1642),Vector3(-4.823,11.1,-1.28),Vector3(-3.031,13.07,0.3237),Vector3(-3.485,12.31,-1.963),Vector3(-4.472,12.61,0.3237),Vector3(-4.103,11.48,-1.569),Vector3(-1.597,8.259,-2.142),Vector3(-3.738,9.105,-1.801),Vector3(-0.9095,10.64,-3.903),Vector3(-2.106,10.98,-3.451),Vector3(-1.479,7.69,-2.774),Vector3(-3.632,9.027,-2.673),Vector3(-3.766,6.756,3.69),Vector3(-5.601,7.314,1.36),Vector3(-1.886,7.153,-2.082),Vector3(-3.79,7.244,-1.629),Vector3(-3.257,4.51,2.44),Vector3(-4.479,4.543,1.327),Vector3(-5.374,8.636,1.472),Vector3(-5.204,8.627,-0.2911),Vector3(-4.877,7.273,-0.6872),Vector3(-1.251,4.413,-1.956),Vector3(-3.156,4.461,-1.264),Vector3(-4.225,4.505,-0.2194),Vector3(-3.245,2.754,2.489),Vector3(-4.476,2.788,1.346),Vector3(-1.13,2.499,-2.085),Vector3(-3.161,2.674,-1.267),Vector3(-4.224,2.739,-0.2643),Vector3(-3.683,0.6999,3.482),Vector3(-5.077,0.7315,1.758),Vector3(-1.34,0.562,-3.242),Vector3(-3.482,0.5706,-2.236),Vector3(-4.68,0.6632,-0.6521),Vector3(-3.34,-0.2471,2.828),Vector3(-4.554,-0.2191,1.485),Vector3(-1.405,-0.3523,-2.359),Vector3(-3.174,-0.3325,-1.628),Vector3(-4.268,-0.2911,-0.3915),Vector3(-6.522,11.45,0.1642),Vector3(-6.152,10.73,-1.28),Vector3(-6.169,10.78,1.674),Vector3(-5.552,8.771,1.472),Vector3(-5.546,8.764,-0.2911),Vector3(-0.688,12.24,1.418),Vector3(-1.21,10.77,3.233),Vector3(-1.51,9.991,3.233),Vector3(-1.216,10.77,3.647),Vector3(-1.404,10.27,3.824),Vector3(-1.392,7.29,3.597),Vector3(-1.139,4.483,2.845),Vector3(-1.129,2.572,2.941),Vector3(-1.441,0.673,4.021),Vector3(-1.406,-0.2812,3.213),Vector3(0.6107,15.68,-1.113),Vector3(0,15.68,-1.194),Vector3(1.295,15.68,-0.8021),Vector3(1.777,15.68,0.2481),Vector3(1.387,15.68,0.9786),Vector3(0.6107,11.94,-1.113),Vector3(0,12.01,-1.194),Vector3(1.295,12.24,-0.8021),Vector3(1.777,12.21,0.248),Vector3(1.387,11.79,0.9786),Vector3(0.6881,15.83,1.418),Vector3(0,15.19,1.525),Vector3(0,11.42,1.525),Vector3(0.6881,11.43,1.418),Vector3(-0.6107,15.68,-1.113),Vector3(-1.295,15.68,-0.8021),Vector3(-1.777,15.68,0.2481),Vector3(-1.387,15.68,0.9786),Vector3(-0.6107,11.94,-1.113),Vector3(-1.295,12.24,-0.8021),Vector3(-1.777,12.21,0.2481),Vector3(-1.387,11.79,0.9786),Vector3(-0.6881,15.83,1.418),Vector3(-0.688,11.43,1.418)]);
{ .SetCoord }
IndexedFaceSet198.Coord := Coordinate199;
TextureCoordinate200 := TTextureCoordinateNode.Create;
TextureCoordinate200.SetPoint([Vector2(0.4134,0.6454),Vector2(0.4115,0.6346),Vector2(0.4055,0.6342),Vector2(0.4025,0.6415),Vector2(0.4012,0.6643),Vector2(0.407,0.6604),Vector2(0.3972,0.646),Vector2(0.4018,0.6236),Vector2(0.3919,0.6471),Vector2(0.3919,0.6664),Vector2(0.3705,0.6454),Vector2(0.3784,0.6342),Vector2(0.3723,0.6346),Vector2(0.3814,0.6415),Vector2(0.3827,0.6643),Vector2(0.3769,0.6604),Vector2(0.3867,0.646),Vector2(0.3821,0.6236),Vector2(0.2661,0.5914),Vector2(0.3505,0.5919),Vector2(0.3554,0.5911),Vector2(0.2505,0.5754),Vector2(0.241,0.592),Vector2(0.2112,0.5805),Vector2(0.0763,0.4945),Vector2(0.1025,0.5076),Vector2(0.0865,0.5614),Vector2(0.0652,0.5465),Vector2(0.1412,0.5207),Vector2(0.1108,0.5655),Vector2(0.0786,0.5849),Vector2(0.0516,0.5759),Vector2(0.1073,0.5839),Vector2(0.0639,0.4488),Vector2(0.0877,0.4617),Vector2(0.0525,0.4715),Vector2(0.1185,0.4741),Vector2(0.1474,0.4856),Vector2(0.1724,0.5255),Vector2(0.2089,0.5196),Vector2(0.2133,0.556),Vector2(0.1645,0.5709),Vector2(0.2067,0.5908),Vector2(0.1632,0.5887),Vector2(0.1708,0.4854),Vector2(0.1963,0.4863),Vector2(0.2708,0.4736),Vector2(0.347,0.4316),Vector2(0.3616,0.5328),Vector2(0.2733,0.5359),Vector2(0.238,0.493),Vector2(0.249,0.5451),Vector2(0.2638,0.4568),Vector2(0.3214,0.4203),Vector2(0.2252,0.4828),Vector2(0.042,0.406),Vector2(0.0909,0.398),Vector2(0.2183,0.385),Vector2(0.3504,0.3844),Vector2(0.0206,0.3452),Vector2(0.0903,0.3446),Vector2(0.1491,0.3449),Vector2(0.1525,0.3869),Vector2(0.1538,0.4251),Vector2(0.1784,0.4249),Vector2(0.1911,0.3858),Vector2(0.2175,0.3427),Vector2(0.3608,0.3469),Vector2(0.1838,0.3438),Vector2(0.0177,0.3051),Vector2(0.0982,0.302),Vector2(0.1487,0.2975),Vector2(0.2175,0.2944),Vector2(0.3621,0.2922),Vector2(0.1849,0.2961),Vector2(0.019,0.2349),Vector2(0.1011,0.241),Vector2(0.1445,0.2419),Vector2(0.2369,0.2375),Vector2(0.3561,0.2404),Vector2(0.1927,0.24),Vector2(0.0206,0.2122),Vector2(0.1067,0.2154),Vector2(0.1463,0.2162),Vector2(0.227,0.2131),Vector2(0.3536,0.2151),Vector2(0.1879,0.2143),Vector2(0.1715,0.4655),Vector2(0.1797,0.4646),Vector2(0.1569,0.4642),Vector2(0.1544,0.4288),Vector2(0.1782,0.4286),Vector2(0.0346,0.5664),Vector2(0.0399,0.5407),Vector2(0.2661,0.5914),Vector2(0.2505,0.5754),Vector2(0.241,0.592),Vector2(0.2112,0.5805),Vector2(0.0763,0.4945),Vector2(0.0865,0.5614),Vector2(0.1025,0.5076),Vector2(0.0652,0.5465),Vector2(0.1108,0.5655),Vector2(0.1412,0.5207),Vector2(0.0786,0.5849),Vector2(0.0516,0.5759),Vector2(0.1073,0.5839),Vector2(0.0877,0.4617),Vector2(0.1185,0.4741),Vector2(0.1474,0.4857),Vector2(0.1724,0.5255),Vector2(0.2133,0.556),Vector2(0.2089,0.5196),Vector2(0.1645,0.5709),Vector2(0.2067,0.5908),Vector2(0.1632,0.5887),Vector2(0.1708,0.4854),Vector2(0.1963,0.4863),Vector2(0.2708,0.4736),Vector2(0.2733,0.5359),Vector2(0.238,0.493),Vector2(0.249,0.5451),Vector2(0.2638,0.4568),Vector2(0.2252,0.4828),Vector2(0.042,0.406),Vector2(0.0909,0.398),Vector2(0.2183,0.385),Vector2(0.3504,0.3844),Vector2(0.0206,0.3452),Vector2(0.0903,0.3446),Vector2(0.1525,0.3869),Vector2(0.1491,0.3449),Vector2(0.1538,0.4251),Vector2(0.1784,0.4249),Vector2(0.1911,0.3858),Vector2(0.2175,0.3427),Vector2(0.3608,0.3469),Vector2(0.1838,0.3438),Vector2(0.0177,0.3051),Vector2(0.0982,0.302),Vector2(0.1487,0.2975),Vector2(0.2175,0.2944),Vector2(0.3621,0.2922),Vector2(0.1849,0.2961),Vector2(0.019,0.2349),Vector2(0.1011,0.241),Vector2(0.1445,0.2419),Vector2(0.2369,0.2375),Vector2(0.3561,0.2404),Vector2(0.1927,0.24),Vector2(0.0206,0.2122),Vector2(0.1067,0.2154),Vector2(0.1463,0.2162),Vector2(0.227,0.2131),Vector2(0.3536,0.2151),Vector2(0.1879,0.2143),Vector2(0.1715,0.4655),Vector2(0.1797,0.4646),Vector2(0.1569,0.4642),Vector2(0.1544,0.4288),Vector2(0.1782,0.4286),Vector2(0.3477,0.431),Vector2(0.3623,0.5333),Vector2(0.3623,0.5333),Vector2(0.3505,0.5919),Vector2(0.3223,0.4192),Vector2(0.3477,0.431),Vector2(0.3223,0.4192),Vector2(0.3518,0.3851),Vector2(0.3554,0.5911),Vector2(0.3505,0.5919),Vector2(0.3505,0.5919),Vector2(0.3518,0.3851),Vector2(0.3518,0.3851),Vector2(0.3629,0.3439),Vector2(0.3629,0.3439),Vector2(0.3633,0.2922),Vector2(0.3633,0.2922),Vector2(0.3553,0.2398),Vector2(0.3553,0.2398),Vector2(0.3555,0.2151),Vector2(0.3511,0.5932),Vector2(0.3536,0.2151),Vector2(0.3995,0.6721),Vector2(0.3906,0.6721),Vector2(0.4094,0.6721),Vector2(0.4164,0.6721),Vector2(0.4107,0.6721),Vector2(0.3995,0.6285),Vector2(0.3906,0.6293),Vector2(0.4094,0.632),Vector2(0.4164,0.6316),Vector2(0.4107,0.6267),Vector2(0.4006,0.6738),Vector2(0.3906,0.6664),Vector2(0.3906,0.6224),Vector2(0.4006,0.6225),Vector2(0.3818,0.6721),Vector2(0.3719,0.6721),Vector2(0.3649,0.6721),Vector2(0.3706,0.6721),Vector2(0.3818,0.6285),Vector2(0.3719,0.632),Vector2(0.3649,0.6316),Vector2(0.3706,0.6267),Vector2(0.3807,0.6738),Vector2(0.3807,0.6225)]);
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
HAnimJoint201.Center := Vector3(0,50.470001,-0.1481);
HAnimJoint201.SetUlimit([0,0,0]);
HAnimJoint201.SetLlimit([0,0,0]);
HAnimSegment202 := THAnimSegmentNode.Create;
HAnimSegment202.NameField := 'skull';
Transform203 := TTransformNode.Create;
Transform203.Translation := Vector3(0,50.470001,-0.1481);
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
IndexedFaceSet208.SetCoordIndex([1,0,2,-1,72,2,73,-1,73,74,72,-1,2,0,75,-1,75,73,2,-1,72,74,76,-1,76,3,72,-1,74,73,77,-1,77,78,74,-1,73,75,79,-1,79,77,73,-1,76,74,78,-1,78,80,76,-1,78,77,81,-1,81,16,78,-1,77,79,82,-1,82,81,77,-1,80,78,16,-1,16,14,80,-1,3,76,5,-1,76,80,83,-1,83,5,76,-1,80,14,12,-1,12,83,80,-1,75,84,85,-1,85,79,75,-1,79,85,86,-1,86,82,79,-1,85,84,87,-1,87,88,85,-1,86,85,88,-1,88,89,86,-1,0,87,84,-1,84,75,0,-1,81,82,91,-1,91,90,81,-1,82,86,92,-1,92,91,82,-1,86,89,93,-1,93,92,86,-1,90,91,94,-1,94,33,90,-1,91,92,95,-1,95,94,91,-1,92,93,96,-1,96,95,92,-1,179,185,4,-1,8,6,10,-1,10,11,8,-1,6,12,13,-1,13,10,6,-1,12,14,15,-1,15,13,12,-1,15,14,16,-1,16,17,15,-1,17,16,18,-1,18,19,17,-1,19,18,20,-1,20,21,19,-1,11,10,22,-1,22,23,11,-1,10,13,24,-1,24,22,10,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,21,27,19,-1,23,22,28,-1,28,29,23,-1,22,24,30,-1,30,28,22,-1,25,31,30,-1,30,24,25,-1,25,26,32,-1,32,31,25,-1,26,27,33,-1,33,32,26,-1,27,21,34,-1,34,33,27,-1,9,8,35,-1,35,36,9,-1,8,11,23,-1,23,35,8,-1,23,29,37,-1,37,35,23,-1,31,32,39,-1,39,40,31,-1,40,39,41,-1,41,42,40,-1,31,40,43,-1,32,44,39,-1,42,41,45,-1,45,46,42,-1,40,42,46,-1,46,43,40,-1,41,39,44,-1,44,45,41,-1,47,48,50,-1,50,49,47,-1,50,51,52,-1,52,49,50,-1,52,51,53,-1,53,54,52,-1,54,53,55,-1,55,56,54,-1,56,55,57,-1,57,58,56,-1,50,48,59,-1,59,60,50,-1,51,50,60,-1,60,61,51,-1,53,51,61,-1,61,62,53,-1,55,53,62,-1,62,63,55,-1,57,55,63,-1,63,64,57,-1,62,61,65,-1,65,66,62,-1,63,62,66,-1,66,67,63,-1,64,63,67,-1,67,68,64,-1,28,30,65,-1,67,66,45,-1,45,69,67,-1,68,67,69,-1,69,70,68,-1,30,31,43,-1,65,30,43,-1,43,46,65,-1,66,65,46,-1,46,45,66,-1,48,47,38,-1,38,37,48,-1,59,48,37,-1,37,29,59,-1,33,94,97,-1,97,71,33,-1,94,95,98,-1,98,97,94,-1,95,96,99,-1,99,98,95,-1,32,33,71,-1,71,44,32,-1,71,69,45,-1,45,44,71,-1,97,70,69,-1,69,71,97,-1,97,98,70,-1,83,12,6,-1,6,5,83,-1,21,20,81,-1,81,90,21,-1,34,21,90,-1,90,33,34,-1,1,100,0,-1,158,100,72,-1,72,159,158,-1,160,0,100,-1,100,158,160,-1,161,159,72,-1,72,3,161,-1,162,158,159,-1,159,163,162,-1,164,160,158,-1,158,162,164,-1,163,159,161,-1,161,165,163,-1,166,162,163,-1,163,110,166,-1,167,164,162,-1,162,166,167,-1,110,163,165,-1,165,108,110,-1,3,195,101,-1,101,161,3,-1,168,165,161,-1,161,101,168,-1,106,108,165,-1,165,168,106,-1,170,169,160,-1,160,164,170,-1,171,170,164,-1,164,167,171,-1,87,169,170,-1,170,88,87,-1,88,170,171,-1,171,89,88,-1,169,87,0,-1,0,160,169,-1,173,167,166,-1,166,172,173,-1,174,171,167,-1,167,173,174,-1,93,89,171,-1,171,174,93,-1,175,173,172,-1,172,127,175,-1,176,174,173,-1,173,175,176,-1,96,93,174,-1,174,176,96,-1,104,102,103,-1,103,105,104,-1,107,106,102,-1,102,104,107,-1,109,108,106,-1,106,107,109,-1,110,108,109,-1,109,111,110,-1,112,110,111,-1,111,113,112,-1,114,112,113,-1,113,115,114,-1,116,104,105,-1,105,117,116,-1,118,107,104,-1,104,116,118,-1,119,109,107,-1,107,118,119,-1,120,111,109,-1,109,119,120,-1,121,113,111,-1,111,120,121,-1,115,113,121,-1,122,116,117,-1,117,123,122,-1,124,118,116,-1,116,122,124,-1,124,125,119,-1,119,118,124,-1,126,120,119,-1,119,125,126,-1,127,121,120,-1,120,126,127,-1,128,115,121,-1,121,127,128,-1,129,103,9,-1,9,36,129,-1,117,105,103,-1,103,129,117,-1,130,123,117,-1,117,129,130,-1,131,126,125,-1,125,132,131,-1,133,131,132,-1,132,134,133,-1,125,135,132,-1,126,131,136,-1,137,133,134,-1,134,138,137,-1,138,134,132,-1,132,135,138,-1,136,131,133,-1,133,137,136,-1,140,139,47,-1,47,49,140,-1,52,141,140,-1,140,49,52,-1,142,141,52,-1,52,54,142,-1,143,142,54,-1,54,56,143,-1,144,143,56,-1,56,58,144,-1,145,139,140,-1,140,146,145,-1,146,140,141,-1,141,147,146,-1,147,141,142,-1,142,148,147,-1,148,142,143,-1,143,149,148,-1,149,143,144,-1,144,150,149,-1,148,152,151,-1,151,147,148,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,122,151,124,-1,137,152,153,-1,153,155,137,-1,155,153,154,-1,154,156,155,-1,124,135,125,-1,135,124,151,-1,151,138,135,-1,138,151,152,-1,152,137,138,-1,38,47,139,-1,139,130,38,-1,130,139,145,-1,145,123,130,-1,177,175,127,-1,127,157,177,-1,178,176,175,-1,175,177,178,-1,99,96,176,-1,176,178,99,-1,157,127,126,-1,126,136,157,-1,137,155,157,-1,157,136,137,-1,155,156,177,-1,177,157,155,-1,177,156,178,-1,102,106,168,-1,168,101,102,-1,166,114,115,-1,115,172,166,-1,172,115,128,-1,128,127,172,-1,182,187,188,-1,189,190,194,-1,191,192,193,-1,5,6,183,-1,183,195,5,-1,102,101,195,-1,195,183,102,-1,9,103,7,-1,7,8,9,-1,103,102,7,-1,8,7,6,-1,65,61,60,-1,60,28,65,-1,147,151,122,-1,122,146,147,-1,180,6,7,-1,7,184,180,-1,186,184,7,-1,7,102,186,-1,4,185,180,-1,180,184,4,-1,181,4,184,-1,184,186,181,-1,72,1,2,-1,72,100,1,-1,129,36,38,-1,38,130,129,-1,35,37,38,-1,38,36,35,-1,181,179,4,-1,123,145,146,-1,146,122,123,-1,60,59,29,-1,29,28,60,-1]);
IndexedFaceSet208.CreaseAngle := 1.57;
IndexedFaceSet208.SetTexCoordIndex([0,1,2,-1,5,2,3,-1,3,4,5,-1,2,1,6,-1,6,3,2,-1,5,4,7,-1,7,8,5,-1,4,3,9,-1,9,10,4,-1,3,6,11,-1,11,9,3,-1,7,4,10,-1,10,12,7,-1,10,9,13,-1,13,14,10,-1,9,11,15,-1,15,13,9,-1,12,10,14,-1,14,16,12,-1,8,7,17,-1,7,12,18,-1,18,17,7,-1,12,16,19,-1,19,18,12,-1,6,21,20,-1,20,11,6,-1,11,20,22,-1,22,15,11,-1,20,21,23,-1,23,24,20,-1,22,20,24,-1,24,25,22,-1,1,23,21,-1,21,6,1,-1,13,15,26,-1,26,27,13,-1,15,22,28,-1,28,26,15,-1,22,25,29,-1,29,28,22,-1,27,26,30,-1,30,31,27,-1,26,28,32,-1,32,30,26,-1,28,29,33,-1,33,32,28,-1,94,95,96,-1,99,100,97,-1,97,98,99,-1,100,102,101,-1,101,97,100,-1,102,104,103,-1,103,101,102,-1,103,104,105,-1,105,106,103,-1,106,105,107,-1,107,108,106,-1,108,107,109,-1,109,110,108,-1,98,97,111,-1,111,112,98,-1,97,101,113,-1,113,111,97,-1,101,103,114,-1,114,113,101,-1,103,106,115,-1,115,114,103,-1,106,108,116,-1,116,115,106,-1,110,116,108,-1,112,111,117,-1,117,118,112,-1,111,113,119,-1,119,117,111,-1,114,120,119,-1,119,113,114,-1,114,115,121,-1,121,120,114,-1,115,116,122,-1,122,121,115,-1,116,110,123,-1,123,122,116,-1,126,99,124,-1,124,125,126,-1,99,98,112,-1,112,124,99,-1,112,118,127,-1,127,124,112,-1,36,37,34,-1,34,35,36,-1,35,34,38,-1,38,39,35,-1,36,35,40,-1,37,41,34,-1,39,38,42,-1,42,43,39,-1,35,39,43,-1,43,40,35,-1,38,34,41,-1,41,42,38,-1,129,131,130,-1,130,128,129,-1,130,135,132,-1,132,128,130,-1,132,135,133,-1,133,134,132,-1,134,133,136,-1,136,137,134,-1,137,136,138,-1,138,139,137,-1,130,131,140,-1,140,141,130,-1,135,130,141,-1,141,142,135,-1,133,135,142,-1,142,143,133,-1,136,133,143,-1,143,144,136,-1,138,136,144,-1,144,145,138,-1,143,142,146,-1,146,147,143,-1,144,143,147,-1,147,148,144,-1,145,144,148,-1,148,149,145,-1,117,119,146,-1,148,147,150,-1,150,151,148,-1,149,148,151,-1,151,152,149,-1,44,36,40,-1,146,119,153,-1,153,154,146,-1,147,146,154,-1,154,150,147,-1,131,129,155,-1,155,127,131,-1,140,131,127,-1,127,118,140,-1,31,30,45,-1,45,46,31,-1,30,32,47,-1,47,45,30,-1,32,33,48,-1,48,47,32,-1,37,31,46,-1,46,41,37,-1,157,151,150,-1,150,156,157,-1,158,152,151,-1,151,157,158,-1,45,47,49,-1,18,19,50,-1,50,17,18,-1,110,109,159,-1,159,160,110,-1,123,110,160,-1,160,122,123,-1,0,51,1,-1,52,51,5,-1,5,53,52,-1,54,1,51,-1,51,52,54,-1,55,53,5,-1,5,8,55,-1,56,52,53,-1,53,57,56,-1,58,54,52,-1,52,56,58,-1,57,53,55,-1,55,59,57,-1,60,56,57,-1,57,61,60,-1,62,58,56,-1,56,60,62,-1,61,57,59,-1,59,63,61,-1,8,92,64,-1,64,55,8,-1,65,59,55,-1,55,64,65,-1,66,63,59,-1,59,65,66,-1,67,68,54,-1,54,58,67,-1,69,67,58,-1,58,62,69,-1,23,68,67,-1,67,24,23,-1,24,67,69,-1,69,25,24,-1,68,23,1,-1,1,54,68,-1,70,62,60,-1,60,71,70,-1,72,69,62,-1,62,70,72,-1,29,25,69,-1,69,72,29,-1,73,70,71,-1,71,74,73,-1,75,72,70,-1,70,73,75,-1,33,29,72,-1,72,75,33,-1,161,164,162,-1,162,163,161,-1,165,166,164,-1,164,161,165,-1,167,168,166,-1,166,165,167,-1,169,168,167,-1,167,170,169,-1,171,169,170,-1,170,172,171,-1,173,171,172,-1,172,174,173,-1,175,161,163,-1,163,176,175,-1,177,165,161,-1,161,175,177,-1,178,167,165,-1,165,177,178,-1,179,170,167,-1,167,178,179,-1,180,172,170,-1,170,179,180,-1,174,172,180,-1,181,175,176,-1,176,182,181,-1,183,177,175,-1,175,181,183,-1,183,184,178,-1,178,177,183,-1,185,179,178,-1,178,184,185,-1,186,180,179,-1,179,185,186,-1,187,174,180,-1,180,186,187,-1,188,162,126,-1,126,125,188,-1,176,163,162,-1,162,188,176,-1,189,182,176,-1,176,188,189,-1,76,79,77,-1,77,78,76,-1,80,76,78,-1,78,81,80,-1,77,82,78,-1,79,76,83,-1,84,80,81,-1,81,85,84,-1,85,81,78,-1,78,82,85,-1,83,76,80,-1,80,84,83,-1,190,191,129,-1,129,128,190,-1,132,193,190,-1,190,128,132,-1,192,193,132,-1,132,134,192,-1,194,192,134,-1,134,137,194,-1,195,194,137,-1,137,139,195,-1,196,191,190,-1,190,197,196,-1,197,190,193,-1,193,198,197,-1,198,193,192,-1,192,199,198,-1,199,192,194,-1,194,200,199,-1,200,194,195,-1,195,201,200,-1,199,203,202,-1,202,198,199,-1,203,199,200,-1,200,204,203,-1,204,200,201,-1,201,205,204,-1,181,202,183,-1,206,203,204,-1,204,207,206,-1,207,204,205,-1,205,208,207,-1,86,82,77,-1,210,183,202,-1,202,209,210,-1,209,202,203,-1,203,206,209,-1,155,129,191,-1,191,189,155,-1,189,191,196,-1,196,182,189,-1,87,73,74,-1,74,88,87,-1,89,75,73,-1,73,87,89,-1,48,33,75,-1,75,89,48,-1,88,74,79,-1,79,83,88,-1,206,207,211,-1,211,212,206,-1,207,208,213,-1,213,211,207,-1,87,90,89,-1,91,66,65,-1,65,64,91,-1,214,173,174,-1,174,215,214,-1,215,174,187,-1,187,186,215,-1,92,8,7,-1,7,17,92,-1,64,55,8,-1,17,50,93,-1,93,92,17,-1,91,64,92,-1,92,93,91,-1,126,162,216,-1,216,99,126,-1,162,164,216,-1,99,216,100,-1,146,142,141,-1,141,117,146,-1,198,202,181,-1,181,197,198,-1,218,100,216,-1,216,217,218,-1,219,217,216,-1,216,164,219,-1,96,95,218,-1,218,217,96,-1,220,96,217,-1,217,219,220,-1,5,0,2,-1,5,51,0,-1,188,125,155,-1,155,189,188,-1,124,127,155,-1,155,125,124,-1,220,94,96,-1,182,196,197,-1,197,181,182,-1,141,140,118,-1,118,117,141,-1]);
Coordinate209 := TCoordinateNode.Create;
Coordinate209.SetPoint([Vector3(0.0166,1.591,6.024),Vector3(0.0166,2.016,6.639),Vector3(0.7299,2.016,6.11),Vector3(0.0209,4.487,5.454),Vector3(0.0165,5.97,6.794),Vector3(1.921,6.193,5.758),Vector3(2.695,8.151,5.208),Vector3(0.0166,9.51,6.044),Vector3(2.3,11.24,3.736),Vector3(0.0166,11.46,3.982),Vector3(5.164,9.407,3.779),Vector3(4.307,10.79,3.033),Vector3(3.82,6.132,4.763),Vector3(5.906,6.626,3.937),Vector3(3.93,4.843,4.125),Vector3(5.995,4.599,3.361),Vector3(3.774,3.004,4.212),Vector3(5.738,3.055,3.208),Vector3(3.653,1.816,4.647),Vector3(5.075,1.716,3.573),Vector3(3.373,0.4292,5.256),Vector3(3.73,0.4456,4.303),Vector3(5.818,9.407,1.639),Vector3(4.426,11.17,1.703),Vector3(6.693,6.853,1.603),Vector3(6.69,4.599,1.37),Vector3(6.325,3.055,1.755),Vector3(5.136,1.716,2.106),Vector3(4.756,8.951,-1.064),Vector3(3.294,10.69,-1.162),Vector3(5.624,6.637,0.1137),Vector3(5.042,4.599,0.3258),Vector3(4.844,3.055,0.5342),Vector3(4.061,1.72,1.233),Vector3(3.44,0.483,3.308),Vector3(2.306,12.15,1.922),Vector3(0.0166,11.87,2.256),Vector3(1.253,11.35,-0.9965),Vector3(0.0166,11.28,-1.036),Vector3(5.368,2.823,-0.2563),Vector3(5.506,4.831,-0.3854),Vector3(5.709,3.084,-1.039),Vector3(5.986,4.571,-1.165),Vector3(5.164,4.831,-0.3854),Vector3(4.502,2.839,-0.2487),Vector3(5.285,3.081,-1.044),Vector3(5.51,4.571,-1.165),Vector3(0.0166,10.98,-2.872),Vector3(0.8853,10.98,-2.828),Vector3(0.0166,9.431,-4.658),Vector3(1.4,9.426,-4.596),Vector3(1.764,6.815,-5.634),Vector3(0.0166,6.815,-5.724),Vector3(2.188,2.854,-5.779),Vector3(0.0166,2.854,-5.877),Vector3(2.64,-0.9086,-7.389),Vector3(0.0166,-0.9086,-7.605),Vector3(0.337,-0.2691,-1.013),Vector3(0.0166,-0.2691,-1.08),Vector3(1.806,10.98,-2.622),Vector3(2.963,9.446,-3.86),Vector3(3.907,6.815,-4.527),Vector3(4.17,2.854,-4.609),Vector3(4.781,-0.9086,-5.634),Vector3(0.6963,-0.2691,-0.7539),Vector3(5.077,6.815,-2.044),Vector3(5.153,2.854,-2.244),Vector3(6.034,-0.9086,-2.656),Vector3(1.061,-0.2691,-0.377),Vector3(6.158,-0.9086,-0.7305),Vector3(1.169,-0.2691,0.2302),Vector3(4.061,1.742,0.1251),Vector3(0.0166,2.929,5.407),Vector3(1.728,1.985,5.991),Vector3(1.219,3.07,5.291),Vector3(1.523,1.24,6.024),Vector3(1.506,4.891,5.446),Vector3(2.813,1.939,5.692),Vector3(2.994,3.047,4.872),Vector3(2.236,1.042,5.747),Vector3(3.075,4.957,5.14),Vector3(3.653,1.816,4.647),Vector3(2.831,0.8449,4.999),Vector3(2.989,6.171,5.406),Vector3(0.8003,0.7396,5.803),Vector3(1.267,0.229,5.305),Vector3(1.568,-0.1326,4.693),Vector3(0.0166,0.5157,5.803),Vector3(0.0166,-0.1207,5.579),Vector3(0.0166,-0.8641,5.143),Vector3(4.05,1.82,2.905),Vector3(3.099,0.752,3.012),Vector3(1.743,-0.1026,3.554),Vector3(0.0166,-0.7393,3.994),Vector3(3.099,0.8508,1.273),Vector3(1.222,0.0724,1.917),Vector3(0.0166,-0.3447,1.985),Vector3(3.099,0.8479,0.3903),Vector3(0.5884,-0.1912,0.5953),Vector3(0.0166,-0.5266,0.684),Vector3(-0.6968,2.016,6.11),Vector3(-1.888,6.193,5.758),Vector3(-2.662,8.151,5.208),Vector3(-2.267,11.24,3.736),Vector3(-5.131,9.407,3.779),Vector3(-4.273,10.79,3.033),Vector3(-3.787,6.132,4.763),Vector3(-5.873,6.626,3.937),Vector3(-3.897,4.843,4.125),Vector3(-5.962,4.599,3.361),Vector3(-3.741,3.004,4.212),Vector3(-5.705,3.055,3.208),Vector3(-3.62,1.816,4.647),Vector3(-5.042,1.716,3.573),Vector3(-3.429,0.4292,5.256),Vector3(-3.787,0.4456,4.303),Vector3(-5.785,9.407,1.639),Vector3(-4.393,11.17,1.703),Vector3(-6.66,6.853,1.603),Vector3(-6.657,4.599,1.37),Vector3(-6.292,3.055,1.755),Vector3(-5.103,1.716,2.106),Vector3(-4.722,8.951,-1.064),Vector3(-3.261,10.69,-1.162),Vector3(-5.591,6.637,0.1137),Vector3(-5.009,4.599,0.3258),Vector3(-4.811,3.055,0.5342),Vector3(-4.028,1.72,1.233),Vector3(-3.497,0.483,3.308),Vector3(-2.273,12.15,1.922),Vector3(-1.219,11.35,-0.9964),Vector3(-5.335,2.823,-0.2563),Vector3(-5.473,4.831,-0.3854),Vector3(-5.676,3.084,-1.039),Vector3(-5.953,4.571,-1.165),Vector3(-5.131,4.831,-0.3854),Vector3(-4.469,2.839,-0.2487),Vector3(-5.252,3.081,-1.044),Vector3(-5.477,4.571,-1.165),Vector3(-0.8522,10.98,-2.828),Vector3(-1.367,9.426,-4.596),Vector3(-1.731,6.815,-5.634),Vector3(-2.155,2.854,-5.779),Vector3(-2.607,-0.9086,-7.389),Vector3(-0.3039,-0.2691,-1.013),Vector3(-1.773,10.98,-2.622),Vector3(-2.929,9.446,-3.86),Vector3(-3.873,6.815,-4.527),Vector3(-4.137,2.854,-4.609),Vector3(-4.748,-0.9086,-5.634),Vector3(-0.6632,-0.2691,-0.7539),Vector3(-5.044,6.815,-2.044),Vector3(-5.12,2.854,-2.244),Vector3(-6.001,-0.9086,-2.656),Vector3(-1.028,-0.2691,-0.377),Vector3(-6.124,-0.9086,-0.7305),Vector3(-1.136,-0.2691,0.2302),Vector3(-4.028,1.742,0.1251),Vector3(-1.695,1.985,5.991),Vector3(-1.186,3.07,5.291),Vector3(-1.49,1.24,6.024),Vector3(-1.473,4.891,5.446),Vector3(-2.779,1.939,5.692),Vector3(-2.961,3.047,4.872),Vector3(-2.203,1.042,5.747),Vector3(-3.042,4.957,5.14),Vector3(-3.62,1.816,4.647),Vector3(-2.798,0.8449,4.999),Vector3(-2.956,6.171,5.406),Vector3(-0.7672,0.7396,5.803),Vector3(-1.234,0.229,5.305),Vector3(-1.535,-0.1326,4.693),Vector3(-4.017,1.82,2.905),Vector3(-3.066,0.752,3.012),Vector3(-1.71,-0.1026,3.554),Vector3(-3.066,0.8508,1.273),Vector3(-1.189,0.0724,1.917),Vector3(-3.066,0.8479,0.3903),Vector3(-0.5553,-0.1912,0.5953),Vector3(0.0166,4.813,6.019),Vector3(2.213,7.219,5.73),Vector3(-1.664,6.175,5.956),Vector3(0.0252,6.322,5.758),Vector3(0.0251,9.022,5.208),Vector3(0.0177,7.455,6.86),Vector3(1.684,6.175,5.956),Vector3(-2.193,7.219,5.73),Vector3(0.0209,4.487,5.454),Vector3(1.506,4.891,5.446),Vector3(1.506,4.891,5.446),Vector3(1.921,6.193,5.758),Vector3(-1.888,6.193,5.758),Vector3(-1.473,4.891,5.446),Vector3(0.0209,4.487,5.454),Vector3(0.0252,6.322,5.758),Vector3(0.0252,6.322,5.758)]);
{ .SetCoord }
IndexedFaceSet208.Coord := Coordinate209;
TextureCoordinate210 := TTextureCoordinateNode.Create;
TextureCoordinate210.SetPoint([Vector2(0.2306,0.7219),Vector2(0.2306,0.7038),Vector2(0.2614,0.7219),Vector2(0.3044,0.7206),Vector2(0.2825,0.7668),Vector2(0.2306,0.7608),Vector2(0.2956,0.6889),Vector2(0.2948,0.8444),Vector2(0.2308,0.8272),Vector2(0.3511,0.7186),Vector2(0.3589,0.7658),Vector2(0.3263,0.6804),Vector2(0.3624,0.8472),Vector2(0.3873,0.7134),Vector2(0.3925,0.764),Vector2(0.3519,0.6721),Vector2(0.3993,0.8423),Vector2(0.3127,0.8998),Vector2(0.3587,0.8989),Vector2(0.3945,0.8972),Vector2(0.2845,0.6612),Vector2(0.2644,0.6676),Vector2(0.2975,0.6458),Vector2(0.2306,0.658),Vector2(0.2306,0.6463),Vector2(0.2306,0.6147),Vector2(0.3634,0.6681),Vector2(0.4044,0.7136),Vector2(0.305,0.6471),Vector2(0.2306,0.62),Vector2(0.3634,0.6723),Vector2(0.4049,0.7093),Vector2(0.2826,0.6545),Vector2(0.2306,0.6368),Vector2(0.4277,0.7563),Vector2(0.4328,0.8418),Vector2(0.4157,0.8319),Vector2(0.4084,0.7662),Vector2(0.4403,0.7674),Vector2(0.4505,0.8307),Vector2(0.4202,0.8418),Vector2(0.3958,0.757),Vector2(0.4247,0.7673),Vector2(0.4329,0.8307),Vector2(0.4371,0.9187),Vector2(0.3634,0.6722),Vector2(0.4049,0.7103),Vector2(0.2553,0.6433),Vector2(0.2306,0.629),Vector2(0.2803,0.64),Vector2(0.3461,0.9832),Vector2(0.1999,0.7219),Vector2(0.1569,0.7206),Vector2(0.1788,0.7668),Vector2(0.1657,0.6889),Vector2(0.1665,0.8444),Vector2(0.1102,0.7186),Vector2(0.1024,0.7658),Vector2(0.135,0.6804),Vector2(0.0989,0.8472),Vector2(0.074,0.7134),Vector2(0.0688,0.764),Vector2(0.1094,0.6721),Vector2(0.062,0.8423),Vector2(0.1486,0.8998),Vector2(0.1026,0.8989),Vector2(0.0668,0.8972),Vector2(0.1768,0.6612),Vector2(0.1969,0.6676),Vector2(0.1638,0.6458),Vector2(0.0979,0.6681),Vector2(0.0569,0.7136),Vector2(0.1563,0.6471),Vector2(0.0979,0.6723),Vector2(0.0564,0.7093),Vector2(0.1787,0.6545),Vector2(0.0336,0.7563),Vector2(0.0456,0.8319),Vector2(0.0285,0.8418),Vector2(0.0529,0.7662),Vector2(0.021,0.7674),Vector2(0.0109,0.8307),Vector2(0.0411,0.8418),Vector2(0.0655,0.757),Vector2(0.0366,0.7673),Vector2(0.0283,0.8307),Vector2(0.0242,0.9187),Vector2(0.0979,0.6722),Vector2(0.0564,0.7103),Vector2(0.206,0.6433),Vector2(0.181,0.64),Vector2(0.1152,0.9832),Vector2(0.231,0.9053),Vector2(0.231,1.02),Vector2(0.5118,0.6048),Vector2(0.565,0.6951),Vector2(0.5291,0.7326),Vector2(0.6281,0.9347),Vector2(0.6515,0.9447),Vector2(0.6279,0.9576),Vector2(0.5936,0.9053),Vector2(0.6287,0.8085),Vector2(0.5933,0.8105),Vector2(0.7035,0.7808),Vector2(0.6735,0.7785),Vector2(0.6727,0.7204),Vector2(0.6961,0.7287),Vector2(0.6747,0.6734),Vector2(0.6972,0.6739),Vector2(0.6706,0.6045),Vector2(0.7158,0.6049),Vector2(0.7002,0.9347),Vector2(0.6963,0.9556),Vector2(0.7074,0.8151),Vector2(0.7314,0.7774),Vector2(0.7331,0.7218),Vector2(0.7466,0.6739),Vector2(0.7913,0.9215),Vector2(0.7929,0.9417),Vector2(0.7576,0.8089),Vector2(0.764,0.7714),Vector2(0.7698,0.7218),Vector2(0.7675,0.674),Vector2(0.7631,0.606),Vector2(0.689,0.9839),Vector2(0.6777,0.9757),Vector2(0.6196,0.9641),Vector2(0.7873,0.9608),Vector2(0.9124,0.9353),Vector2(0.8505,0.9502),Vector2(0.9103,0.9352),Vector2(0.849,0.9502),Vector2(0.9456,0.8068),Vector2(0.8961,0.7182),Vector2(0.9432,0.7178),Vector2(0.8875,0.8087),Vector2(0.9136,0.6076),Vector2(0.9472,0.6076),Vector2(0.827,0.6244),Vector2(0.8293,0.6244),Vector2(0.8421,0.9502),Vector2(0.8855,0.9358),Vector2(0.8749,0.8121),Vector2(0.8851,0.7175),Vector2(0.8861,0.6085),Vector2(0.8183,0.6244),Vector2(0.8422,0.814),Vector2(0.8574,0.7152),Vector2(0.8432,0.6076),Vector2(0.8056,0.6244),Vector2(0.8187,0.7234),Vector2(0.8175,0.6059),Vector2(0.7937,0.6244),Vector2(0.7965,0.7739),Vector2(0.8228,0.7664),Vector2(0.7886,0.9589),Vector2(0.8004,0.7165),Vector2(0.7972,0.6823),Vector2(0.7883,0.6565),Vector2(0.6747,0.6734),Vector2(0.7163,0.6616),Vector2(0.6281,0.9347),Vector2(0.6279,0.9576),Vector2(0.6515,0.9447),Vector2(0.5936,0.9053),Vector2(0.6287,0.8085),Vector2(0.5933,0.8105),Vector2(0.7035,0.7808),Vector2(0.6735,0.7785),Vector2(0.6727,0.7204),Vector2(0.6961,0.7287),Vector2(0.6747,0.6734),Vector2(0.6972,0.6739),Vector2(0.6706,0.6045),Vector2(0.7158,0.6049),Vector2(0.7002,0.9347),Vector2(0.6963,0.9556),Vector2(0.7074,0.8151),Vector2(0.7314,0.7774),Vector2(0.7331,0.7218),Vector2(0.7466,0.6739),Vector2(0.7913,0.9215),Vector2(0.7929,0.9417),Vector2(0.7576,0.8089),Vector2(0.764,0.7714),Vector2(0.7698,0.7218),Vector2(0.7675,0.674),Vector2(0.7631,0.606),Vector2(0.689,0.9839),Vector2(0.7873,0.9608),Vector2(0.9103,0.9352),Vector2(0.849,0.9502),Vector2(0.8961,0.7182),Vector2(0.8875,0.8087),Vector2(0.9136,0.6076),Vector2(0.827,0.6244),Vector2(0.8421,0.9502),Vector2(0.8855,0.9358),Vector2(0.8749,0.8121),Vector2(0.8851,0.7175),Vector2(0.8861,0.6085),Vector2(0.8183,0.6244),Vector2(0.8422,0.814),Vector2(0.8574,0.7152),Vector2(0.8432,0.6076),Vector2(0.8056,0.6244),Vector2(0.8187,0.7234),Vector2(0.8175,0.6059),Vector2(0.7937,0.6244),Vector2(0.8228,0.7664),Vector2(0.7965,0.7739),Vector2(0.7972,0.6823),Vector2(0.8004,0.7165),Vector2(0.7883,0.6565),Vector2(0.6747,0.6734),Vector2(0.7163,0.6616),Vector2(0.5663,0.9104),Vector2(0.5499,0.8086),Vector2(0.5896,0.7882),Vector2(0.5896,0.7882),Vector2(0.565,0.6951)]);
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
