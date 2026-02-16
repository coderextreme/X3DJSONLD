function JinLOA1: TX3DRootNode;
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
MetadataFloat31: TMetadataFloatNode;
MetadataString32: TMetadataStringNode;
HAnimJoint33: THAnimJointNode;
HAnimSegment34: THAnimSegmentNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
ImageTexture39: TImageTextureNode;
IndexedFaceSet40: TIndexedFaceSetNode;
Coordinate41: TCoordinateNode;
TextureCoordinate42: TTextureCoordinateNode;
HAnimJoint43: THAnimJointNode;
HAnimSegment44: THAnimSegmentNode;
Transform45: TTransformNode;
Shape46: TShapeNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
ImageTexture49: TImageTextureNode;
IndexedFaceSet50: TIndexedFaceSetNode;
Coordinate51: TCoordinateNode;
TextureCoordinate52: TTextureCoordinateNode;
HAnimJoint53: THAnimJointNode;
HAnimSegment54: THAnimSegmentNode;
Transform55: TTransformNode;
Shape56: TShapeNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
ImageTexture59: TImageTextureNode;
IndexedFaceSet60: TIndexedFaceSetNode;
Coordinate61: TCoordinateNode;
TextureCoordinate62: TTextureCoordinateNode;
HAnimJoint63: THAnimJointNode;
HAnimSegment64: THAnimSegmentNode;
Transform65: TTransformNode;
Shape66: TShapeNode;
Appearance67: TAppearanceNode;
Material68: TMaterialNode;
ImageTexture69: TImageTextureNode;
IndexedFaceSet70: TIndexedFaceSetNode;
Coordinate71: TCoordinateNode;
TextureCoordinate72: TTextureCoordinateNode;
HAnimJoint73: THAnimJointNode;
HAnimSegment74: THAnimSegmentNode;
Transform75: TTransformNode;
Shape76: TShapeNode;
Appearance77: TAppearanceNode;
Material78: TMaterialNode;
ImageTexture79: TImageTextureNode;
IndexedFaceSet80: TIndexedFaceSetNode;
Coordinate81: TCoordinateNode;
TextureCoordinate82: TTextureCoordinateNode;
HAnimJoint83: THAnimJointNode;
HAnimSegment84: THAnimSegmentNode;
Transform85: TTransformNode;
Shape86: TShapeNode;
Appearance87: TAppearanceNode;
Material88: TMaterialNode;
ImageTexture89: TImageTextureNode;
IndexedFaceSet90: TIndexedFaceSetNode;
Coordinate91: TCoordinateNode;
TextureCoordinate92: TTextureCoordinateNode;
HAnimJoint93: THAnimJointNode;
HAnimSegment94: THAnimSegmentNode;
Transform95: TTransformNode;
Shape96: TShapeNode;
Appearance97: TAppearanceNode;
Material98: TMaterialNode;
ImageTexture99: TImageTextureNode;
IndexedFaceSet100: TIndexedFaceSetNode;
Coordinate101: TCoordinateNode;
TextureCoordinate102: TTextureCoordinateNode;
HAnimJoint103: THAnimJointNode;
HAnimSegment104: THAnimSegmentNode;
Transform105: TTransformNode;
Shape106: TShapeNode;
Appearance107: TAppearanceNode;
Material108: TMaterialNode;
ImageTexture109: TImageTextureNode;
IndexedFaceSet110: TIndexedFaceSetNode;
Coordinate111: TCoordinateNode;
TextureCoordinate112: TTextureCoordinateNode;
HAnimJoint113: THAnimJointNode;
HAnimSegment114: THAnimSegmentNode;
Transform115: TTransformNode;
Shape116: TShapeNode;
Appearance117: TAppearanceNode;
Material118: TMaterialNode;
ImageTexture119: TImageTextureNode;
IndexedFaceSet120: TIndexedFaceSetNode;
Coordinate121: TCoordinateNode;
TextureCoordinate122: TTextureCoordinateNode;
HAnimJoint123: THAnimJointNode;
HAnimSegment124: THAnimSegmentNode;
Transform125: TTransformNode;
Shape126: TShapeNode;
Appearance127: TAppearanceNode;
Material128: TMaterialNode;
ImageTexture129: TImageTextureNode;
IndexedFaceSet130: TIndexedFaceSetNode;
Coordinate131: TCoordinateNode;
TextureCoordinate132: TTextureCoordinateNode;
HAnimJoint133: THAnimJointNode;
HAnimSegment134: THAnimSegmentNode;
Transform135: TTransformNode;
Shape136: TShapeNode;
Appearance137: TAppearanceNode;
Material138: TMaterialNode;
ImageTexture139: TImageTextureNode;
IndexedFaceSet140: TIndexedFaceSetNode;
Coordinate141: TCoordinateNode;
TextureCoordinate142: TTextureCoordinateNode;
HAnimJoint143: THAnimJointNode;
HAnimSegment144: THAnimSegmentNode;
Transform145: TTransformNode;
Shape146: TShapeNode;
Appearance147: TAppearanceNode;
Material148: TMaterialNode;
ImageTexture149: TImageTextureNode;
IndexedFaceSet150: TIndexedFaceSetNode;
Coordinate151: TCoordinateNode;
TextureCoordinate152: TTextureCoordinateNode;
HAnimJoint153: THAnimJointNode;
HAnimSegment154: THAnimSegmentNode;
Transform155: TTransformNode;
Shape156: TShapeNode;
Appearance157: TAppearanceNode;
Material158: TMaterialNode;
ImageTexture159: TImageTextureNode;
IndexedFaceSet160: TIndexedFaceSetNode;
Coordinate161: TCoordinateNode;
TextureCoordinate162: TTextureCoordinateNode;
HAnimJoint163: THAnimJointNode;
HAnimSegment164: THAnimSegmentNode;
Transform165: TTransformNode;
Shape166: TShapeNode;
Appearance167: TAppearanceNode;
Material168: TMaterialNode;
ImageTexture169: TImageTextureNode;
IndexedFaceSet170: TIndexedFaceSetNode;
Coordinate171: TCoordinateNode;
TextureCoordinate172: TTextureCoordinateNode;
HAnimJoint173: THAnimJointNode;
HAnimSegment174: THAnimSegmentNode;
Transform175: TTransformNode;
Shape176: TShapeNode;
Appearance177: TAppearanceNode;
Material178: TMaterialNode;
ImageTexture179: TImageTextureNode;
IndexedFaceSet180: TIndexedFaceSetNode;
Coordinate181: TCoordinateNode;
TextureCoordinate182: TTextureCoordinateNode;
HAnimJoint183: THAnimJointNode;
HAnimSegment184: THAnimSegmentNode;
Transform185: TTransformNode;
Shape186: TShapeNode;
Appearance187: TAppearanceNode;
Material188: TMaterialNode;
ImageTexture189: TImageTextureNode;
IndexedFaceSet190: TIndexedFaceSetNode;
Coordinate191: TCoordinateNode;
TextureCoordinate192: TTextureCoordinateNode;
HAnimJoint193: THAnimJointNode;
HAnimSegment194: THAnimSegmentNode;
Transform195: TTransformNode;
Shape196: TShapeNode;
Appearance197: TAppearanceNode;
Material198: TMaterialNode;
ImageTexture199: TImageTextureNode;
IndexedFaceSet200: TIndexedFaceSetNode;
Coordinate201: TCoordinateNode;
TextureCoordinate202: TTextureCoordinateNode;
HAnimJoint203: THAnimJointNode;
HAnimSegment204: THAnimSegmentNode;
Transform205: TTransformNode;
Shape206: TShapeNode;
Appearance207: TAppearanceNode;
Material208: TMaterialNode;
ImageTexture209: TImageTextureNode;
IndexedFaceSet210: TIndexedFaceSetNode;
Coordinate211: TCoordinateNode;
TextureCoordinate212: TTextureCoordinateNode;
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
HAnimJoint230: THAnimJointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'JinLOA1.x3d';
X3D0.Meta['creator'] := 'Jin Hoon Lee and Min Joo Lee';
X3D0.Meta['translator'] := 'Chul Hee Jung and Myeong Won Lee';
X3D0.Meta['created'] := '31 March 2011';
X3D0.Meta['translated'] := '1 November 2014';
X3D0.Meta['modified'] := '23 December 2021';
X3D0.Meta['TODO'] := 'rescale smaller than 30m! convert inches to meters? what about motion scaling?';
X3D0.Meta['description'] := 'Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.';
X3D0.Meta['reference'] := 'KoreanCharacter00ReadMe.txt';
X3D0.Meta['reference'] := 'KoreanCharacterHumanMotion_Infotech2014_140706.pdf';
X3D0.Meta['reference'] := 'KoreanCharactersIllustrated.pdf';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA1.x3d';
X3D0.Meta['generator'] := '3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview';
X3D0.Meta['generator'] := 'Suwon HAnim Converter';
X3D0.Meta['generator'] := 'Gnu Image Manipulation Program, http://www.gimp.org';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group20 := TGroupNode.Create;
WorldInfo21 := TWorldInfoNode.Create;
WorldInfo21.Title := 'JinLOA1.x3d';
{ .AddChildren }
Group20.AddChildren([WorldInfo21]);
NavigationInfo22 := TNavigationInfoNode.Create;
NavigationInfo22.Speed := 1.5;
{ .AddChildren }
Group20.AddChildren([NavigationInfo22]);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.CenterOfRotation := Vector3(0,1,0);
Viewpoint23.Description := 'JinLOA1';
Viewpoint23.Position := Vector3(0,1,3);
{ .AddChildren }
Group20.AddChildren([Viewpoint23]);
HAnimHumanoid24 := THAnimHumanoidNode.Create;
HAnimHumanoid24.NameField := 'JinLOA1';
HAnimHumanoid24.Loa := 1;
HAnimHumanoid24.Scale := Vector3(0.0225,0.0225,0.0225);
HAnimHumanoid24.Version := '2.0';
MetadataSet25 := TMetadataSetNode.Create;
MetadataSet25.NameField := 'HAnimHumanoid.info';
MetadataSet25.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString26 := TMetadataStringNode.Create;
MetadataString26.NameField := 'authorName';
MetadataString26.SetValue(['Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee']);
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
MetadataFloat31 := TMetadataFloatNode.Create;
MetadataFloat31.NameField := 'weight';
MetadataFloat31.SetValue([50]);
{ .SetValue }
MetadataSet25.Value := MetadataFloat31;
MetadataString32 := TMetadataStringNode.Create;
MetadataString32.NameField := 'humanoidVersion';
MetadataString32.SetValue(['validation testing']);
{ .SetValue }
MetadataSet25.Value := MetadataString32;
{ .SetMetadata }
HAnimHumanoid24.Metadata := MetadataSet25;
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.NameField := 'humanoid_root';
HAnimJoint33.Center := Vector3(0,30.530001,-0.7076);
HAnimJoint33.SetUlimit([0,0,0]);
HAnimJoint33.SetLlimit([0,0,0]);
HAnimSegment34 := THAnimSegmentNode.Create;
HAnimSegment34.NameField := 'sacrum';
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0,30.530001,-0.7076);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance37.Material := Material38;
ImageTexture39 := TImageTextureNode.Create;
ImageTexture39.SetUrl(['images/Jin.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png']);
{ .SetTexture }
Appearance37.Texture := ImageTexture39;
{ .SetAppearance }
Shape36.Appearance := Appearance37;
IndexedFaceSet40 := TIndexedFaceSetNode.Create;
IndexedFaceSet40.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet40.CreaseAngle := 3.14159;
IndexedFaceSet40.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate41 := TCoordinateNode.Create;
Coordinate41.SetPoint([Vector3(0,10.79,0.1424),Vector3(0,10.06,-2.825),Vector3(-2.283,10.06,-2.428),Vector3(-3.954,10.06,-1.948),Vector3(-4.566,10.06,0.1424),Vector3(-3.954,10.06,2.233),Vector3(-2.283,10.06,2.712),Vector3(0,10.06,3.11),Vector3(2.283,10.06,2.712),Vector3(3.954,10.06,2.233),Vector3(4.566,10.06,0.1424),Vector3(3.954,10.06,-1.948),Vector3(2.283,10.06,-2.428),Vector3(0,8.045,-4.614),Vector3(-2.953,8.045,-3.977),Vector3(-5.114,8.045,-2.236),Vector3(-5.905,8.045,0.1424),Vector3(-5.114,8.045,2.521),Vector3(-2.953,8.045,3.645),Vector3(0,8.045,4.282),Vector3(2.953,8.045,3.645),Vector3(5.114,8.045,2.521),Vector3(5.905,8.045,0.1424),Vector3(5.114,8.045,-2.236),Vector3(2.953,8.045,-3.977),Vector3(0,5.297,-5.018),Vector3(-3.409,5.297,-4.282),Vector3(-5.905,5.297,-2.272),Vector3(-6.819,5.297,0.1424),Vector3(-5.905,5.297,2.889),Vector3(-3.409,5.297,4.282),Vector3(0,5.297,5.018),Vector3(3.409,5.297,4.282),Vector3(5.905,5.297,2.889),Vector3(6.819,5.297,0.1424),Vector3(5.905,5.297,-2.272),Vector3(3.409,5.297,-4.282),Vector3(0,2.548,-4.282),Vector3(-2.953,2.548,-3.645),Vector3(-5.114,2.548,-1.904),Vector3(-5.905,2.548,0.1424),Vector3(-5.114,2.548,2.521),Vector3(-2.953,2.548,3.645),Vector3(0,2.548,4.282),Vector3(2.953,2.548,3.645),Vector3(5.114,2.548,2.521),Vector3(5.905,2.548,0.1424),Vector3(5.114,2.548,-1.904),Vector3(2.953,2.548,-3.645),Vector3(0,0.5362,-2.272),Vector3(-1.705,0.5362,-1.904),Vector3(-2.953,0.5362,-1.231),Vector3(-3.409,0.5362,0.1424),Vector3(-2.953,0.5362,1.516),Vector3(-1.705,0.5362,2.521),Vector3(0,0.5362,2.889),Vector3(1.705,0.5362,2.521),Vector3(2.953,0.5362,1.516),Vector3(3.409,0.5362,0.1424),Vector3(2.953,0.5362,-1.231),Vector3(1.705,0.5362,-1.904),Vector3(0,-0.2003,0.1424)]);
{ .SetCoord }
IndexedFaceSet40.Coord := Coordinate41;
TextureCoordinate42 := TTextureCoordinateNode.Create;
TextureCoordinate42.SetPoint([Vector2(0.6211,0.5754),Vector2(0.7851,0.572),Vector2(0.7614,0.572),Vector2(0.6907,0.5698),Vector2(0.62,0.5698),Vector2(0.6158,0.5702),Vector2(0.5451,0.5702),Vector2(0.4167,0.5698),Vector2(0.5451,0.5702),Vector2(0.6158,0.5702),Vector2(0.62,0.5698),Vector2(0.6907,0.5698),Vector2(0.7614,0.572),Vector2(0.8036,0.5346),Vector2(0.7761,0.5346),Vector2(0.6989,0.4838),Vector2(0.6219,0.4428),Vector2(0.6154,0.4438),Vector2(0.5492,0.4639),Vector2(0.4166,0.5346),Vector2(0.5492,0.4639),Vector2(0.6154,0.4438),Vector2(0.6219,0.4428),Vector2(0.6989,0.4838),Vector2(0.7761,0.5346),Vector2(0.7912,0.4044),Vector2(0.7635,0.4044),Vector2(0.7042,0.3925),Vector2(0.6194,0.3907),Vector2(0.6148,0.3907),Vector2(0.545,0.3974),Vector2(0.4163,0.4938),Vector2(0.545,0.3974),Vector2(0.6148,0.3907),Vector2(0.6194,0.3907),Vector2(0.7042,0.3925),Vector2(0.7635,0.4044),Vector2(0.795,0.3772),Vector2(0.7662,0.3772),Vector2(0.6945,0.3645),Vector2(0.6236,0.3695),Vector2(0.616,0.3695),Vector2(0.5438,0.378),Vector2(0.416,0.453),Vector2(0.5438,0.378),Vector2(0.616,0.3695),Vector2(0.6236,0.3695),Vector2(0.6945,0.3645),Vector2(0.7662,0.3772),Vector2(0.7887,0.3451),Vector2(0.7635,0.3451),Vector2(0.698,0.3508),Vector2(0.6262,0.3508),Vector2(0.6297,0.3503),Vector2(0.5389,0.3503),Vector2(0.4181,0.3884),Vector2(0.5389,0.3503),Vector2(0.6297,0.3503),Vector2(0.6262,0.3508),Vector2(0.698,0.3508),Vector2(0.7635,0.3451),Vector2(0.6237,0.3398)]);
{ .SetTexCoord }
IndexedFaceSet40.TexCoord := TextureCoordinate42;
{ .SetGeometry }
Shape36.Geometry := IndexedFaceSet40;
{ .AddChild }
Transform35.AddChildren([Shape36]);
{ .AddChildren }
HAnimSegment34.AddChildren([Transform35]);
{ .AddChildren }
HAnimJoint33.AddChildren([HAnimSegment34]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'sacroiliac';
HAnimJoint43.Center := Vector3(0,35.799999,-0.7076);
HAnimJoint43.SetUlimit([0,0,0]);
HAnimJoint43.SetLlimit([0,0,0]);
HAnimSegment44 := THAnimSegmentNode.Create;
HAnimSegment44.NameField := 'pelvis';
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(0,35.799999,-0.7076);
Shape46 := TShapeNode.Create;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance47.Material := Material48;
ImageTexture49 := TImageTextureNode.Create;
ImageTexture49 := ImageTexture39;
{ .SetTexture }
Appearance47.Texture := ImageTexture49;
{ .SetAppearance }
Shape46.Appearance := Appearance47;
IndexedFaceSet50 := TIndexedFaceSetNode.Create;
IndexedFaceSet50.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet50.CreaseAngle := 3.14159;
IndexedFaceSet50.SetTexCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate51 := TCoordinateNode.Create;
Coordinate51.SetPoint([Vector3(0,1.053,0.0273),Vector3(0,0.9123,-0.5414),Vector3(-0.4375,0.9123,-0.4652),Vector3(-0.7578,0.9123,-0.3733),Vector3(-0.875,0.9123,0.0273),Vector3(-0.7578,0.9123,0.4279),Vector3(-0.4375,0.9123,0.5198),Vector3(0,0.9123,0.596),Vector3(0.4375,0.9123,0.5198),Vector3(0.7578,0.9123,0.4279),Vector3(0.875,0.9123,0.0273),Vector3(0.7578,0.9123,-0.3733),Vector3(0.4375,0.9123,-0.4652),Vector3(0,0.5267,-0.8842),Vector3(-0.5658,0.5267,-0.7621),Vector3(-0.98,0.5267,-0.4285),Vector3(-1.132,0.5267,0.0273),Vector3(-0.98,0.5267,0.483),Vector3(-0.5658,0.5267,0.6985),Vector3(0,0.5267,0.8206),Vector3(0.5658,0.5267,0.6985),Vector3(0.98,0.5267,0.483),Vector3(1.132,0.5267,0.0273),Vector3(0.98,0.5267,-0.4285),Vector3(0.5658,0.5267,-0.7621),Vector3(0,0,-0.9616),Vector3(-0.6534,0,-0.8206),Vector3(-1.132,0,-0.4353),Vector3(-1.307,0,0.0273),Vector3(-1.132,0,0.5536),Vector3(-0.6534,0,0.8206),Vector3(0,0,0.9616),Vector3(0.6534,0,0.8206),Vector3(1.132,0,0.5536),Vector3(1.307,0,0.0273),Vector3(1.132,0,-0.4353),Vector3(0.6534,0,-0.8206),Vector3(0,-0.5267,-0.8206),Vector3(-0.5658,-0.5267,-0.6985),Vector3(-0.98,-0.5267,-0.3648),Vector3(-1.132,-0.5267,0.0273),Vector3(-0.98,-0.5267,0.483),Vector3(-0.5658,-0.5267,0.6985),Vector3(0,-0.5267,0.8206),Vector3(0.5658,-0.5267,0.6985),Vector3(0.98,-0.5267,0.483),Vector3(1.132,-0.5267,0.0273),Vector3(0.98,-0.5267,-0.3648),Vector3(0.5658,-0.5267,-0.6985),Vector3(0,-0.9123,-0.4353),Vector3(-0.3267,-0.9123,-0.3648),Vector3(-0.5658,-0.9123,-0.2358),Vector3(-0.6534,-0.9123,0.0273),Vector3(-0.5658,-0.9123,0.2904),Vector3(-0.3267,-0.9123,0.483),Vector3(0,-0.9123,0.5536),Vector3(0.3267,-0.9123,0.483),Vector3(0.5658,-0.9123,0.2904),Vector3(0.6534,-0.9123,0.0273),Vector3(0.5658,-0.9123,-0.2358),Vector3(0.3267,-0.9123,-0.3648),Vector3(0,-1.053,0.0273)]);
{ .SetCoord }
IndexedFaceSet50.Coord := Coordinate51;
TextureCoordinate52 := TTextureCoordinateNode.Create;
TextureCoordinate52.SetPoint([Vector2(0.6211,0.5754),Vector2(0.7851,0.572),Vector2(0.7614,0.572),Vector2(0.6907,0.5698),Vector2(0.62,0.5698),Vector2(0.6158,0.5702),Vector2(0.5451,0.5702),Vector2(0.4167,0.5698),Vector2(0.5451,0.5702),Vector2(0.6158,0.5702),Vector2(0.62,0.5698),Vector2(0.6907,0.5698),Vector2(0.7614,0.572),Vector2(0.8036,0.5346),Vector2(0.7761,0.5346),Vector2(0.6989,0.4838),Vector2(0.6219,0.4428),Vector2(0.6154,0.4438),Vector2(0.5492,0.4639),Vector2(0.4166,0.5346),Vector2(0.5492,0.4639),Vector2(0.6154,0.4438),Vector2(0.6219,0.4428),Vector2(0.6989,0.4838),Vector2(0.7761,0.5346),Vector2(0.7912,0.4044),Vector2(0.7635,0.4044),Vector2(0.7042,0.3925),Vector2(0.6194,0.3907),Vector2(0.6148,0.3907),Vector2(0.545,0.3974),Vector2(0.4163,0.4938),Vector2(0.545,0.3974),Vector2(0.6148,0.3907),Vector2(0.6194,0.3907),Vector2(0.7042,0.3925),Vector2(0.7635,0.4044),Vector2(0.795,0.3772),Vector2(0.7662,0.3772),Vector2(0.6945,0.3645),Vector2(0.6236,0.3695),Vector2(0.616,0.3695),Vector2(0.5438,0.378),Vector2(0.416,0.453),Vector2(0.5438,0.378),Vector2(0.616,0.3695),Vector2(0.6236,0.3695),Vector2(0.6945,0.3645),Vector2(0.7662,0.3772),Vector2(0.7887,0.3451),Vector2(0.7635,0.3451),Vector2(0.698,0.3508),Vector2(0.6262,0.3508),Vector2(0.6297,0.3503),Vector2(0.5389,0.3503),Vector2(0.4181,0.3884),Vector2(0.5389,0.3503),Vector2(0.6297,0.3503),Vector2(0.6262,0.3508),Vector2(0.698,0.3508),Vector2(0.7635,0.3451),Vector2(0.6237,0.3398)]);
{ .SetTexCoord }
IndexedFaceSet50.TexCoord := TextureCoordinate52;
{ .SetGeometry }
Shape46.Geometry := IndexedFaceSet50;
{ .AddChild }
Transform45.AddChildren([Shape46]);
{ .AddChildren }
HAnimSegment44.AddChildren([Transform45]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimSegment44]);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.NameField := 'l_hip';
HAnimJoint53.Center := Vector3(4.207,32.02,-0.8155);
HAnimJoint53.SetUlimit([0,0,0]);
HAnimJoint53.SetLlimit([0,0,0]);
HAnimSegment54 := THAnimSegmentNode.Create;
HAnimSegment54.NameField := 'l_thigh';
Transform55 := TTransformNode.Create;
Transform55.Translation := Vector3(4.207,32.02,-0.8155);
Shape56 := TShapeNode.Create;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance57.Material := Material58;
ImageTexture59 := TImageTextureNode.Create;
ImageTexture59 := ImageTexture39;
{ .SetTexture }
Appearance57.Texture := ImageTexture59;
{ .SetAppearance }
Shape56.Appearance := Appearance57;
IndexedFaceSet60 := TIndexedFaceSetNode.Create;
IndexedFaceSet60.SetCoordIndex([47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1]);
IndexedFaceSet60.CreaseAngle := 3.14159;
IndexedFaceSet60.SetTexCoordIndex([5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1]);
Coordinate61 := TCoordinateNode.Create;
Coordinate61.SetPoint([Vector3(2.96,3.738,0),Vector3(1.643,3.738,3.209),Vector3(-1.316,3.738,4.002),Vector3(-3.367,3.738,1.781),Vector3(-3.367,3.738,-1.781),Vector3(-1.316,3.738,-4.002),Vector3(1.643,3.738,-3.209),Vector3(2.96,-0.0114,0),Vector3(1.643,-0.0114,3.209),Vector3(-1.316,-0.0114,4.002),Vector3(-3.367,-0.0114,1.781),Vector3(-3.367,-0.0114,-1.781),Vector3(-1.316,-0.0114,-4.002),Vector3(1.643,-0.0114,-3.209),Vector3(2.96,-6.507,0),Vector3(1.643,-6.507,3.209),Vector3(-1.316,-6.507,4.002),Vector3(-3.367,-6.507,1.781),Vector3(-3.367,-6.507,-1.781),Vector3(-1.316,-6.507,-4.002),Vector3(1.643,-6.507,-3.209),Vector3(3.367,-13.13,0),Vector3(1.897,-13.13,3.582),Vector3(-1.407,-13.13,4.467),Vector3(-3.355,-13.13,1.988),Vector3(-3.355,-13.13,-1.988),Vector3(-1.407,-13.13,-4.467),Vector3(1.897,-13.13,-3.582),Vector3(2.146,-4.985,0),Vector3(1.136,-4.985,2.462),Vector3(-1.135,-4.985,3.07),Vector3(-2.633,-4.985,1.366),Vector3(-2.633,-4.985,-1.366),Vector3(-1.135,-4.985,-3.07),Vector3(1.136,-4.985,-2.462),Vector3(2.156,-11.45,0),Vector3(1.225,-11.45,1.956),Vector3(-0.8662,-11.45,2.439),Vector3(-2.543,-11.45,1.085),Vector3(-2.543,-11.45,-1.085),Vector3(-0.8662,-11.45,-2.439),Vector3(1.225,-11.45,-1.956),Vector3(2.051,5.729,0),Vector3(1.076,5.729,2.375),Vector3(-1.114,5.729,2.961),Vector3(-2.87,5.729,1.318),Vector3(-2.87,5.729,-1.318),Vector3(-1.114,5.729,-2.961),Vector3(1.076,5.729,-2.375),Vector3(1.842,-15.12,0),Vector3(1.03,-15.12,1.873),Vector3(-0.7965,-15.12,2.295),Vector3(-2.261,-15.12,1.113),Vector3(-2.261,-15.12,-0.9478),Vector3(-0.7965,-15.12,-2.13),Vector3(1.03,-15.12,-1.708),Vector3(0.6277,-16.1,0),Vector3(0.2723,-16.1,0.912),Vector3(-0.5262,-16.1,1.096),Vector3(-1.167,-16.1,0.5796),Vector3(-1.167,-16.1,-0.4145),Vector3(-0.5262,-16.1,-0.9313),Vector3(0.2723,-16.1,-0.7469)]);
{ .SetCoord }
IndexedFaceSet60.Coord := Coordinate61;
TextureCoordinate62 := TTextureCoordinateNode.Create;
TextureCoordinate62.SetPoint([Vector2(0.719,0.5576),Vector2(0.6284,0.5576),Vector2(0.7414,0.5576),Vector2(0.6787,0.5576),Vector2(0.5781,0.5576),Vector2(0.5154,0.5576),Vector2(0.5378,0.5576),Vector2(0.6284,0.5029),Vector2(0.7509,0.3997),Vector2(0.6284,0.3997),Vector2(0.7509,0.5029),Vector2(0.7811,0.3997),Vector2(0.7811,0.5029),Vector2(0.6964,0.3997),Vector2(0.6964,0.5029),Vector2(0.5604,0.3997),Vector2(0.5604,0.5029),Vector2(0.4756,0.3997),Vector2(0.4756,0.5029),Vector2(0.5059,0.3997),Vector2(0.5059,0.5029),Vector2(0.7509,0.3197),Vector2(0.6284,0.3197),Vector2(0.7811,0.3197),Vector2(0.6964,0.3197),Vector2(0.5604,0.3197),Vector2(0.4756,0.3197),Vector2(0.5059,0.3197),Vector2(0.7651,0.2166),Vector2(0.6284,0.2166),Vector2(0.7989,0.2166),Vector2(0.7043,0.2166),Vector2(0.5525,0.2166),Vector2(0.4579,0.2166),Vector2(0.4917,0.2166),Vector2(0.7224,0.263),Vector2(0.6284,0.263),Vector2(0.7456,0.263),Vector2(0.6805,0.263),Vector2(0.5762,0.263),Vector2(0.5112,0.263),Vector2(0.5344,0.263),Vector2(0.8705,0.5452),Vector2(0.8705,0.5383),Vector2(0.8705,0.5369),Vector2(0.8705,0.5408),Vector2(0.8705,0.5483),Vector2(0.8705,0.5522),Vector2(0.8705,0.5509),Vector2(0.917,0.5452),Vector2(0.917,0.5266),Vector2(0.89,0.5304),Vector2(0.89,0.5452),Vector2(0.917,0.522),Vector2(0.89,0.5268),Vector2(0.917,0.5349),Vector2(0.89,0.537),Vector2(0.917,0.5555),Vector2(0.89,0.5534),Vector2(0.917,0.5684),Vector2(0.89,0.5636),Vector2(0.917,0.5638),Vector2(0.89,0.56),Vector2(0.8746,0.531),Vector2(0.8746,0.5452),Vector2(0.8746,0.5279),Vector2(0.8746,0.5368),Vector2(0.8746,0.5524),Vector2(0.8746,0.5613),Vector2(0.8746,0.5581)]);
{ .SetTexCoord }
IndexedFaceSet60.TexCoord := TextureCoordinate62;
{ .SetGeometry }
Shape56.Geometry := IndexedFaceSet60;
{ .AddChild }
Transform55.AddChildren([Shape56]);
{ .AddChildren }
HAnimSegment54.AddChildren([Transform55]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimSegment54]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'l_knee';
HAnimJoint63.Center := Vector3(4.116,17.26,-0.8639);
HAnimJoint63.SetUlimit([0,0,0]);
HAnimJoint63.SetLlimit([0,0,0]);
HAnimSegment64 := THAnimSegmentNode.Create;
HAnimSegment64.NameField := 'l_calf';
Transform65 := TTransformNode.Create;
Transform65.Translation := Vector3(4.116,17.26,-0.8639);
Shape66 := TShapeNode.Create;
Appearance67 := TAppearanceNode.Create;
Material68 := TMaterialNode.Create;
Material68.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance67.Material := Material68;
ImageTexture69 := TImageTextureNode.Create;
ImageTexture69 := ImageTexture39;
{ .SetTexture }
Appearance67.Texture := ImageTexture69;
{ .SetAppearance }
Shape66.Appearance := Appearance67;
IndexedFaceSet70 := TIndexedFaceSetNode.Create;
IndexedFaceSet70.SetCoordIndex([4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
IndexedFaceSet70.CreaseAngle := 3.14159;
IndexedFaceSet70.SetTexCoordIndex([4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
Coordinate71 := TCoordinateNode.Create;
Coordinate71.SetPoint([Vector3(0.7186,0.9688,0.0234),Vector3(0.3632,0.9688,0.9354),Vector3(-0.4353,0.9688,1.12),Vector3(-1.076,0.9688,0.603),Vector3(-1.076,0.9688,-0.3911),Vector3(-0.4353,0.9688,-0.9079),Vector3(0.3632,0.9688,-0.7235),Vector3(2.337,-4.613,0.0234),Vector3(1.46,-3.622,2.019),Vector3(1.236,-1.628,2.42),Vector3(2.118,-1.912,0.0234),Vector3(-0.8111,-3.622,2.567),Vector3(-0.7468,-1.628,2.903),Vector3(-2.254,-4.613,1.255),Vector3(-2.337,-1.912,0.9793),Vector3(-2.254,-5.383,-1.368),Vector3(-2.337,-1.912,-0.9325),Vector3(-0.8111,-5.383,-2.903),Vector3(-0.7468,-1.912,-2.368),Vector3(1.46,-5.383,-2.355),Vector3(1.236,-1.912,-1.885),Vector3(1.121,-0.0032,1.896),Vector3(1.933,-0.0032,0.0234),Vector3(-0.7056,-0.0032,2.318),Vector3(-2.17,-0.0032,1.136),Vector3(-2.17,-0.0032,-0.9244),Vector3(-0.7056,-0.0032,-2.061),Vector3(1.121,-0.0032,-1.64),Vector3(1.607,-12.92,0.0032),Vector3(0.9216,-12.91,1.565),Vector3(-0.619,-12.91,1.951),Vector3(-1.854,-12.92,0.8701),Vector3(-1.854,-12.94,-0.9762),Vector3(-0.619,-12.94,-1.742),Vector3(0.9216,-12.94,-1.356),Vector3(0.7072,-14.53,0.0239),Vector3(0.3604,-14.53,0.814),Vector3(-0.4188,-14.53,1.009),Vector3(-1.044,-14.53,0.4624),Vector3(-1.044,-14.54,-0.4714),Vector3(-0.4188,-14.54,-0.8587),Vector3(0.3604,-14.54,-0.6635)]);
{ .SetCoord }
IndexedFaceSet70.Coord := Coordinate71;
TextureCoordinate72 := TTextureCoordinateNode.Create;
TextureCoordinate72.SetPoint([Vector2(0.9309,0.5848),Vector2(0.919,0.5848),Vector2(0.8921,0.5848),Vector2(0.8706,0.5848),Vector2(0.8706,0.5848),Vector2(0.8921,0.5848),Vector2(0.919,0.5848),Vector2(0.9845,0.5321),Vector2(0.955,0.5475),Vector2(0.9491,0.5599),Vector2(0.9788,0.5571),Vector2(0.8787,0.5475),Vector2(0.8825,0.5599),Vector2(0.8302,0.5321),Vector2(0.8291,0.5571),Vector2(0.8302,0.52),Vector2(0.8291,0.5571),Vector2(0.8787,0.52),Vector2(0.8825,0.5571),Vector2(0.955,0.52),Vector2(0.9491,0.5571),Vector2(0.9444,0.5755),Vector2(0.9717,0.5755),Vector2(0.8831,0.5755),Vector2(0.8339,0.5755),Vector2(0.8339,0.5755),Vector2(0.8831,0.5755),Vector2(0.9444,0.5755),Vector2(0.9679,0.2444),Vector2(0.9449,0.2445),Vector2(0.8931,0.2445),Vector2(0.8516,0.2444),Vector2(0.8516,0.2442),Vector2(0.8931,0.2442),Vector2(0.9449,0.2442),Vector2(0.9372,0.2243),Vector2(0.9255,0.2244),Vector2(0.8993,0.2244),Vector2(0.8783,0.2243),Vector2(0.8783,0.2243),Vector2(0.8993,0.2243),Vector2(0.9255,0.2243)]);
{ .SetTexCoord }
IndexedFaceSet70.TexCoord := TextureCoordinate72;
{ .SetGeometry }
Shape66.Geometry := IndexedFaceSet70;
{ .AddChild }
Transform65.AddChildren([Shape66]);
{ .AddChildren }
HAnimSegment64.AddChildren([Transform65]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimSegment64]);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.NameField := 'l_talocrural';
HAnimJoint73.Center := Vector3(3.854,3.939,-0.7038);
HAnimJoint73.SetUlimit([0,0,0]);
HAnimJoint73.SetLlimit([0,0,0]);
HAnimSegment74 := THAnimSegmentNode.Create;
HAnimSegment74.NameField := 'l_talus';
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(3.854,3.939,-0.7038);
Shape76 := TShapeNode.Create;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance77.Material := Material78;
ImageTexture79 := TImageTextureNode.Create;
ImageTexture79 := ImageTexture39;
{ .SetTexture }
Appearance77.Texture := ImageTexture79;
{ .SetAppearance }
Shape76.Appearance := Appearance77;
IndexedFaceSet80 := TIndexedFaceSetNode.Create;
IndexedFaceSet80.SetCoordIndex([1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1,33,31,30,-1,30,27,33,-1,36,27,30,-1,30,38,36,-1,29,33,27,-1,27,28,29,-1,37,28,27,-1,27,36,37,-1,28,37,42,-1,42,29,28,-1,33,32,34,-1,34,31,33,-1,39,40,34,-1,34,32,39,-1,29,35,32,-1,32,33,29,-1,41,39,32,-1,32,35,41,-1,35,29,42,-1,42,41,35,-1,44,45,46,-1,44,46,47,-1,44,47,43,-1,51,52,53,-1,54,48,49,-1,53,54,49,-1,51,53,49,-1,51,49,50,-1,30,31,44,-1,44,43,30,-1,31,34,45,-1,45,44,31,-1,34,40,46,-1,46,45,34,-1,40,38,47,-1,47,46,40,-1,38,30,43,-1,43,47,38,-1,37,36,49,-1,49,48,37,-1,36,38,50,-1,50,49,36,-1,38,40,51,-1,51,50,38,-1,40,39,52,-1,52,51,40,-1,39,41,53,-1,53,52,39,-1,41,42,54,-1,54,53,41,-1,42,37,48,-1,48,54,42,-1]);
IndexedFaceSet80.CreaseAngle := 3.14159;
IndexedFaceSet80.SetTexCoordIndex([1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1,34,38,37,-1,37,32,34,-1,46,32,37,-1,37,48,46,-1,35,34,32,-1,32,33,35,-1,47,33,32,-1,32,46,47,-1,33,47,53,-1,53,36,33,-1,40,39,42,-1,42,41,40,-1,49,50,42,-1,42,39,49,-1,44,43,39,-1,39,40,44,-1,51,49,39,-1,39,43,51,-1,43,45,52,-1,52,51,43,-1,55,56,57,-1,55,57,58,-1,55,58,54,-1,62,63,64,-1,65,59,60,-1,64,65,60,-1,62,64,60,-1,62,60,61,-1,37,38,55,-1,55,54,37,-1,41,42,56,-1,56,55,41,-1,42,50,57,-1,57,56,42,-1,50,48,58,-1,58,57,50,-1,48,37,54,-1,54,58,48,-1,47,46,60,-1,60,59,47,-1,46,48,61,-1,61,60,46,-1,48,50,62,-1,62,61,48,-1,50,49,63,-1,63,62,50,-1,49,51,64,-1,64,63,49,-1,51,52,65,-1,65,64,51,-1,53,47,59,-1,59,65,53,-1]);
Coordinate81 := TCoordinateNode.Create;
Coordinate81.SetPoint([Vector3(0.9768,-0.0192,-1.681),Vector3(1.657,-0.0192,0.4309),Vector3(0,-0.0192,-1.681),Vector3(1.403,0.7316,0.354),Vector3(0.8174,0.7316,-1.463),Vector3(0,0.7316,-1.463),Vector3(0,0.7316,1.471),Vector3(-1.657,-0.0192,0.4309),Vector3(-1.403,0.7316,0.354),Vector3(-0.8174,0.7316,-1.463),Vector3(-0.9768,-0.0192,-1.681),Vector3(0,-0.0192,1.75),Vector3(1.109,-0.6007,-2.046),Vector3(2.045,-0.6007,0.4309),Vector3(1.695,-0.296,1.429),Vector3(0,-0.6007,-2.046),Vector3(-1.109,-0.6007,-2.046),Vector3(-2.045,-0.6007,0.4309),Vector3(-1.695,-0.296,1.429),Vector3(0,-1.207,-1.841),Vector3(1.023,-1.207,-1.841),Vector3(1.913,-1.223,0.5161),Vector3(1.601,-0.9325,1.406),Vector3(0,-0.6582,1.708),Vector3(-1.601,-0.9325,1.406),Vector3(-1.913,-1.223,0.5161),Vector3(-1.023,-1.207,-1.841),Vector3(1.409,-1.925,-2.878),Vector3(1.409,-3.947,-1.681),Vector3(0,-3.947,-1.681),Vector3(1.109,-0.6007,-2.046),Vector3(0,-0.6007,-2.046),Vector3(-1.409,-1.925,-2.878),Vector3(0,-1.925,-2.878),Vector3(-1.109,-0.6007,-2.046),Vector3(-1.409,-3.947,-1.681),Vector3(2.927,-1.925,0.4309),Vector3(2.089,-3.947,0.4309),Vector3(2.045,-0.6007,0.4309),Vector3(-2.927,-1.925,0.4309),Vector3(-2.045,-0.6007,0.4309),Vector3(-2.089,-3.947,0.4309),Vector3(0,-3.947,0.4309),Vector3(0.9442,-0.3153,-1.692),Vector3(0,-0.3153,-1.692),Vector3(-0.9442,-0.3153,-1.692),Vector3(-1.7,-0.3153,0.3093),Vector3(1.7,-0.3153,0.3093),Vector3(1.86,-3.793,1.364),Vector3(2.541,-1.963,1.364),Vector3(1.861,-0.9431,1.364),Vector3(-1.861,-0.9431,1.364),Vector3(-2.541,-1.963,1.364),Vector3(-1.86,-3.793,1.364),Vector3(0,-3.793,1.364)]);
{ .SetCoord }
IndexedFaceSet80.Coord := Coordinate81;
TextureCoordinate82 := TTextureCoordinateNode.Create;
TextureCoordinate82.SetPoint([Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4637,0.1714),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.3836,0.1404),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.4244,0.1312),Vector2(0.3861,0.1398),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3861,0.1398),Vector2(0.3836,0.1404),Vector2(0.3873,0.0706),Vector2(0.3873,0.0706),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.3861,0.1398),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186)]);
{ .SetTexCoord }
IndexedFaceSet80.TexCoord := TextureCoordinate82;
{ .SetGeometry }
Shape76.Geometry := IndexedFaceSet80;
{ .AddChild }
Transform75.AddChildren([Shape76]);
{ .AddChildren }
HAnimSegment74.AddChildren([Transform75]);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimSegment74]);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.NameField := 'l_metatarsophalangeal_2';
HAnimJoint83.Center := Vector3(3.854,3.64,0.7402);
HAnimJoint83.SetUlimit([0,0,0]);
HAnimJoint83.SetLlimit([0,0,0]);
HAnimSegment84 := THAnimSegmentNode.Create;
HAnimSegment84.NameField := 'l_tarsal_proximal_phalanx_2';
{ TODO append _2 }
Transform85 := TTransformNode.Create;
Transform85.Translation := Vector3(3.854,3.64,0.7402);
Shape86 := TShapeNode.Create;
Appearance87 := TAppearanceNode.Create;
Material88 := TMaterialNode.Create;
Material88.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance87.Material := Material88;
ImageTexture89 := TImageTextureNode.Create;
ImageTexture89 := ImageTexture39;
{ .SetTexture }
Appearance87.Texture := ImageTexture89;
{ .SetAppearance }
Shape86.Appearance := Appearance87;
IndexedFaceSet90 := TIndexedFaceSetNode.Create;
IndexedFaceSet90.SetCoordIndex([3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,28,26,25,-1,25,29,28,-1,35,27,26,-1,26,28,35,-1,27,35,40,-1,25,26,31,-1,31,30,25,-1,31,26,27,-1,27,32,31,-1,32,27,40,-1,40,41,32,-1,42,29,25,-1,25,30,42,-1,28,29,34,-1,34,33,28,-1,35,28,33,-1,33,36,35,-1,36,40,35,-1,34,37,38,-1,38,33,34,-1,38,39,36,-1,36,33,38,-1,39,41,40,-1,40,36,39,-1,42,37,34,-1,34,29,42,-1]);
IndexedFaceSet90.CreaseAngle := 3.14159;
IndexedFaceSet90.SetTexCoordIndex([4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1]);
Coordinate91 := TCoordinateNode.Create;
Coordinate91.SetPoint([Vector3(2.927,-1.627,-1.013),Vector3(2.089,-3.648,-1.013),Vector3(0,0.2797,0.3064),Vector3(2.045,-0.3017,-1.013),Vector3(1.695,0.0029,-0.0151),Vector3(-2.927,-1.627,-1.013),Vector3(-2.045,-0.3017,-1.013),Vector3(-2.089,-3.648,-1.013),Vector3(-1.695,0.0029,-0.0151),Vector3(0,-3.648,-1.013),Vector3(1.74,-0.3226,1.158),Vector3(2.661,-1.866,0.9192),Vector3(2.14,-3.648,0.9192),Vector3(-1.74,-0.3226,1.158),Vector3(-2.661,-1.866,0.9192),Vector3(-2.14,-3.648,0.9192),Vector3(0,-3.648,0.9192),Vector3(0,-0.0274,1.661),Vector3(2.405,-1.656,-1.915),Vector3(1.75,-2.942,-1.915),Vector3(0,-2.942,-1.915),Vector3(-1.75,-2.942,-1.915),Vector3(-2.405,-1.656,-1.915),Vector3(-1.742,-0.5681,-1.915),Vector3(1.742,-0.5681,-1.915),Vector3(1.784,-0.648,2.332),Vector3(2.216,-2.267,4.144),Vector3(2.216,-3.648,3.776),Vector3(0,-2.267,5.463),Vector3(0,-0.5463,3.95),Vector3(1.74,-0.3226,1.158),Vector3(2.661,-1.866,0.9192),Vector3(2.14,-3.648,0.9192),Vector3(-2.216,-2.267,4.144),Vector3(-1.784,-0.648,2.332),Vector3(0,-3.648,5.096),Vector3(-2.216,-3.648,3.776),Vector3(-1.74,-0.3226,1.158),Vector3(-2.661,-1.866,0.9192),Vector3(-2.14,-3.648,0.9192),Vector3(0,-3.648,3.776),Vector3(0,-3.648,0.9192),Vector3(0,-0.0274,1.661)]);
{ .SetCoord }
IndexedFaceSet90.Coord := Coordinate91;
TextureCoordinate92 := TTextureCoordinateNode.Create;
TextureCoordinate92.SetPoint([Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.4411,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.4868,0.1432),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.532,0.098),Vector2(0.5645,0.0707),Vector2(0.4885,0.102),Vector2(0.5026,0.044),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.5645,0.0707),Vector2(0.5026,0.044),Vector2(0.4885,0.102),Vector2(0.532,0.098),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.5487,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432)]);
{ .SetTexCoord }
IndexedFaceSet90.TexCoord := TextureCoordinate92;
{ .SetGeometry }
Shape86.Geometry := IndexedFaceSet90;
{ .AddChild }
Transform85.AddChildren([Shape86]);
{ .AddChildren }
HAnimSegment84.AddChildren([Transform85]);
{ .AddChildren }
HAnimJoint83.AddChildren([HAnimSegment84]);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimJoint83]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint73]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint63]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint53]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'r_hip';
HAnimJoint93.Center := Vector3(-4.207,32.02,-0.8155);
HAnimJoint93.SetUlimit([0,0,0]);
HAnimJoint93.SetLlimit([0,0,0]);
HAnimSegment94 := THAnimSegmentNode.Create;
HAnimSegment94.NameField := 'r_thigh';
Transform95 := TTransformNode.Create;
Transform95.Translation := Vector3(-4.207,32.02,-0.8155);
Shape96 := TShapeNode.Create;
Appearance97 := TAppearanceNode.Create;
Material98 := TMaterialNode.Create;
Material98.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance97.Material := Material98;
ImageTexture99 := TImageTextureNode.Create;
ImageTexture99 := ImageTexture39;
{ .SetTexture }
Appearance97.Texture := ImageTexture99;
{ .SetAppearance }
Shape96.Appearance := Appearance97;
IndexedFaceSet100 := TIndexedFaceSetNode.Create;
IndexedFaceSet100.SetCoordIndex([43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1]);
IndexedFaceSet100.CreaseAngle := 3.14159;
IndexedFaceSet100.SetTexCoordIndex([0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1]);
Coordinate101 := TCoordinateNode.Create;
Coordinate101.SetPoint([Vector3(-2.96,3.738,0),Vector3(-1.643,3.738,3.209),Vector3(1.316,3.738,4.002),Vector3(3.367,3.738,1.781),Vector3(3.367,3.738,-1.781),Vector3(1.316,3.738,-4.002),Vector3(-1.643,3.738,-3.209),Vector3(-2.96,-0.0114,0),Vector3(-1.643,-0.0114,3.209),Vector3(1.316,-0.0114,4.002),Vector3(3.367,-0.0114,1.781),Vector3(3.367,-0.0114,-1.781),Vector3(1.316,-0.0114,-4.002),Vector3(-1.643,-0.0114,-3.209),Vector3(-2.96,-6.507,0),Vector3(-1.643,-6.507,3.209),Vector3(1.316,-6.507,4.002),Vector3(3.367,-6.507,1.781),Vector3(3.367,-6.507,-1.781),Vector3(1.316,-6.507,-4.002),Vector3(-1.643,-6.507,-3.209),Vector3(-3.367,-13.13,0),Vector3(-1.897,-13.13,3.582),Vector3(1.407,-13.13,4.467),Vector3(3.355,-13.13,1.988),Vector3(3.355,-13.13,-1.988),Vector3(1.407,-13.13,-4.467),Vector3(-1.897,-13.13,-3.582),Vector3(-2.146,-4.985,0),Vector3(-1.136,-4.985,2.462),Vector3(1.135,-4.985,3.07),Vector3(2.633,-4.985,1.366),Vector3(2.633,-4.985,-1.366),Vector3(1.135,-4.985,-3.07),Vector3(-1.136,-4.985,-2.462),Vector3(-2.156,-11.45,0),Vector3(-1.225,-11.45,1.956),Vector3(0.8662,-11.45,2.439),Vector3(2.543,-11.45,1.085),Vector3(2.543,-11.45,-1.085),Vector3(0.8662,-11.45,-2.439),Vector3(-1.225,-11.45,-1.956),Vector3(-2.051,5.729,0),Vector3(-1.076,5.729,2.375),Vector3(1.114,5.729,2.961),Vector3(2.87,5.729,1.318),Vector3(2.87,5.729,-1.318),Vector3(1.114,5.729,-2.961),Vector3(-1.076,5.729,-2.375),Vector3(-1.842,-15.12,0),Vector3(-1.03,-15.12,1.873),Vector3(0.7965,-15.12,2.295),Vector3(2.261,-15.12,1.113),Vector3(2.261,-15.12,-0.9478),Vector3(0.7965,-15.12,-2.13),Vector3(-1.03,-15.12,-1.708),Vector3(-0.6277,-16.1,0),Vector3(-0.2723,-16.1,0.912),Vector3(0.5262,-16.1,1.096),Vector3(1.167,-16.1,0.5796),Vector3(1.167,-16.1,-0.4145),Vector3(0.5262,-16.1,-0.9313),Vector3(-0.2723,-16.1,-0.7469)]);
{ .SetCoord }
IndexedFaceSet100.Coord := Coordinate101;
TextureCoordinate102 := TTextureCoordinateNode.Create;
TextureCoordinate102.SetPoint([Vector2(0.719,0.5576),Vector2(0.6284,0.5576),Vector2(0.7414,0.5576),Vector2(0.6787,0.5576),Vector2(0.5781,0.5576),Vector2(0.5154,0.5576),Vector2(0.5378,0.5576),Vector2(0.6284,0.5029),Vector2(0.7509,0.3997),Vector2(0.6284,0.3997),Vector2(0.7509,0.5029),Vector2(0.7811,0.3997),Vector2(0.7811,0.5029),Vector2(0.6964,0.3997),Vector2(0.6964,0.5029),Vector2(0.5604,0.3997),Vector2(0.5604,0.5029),Vector2(0.4756,0.3997),Vector2(0.4756,0.5029),Vector2(0.5059,0.3997),Vector2(0.5059,0.5029),Vector2(0.7509,0.3197),Vector2(0.6284,0.3197),Vector2(0.7811,0.3197),Vector2(0.6964,0.3197),Vector2(0.5604,0.3197),Vector2(0.4756,0.3197),Vector2(0.5059,0.3197),Vector2(0.7651,0.2166),Vector2(0.6284,0.2166),Vector2(0.7989,0.2166),Vector2(0.7043,0.2166),Vector2(0.5525,0.2166),Vector2(0.4579,0.2166),Vector2(0.4917,0.2166),Vector2(0.7224,0.263),Vector2(0.6284,0.263),Vector2(0.7456,0.263),Vector2(0.6805,0.263),Vector2(0.5762,0.263),Vector2(0.5112,0.263),Vector2(0.5344,0.263),Vector2(0.8705,0.5452),Vector2(0.8705,0.5383),Vector2(0.8705,0.5369),Vector2(0.8705,0.5408),Vector2(0.8705,0.5483),Vector2(0.8705,0.5522),Vector2(0.8705,0.5509),Vector2(0.917,0.5452),Vector2(0.917,0.5266),Vector2(0.89,0.5304),Vector2(0.89,0.5452),Vector2(0.917,0.522),Vector2(0.89,0.5268),Vector2(0.917,0.5349),Vector2(0.89,0.537),Vector2(0.917,0.5555),Vector2(0.89,0.5534),Vector2(0.917,0.5684),Vector2(0.89,0.5636),Vector2(0.917,0.5638),Vector2(0.89,0.56),Vector2(0.8746,0.531),Vector2(0.8746,0.5452),Vector2(0.8746,0.5279),Vector2(0.8746,0.5368),Vector2(0.8746,0.5524),Vector2(0.8746,0.5613),Vector2(0.8746,0.5581)]);
{ .SetTexCoord }
IndexedFaceSet100.TexCoord := TextureCoordinate102;
{ .SetGeometry }
Shape96.Geometry := IndexedFaceSet100;
{ .AddChild }
Transform95.AddChildren([Shape96]);
{ .AddChildren }
HAnimSegment94.AddChildren([Transform95]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimSegment94]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.NameField := 'r_knee';
HAnimJoint103.Center := Vector3(-4.116,17.26,-0.8639);
HAnimJoint103.SetUlimit([0,0,0]);
HAnimJoint103.SetLlimit([0,0,0]);
HAnimSegment104 := THAnimSegmentNode.Create;
HAnimSegment104.NameField := 'r_calf';
Transform105 := TTransformNode.Create;
Transform105.Translation := Vector3(-4.116,17.26,-0.8639);
Shape106 := TShapeNode.Create;
Appearance107 := TAppearanceNode.Create;
Material108 := TMaterialNode.Create;
Material108.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance107.Material := Material108;
ImageTexture109 := TImageTextureNode.Create;
ImageTexture109 := ImageTexture39;
{ .SetTexture }
Appearance107.Texture := ImageTexture109;
{ .SetAppearance }
Shape106.Appearance := Appearance107;
IndexedFaceSet110 := TIndexedFaceSetNode.Create;
IndexedFaceSet110.SetCoordIndex([0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
IndexedFaceSet110.CreaseAngle := 3.14159;
IndexedFaceSet110.SetTexCoordIndex([0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
Coordinate111 := TCoordinateNode.Create;
Coordinate111.SetPoint([Vector3(-0.7186,0.9688,0.0234),Vector3(-0.3632,0.9688,0.9354),Vector3(0.4353,0.9688,1.12),Vector3(1.076,0.9688,0.603),Vector3(1.076,0.9688,-0.3911),Vector3(0.4353,0.9688,-0.9079),Vector3(-0.3632,0.9688,-0.7235),Vector3(-2.337,-4.613,0.0234),Vector3(-1.46,-3.622,2.019),Vector3(-1.236,-1.628,2.42),Vector3(-2.118,-1.912,0.0234),Vector3(0.8111,-3.622,2.567),Vector3(0.7468,-1.628,2.903),Vector3(2.254,-4.613,1.255),Vector3(2.337,-1.912,0.9793),Vector3(2.254,-5.383,-1.368),Vector3(2.337,-1.912,-0.9325),Vector3(0.8111,-5.383,-2.903),Vector3(0.7468,-1.912,-2.368),Vector3(-1.46,-5.383,-2.355),Vector3(-1.236,-1.912,-1.885),Vector3(-1.121,-0.0032,1.896),Vector3(-1.933,-0.0032,0.0234),Vector3(0.7056,-0.0032,2.318),Vector3(2.17,-0.0032,1.136),Vector3(2.17,-0.0032,-0.9244),Vector3(0.7056,-0.0032,-2.061),Vector3(-1.121,-0.0032,-1.64),Vector3(-1.607,-12.92,0.0032),Vector3(-0.9216,-12.91,1.565),Vector3(0.619,-12.91,1.951),Vector3(1.854,-12.92,0.8701),Vector3(1.854,-12.94,-0.9762),Vector3(0.619,-12.94,-1.742),Vector3(-0.9216,-12.94,-1.356),Vector3(-0.7072,-14.53,0.0239),Vector3(-0.3604,-14.53,0.814),Vector3(0.4188,-14.53,1.009),Vector3(1.044,-14.53,0.4624),Vector3(1.044,-14.54,-0.4714),Vector3(0.4188,-14.54,-0.8587),Vector3(-0.3604,-14.54,-0.6635)]);
{ .SetCoord }
IndexedFaceSet110.Coord := Coordinate111;
TextureCoordinate112 := TTextureCoordinateNode.Create;
TextureCoordinate112.SetPoint([Vector2(0.9309,0.5848),Vector2(0.919,0.5848),Vector2(0.8921,0.5848),Vector2(0.8706,0.5848),Vector2(0.8706,0.5848),Vector2(0.8921,0.5848),Vector2(0.919,0.5848),Vector2(0.9845,0.5321),Vector2(0.955,0.5475),Vector2(0.9491,0.5599),Vector2(0.9788,0.5571),Vector2(0.8787,0.5475),Vector2(0.8825,0.5599),Vector2(0.8302,0.5321),Vector2(0.8291,0.5571),Vector2(0.8302,0.52),Vector2(0.8291,0.5571),Vector2(0.8787,0.52),Vector2(0.8825,0.5571),Vector2(0.955,0.52),Vector2(0.9491,0.5571),Vector2(0.9444,0.5755),Vector2(0.9717,0.5755),Vector2(0.8831,0.5755),Vector2(0.8339,0.5755),Vector2(0.8339,0.5755),Vector2(0.8831,0.5755),Vector2(0.9444,0.5755),Vector2(0.9679,0.2444),Vector2(0.9449,0.2445),Vector2(0.8931,0.2445),Vector2(0.8516,0.2444),Vector2(0.8516,0.2442),Vector2(0.8931,0.2442),Vector2(0.9449,0.2442),Vector2(0.9372,0.2243),Vector2(0.9255,0.2244),Vector2(0.8993,0.2244),Vector2(0.8783,0.2243),Vector2(0.8783,0.2243),Vector2(0.8993,0.2243),Vector2(0.9255,0.2243)]);
{ .SetTexCoord }
IndexedFaceSet110.TexCoord := TextureCoordinate112;
{ .SetGeometry }
Shape106.Geometry := IndexedFaceSet110;
{ .AddChild }
Transform105.AddChildren([Shape106]);
{ .AddChildren }
HAnimSegment104.AddChildren([Transform105]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimSegment104]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.NameField := 'r_talocrural';
HAnimJoint113.Center := Vector3(-3.854,3.939,-0.7038);
HAnimJoint113.SetUlimit([0,0,0]);
HAnimJoint113.SetLlimit([0,0,0]);
HAnimSegment114 := THAnimSegmentNode.Create;
HAnimSegment114.NameField := 'r_talus';
Transform115 := TTransformNode.Create;
Transform115.Translation := Vector3(-3.854,3.939,-0.7038);
Shape116 := TShapeNode.Create;
Appearance117 := TAppearanceNode.Create;
Material118 := TMaterialNode.Create;
Material118.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance117.Material := Material118;
ImageTexture119 := TImageTextureNode.Create;
ImageTexture119 := ImageTexture39;
{ .SetTexture }
Appearance117.Texture := ImageTexture119;
{ .SetAppearance }
Shape116.Appearance := Appearance117;
IndexedFaceSet120 := TIndexedFaceSetNode.Create;
IndexedFaceSet120.SetCoordIndex([1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1,33,27,30,-1,30,31,33,-1,36,38,30,-1,30,27,36,-1,29,28,27,-1,27,33,29,-1,37,36,27,-1,27,28,37,-1,28,29,42,-1,42,37,28,-1,33,31,34,-1,34,32,33,-1,39,32,34,-1,34,40,39,-1,29,33,32,-1,32,35,29,-1,41,35,32,-1,32,39,41,-1,35,41,42,-1,42,29,35,-1,44,43,47,-1,44,47,46,-1,44,46,45,-1,51,50,49,-1,49,48,54,-1,49,54,53,-1,51,49,53,-1,51,53,52,-1,30,43,44,-1,44,31,30,-1,31,44,45,-1,45,34,31,-1,34,45,46,-1,46,40,34,-1,40,46,47,-1,47,38,40,-1,38,47,43,-1,43,30,38,-1,37,48,49,-1,49,36,37,-1,36,49,50,-1,50,38,36,-1,38,50,51,-1,51,40,38,-1,40,51,52,-1,52,39,40,-1,39,52,53,-1,53,41,39,-1,41,53,54,-1,54,42,41,-1,42,54,48,-1,48,37,42,-1]);
IndexedFaceSet120.CreaseAngle := 3.14159;
IndexedFaceSet120.SetTexCoordIndex([1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1,34,32,37,-1,37,38,34,-1,46,48,37,-1,37,32,46,-1,35,33,32,-1,32,34,35,-1,47,46,32,-1,32,33,47,-1,33,36,53,-1,53,47,33,-1,40,41,42,-1,42,39,40,-1,49,39,42,-1,42,50,49,-1,44,40,39,-1,39,43,44,-1,51,43,39,-1,39,49,51,-1,43,51,52,-1,52,45,43,-1,55,54,58,-1,55,58,57,-1,55,57,56,-1,62,61,60,-1,60,59,65,-1,60,65,64,-1,62,60,64,-1,62,64,63,-1,37,54,55,-1,55,38,37,-1,41,55,56,-1,56,42,41,-1,42,56,57,-1,57,50,42,-1,50,57,58,-1,58,48,50,-1,48,58,54,-1,54,37,48,-1,47,59,60,-1,60,46,47,-1,46,60,61,-1,61,48,46,-1,48,61,62,-1,62,50,48,-1,50,62,63,-1,63,49,50,-1,49,63,64,-1,64,51,49,-1,51,64,65,-1,65,52,51,-1,53,65,59,-1,59,47,53,-1]);
Coordinate121 := TCoordinateNode.Create;
Coordinate121.SetPoint([Vector3(-0.9768,-0.0192,-1.681),Vector3(-1.657,-0.0192,0.4309),Vector3(0,-0.0192,-1.681),Vector3(-1.403,0.7316,0.354),Vector3(-0.8174,0.7316,-1.463),Vector3(0,0.7316,-1.463),Vector3(0,0.7316,1.471),Vector3(1.657,-0.0192,0.4309),Vector3(1.403,0.7316,0.354),Vector3(0.8174,0.7316,-1.463),Vector3(0.9768,-0.0192,-1.681),Vector3(0,-0.0192,1.75),Vector3(-1.109,-0.6007,-2.046),Vector3(-2.045,-0.6007,0.4309),Vector3(-1.695,-0.296,1.429),Vector3(0,-0.6007,-2.046),Vector3(1.109,-0.6007,-2.046),Vector3(2.045,-0.6007,0.4309),Vector3(1.695,-0.296,1.429),Vector3(0,-1.207,-1.841),Vector3(-1.023,-1.207,-1.841),Vector3(-1.913,-1.223,0.5161),Vector3(-1.601,-0.9325,1.406),Vector3(0,-0.6582,1.708),Vector3(1.601,-0.9325,1.406),Vector3(1.913,-1.223,0.5161),Vector3(1.023,-1.207,-1.841),Vector3(-1.409,-1.925,-2.878),Vector3(-1.409,-3.947,-1.681),Vector3(0,-3.947,-1.681),Vector3(-1.109,-0.6007,-2.046),Vector3(0,-0.6007,-2.046),Vector3(1.409,-1.925,-2.878),Vector3(0,-1.925,-2.878),Vector3(1.109,-0.6007,-2.046),Vector3(1.409,-3.947,-1.681),Vector3(-2.927,-1.925,0.4309),Vector3(-2.089,-3.947,0.4309),Vector3(-2.045,-0.6007,0.4309),Vector3(2.927,-1.925,0.4309),Vector3(2.045,-0.6007,0.4309),Vector3(2.089,-3.947,0.4309),Vector3(0,-3.947,0.4309),Vector3(-0.9442,-0.3153,-1.692),Vector3(0,-0.3153,-1.692),Vector3(0.9442,-0.3153,-1.692),Vector3(1.7,-0.3153,0.3093),Vector3(-1.7,-0.3153,0.3093),Vector3(-1.86,-3.793,1.364),Vector3(-2.541,-1.963,1.364),Vector3(-1.861,-0.9431,1.364),Vector3(1.861,-0.9431,1.364),Vector3(2.541,-1.963,1.364),Vector3(1.86,-3.793,1.364),Vector3(0,-3.793,1.364)]);
{ .SetCoord }
IndexedFaceSet120.Coord := Coordinate121;
TextureCoordinate122 := TTextureCoordinateNode.Create;
TextureCoordinate122.SetPoint([Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.4637,0.1714),Vector2(0.4216,0.1651),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.3819,0.171),Vector2(0.4637,0.1714),Vector2(0.4637,0.1714),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.3836,0.1404),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.4244,0.1312),Vector2(0.3861,0.1398),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3873,0.0706),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3861,0.1398),Vector2(0.3836,0.1404),Vector2(0.3873,0.0706),Vector2(0.3873,0.0706),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.3871,0.0221),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.3861,0.1398),Vector2(0.3836,0.1404),Vector2(0.3861,0.1398),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186)]);
{ .SetTexCoord }
IndexedFaceSet120.TexCoord := TextureCoordinate122;
{ .SetGeometry }
Shape116.Geometry := IndexedFaceSet120;
{ .AddChild }
Transform115.AddChildren([Shape116]);
{ .AddChildren }
HAnimSegment114.AddChildren([Transform115]);
{ .AddChildren }
HAnimJoint113.AddChildren([HAnimSegment114]);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'r_metatarsophalangeal_2';
HAnimJoint123.Center := Vector3(-3.854,3.64,0.7402);
HAnimJoint123.SetUlimit([0,0,0]);
HAnimJoint123.SetLlimit([0,0,0]);
HAnimSegment124 := THAnimSegmentNode.Create;
HAnimSegment124.NameField := 'r_tarsal_proximal_phalanx_2';
{ TODO append _2 }
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(-3.854,3.64,0.7402);
Shape126 := TShapeNode.Create;
Appearance127 := TAppearanceNode.Create;
Material128 := TMaterialNode.Create;
Material128.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance127.Material := Material128;
ImageTexture129 := TImageTextureNode.Create;
ImageTexture129 := ImageTexture39;
{ .SetTexture }
Appearance127.Texture := ImageTexture129;
{ .SetAppearance }
Shape126.Appearance := Appearance127;
IndexedFaceSet130 := TIndexedFaceSetNode.Create;
IndexedFaceSet130.SetCoordIndex([10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,28,29,25,-1,25,26,28,-1,35,28,26,-1,26,27,35,-1,27,40,35,-1,25,30,31,-1,31,26,25,-1,31,32,27,-1,27,26,31,-1,32,41,40,-1,40,27,32,-1,42,30,25,-1,25,29,42,-1,28,33,34,-1,34,29,28,-1,35,36,33,-1,33,28,35,-1,36,35,40,-1,34,33,38,-1,38,37,34,-1,38,33,36,-1,36,39,38,-1,39,36,40,-1,40,41,39,-1,42,29,34,-1,34,37,42,-1]);
IndexedFaceSet130.CreaseAngle := 3.14159;
IndexedFaceSet130.SetTexCoordIndex([12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1]);
Coordinate131 := TCoordinateNode.Create;
Coordinate131.SetPoint([Vector3(-2.927,-1.627,-1.013),Vector3(-2.089,-3.648,-1.013),Vector3(0,0.2797,0.3064),Vector3(-2.045,-0.3017,-1.013),Vector3(-1.695,0.0029,-0.0151),Vector3(2.927,-1.627,-1.013),Vector3(2.045,-0.3017,-1.013),Vector3(2.089,-3.648,-1.013),Vector3(1.695,0.0029,-0.0151),Vector3(0,-3.648,-1.013),Vector3(-1.74,-0.3226,1.158),Vector3(-2.661,-1.866,0.9192),Vector3(-2.14,-3.648,0.9192),Vector3(1.74,-0.3226,1.158),Vector3(2.661,-1.866,0.9192),Vector3(2.14,-3.648,0.9192),Vector3(0,-3.648,0.9192),Vector3(0,-0.0274,1.661),Vector3(-2.405,-1.656,-1.915),Vector3(-1.75,-2.942,-1.915),Vector3(0,-2.942,-1.915),Vector3(1.75,-2.942,-1.915),Vector3(2.405,-1.656,-1.915),Vector3(1.742,-0.5681,-1.915),Vector3(-1.742,-0.5681,-1.915),Vector3(-1.784,-0.648,2.332),Vector3(-2.216,-2.267,4.144),Vector3(-2.216,-3.648,3.776),Vector3(0,-2.267,5.463),Vector3(0,-0.5463,3.95),Vector3(-1.74,-0.3226,1.158),Vector3(-2.661,-1.866,0.9192),Vector3(-2.14,-3.648,0.9192),Vector3(2.216,-2.267,4.144),Vector3(1.784,-0.648,2.332),Vector3(0,-3.648,5.096),Vector3(2.216,-3.648,3.776),Vector3(1.74,-0.3226,1.158),Vector3(2.661,-1.866,0.9192),Vector3(2.14,-3.648,0.9192),Vector3(0,-3.648,3.776),Vector3(0,-3.648,0.9192),Vector3(0,-0.0274,1.661)]);
{ .SetCoord }
IndexedFaceSet130.Coord := Coordinate131;
TextureCoordinate132 := TTextureCoordinateNode.Create;
TextureCoordinate132.SetPoint([Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4411,0.0186),Vector2(0.4244,0.1312),Vector2(0.4394,0.1472),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4411,0.0186),Vector2(0.4637,0.1714),Vector2(0.4394,0.1472),Vector2(0.4411,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.4868,0.1432),Vector2(0.433,0.0595),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.4411,0.0186),Vector2(0.433,0.0595),Vector2(0.4244,0.1312),Vector2(0.4244,0.1312),Vector2(0.532,0.098),Vector2(0.5645,0.0707),Vector2(0.4885,0.102),Vector2(0.5026,0.044),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432),Vector2(0.5645,0.0707),Vector2(0.5026,0.044),Vector2(0.4885,0.102),Vector2(0.532,0.098),Vector2(0.5945,0.0186),Vector2(0.5487,0.0186),Vector2(0.464,0.1246),Vector2(0.4607,0.0558),Vector2(0.4904,0.0166),Vector2(0.5487,0.0186),Vector2(0.4949,0.0186),Vector2(0.4868,0.1432)]);
{ .SetTexCoord }
IndexedFaceSet130.TexCoord := TextureCoordinate132;
{ .SetGeometry }
Shape126.Geometry := IndexedFaceSet130;
{ .AddChild }
Transform125.AddChildren([Shape126]);
{ .AddChildren }
HAnimSegment124.AddChildren([Transform125]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimSegment124]);
{ .AddChildren }
HAnimJoint113.AddChildren([HAnimJoint123]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimJoint113]);
{ .AddChildren }
HAnimJoint93.AddChildren([HAnimJoint103]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint93]);
{ .AddChildren }
HAnimJoint33.AddChildren([HAnimJoint43]);
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.NameField := 'vl5';
HAnimJoint133.Center := Vector3(0,40.07,-0.8527);
HAnimJoint133.SetUlimit([0,0,0]);
HAnimJoint133.SetLlimit([0,0,0]);
HAnimSegment134 := THAnimSegmentNode.Create;
HAnimSegment134.NameField := 'l5';
Transform135 := TTransformNode.Create;
Transform135.Translation := Vector3(0,40.07,-0.8527);
Shape136 := TShapeNode.Create;
Appearance137 := TAppearanceNode.Create;
Material138 := TMaterialNode.Create;
Material138.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance137.Material := Material138;
ImageTexture139 := TImageTextureNode.Create;
ImageTexture139 := ImageTexture39;
{ .SetTexture }
Appearance137.Texture := ImageTexture139;
{ .SetAppearance }
Shape136.Appearance := Appearance137;
IndexedFaceSet140 := TIndexedFaceSetNode.Create;
IndexedFaceSet140.SetCoordIndex([3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1,121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1,79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1,4,3,158,-1,158,159,4,-1,66,4,159,-1,159,163,66,-1,0,1,156,-1,156,155,0,-1,2,0,155,-1,155,157,2,-1,3,2,157,-1,157,158,3,-1,65,66,163,-1,163,162,65,-1,82,83,171,-1,171,170,82,-1,83,140,173,-1,173,171,83,-1,1,80,168,-1,168,156,1,-1,80,81,169,-1,169,168,80,-1,81,82,170,-1,170,169,81,-1,140,65,162,-1,162,173,140,-1]);
IndexedFaceSet140.CreaseAngle := 3.14159;
IndexedFaceSet140.SetTexCoordIndex([2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,11,12,-1,12,13,10,-1,14,15,11,-1,11,16,14,-1,11,10,16,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1,140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,13,12,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,15,14,9,-1,9,8,15,-1,105,101,93,-1,93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,185,186,183,-1,183,184,185,-1,186,188,187,-1,187,183,186,-1,188,190,189,-1,189,187,188,-1,190,192,191,-1,191,189,190,-1,195,196,193,-1,193,194,195,-1,192,195,194,-1,194,191,192,-1,197,198,185,-1,185,184,197,-1,199,200,198,-1,198,197,199,-1,201,202,200,-1,200,199,201,-1,203,204,202,-1,202,201,203,-1,193,196,205,-1,205,206,193,-1,206,205,204,-1,204,203,206,-1,3,2,189,-1,189,191,3,-1,6,3,191,-1,191,194,6,-1,207,208,184,-1,184,183,207,-1,7,207,183,-1,183,187,7,-1,2,7,187,-1,187,189,2,-1,8,6,194,-1,194,193,8,-1,12,11,203,-1,203,201,12,-1,11,15,206,-1,206,203,11,-1,208,209,197,-1,197,184,208,-1,209,17,199,-1,199,197,209,-1,17,12,201,-1,201,199,17,-1,15,8,193,-1,193,206,15,-1]);
Coordinate141 := TCoordinateNode.Create;
Coordinate141.SetPoint([Vector3(0.6928,14.72,-1.263),Vector3(0,14.77,-1.355),Vector3(1.47,14.93,-0.9099),Vector3(2.016,14.91,0.2814),Vector3(1.573,14.61,1.11),Vector3(2.914,14.46,0.3331),Vector3(2.599,15.36,-1.406),Vector3(3.187,13.6,1.543),Vector3(2.239,13.38,3.23),Vector3(0.9629,15.39,-3.152),Vector3(0,15.36,-3.317),Vector3(2.035,15.41,-2.815),Vector3(3.316,12.32,2.97),Vector3(5.086,13.13,2.011),Vector3(2.982,14.24,2.181),Vector3(2.245,13.38,3.821),Vector3(3.131,12.64,3.9),Vector3(4.42,13.94,2.105),Vector3(5.602,13.73,0.1863),Vector3(5.472,13.06,-1.452),Vector3(3.439,15.3,0.3672),Vector3(3.953,14.44,-2.227),Vector3(5.073,14.77,0.3672),Vector3(4.655,13.49,-1.78),Vector3(1.811,9.837,-2.43),Vector3(0,9.533,-2.564),Vector3(4.241,10.8,-2.043),Vector3(1.032,12.54,-4.427),Vector3(0,12.54,-4.562),Vector3(2.39,12.92,-3.914),Vector3(1.677,9.192,-3.147),Vector3(0,8.87,-3.266),Vector3(4.12,10.71,-3.032),Vector3(4.272,8.132,4.186),Vector3(6.354,8.764,1.543),Vector3(2.14,8.582,-2.362),Vector3(4.3,8.685,-1.848),Vector3(3.695,5.585,2.768),Vector3(5.081,5.622,1.505),Vector3(6.096,10.26,1.67),Vector3(5.904,10.25,-0.3303),Vector3(5.533,8.718,-0.7796),Vector3(1.419,5.473,-2.22),Vector3(3.58,5.528,-1.434),Vector3(4.793,5.578,-0.2489),Vector3(3.682,3.592,2.824),Vector3(5.077,3.631,1.527),Vector3(1.282,3.303,-2.365),Vector3(3.586,3.501,-1.437),Vector3(4.792,3.575,-0.2999),Vector3(4.178,1.262,3.951),Vector3(5.76,1.298,1.994),Vector3(1.52,1.105,-3.678),Vector3(3.95,1.115,-2.536),Vector3(5.309,1.22,-0.7397),Vector3(3.789,0.1874,3.209),Vector3(5.166,0.2191,1.685),Vector3(1.593,0.068,-2.676),Vector3(3.6,0.0905,-1.847),Vector3(4.841,0.1375,-0.4441),Vector3(7.399,13.46,0.1863),Vector3(6.979,12.64,-1.452),Vector3(6.998,12.7,1.899),Vector3(6.298,10.42,1.67),Vector3(6.292,10.41,-0.3303),Vector3(0,14.34,1.73),Vector3(0.7806,14.35,1.608),Vector3(0,12.15,3.901),Vector3(1.373,12.69,3.668),Vector3(0,11.05,3.845),Vector3(1.713,11.8,3.668),Vector3(1.38,12.69,4.137),Vector3(0,11.45,4.361),Vector3(1.593,12.12,4.338),Vector3(1.579,8.737,4.081),Vector3(1.292,5.554,3.228),Vector3(1.281,3.386,3.336),Vector3(1.635,1.231,4.562),Vector3(1.595,0.1486,3.645),Vector3(0,12.21,4.06),Vector3(-0.6928,14.72,-1.263),Vector3(-1.47,14.93,-0.9099),Vector3(-2.016,14.91,0.2814),Vector3(-1.573,14.61,1.11),Vector3(-2.914,14.46,0.3331),Vector3(-2.599,15.36,-1.406),Vector3(-3.187,13.6,1.543),Vector3(-2.239,13.38,3.23),Vector3(-0.9629,15.39,-3.152),Vector3(-2.035,15.41,-2.815),Vector3(-3.316,12.32,2.97),Vector3(-5.086,13.13,2.011),Vector3(-2.982,14.24,2.181),Vector3(-2.245,13.38,3.821),Vector3(-3.131,12.64,3.9),Vector3(-4.42,13.94,2.105),Vector3(-5.602,13.73,0.1863),Vector3(-5.472,13.06,-1.452),Vector3(-3.439,15.3,0.3672),Vector3(-3.953,14.44,-2.227),Vector3(-5.073,14.77,0.3672),Vector3(-4.655,13.49,-1.78),Vector3(-1.811,9.837,-2.43),Vector3(-4.241,10.8,-2.043),Vector3(-1.032,12.54,-4.427),Vector3(-2.39,12.92,-3.914),Vector3(-1.677,9.192,-3.147),Vector3(-4.12,10.71,-3.032),Vector3(-4.272,8.132,4.186),Vector3(-6.354,8.764,1.543),Vector3(-2.14,8.582,-2.362),Vector3(-4.3,8.685,-1.848),Vector3(-3.695,5.585,2.768),Vector3(-5.081,5.622,1.505),Vector3(-6.096,10.26,1.67),Vector3(-5.904,10.25,-0.3303),Vector3(-5.533,8.718,-0.7796),Vector3(-1.419,5.473,-2.22),Vector3(-3.58,5.528,-1.434),Vector3(-4.793,5.578,-0.2489),Vector3(-3.682,3.592,2.824),Vector3(-5.077,3.631,1.527),Vector3(-1.282,3.303,-2.365),Vector3(-3.586,3.501,-1.437),Vector3(-4.792,3.575,-0.2999),Vector3(-4.178,1.262,3.951),Vector3(-5.76,1.298,1.994),Vector3(-1.52,1.105,-3.678),Vector3(-3.95,1.115,-2.536),Vector3(-5.309,1.22,-0.7397),Vector3(-3.789,0.1874,3.209),Vector3(-5.166,0.2191,1.685),Vector3(-1.593,0.068,-2.676),Vector3(-3.6,0.0905,-1.847),Vector3(-4.841,0.1375,-0.4441),Vector3(-7.399,13.46,0.1863),Vector3(-6.979,12.64,-1.452),Vector3(-6.998,12.7,1.899),Vector3(-6.298,10.42,1.67),Vector3(-6.292,10.41,-0.3303),Vector3(-0.7806,14.35,1.608),Vector3(-1.373,12.69,3.668),Vector3(-1.713,11.8,3.668),Vector3(-1.38,12.69,4.137),Vector3(-1.593,12.12,4.338),Vector3(-1.579,8.737,4.081),Vector3(-1.292,5.554,3.228),Vector3(-1.281,3.386,3.336),Vector3(-1.635,1.231,4.562),Vector3(-1.595,0.1486,3.645),Vector3(0.5369,17.77,-0.941),Vector3(0,17.77,-1.012),Vector3(1.139,17.77,-0.6672),Vector3(1.562,17.77,0.2561),Vector3(1.219,17.77,0.8985),Vector3(0.5424,14.72,-0.9523),Vector3(0,14.77,-1.024),Vector3(1.151,14.93,-0.6757),Vector3(1.578,14.91,0.257),Vector3(1.232,14.61,0.9059),Vector3(0.605,17.9,1.285),Vector3(0,17.34,1.379),Vector3(0,14.34,1.391),Vector3(0.6111,14.35,1.296),Vector3(-0.5369,17.77,-0.941),Vector3(-1.139,17.77,-0.6672),Vector3(-1.562,17.77,0.2561),Vector3(-1.219,17.77,0.8985),Vector3(-0.5424,14.72,-0.9523),Vector3(-1.151,14.93,-0.6757),Vector3(-1.578,14.91,0.257),Vector3(-1.232,14.61,0.9059),Vector3(-0.605,17.9,1.285),Vector3(-0.6111,14.35,1.296)]);
{ .SetCoord }
IndexedFaceSet140.Coord := Coordinate141;
TextureCoordinate142 := TTextureCoordinateNode.Create;
TextureCoordinate142.SetPoint([Vector2(0.4756,0.618),Vector2(0.4724,0.6293),Vector2(0.4618,0.6351),Vector2(0.4566,0.6312),Vector2(0.4542,0.6062),Vector2(0.4644,0.6152),Vector2(0.4472,0.6278),Vector2(0.4554,0.6354),Vector2(0.4381,0.6277),Vector2(0.4381,0.5991),Vector2(0.4005,0.618),Vector2(0.4195,0.6312),Vector2(0.4143,0.6351),Vector2(0.4037,0.6293),Vector2(0.4219,0.6062),Vector2(0.4289,0.6278),Vector2(0.4117,0.6152),Vector2(0.4207,0.6354),Vector2(0.2661,0.5914),Vector2(0.3505,0.5919),Vector2(0.3554,0.5911),Vector2(0.2505,0.5754),Vector2(0.241,0.592),Vector2(0.2112,0.5805),Vector2(0.0763,0.4945),Vector2(0.1025,0.5076),Vector2(0.0865,0.5614),Vector2(0.0652,0.5465),Vector2(0.1412,0.5207),Vector2(0.1108,0.5655),Vector2(0.0786,0.5849),Vector2(0.0516,0.5759),Vector2(0.1073,0.5839),Vector2(0.0639,0.4488),Vector2(0.0877,0.4617),Vector2(0.0525,0.4715),Vector2(0.1185,0.4741),Vector2(0.1474,0.4856),Vector2(0.1724,0.5255),Vector2(0.2089,0.5196),Vector2(0.2133,0.556),Vector2(0.1645,0.5709),Vector2(0.2067,0.5908),Vector2(0.1632,0.5887),Vector2(0.1708,0.4854),Vector2(0.1963,0.4863),Vector2(0.2708,0.4736),Vector2(0.347,0.4316),Vector2(0.3616,0.5328),Vector2(0.2733,0.5359),Vector2(0.238,0.493),Vector2(0.249,0.5451),Vector2(0.2638,0.4568),Vector2(0.3214,0.4203),Vector2(0.2252,0.4828),Vector2(0.042,0.406),Vector2(0.0909,0.398),Vector2(0.2183,0.385),Vector2(0.3504,0.3844),Vector2(0.0206,0.3452),Vector2(0.0903,0.3446),Vector2(0.1491,0.3449),Vector2(0.1525,0.3869),Vector2(0.1538,0.4251),Vector2(0.1784,0.4249),Vector2(0.1911,0.3858),Vector2(0.2175,0.3427),Vector2(0.3608,0.3469),Vector2(0.1838,0.3438),Vector2(0.0177,0.3051),Vector2(0.0982,0.302),Vector2(0.1487,0.2975),Vector2(0.2175,0.2944),Vector2(0.3621,0.2922),Vector2(0.1849,0.2961),Vector2(0.019,0.2349),Vector2(0.1011,0.241),Vector2(0.1445,0.2419),Vector2(0.2369,0.2375),Vector2(0.3561,0.2404),Vector2(0.1927,0.24),Vector2(0.0206,0.2122),Vector2(0.1067,0.2154),Vector2(0.1463,0.2162),Vector2(0.227,0.2131),Vector2(0.3536,0.2151),Vector2(0.1879,0.2143),Vector2(0.1715,0.4655),Vector2(0.1797,0.4646),Vector2(0.1569,0.4642),Vector2(0.1544,0.4288),Vector2(0.1782,0.4286),Vector2(0.0346,0.5664),Vector2(0.0399,0.5407),Vector2(0.2661,0.5914),Vector2(0.2505,0.5754),Vector2(0.241,0.592),Vector2(0.2112,0.5805),Vector2(0.0763,0.4945),Vector2(0.0865,0.5614),Vector2(0.1025,0.5076),Vector2(0.0652,0.5465),Vector2(0.1108,0.5655),Vector2(0.1412,0.5207),Vector2(0.0786,0.5849),Vector2(0.0516,0.5759),Vector2(0.1073,0.5839),Vector2(0.0877,0.4617),Vector2(0.1185,0.4741),Vector2(0.1474,0.4857),Vector2(0.1724,0.5255),Vector2(0.2133,0.556),Vector2(0.2089,0.5196),Vector2(0.1645,0.5709),Vector2(0.2067,0.5908),Vector2(0.1632,0.5887),Vector2(0.1708,0.4854),Vector2(0.1963,0.4863),Vector2(0.2708,0.4736),Vector2(0.2733,0.5359),Vector2(0.238,0.493),Vector2(0.249,0.5451),Vector2(0.2638,0.4568),Vector2(0.2252,0.4828),Vector2(0.042,0.406),Vector2(0.0909,0.398),Vector2(0.2183,0.385),Vector2(0.3504,0.3844),Vector2(0.0206,0.3452),Vector2(0.0903,0.3446),Vector2(0.1525,0.3869),Vector2(0.1491,0.3449),Vector2(0.1538,0.4251),Vector2(0.1784,0.4249),Vector2(0.1911,0.3858),Vector2(0.2175,0.3427),Vector2(0.3608,0.3469),Vector2(0.1838,0.3438),Vector2(0.0177,0.3051),Vector2(0.0982,0.302),Vector2(0.1487,0.2975),Vector2(0.2175,0.2944),Vector2(0.3621,0.2922),Vector2(0.1849,0.2961),Vector2(0.019,0.2349),Vector2(0.1011,0.241),Vector2(0.1445,0.2419),Vector2(0.2369,0.2375),Vector2(0.3561,0.2404),Vector2(0.1927,0.24),Vector2(0.0206,0.2122),Vector2(0.1067,0.2154),Vector2(0.1463,0.2162),Vector2(0.227,0.2131),Vector2(0.3536,0.2151),Vector2(0.1879,0.2143),Vector2(0.1715,0.4655),Vector2(0.1797,0.4646),Vector2(0.1569,0.4642),Vector2(0.1544,0.4288),Vector2(0.1782,0.4286),Vector2(0.3477,0.431),Vector2(0.3623,0.5333),Vector2(0.3623,0.5333),Vector2(0.3505,0.5919),Vector2(0.3223,0.4192),Vector2(0.3477,0.431),Vector2(0.3223,0.4192),Vector2(0.3518,0.3851),Vector2(0.3554,0.5911),Vector2(0.3505,0.5919),Vector2(0.3505,0.5919),Vector2(0.3518,0.3851),Vector2(0.3518,0.3851),Vector2(0.3629,0.3439),Vector2(0.3629,0.3439),Vector2(0.3633,0.2922),Vector2(0.3633,0.2922),Vector2(0.3553,0.2398),Vector2(0.3553,0.2398),Vector2(0.3555,0.2151),Vector2(0.3511,0.5932),Vector2(0.3536,0.2151),Vector2(0.4444,0.6326),Vector2(0.4381,0.6333),Vector2(0.4381,0.6725),Vector2(0.4444,0.6725),Vector2(0.4516,0.6354),Vector2(0.4515,0.6725),Vector2(0.4566,0.6351),Vector2(0.4565,0.6725),Vector2(0.4526,0.6312),Vector2(0.4524,0.6725),Vector2(0.4381,0.6277),Vector2(0.4453,0.6278),Vector2(0.4452,0.6742),Vector2(0.4381,0.6669),Vector2(0.4317,0.6326),Vector2(0.4317,0.6725),Vector2(0.4245,0.6354),Vector2(0.4246,0.6725),Vector2(0.4195,0.6351),Vector2(0.4197,0.6725),Vector2(0.4235,0.6312),Vector2(0.4237,0.6725),Vector2(0.4309,0.6742),Vector2(0.4309,0.6278),Vector2(0.4462,0.6326),Vector2(0.4381,0.6333),Vector2(0.4299,0.6326)]);
{ .SetTexCoord }
IndexedFaceSet140.TexCoord := TextureCoordinate142;
{ .SetGeometry }
Shape136.Geometry := IndexedFaceSet140;
{ .AddChild }
Transform135.AddChildren([Shape136]);
{ .AddChildren }
HAnimSegment134.AddChildren([Transform135]);
{ .AddChildren }
HAnimJoint133.AddChildren([HAnimSegment134]);
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143.NameField := 'skullbase';
HAnimJoint143.Center := Vector3(0,57.43,-0.6863);
HAnimJoint143.SetUlimit([0,0,0]);
HAnimJoint143.SetLlimit([0,0,0]);
HAnimSegment144 := THAnimSegmentNode.Create;
HAnimSegment144.NameField := 'skull';
Transform145 := TTransformNode.Create;
Transform145.Translation := Vector3(0,57.43,-0.6863);
Shape146 := TShapeNode.Create;
Appearance147 := TAppearanceNode.Create;
Material148 := TMaterialNode.Create;
Material148.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance147.Material := Material148;
ImageTexture149 := TImageTextureNode.Create;
ImageTexture149 := ImageTexture39;
{ .SetTexture }
Appearance147.Texture := ImageTexture149;
{ .SetAppearance }
Shape146.Appearance := Appearance147;
IndexedFaceSet150 := TIndexedFaceSetNode.Create;
IndexedFaceSet150.SetCoordIndex([58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1,83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1,221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1]);
IndexedFaceSet150.CreaseAngle := 3.14159;
IndexedFaceSet150.SetTexCoordIndex([0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1,165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1,255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1]);
Coordinate151 := TCoordinateNode.Create;
Coordinate151.SetPoint([Vector3(4.734,2.295,-0.478),Vector3(0,7.925,-7.347),Vector3(0,2.738,-7.551),Vector3(2.596,3.055,-7.113),Vector3(5.82,3.915,-2.239),Vector3(3.712,1.225,-2.29),Vector3(3.261,1.453,-4.252),Vector3(5.658,2.599,-1.983),Vector3(1.82,1.289,-5.164),Vector3(0,0.1375,-3.592),Vector3(2.395,4.95,6.346),Vector3(0.7761,4.912,6.883),Vector3(0,9.74,6.859),Vector3(4.408,9.203,3.673),Vector3(0,11.25,5.65),Vector3(2.225,10.89,5.304),Vector3(5.962,4.414,1.165),Vector3(4.041,0.8383,3.523),Vector3(1.972,9.601,6.357),Vector3(2.537,7.001,6.362),Vector3(3.694,6.649,5.287),Vector3(0.4475,7.341,7.362),Vector3(0.513,6.698,7.119),Vector3(4.843,6.188,3.431),Vector3(3.886,6.593,4.951),Vector3(3.681,5.194,5.001),Vector3(3.826,5.001,4.664),Vector3(3.284,2.472,4.49),Vector3(4.543,4.124,3.499),Vector3(3.859,3.861,4.364),Vector3(4.575,3.792,4.006),Vector3(5.065,1.183,1.247),Vector3(4.863,1.73,2.37),Vector3(5.256,2.695,2.024),Vector3(5.549,5.532,2.714),Vector3(5.161,2.035,2.722),Vector3(5.442,3.878,2.887),Vector3(6.111,4.389,0.2634),Vector3(4.062,5.868,4.221),Vector3(6.007,7.856,-0.5637),Vector3(7.021,1.661,-0.9157),Vector3(6.568,4.855,-0.7308),Vector3(6.326,4.691,-1.55),Vector3(6.23,0.8303,-3.441),Vector3(4.977,5.364,-5.673),Vector3(6.326,4.656,-2.95),Vector3(4.216,3.427,-5.131),Vector3(3.522,5.818,-7.166),Vector3(3.424,1.86,-7.278),Vector3(2.479,7.925,-6.757),Vector3(1.927,1.981,-8.89),Vector3(0,3.753,-8.454),Vector3(5.584,7.691,-2.78),Vector3(5.853,7.683,-1.772),Vector3(5.181,8.476,2.104),Vector3(3.038,10.79,4.444),Vector3(5.123,3.032,-5.304),Vector3(5.664,8.061,0.8754),Vector3(4.721,7.925,-5.258),Vector3(0,5.519,-7.965),Vector3(2.479,5.82,-7.483),Vector3(5.595,7.63,-2.141),Vector3(0,0.1227,-8.281),Vector3(1.173,1.832,-6.114),Vector3(3.978,2.324,-4.64),Vector3(2.917,-0.9285,-7.31),Vector3(3.323,2.08,-5.371),Vector3(1.968,-1.561,-5.013),Vector3(0,-0.9435,-6.54),Vector3(4.713,2.444,-3.477),Vector3(4.42,-0.2924,-4.477),Vector3(1.411,0.5541,-3.484),Vector3(0,1.035,-6.031),Vector3(2.275,0.8807,-3.763),Vector3(0.9407,0.7103,-4.537),Vector3(3.818,1.729,-3.139),Vector3(4.664,1.866,-1.436),Vector3(3.657,9.188,4.96),Vector3(0,7.548,7.405),Vector3(1.559,7.266,7.008),Vector3(2.791,5.041,6.017),Vector3(-4.734,2.295,-0.478),Vector3(-2.596,3.055,-7.113),Vector3(-5.82,3.915,-2.239),Vector3(-3.712,1.225,-2.29),Vector3(-3.261,1.453,-4.252),Vector3(-5.658,2.599,-1.983),Vector3(-1.82,1.289,-5.164),Vector3(-2.395,4.95,6.346),Vector3(-0.7761,4.912,6.883),Vector3(-4.408,9.203,3.673),Vector3(-2.225,10.89,5.304),Vector3(-5.962,4.414,1.165),Vector3(-4.041,0.8383,3.523),Vector3(-1.972,9.601,6.357),Vector3(-2.537,7.001,6.362),Vector3(-3.694,6.649,5.287),Vector3(-0.4475,7.341,7.362),Vector3(-0.513,6.698,7.119),Vector3(-4.843,6.188,3.431),Vector3(-3.886,6.593,4.951),Vector3(-3.681,5.194,5.001),Vector3(-3.826,5.001,4.664),Vector3(-3.284,2.472,4.49),Vector3(-4.543,4.124,3.499),Vector3(-3.859,3.861,4.364),Vector3(-4.575,3.792,4.006),Vector3(-5.065,1.183,1.247),Vector3(-4.863,1.73,2.37),Vector3(-5.256,2.695,2.024),Vector3(-5.549,5.532,2.714),Vector3(-5.161,2.035,2.722),Vector3(-5.442,3.878,2.887),Vector3(-6.111,4.389,0.2634),Vector3(-4.062,5.868,4.221),Vector3(-6.007,7.856,-0.5637),Vector3(-7.021,1.661,-0.9157),Vector3(-6.568,4.855,-0.7308),Vector3(-6.326,4.691,-1.55),Vector3(-6.23,0.8303,-3.441),Vector3(-4.977,5.364,-5.673),Vector3(-6.326,4.656,-2.95),Vector3(-4.216,3.427,-5.131),Vector3(-3.522,5.818,-7.166),Vector3(-3.424,1.86,-7.278),Vector3(-2.479,7.925,-6.757),Vector3(-1.927,1.981,-8.89),Vector3(-5.584,7.691,-2.78),Vector3(-5.853,7.683,-1.772),Vector3(-5.181,8.476,2.104),Vector3(-3.038,10.79,4.444),Vector3(-5.123,3.032,-5.304),Vector3(-5.664,8.061,0.8754),Vector3(-4.721,7.925,-5.258),Vector3(-2.479,5.82,-7.483),Vector3(-5.595,7.63,-2.141),Vector3(-1.173,1.832,-6.114),Vector3(-3.978,2.324,-4.64),Vector3(-2.917,-0.9285,-7.31),Vector3(-3.323,2.08,-5.371),Vector3(-1.968,-1.561,-5.013),Vector3(-4.713,2.444,-3.477),Vector3(-4.42,-0.2924,-4.477),Vector3(-1.411,0.5541,-3.484),Vector3(-2.275,0.8807,-3.763),Vector3(-0.9407,0.7103,-4.537),Vector3(-3.818,1.729,-3.139),Vector3(-4.664,1.866,-1.436),Vector3(-3.657,9.188,4.96),Vector3(-1.559,7.266,7.008),Vector3(-2.791,5.041,6.017),Vector3(0,12.89,2.191),Vector3(2.479,12.6,2.191),Vector3(0,12.77,-3.073),Vector3(2.479,13.01,-0.5905),Vector3(0,13.3,-0.5905),Vector3(2.479,12.47,-3.073),Vector3(-2.479,12.6,2.191),Vector3(-2.479,13.01,-0.5905),Vector3(-2.479,12.47,-3.073),Vector3(0,12.19,4.069),Vector3(-2.479,11.8,3.665),Vector3(2.479,11.8,3.665),Vector3(-4.738,11.13,-0.5905),Vector3(-4.581,10.59,1.893),Vector3(4.738,11.13,-0.5905),Vector3(4.581,10.59,1.893),Vector3(-4.776,9.342,-4.254),Vector3(4.776,9.342,-4.254),Vector3(-4.651,10.94,-2.696),Vector3(4.651,10.94,-2.696),Vector3(0,10.91,-6.064),Vector3(-2.479,10.58,-5.873),Vector3(2.479,10.58,-5.873),Vector3(5.038,2.087,0.2634),Vector3(5.351,2.269,0.2568),Vector3(5.575,4.993,0.4877),Vector3(5.759,4.313,-0.6689),Vector3(5.672,3.119,-0.6884),Vector3(5.054,4.389,0.2634),Vector3(4.617,3.919,1.981),Vector3(0,-1.299,4.283),Vector3(2.507,0.2122,3.467),Vector3(1.252,-0.7037,3.753),Vector3(2.181,1.29,4.703),Vector3(1.083,-0.2065,4.531),Vector3(0,3.949,5.823),Vector3(4.122,4.752,3.434),Vector3(0,4.457,6.529),Vector3(3.843,3.486,3.474),Vector3(0.6247,4.287,6.217),Vector3(3.884,5.34,4.144),Vector3(0.2615,3.949,5.823),Vector3(2.103,4.881,5.78),Vector3(1.599,4.225,5.429),Vector3(2.103,4.763,5.713),Vector3(2.175,4.422,5.292),Vector3(1.061,2.841,5.24),Vector3(3.345,2.806,3.987),Vector3(2.536,2.741,4.559),Vector3(3.082,3.581,4.206),Vector3(3.368,4.077,4.055),Vector3(1.044,3.885,5.454),Vector3(1.356,3.642,5.241),Vector3(3.227,3.707,4.111),Vector3(3.028,4.567,4.683),Vector3(2.472,2.023,4.722),Vector3(0.9194,2.354,5.382),Vector3(0,2.998,5.872),Vector3(3.515,2.199,3.631),Vector3(3.685,4.225,3.891),Vector3(1.11,4.559,6.074),Vector3(0,1.141,5.968),Vector3(0.1458,1.141,5.967),Vector3(0.4592,1.442,5.549),Vector3(0,1.753,6.811),Vector3(3.24,5.132,4.832),Vector3(0,-1.23,3.575),Vector3(3.443,1.22,3.201),Vector3(0,6.577,6.529),Vector3(1.972,6.686,5.769),Vector3(3.551,6.468,4.66),Vector3(1.125,6.641,6.224),Vector3(2.799,0.2961,1.981),Vector3(1.438,-0.7799,2.92),Vector3(2.098,-0.0622,0.3894),Vector3(4.342,2.994,2.484),Vector3(0,9.837,5.8),Vector3(1.972,10.18,5.298),Vector3(3.829,8.081,4.078),Vector3(4.754,5.519,2.97),Vector3(1.641,0.4521,4.705),Vector3(0,2.206,6.446),Vector3(2.795,3.568,4.497),Vector3(1.835,3.587,5.011),Vector3(3.243,5.188,4.826),Vector3(4.074,1.813,1.489),Vector3(4.073,1.537,-0.251),Vector3(4.798,4.414,1.165),Vector3(3.561,1.081,-1.554),Vector3(0,0.5923,5.37),Vector3(0.2244,0.5923,5.37),Vector3(0,-0.2097,4.949),Vector3(0,0.1669,5.375),Vector3(0,0.7989,5.843),Vector3(0.4079,0.7711,5.733),Vector3(0.2244,0.7989,5.843),Vector3(1.184,0.5011,4.895),Vector3(1.695,4.1,5.387),Vector3(2.183,4.262,5.159),Vector3(2.937,4.372,4.659),Vector3(-5.038,2.087,0.2634),Vector3(-5.351,2.269,0.2568),Vector3(-5.575,4.993,0.4877),Vector3(-5.759,4.313,-0.6689),Vector3(-5.672,3.119,-0.6884),Vector3(-5.054,4.389,0.2634),Vector3(-4.617,3.919,1.981),Vector3(-2.507,0.2122,3.467),Vector3(-1.252,-0.7037,3.753),Vector3(-2.181,1.29,4.703),Vector3(-1.083,-0.2065,4.531),Vector3(-4.122,4.752,3.434),Vector3(-3.843,3.486,3.474),Vector3(-0.6247,4.287,6.217),Vector3(-3.884,5.34,4.144),Vector3(-0.2615,3.949,5.823),Vector3(-2.103,4.881,5.78),Vector3(-1.599,4.225,5.429),Vector3(-2.103,4.763,5.713),Vector3(-2.175,4.422,5.292),Vector3(-1.061,2.841,5.24),Vector3(-3.345,2.806,3.987),Vector3(-2.536,2.741,4.559),Vector3(-3.082,3.581,4.206),Vector3(-3.368,4.077,4.055),Vector3(-1.044,3.885,5.454),Vector3(-1.356,3.642,5.241),Vector3(-3.227,3.707,4.111),Vector3(-3.028,4.567,4.683),Vector3(-2.472,2.023,4.722),Vector3(-0.9194,2.354,5.382),Vector3(-3.515,2.199,3.631),Vector3(-3.685,4.225,3.891),Vector3(-1.11,4.559,6.074),Vector3(-0.1458,1.141,5.967),Vector3(-0.4592,1.442,5.549),Vector3(-3.24,5.132,4.832),Vector3(-3.443,1.22,3.201),Vector3(-1.972,6.686,5.769),Vector3(-3.551,6.468,4.66),Vector3(-1.125,6.641,6.224),Vector3(-2.799,0.2961,1.981),Vector3(-1.438,-0.7799,2.92),Vector3(-2.098,-0.0622,0.3894),Vector3(-4.342,2.994,2.484),Vector3(-1.972,10.18,5.298),Vector3(-3.829,8.081,4.078),Vector3(-4.754,5.519,2.97),Vector3(-1.641,0.4521,4.705),Vector3(-2.795,3.568,4.497),Vector3(-1.835,3.587,5.011),Vector3(-3.243,5.188,4.826),Vector3(-4.074,1.813,1.489),Vector3(-4.073,1.537,-0.251),Vector3(-4.798,4.414,1.165),Vector3(-3.561,1.081,-1.554),Vector3(-0.2244,0.5923,5.37),Vector3(-0.4079,0.7711,5.733),Vector3(-0.2244,0.7989,5.843),Vector3(-1.184,0.5011,4.895),Vector3(-1.695,4.1,5.387),Vector3(-2.183,4.262,5.159),Vector3(-2.937,4.372,4.659),Vector3(0,0.5907,5.545),Vector3(0.2244,0.5907,5.545),Vector3(-0.2244,0.5907,5.545),Vector3(-2.091,-0.0943,-1.629),Vector3(2.091,-0.0943,-1.629),Vector3(0,-0.6349,1.532),Vector3(0.4475,7.341,7.362),Vector3(0.7761,4.912,6.883),Vector3(0.7761,4.912,6.883),Vector3(0.4475,7.341,7.362),Vector3(-0.7761,4.912,6.883),Vector3(-0.4475,7.341,7.362),Vector3(-0.4475,7.341,7.362),Vector3(-0.7761,4.912,6.883),Vector3(1.438,-0.7799,2.92),Vector3(2.098,-0.0622,0.3894),Vector3(2.799,0.2961,1.981),Vector3(1.438,-0.7799,2.92),Vector3(4.734,2.295,-0.478),Vector3(5.658,2.599,-1.983),Vector3(4.734,2.295,-0.478),Vector3(3.712,1.225,-2.29),Vector3(-3.561,1.081,-1.554),Vector3(-2.098,-0.0622,0.3894),Vector3(-1.438,-0.7799,2.92),Vector3(-2.799,0.2961,1.981),Vector3(-5.658,2.599,-1.983),Vector3(-4.734,2.295,-0.478),Vector3(-3.712,1.225,-2.29),Vector3(-4.734,2.295,-0.478),Vector3(5.658,2.599,-1.983),Vector3(0.513,6.698,7.119),Vector3(0,7.548,7.405),Vector3(-5.658,2.599,-1.983),Vector3(-0.513,6.698,7.119),Vector3(5.054,4.389,0.2634),Vector3(3.561,1.081,-1.554),Vector3(-5.054,4.389,0.2634),Vector3(-1.438,-0.7799,2.92),Vector3(-3.561,1.081,-1.554),Vector3(0,7.548,7.405),Vector3(3.561,1.081,-1.554)]);
{ .SetCoord }
IndexedFaceSet150.Coord := Coordinate151;
TextureCoordinate152 := TTextureCoordinateNode.Create;
TextureCoordinate152.SetPoint([Vector2(0.9175,0.8974),Vector2(0.9509,0.8981),Vector2(0.9421,0.8701),Vector2(0.924,0.8702),Vector2(0.9824,0.8971),Vector2(0.9824,0.8682),Vector2(0.9541,0.8718),Vector2(0.9147,0.8129),Vector2(0.9437,0.8153),Vector2(0.9638,0.8095),Vector2(0.9824,0.809),Vector2(0.9461,0.923),Vector2(0.9071,0.9135),Vector2(0.9824,0.9287),Vector2(0.7343,0.9169),Vector2(0.7616,0.9147),Vector2(0.7553,0.8982),Vector2(0.7343,0.8968),Vector2(0.7739,0.9327),Vector2(0.7343,0.9365),Vector2(0.8187,0.8433),Vector2(0.8348,0.9045),Vector2(0.8324,0.8647),Vector2(0.74,0.8745),Vector2(0.761,0.8768),Vector2(0.7497,0.8755),Vector2(0.777,0.8787),Vector2(0.7647,0.8593),Vector2(0.7596,0.8565),Vector2(0.7438,0.8546),Vector2(0.7343,0.8756),Vector2(0.7372,0.8736),Vector2(0.7394,0.8706),Vector2(0.7405,0.8536),Vector2(0.7808,0.8802),Vector2(0.7786,0.8666),Vector2(0.7875,0.8787),Vector2(0.7821,0.8667),Vector2(0.7952,0.9076),Vector2(0.8011,0.8823),Vector2(0.7745,0.9003),Vector2(0.7939,0.8518),Vector2(0.7845,0.8549),Vector2(0.7731,0.8049),Vector2(0.7979,0.8609),Vector2(0.8185,0.8054),Vector2(0.8439,0.8655),Vector2(0.8131,0.8741),Vector2(0.786,0.7876),Vector2(0.8107,0.8538),Vector2(0.8058,0.8252),Vector2(0.8096,0.8166),Vector2(0.8589,0.7975),Vector2(0.8767,0.8622),Vector2(0.8568,0.8668),Vector2(0.8669,0.8674),Vector2(0.9208,0.8549),Vector2(0.8792,0.7991),Vector2(0.8835,0.8633),Vector2(0.9139,0.8636),Vector2(0.9513,0.84),Vector2(0.9824,0.8358),Vector2(0.8845,0.9021),Vector2(0.888,0.931),Vector2(0.8761,0.9036),Vector2(0.8705,0.9018),Vector2(0.8544,0.902),Vector2(0.8538,0.9345),Vector2(0.8173,0.9068),Vector2(0.8156,0.9257),Vector2(0.7753,0.9186),Vector2(0.7832,0.9041),Vector2(0.7338,0.8385),Vector2(0.7279,0.8339),Vector2(0.7208,0.8401),Vector2(0.7397,0.7767),Vector2(0.7338,0.7681),Vector2(0.7338,0.7727),Vector2(0.7192,0.8201),Vector2(0.7171,0.8352),Vector2(0.7139,0.8364),Vector2(0.7127,0.8419),Vector2(0.7175,0.832),Vector2(0.7247,0.8312),Vector2(0.7224,0.8292),Vector2(0.7239,0.8169),Vector2(0.7146,0.8334),Vector2(0.7152,0.8309),Vector2(0.753,0.7762),Vector2(0.7452,0.772),Vector2(0.7409,0.7703),Vector2(0.756,0.7661),Vector2(0.7502,0.7748),Vector2(0.7102,0.837),Vector2(0.7574,0.7798),Vector2(0.7054,0.8378),Vector2(0.7338,0.8253),Vector2(0.7338,0.8299),Vector2(0.7267,0.8275),Vector2(0.7291,0.8283),Vector2(0.7338,0.8254),Vector2(0.7338,0.7682),Vector2(0.7385,0.7711),Vector2(0.7338,0.7628),Vector2(0.7338,0.82),Vector2(0.7437,0.7597),Vector2(0.7429,0.774),Vector2(0.7484,0.7629),Vector2(0.7505,0.778),Vector2(0.7116,0.8233),Vector2(0.7622,0.7806),Vector2(0.7576,0.779),Vector2(0.763,0.7872),Vector2(0.7046,0.8444),Vector2(0.7572,0.7769),Vector2(0.7524,0.7737),Vector2(0.7104,0.8341),Vector2(0.5511,0.8974),Vector2(0.5442,0.8881),Vector2(0.5261,0.888),Vector2(0.5173,0.916),Vector2(0.5142,0.8897),Vector2(0.4859,0.8861),Vector2(0.4859,0.915),Vector2(0.5538,0.8129),Vector2(0.5221,0.9505),Vector2(0.5019,0.9448),Vector2(0.4833,0.9442),Vector2(0.5221,0.9409),Vector2(0.5615,0.9135),Vector2(0.4859,0.9465),Vector2(0.7132,0.8982),Vector2(0.707,0.9147),Vector2(0.6947,0.9327),Vector2(0.6362,0.8647),Vector2(0.6338,0.9045),Vector2(0.6499,0.8433),Vector2(0.7286,0.8745),Vector2(0.7189,0.8755),Vector2(0.7076,0.8768),Vector2(0.7039,0.8593),Vector2(0.6916,0.8787),Vector2(0.7247,0.8546),Vector2(0.709,0.8565),Vector2(0.7314,0.8736),Vector2(0.7292,0.8706),Vector2(0.728,0.8536),Vector2(0.69,0.8666),Vector2(0.6878,0.8802),Vector2(0.6865,0.8667),Vector2(0.6811,0.8787),Vector2(0.6675,0.8823),Vector2(0.6734,0.9076),Vector2(0.6941,0.9003),Vector2(0.6841,0.8549),Vector2(0.6747,0.8518),Vector2(0.6955,0.8049),Vector2(0.6707,0.8609),Vector2(0.65,0.8054),Vector2(0.6247,0.8655),Vector2(0.6555,0.8741),Vector2(0.6826,0.7876),Vector2(0.6628,0.8252),Vector2(0.6579,0.8538),Vector2(0.659,0.8166),Vector2(0.5919,0.8622),Vector2(0.6097,0.7975),Vector2(0.6017,0.8674),Vector2(0.6119,0.8668),Vector2(0.5894,0.7991),Vector2(0.5477,0.8549),Vector2(0.5851,0.8633),Vector2(0.5547,0.8636),Vector2(0.5069,0.9121),Vector2(0.4833,0.9711),Vector2(0.5841,0.9021),Vector2(0.5806,0.931),Vector2(0.5925,0.9036),Vector2(0.5981,0.9018),Vector2(0.6148,0.9345),Vector2(0.6142,0.902),Vector2(0.6513,0.9068),Vector2(0.653,0.9257),Vector2(0.6932,0.9186),Vector2(0.6854,0.9041),Vector2(0.7468,0.8401),Vector2(0.7397,0.8339),Vector2(0.7279,0.7767),Vector2(0.7484,0.8201),Vector2(0.7549,0.8419),Vector2(0.7538,0.8364),Vector2(0.7505,0.8352),Vector2(0.7502,0.832),Vector2(0.7452,0.8292),Vector2(0.7429,0.8312),Vector2(0.7437,0.8169),Vector2(0.753,0.8334),Vector2(0.7524,0.8309),Vector2(0.7267,0.7703),Vector2(0.7224,0.772),Vector2(0.7146,0.7762),Vector2(0.7175,0.7748),Vector2(0.7116,0.7661),Vector2(0.7574,0.837),Vector2(0.7102,0.7798),Vector2(0.7622,0.8378),Vector2(0.7385,0.8283),Vector2(0.7409,0.8275),Vector2(0.7291,0.7711),Vector2(0.7239,0.7597),Vector2(0.7192,0.7629),Vector2(0.7247,0.774),Vector2(0.7171,0.778),Vector2(0.756,0.8233),Vector2(0.7046,0.7872),Vector2(0.71,0.779),Vector2(0.7054,0.7806),Vector2(0.763,0.8444),Vector2(0.7104,0.7769),Vector2(0.7152,0.7737),Vector2(0.7572,0.8341),Vector2(0.7881,0.9479),Vector2(0.7343,0.9577),Vector2(0.8497,0.9637),Vector2(0.9158,0.9539),Vector2(0.7343,0.9872),Vector2(0.9824,0.9663),Vector2(0.6805,0.9479),Vector2(0.6189,0.9637),Vector2(0.5528,0.9539),Vector2(0.4859,0.9842),Vector2(0.4263,0.6263),Vector2(0.4421,0.6351),Vector2(0.4514,0.6319),Vector2(0.4298,0.637),Vector2(0.4385,0.639),Vector2(0.4385,0.6403),Vector2(0.4369,0.6596),Vector2(0.4321,0.6555),Vector2(0.4385,0.6553),Vector2(0.4451,0.6548),Vector2(0.4452,0.6463),Vector2(0.4227,0.6454),Vector2(0.4263,0.652),Vector2(0.4193,0.6633),Vector2(0.4176,0.6328),Vector2(0.4376,0.6237),Vector2(0.4196,0.6187),Vector2(0.3384,0.9887),Vector2(0.2979,0.9448),Vector2(0.2441,0.9417),Vector2(0.2441,0.9723),Vector2(0.4437,0.6405),Vector2(0.4519,0.6235),Vector2(0.3384,0.9469),Vector2(0.414,0.9365),Vector2(0.4566,0.6329),Vector2(0.4157,0.6257),Vector2(0.4137,0.6192),Vector2(0.2959,0.626),Vector2(0.3051,0.6166),Vector2(0.258,0.6076),Vector2(0.2606,0.6259),Vector2(0.2511,0.6816),Vector2(0.2548,0.6653),Vector2(0.2441,0.6653),Vector2(0.2441,0.6816),Vector2(0.2661,0.696),Vector2(0.2636,0.664),Vector2(0.3484,0.6888),Vector2(0.3007,0.651),Vector2(0.2881,0.7397),Vector2(0.3623,0.7239),Vector2(0.4151,0.6155),Vector2(0.4295,0.6197),Vector2(0.4116,0.6201),Vector2(0.4088,0.6855),Vector2(0.4123,0.7323),Vector2(0.4518,0.7703),Vector2(0.364,0.6372),Vector2(0.2441,0.7326),Vector2(0.2496,0.7705),Vector2(0.2441,0.7109),Vector2(0.2441,0.7705),Vector2(0.2441,0.816),Vector2(0.2441,0.8403),Vector2(0.274,0.8322),Vector2(0.2566,0.816),Vector2(0.2949,0.763),Vector2(0.3447,0.8549),Vector2(0.3206,0.8292),Vector2(0.4279,0.7939),Vector2(0.4413,0.8544),Vector2(0.3889,0.8456),Vector2(0.3991,0.8726),Vector2(0.4299,0.8825),Vector2(0.3482,0.8386),Vector2(0.4041,0.7613),Vector2(0.3654,0.7582),Vector2(0.3778,0.7978),Vector2(0.3319,0.7987),Vector2(0.3916,0.7984),Vector2(0.2943,0.815),Vector2(0.3252,0.8232),Vector2(0.3846,0.8362),Vector2(0.4052,0.8221),Vector2(0.3485,0.831),Vector2(0.309,0.8013),Vector2(0.3985,0.8044),Vector2(0.2937,0.8109),Vector2(0.4204,0.8292),Vector2(0.3447,0.8606),Vector2(0.2972,0.8452),Vector2(0.4715,0.8911),Vector2(0.431,0.9594),Vector2(0.4658,0.6252),Vector2(0.465,0.6281),Vector2(0.3226,0.6487),Vector2(0.3993,0.8753),Vector2(0.2441,0.6554),Vector2(0.2548,0.6554),Vector2(0.2557,0.6351),Vector2(0.4544,0.6426),Vector2(0.1498,0.9887),Vector2(0.1903,0.9448),Vector2(0.1498,0.9469),Vector2(0.0742,0.9365),Vector2(0.2323,0.6076),Vector2(0.1853,0.6166),Vector2(0.1923,0.626),Vector2(0.2275,0.6259),Vector2(0.2371,0.6816),Vector2(0.2334,0.6653),Vector2(0.2246,0.664),Vector2(0.2221,0.696),Vector2(0.1875,0.651),Vector2(0.1398,0.6888),Vector2(0.1258,0.7239),Vector2(0.2001,0.7397),Vector2(0.0364,0.7703),Vector2(0.0759,0.7323),Vector2(0.0794,0.6855),Vector2(0.1242,0.6372),Vector2(0.2386,0.7705),Vector2(0.2316,0.816),Vector2(0.2142,0.8322),Vector2(0.1933,0.763),Vector2(0.1676,0.8292),Vector2(0.1435,0.8549),Vector2(0.0602,0.7939),Vector2(0.0469,0.8544),Vector2(0.0583,0.8825),Vector2(0.0891,0.8726),Vector2(0.0992,0.8456),Vector2(0.14,0.8386),Vector2(0.084,0.7613),Vector2(0.1228,0.7582),Vector2(0.1104,0.7978),Vector2(0.1563,0.7987),Vector2(0.0966,0.7984),Vector2(0.163,0.8232),Vector2(0.1939,0.815),Vector2(0.083,0.8221),Vector2(0.1036,0.8362),Vector2(0.1397,0.831),Vector2(0.1792,0.8013),Vector2(0.0897,0.8044),Vector2(0.1944,0.8109),Vector2(0.0678,0.8292),Vector2(0.1435,0.8606),Vector2(0.191,0.8452),Vector2(0.0166,0.8911),Vector2(0.0646,0.9594),Vector2(0.1656,0.6487),Vector2(0.0889,0.8753),Vector2(0.2325,0.6351),Vector2(0.2334,0.6554),Vector2(0.2548,0.6553),Vector2(0.2441,0.6553),Vector2(0.2334,0.6553),Vector2(0.4156,0.6279),Vector2(0.3783,0.625),Vector2(0.3984,0.649),Vector2(0.4325,0.6718),Vector2(0.4443,0.6446),Vector2(0.428,0.6022)]);
{ .SetTexCoord }
IndexedFaceSet150.TexCoord := TextureCoordinate152;
{ .SetGeometry }
Shape146.Geometry := IndexedFaceSet150;
{ .AddChild }
Transform145.AddChildren([Shape146]);
{ .AddChildren }
HAnimSegment144.AddChildren([Transform145]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimSegment144]);
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.NameField := 'l_shoulder';
HAnimJoint153.Center := Vector3(5.975,52,-0.1452);
HAnimJoint153.SetUlimit([0,0,0]);
HAnimJoint153.SetLlimit([0,0,0]);
HAnimSegment154 := THAnimSegmentNode.Create;
HAnimSegment154.NameField := 'l_upperarm';
Transform155 := TTransformNode.Create;
Transform155.Translation := Vector3(5.975,52,-0.1452);
Shape156 := TShapeNode.Create;
Appearance157 := TAppearanceNode.Create;
Material158 := TMaterialNode.Create;
Material158.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance157.Material := Material158;
ImageTexture159 := TImageTextureNode.Create;
ImageTexture159 := ImageTexture39;
{ .SetTexture }
Appearance157.Texture := ImageTexture159;
{ .SetAppearance }
Shape156.Appearance := Appearance157;
IndexedFaceSet160 := TIndexedFaceSetNode.Create;
IndexedFaceSet160.SetCoordIndex([2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]);
IndexedFaceSet160.CreaseAngle := 3.14159;
IndexedFaceSet160.SetTexCoordIndex([2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1]);
Coordinate161 := TCoordinateNode.Create;
Coordinate161.SetPoint([Vector3(2.525,1.246,-1.68),Vector3(3.681,1.236,0.0337),Vector3(2.408,1.247,1.663),Vector3(0.4657,1.264,0.9556),Vector3(0.5379,1.264,-1.11),Vector3(2.743,-0.0209,-2.31),Vector3(4.339,-0.0351,0.057),Vector3(2.581,-0.0195,2.307),Vector3(-0.1009,0.0044,1.33),Vector3(-0.0013,0.0036,-1.523),Vector3(2.72,-2.534,-2.31),Vector3(4.317,-2.548,0.057),Vector3(2.559,-2.533,2.307),Vector3(-0.1233,-2.509,1.33),Vector3(-0.0237,-2.51,-1.523),Vector3(2.759,-3.609,-2.442),Vector3(4.448,-3.624,0.0619),Vector3(2.588,-3.608,2.442),Vector3(-0.2497,-3.583,1.409),Vector3(-0.1443,-3.583,-1.61),Vector3(2.245,-1.758,-1.939),Vector3(3.465,-1.769,-0.4543),Vector3(2.834,-1.763,1.629),Vector3(1.223,-1.749,1.432),Vector3(0.8596,-1.746,-0.7734),Vector3(2.263,-7.566,-1.569),Vector3(3.531,-7.577,-0.378),Vector3(2.875,-7.571,1.293),Vector3(1.202,-7.556,1.135),Vector3(0.8242,-7.553,-0.634),Vector3(2.267,-11.62,-1.511),Vector3(3.487,-11.63,-0.3651),Vector3(2.856,-11.62,1.243),Vector3(1.245,-11.61,1.091),Vector3(0.8817,-11.6,-0.6115),Vector3(2.213,-12.17,-0.8985),Vector3(2.928,-12.17,-0.2267),Vector3(2.558,-12.17,0.716),Vector3(1.614,-12.16,0.6268),Vector3(1.401,-12.16,-0.3711)]);
{ .SetCoord }
IndexedFaceSet160.Coord := Coordinate161;
TextureCoordinate162 := TTextureCoordinateNode.Create;
TextureCoordinate162.SetPoint([Vector2(0.2986,0.2114),Vector2(0.2726,0.2114),Vector2(0.3201,0.2114),Vector2(0.3415,0.2114),Vector2(0.2466,0.2114),Vector2(0.2979,0.2417),Vector2(0.2726,0.2417),Vector2(0.3197,0.2417),Vector2(0.3418,0.2417),Vector2(0.2473,0.2417),Vector2(0.2979,0.3018),Vector2(0.2726,0.3018),Vector2(0.3197,0.3018),Vector2(0.3418,0.3018),Vector2(0.2473,0.3018),Vector2(0.2978,0.3276),Vector2(0.2726,0.3276),Vector2(0.3197,0.3276),Vector2(0.3419,0.3276),Vector2(0.2474,0.3276),Vector2(0.2932,0.2834),Vector2(0.2689,0.2834),Vector2(0.316,0.2834),Vector2(0.3322,0.2834),Vector2(0.245,0.2834),Vector2(0.2251,0.2114),Vector2(0.2255,0.2417),Vector2(0.2255,0.2417),Vector2(0.2255,0.3018),Vector2(0.2255,0.3018),Vector2(0.2255,0.3276),Vector2(0.2255,0.3276),Vector2(0.2159,0.2834),Vector2(0.4315,0.6736),Vector2(0.442,0.6736),Vector2(0.3947,0.6736),Vector2(0.4041,0.6736),Vector2(0.418,0.6736),Vector2(0.4296,0.6167),Vector2(0.4409,0.6167),Vector2(0.4415,0.6485),Vector2(0.4303,0.6485),Vector2(0.3965,0.6167),Vector2(0.3953,0.6485),Vector2(0.4047,0.6167),Vector2(0.4053,0.6485),Vector2(0.4189,0.6167),Vector2(0.418,0.6485),Vector2(0.4415,0.6706),Vector2(0.4306,0.6706),Vector2(0.395,0.6706),Vector2(0.4051,0.6706),Vector2(0.4182,0.6706),Vector2(0.3746,0.6736),Vector2(0.3851,0.6736),Vector2(0.384,0.6167),Vector2(0.3845,0.6485),Vector2(0.3845,0.6485),Vector2(0.3846,0.6706),Vector2(0.3846,0.6706),Vector2(0.3851,0.6736),Vector2(0.3481,0.2114)]);
{ .SetTexCoord }
IndexedFaceSet160.TexCoord := TextureCoordinate162;
{ .SetGeometry }
Shape156.Geometry := IndexedFaceSet160;
{ .AddChild }
Transform155.AddChildren([Shape156]);
{ .AddChildren }
HAnimSegment154.AddChildren([Transform155]);
{ .AddChildren }
HAnimJoint153.AddChildren([HAnimSegment154]);
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163.NameField := 'l_elbow';
HAnimJoint163.Center := Vector3(8.093,40.380001,-0.2502);
HAnimJoint163.SetUlimit([0,0,0]);
HAnimJoint163.SetLlimit([0,0,0]);
HAnimSegment164 := THAnimSegmentNode.Create;
HAnimSegment164.NameField := 'l_forearm';
Transform165 := TTransformNode.Create;
Transform165.Translation := Vector3(8.093,40.380001,-0.2502);
Shape166 := TShapeNode.Create;
Appearance167 := TAppearanceNode.Create;
Material168 := TMaterialNode.Create;
Material168.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance167.Material := Material168;
ImageTexture169 := TImageTextureNode.Create;
ImageTexture169 := ImageTexture39;
{ .SetTexture }
Appearance167.Texture := ImageTexture169;
{ .SetAppearance }
Shape166.Appearance := Appearance167;
IndexedFaceSet170 := TIndexedFaceSetNode.Create;
IndexedFaceSet170.SetCoordIndex([2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
IndexedFaceSet170.CreaseAngle := 3.14159;
IndexedFaceSet170.SetTexCoordIndex([2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
Coordinate171 := TCoordinateNode.Create;
Coordinate171.SetPoint([Vector3(0.215,0.3047,-1.152),Vector3(1.155,0.2966,-0.2588),Vector3(0.6199,0.3013,1.04),Vector3(-0.6505,0.3122,0.9491),Vector3(-0.9008,0.3143,-0.4054),Vector3(0.1442,-0.8448,-1.625),Vector3(1.472,-0.8561,-0.4271),Vector3(0.7164,-0.8496,1.625),Vector3(-1.079,-0.8342,1.482),Vector3(-1.433,-0.8312,-0.6588),Vector3(0.1328,-3.5,-1.607),Vector3(1.551,-3.513,-0.4225),Vector3(0.781,-2.925,1.61),Vector3(-1.136,-2.909,1.468),Vector3(-1.551,-3.486,-0.6519),Vector3(0.0592,-8.713,-1.437),Vector3(1.093,-8.722,-0.1279),Vector3(0.5047,-8.716,1.51),Vector3(-0.8932,-8.704,1.377),Vector3(-1.169,-8.702,-0.3428),Vector3(0.0092,-9.336,-0.8855),Vector3(0.7154,-9.342,0.0084),Vector3(0.3135,-9.339,1.043),Vector3(-0.6412,-9.331,0.9519),Vector3(-0.8292,-9.329,-0.1383)]);
{ .SetCoord }
IndexedFaceSet170.Coord := Coordinate171;
TextureCoordinate172 := TTextureCoordinateNode.Create;
TextureCoordinate172.SetPoint([Vector2(0.4222,0.6201),Vector2(0.4327,0.6201),Vector2(0.3884,0.6201),Vector2(0.3987,0.6201),Vector2(0.4103,0.6201),Vector2(0.4213,0.6265),Vector2(0.4321,0.6265),Vector2(0.3894,0.6265),Vector2(0.399,0.6265),Vector2(0.4105,0.6265),Vector2(0.4214,0.6413),Vector2(0.4323,0.6413),Vector2(0.389,0.6381),Vector2(0.3992,0.6381),Vector2(0.4103,0.6413),Vector2(0.4213,0.6705),Vector2(0.4336,0.6705),Vector2(0.3899,0.6705),Vector2(0.3981,0.6705),Vector2(0.4094,0.6705),Vector2(0.4215,0.674),Vector2(0.4346,0.674),Vector2(0.3899,0.674),Vector2(0.398,0.674),Vector2(0.4083,0.674),Vector2(0.3787,0.6201),Vector2(0.3682,0.6201),Vector2(0.3787,0.6201),Vector2(0.3782,0.6265),Vector2(0.3782,0.6265),Vector2(0.3783,0.6413),Vector2(0.3783,0.6413),Vector2(0.3796,0.6705),Vector2(0.3676,0.674),Vector2(0.3806,0.674),Vector2(0.3796,0.6705),Vector2(0.3806,0.674)]);
{ .SetTexCoord }
IndexedFaceSet170.TexCoord := TextureCoordinate172;
{ .SetGeometry }
Shape166.Geometry := IndexedFaceSet170;
{ .AddChild }
Transform165.AddChildren([Shape166]);
{ .AddChildren }
HAnimSegment164.AddChildren([Transform165]);
{ .AddChildren }
HAnimJoint163.AddChildren([HAnimSegment164]);
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173.NameField := 'l_radiocarpal';
HAnimJoint173.Center := Vector3(7.808,31.459999,-0.05849);
HAnimJoint173.SetUlimit([0,0,0]);
HAnimJoint173.SetLlimit([0,0,0]);
HAnimSegment174 := THAnimSegmentNode.Create;
HAnimSegment174.NameField := 'l_carpal';
Transform175 := TTransformNode.Create;
Transform175.Translation := Vector3(7.808,31.459999,-0.05849);
Shape176 := TShapeNode.Create;
Appearance177 := TAppearanceNode.Create;
Material178 := TMaterialNode.Create;
Material178.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance177.Material := Material178;
ImageTexture179 := TImageTextureNode.Create;
ImageTexture179 := ImageTexture39;
{ .SetTexture }
Appearance177.Texture := ImageTexture179;
{ .SetAppearance }
Shape176.Appearance := Appearance177;
IndexedFaceSet180 := TIndexedFaceSetNode.Create;
IndexedFaceSet180.SetCoordIndex([4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,22,27,23,-1,26,25,24,-1]);
IndexedFaceSet180.CreaseAngle := 3.14159;
IndexedFaceSet180.SetTexCoordIndex([4,6,5,-1,5,7,4,-1,2,3,1,-1,1,0,2,-1,14,16,15,-1,15,17,14,-1,8,9,6,-1,6,4,8,-1,38,40,39,-1,39,41,38,-1,18,19,36,-1,36,37,18,-1,10,11,9,-1,9,8,10,-1,42,43,40,-1,40,38,42,-1,20,21,19,-1,19,18,20,-1,22,24,23,-1,24,26,25,-1,25,23,24,-1,27,29,28,-1,28,30,27,-1,31,23,25,-1,25,32,31,-1,33,31,34,-1,34,31,32,-1,32,35,34,-1,20,34,35,-1,35,21,20,-1,8,4,12,-1,12,13,8,-1,22,23,28,-1,28,29,22,-1,23,31,30,-1,30,28,23,-1,31,33,27,-1,27,30,31,-1,14,24,26,-1,14,16,24,-1]);
Coordinate181 := TCoordinateNode.Create;
Coordinate181.SetPoint([Vector3(1.247,0.07,0.7975),Vector3(1.209,0.0872,-1.349),Vector3(-0.7098,-0.0015,0.8912),Vector3(-0.7183,0.0002,-1.283),Vector3(-0.9295,-0.613,1.478),Vector3(1.647,-0.4252,1.388),Vector3(1.589,-0.3921,-1.989),Vector3(-1.044,-0.5947,-1.984),Vector3(-0.8227,-2.521,2.408),Vector3(1.951,-2.334,2.08),Vector3(1.892,-2.301,-2.409),Vector3(-1.192,-2.614,-2.248),Vector3(-0.5703,-3.958,1.694),Vector3(0.8836,-4.2,1.75),Vector3(0.8251,-4.167,-2.071),Vector3(-0.7842,-3.968,-1.934),Vector3(-1.037,-0.5968,-0.1872),Vector3(-1.642,-2.561,1.941),Vector3(-1.951,-0.9492,0.058),Vector3(-1.914,-1.016,1.885),Vector3(-1.649,-2.56,0.1377),Vector3(-1.066,-2.61,-0.2014),Vector3(1.209,0.0872,-1.349),Vector3(-0.7183,0.0002,-1.283),Vector3(-0.7098,-0.0015,0.8912),Vector3(1.247,0.07,0.7975),Vector3(1.209,0.0872,-1.349),Vector3(-0.7098,-0.0015,0.8912)]);
{ .SetCoord }
IndexedFaceSet180.Coord := Coordinate181;
TextureCoordinate182 := TTextureCoordinateNode.Create;
TextureCoordinate182.SetPoint([Vector2(0.8107,0.9924),Vector2(0.8122,0.9033),Vector2(0.7694,0.9912),Vector2(0.7683,0.9026),Vector2(0.1329,0.0347),Vector2(0.0307,0.0051),Vector2(0.0134,0.0353),Vector2(0.1366,0.0058),Vector2(0.1249,0.1081),Vector2(0.0147,0.117),Vector2(0.1349,0.1856),Vector2(0.0462,0.1842),Vector2(0.1559,0.0454),Vector2(0.148,0.1033),Vector2(0.3244,0.0096),Vector2(0.1758,0.0039),Vector2(0.1759,0.011),Vector2(0.3241,0.0033),Vector2(0.173,0.1764),Vector2(0.3074,0.1757),Vector2(0.1732,0.1519),Vector2(0.3074,0.1513),Vector2(0.1756,0.032),Vector2(0.2159,0.0368),Vector2(0.1791,0.0165),Vector2(0.3169,0.0458),Vector2(0.3158,0.0193),Vector2(0.172,0.0594),Vector2(0.2087,0.0476),Vector2(0.1736,0.0504),Vector2(0.2073,0.064),Vector2(0.2362,0.0821),Vector2(0.3267,0.0796),Vector2(0.1717,0.0822),Vector2(0.1726,0.1297),Vector2(0.3077,0.1289),Vector2(0.3074,0.1865),Vector2(0.1742,0.184),Vector2(0.0061,0.1086),Vector2(0.1366,0.0368),Vector2(0.1241,0.1189),Vector2(0.0168,0.0309),Vector2(0.0211,0.1882),Vector2(0.14,0.1857)]);
{ .SetTexCoord }
IndexedFaceSet180.TexCoord := TextureCoordinate182;
{ .SetGeometry }
Shape176.Geometry := IndexedFaceSet180;
{ .AddChild }
Transform175.AddChildren([Shape176]);
{ .AddChildren }
HAnimSegment174.AddChildren([Transform175]);
{ .AddChildren }
HAnimJoint173.AddChildren([HAnimSegment174]);
{ .AddChildren }
HAnimJoint163.AddChildren([HAnimJoint173]);
{ .AddChildren }
HAnimJoint153.AddChildren([HAnimJoint163]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint153]);
HAnimJoint183 := THAnimJointNode.Create;
HAnimJoint183.NameField := 'r_shoulder';
HAnimJoint183.Center := Vector3(-5.975,52,-0.1452);
HAnimJoint183.SetUlimit([0,0,0]);
HAnimJoint183.SetLlimit([0,0,0]);
HAnimSegment184 := THAnimSegmentNode.Create;
HAnimSegment184.NameField := 'r_upperarm';
Transform185 := TTransformNode.Create;
Transform185.Translation := Vector3(-5.975,52,-0.1452);
Shape186 := TShapeNode.Create;
Appearance187 := TAppearanceNode.Create;
Material188 := TMaterialNode.Create;
Material188.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance187.Material := Material188;
ImageTexture189 := TImageTextureNode.Create;
ImageTexture189 := ImageTexture39;
{ .SetTexture }
Appearance187.Texture := ImageTexture189;
{ .SetAppearance }
Shape186.Appearance := Appearance187;
IndexedFaceSet190 := TIndexedFaceSetNode.Create;
IndexedFaceSet190.SetCoordIndex([0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]);
IndexedFaceSet190.CreaseAngle := 3.14159;
IndexedFaceSet190.SetTexCoordIndex([1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1]);
Coordinate191 := TCoordinateNode.Create;
Coordinate191.SetPoint([Vector3(-2.525,1.246,-1.68),Vector3(-3.681,1.236,0.0337),Vector3(-2.408,1.247,1.663),Vector3(-0.4657,1.264,0.9556),Vector3(-0.5379,1.264,-1.11),Vector3(-2.743,-0.0209,-2.31),Vector3(-4.339,-0.0351,0.057),Vector3(-2.581,-0.0195,2.307),Vector3(0.1009,0.0044,1.33),Vector3(0.0013,0.0036,-1.523),Vector3(-2.72,-2.534,-2.31),Vector3(-4.317,-2.548,0.057),Vector3(-2.559,-2.533,2.307),Vector3(0.1233,-2.509,1.33),Vector3(0.0237,-2.51,-1.523),Vector3(-2.759,-3.609,-2.442),Vector3(-4.448,-3.624,0.0619),Vector3(-2.588,-3.608,2.442),Vector3(0.2497,-3.583,1.409),Vector3(0.1443,-3.583,-1.61),Vector3(-2.245,-1.758,-1.939),Vector3(-3.465,-1.769,-0.4543),Vector3(-2.834,-1.763,1.629),Vector3(-1.223,-1.749,1.432),Vector3(-0.8596,-1.746,-0.7734),Vector3(-2.263,-7.566,-1.569),Vector3(-3.531,-7.577,-0.378),Vector3(-2.875,-7.571,1.293),Vector3(-1.202,-7.556,1.135),Vector3(-0.8242,-7.553,-0.634),Vector3(-2.267,-11.62,-1.511),Vector3(-3.487,-11.63,-0.3651),Vector3(-2.856,-11.62,1.243),Vector3(-1.245,-11.61,1.091),Vector3(-0.8817,-11.6,-0.6115),Vector3(-2.213,-12.17,-0.8985),Vector3(-2.928,-12.17,-0.2267),Vector3(-2.558,-12.17,0.716),Vector3(-1.614,-12.16,0.6268),Vector3(-1.401,-12.16,-0.3711)]);
{ .SetCoord }
IndexedFaceSet190.Coord := Coordinate191;
TextureCoordinate192 := TTextureCoordinateNode.Create;
TextureCoordinate192.SetPoint([Vector2(0.2986,0.2114),Vector2(0.2726,0.2114),Vector2(0.3201,0.2114),Vector2(0.3415,0.2114),Vector2(0.2466,0.2114),Vector2(0.2979,0.2417),Vector2(0.2726,0.2417),Vector2(0.3197,0.2417),Vector2(0.3418,0.2417),Vector2(0.2473,0.2417),Vector2(0.2979,0.3018),Vector2(0.2726,0.3018),Vector2(0.3197,0.3018),Vector2(0.3418,0.3018),Vector2(0.2473,0.3018),Vector2(0.2978,0.3276),Vector2(0.2726,0.3276),Vector2(0.3197,0.3276),Vector2(0.3419,0.3276),Vector2(0.2474,0.3276),Vector2(0.2932,0.2834),Vector2(0.2689,0.2834),Vector2(0.316,0.2834),Vector2(0.3322,0.2834),Vector2(0.245,0.2834),Vector2(0.2251,0.2114),Vector2(0.2255,0.2417),Vector2(0.2255,0.2417),Vector2(0.2255,0.3018),Vector2(0.2255,0.3018),Vector2(0.2255,0.3276),Vector2(0.2255,0.3276),Vector2(0.2159,0.2834),Vector2(0.4315,0.6736),Vector2(0.442,0.6736),Vector2(0.3947,0.6736),Vector2(0.4041,0.6736),Vector2(0.418,0.6736),Vector2(0.4296,0.6167),Vector2(0.4409,0.6167),Vector2(0.4415,0.6485),Vector2(0.4303,0.6485),Vector2(0.3965,0.6167),Vector2(0.3953,0.6485),Vector2(0.4047,0.6167),Vector2(0.4053,0.6485),Vector2(0.4189,0.6167),Vector2(0.418,0.6485),Vector2(0.4415,0.6706),Vector2(0.4306,0.6706),Vector2(0.395,0.6706),Vector2(0.4051,0.6706),Vector2(0.4182,0.6706),Vector2(0.3746,0.6736),Vector2(0.3851,0.6736),Vector2(0.384,0.6167),Vector2(0.3845,0.6485),Vector2(0.3845,0.6485),Vector2(0.3846,0.6706),Vector2(0.3846,0.6706),Vector2(0.3851,0.6736),Vector2(0.3481,0.2114)]);
{ .SetTexCoord }
IndexedFaceSet190.TexCoord := TextureCoordinate192;
{ .SetGeometry }
Shape186.Geometry := IndexedFaceSet190;
{ .AddChild }
Transform185.AddChildren([Shape186]);
{ .AddChildren }
HAnimSegment184.AddChildren([Transform185]);
{ .AddChildren }
HAnimJoint183.AddChildren([HAnimSegment184]);
HAnimJoint193 := THAnimJointNode.Create;
HAnimJoint193.NameField := 'r_elbow';
HAnimJoint193.Center := Vector3(-8.093,40.380001,-0.2502);
HAnimJoint193.SetUlimit([0,0,0]);
HAnimJoint193.SetLlimit([0,0,0]);
HAnimSegment194 := THAnimSegmentNode.Create;
HAnimSegment194.NameField := 'r_forearm';
Transform195 := TTransformNode.Create;
Transform195.Translation := Vector3(-8.093,40.380001,-0.2502);
Shape196 := TShapeNode.Create;
Appearance197 := TAppearanceNode.Create;
Material198 := TMaterialNode.Create;
Material198.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance197.Material := Material198;
ImageTexture199 := TImageTextureNode.Create;
ImageTexture199 := ImageTexture39;
{ .SetTexture }
Appearance197.Texture := ImageTexture199;
{ .SetAppearance }
Shape196.Appearance := Appearance197;
IndexedFaceSet200 := TIndexedFaceSetNode.Create;
IndexedFaceSet200.SetCoordIndex([0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
IndexedFaceSet200.CreaseAngle := 3.14159;
IndexedFaceSet200.SetTexCoordIndex([26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
Coordinate201 := TCoordinateNode.Create;
Coordinate201.SetPoint([Vector3(-0.215,0.3047,-1.152),Vector3(-1.155,0.2966,-0.2588),Vector3(-0.6199,0.3013,1.04),Vector3(0.6505,0.3122,0.9491),Vector3(0.9008,0.3143,-0.4054),Vector3(-0.1442,-0.8448,-1.625),Vector3(-1.472,-0.8561,-0.4271),Vector3(-0.7164,-0.8496,1.625),Vector3(1.079,-0.8342,1.482),Vector3(1.433,-0.8312,-0.6588),Vector3(-0.1328,-3.5,-1.607),Vector3(-1.551,-3.513,-0.4225),Vector3(-0.781,-2.925,1.61),Vector3(1.136,-2.909,1.468),Vector3(1.551,-3.486,-0.6519),Vector3(-0.0592,-8.713,-1.437),Vector3(-1.093,-8.722,-0.1279),Vector3(-0.5047,-8.716,1.51),Vector3(0.8932,-8.704,1.377),Vector3(1.169,-8.702,-0.3428),Vector3(-0.0092,-9.336,-0.8855),Vector3(-0.7154,-9.342,0.0084),Vector3(-0.3135,-9.339,1.043),Vector3(0.6412,-9.331,0.9519),Vector3(0.8292,-9.329,-0.1383)]);
{ .SetCoord }
IndexedFaceSet200.Coord := Coordinate201;
TextureCoordinate202 := TTextureCoordinateNode.Create;
TextureCoordinate202.SetPoint([Vector2(0.4222,0.6201),Vector2(0.4327,0.6201),Vector2(0.3884,0.6201),Vector2(0.3987,0.6201),Vector2(0.4103,0.6201),Vector2(0.4213,0.6265),Vector2(0.4321,0.6265),Vector2(0.3894,0.6265),Vector2(0.399,0.6265),Vector2(0.4105,0.6265),Vector2(0.4214,0.6413),Vector2(0.4323,0.6413),Vector2(0.389,0.6381),Vector2(0.3992,0.6381),Vector2(0.4103,0.6413),Vector2(0.4213,0.6705),Vector2(0.4336,0.6705),Vector2(0.3899,0.6705),Vector2(0.3981,0.6705),Vector2(0.4094,0.6705),Vector2(0.4215,0.674),Vector2(0.4346,0.674),Vector2(0.3899,0.674),Vector2(0.398,0.674),Vector2(0.4083,0.674),Vector2(0.3787,0.6201),Vector2(0.3682,0.6201),Vector2(0.3787,0.6201),Vector2(0.3782,0.6265),Vector2(0.3782,0.6265),Vector2(0.3783,0.6413),Vector2(0.3783,0.6413),Vector2(0.3796,0.6705),Vector2(0.3676,0.674),Vector2(0.3806,0.674),Vector2(0.3796,0.6705),Vector2(0.3806,0.674)]);
{ .SetTexCoord }
IndexedFaceSet200.TexCoord := TextureCoordinate202;
{ .SetGeometry }
Shape196.Geometry := IndexedFaceSet200;
{ .AddChild }
Transform195.AddChildren([Shape196]);
{ .AddChildren }
HAnimSegment194.AddChildren([Transform195]);
{ .AddChildren }
HAnimJoint193.AddChildren([HAnimSegment194]);
HAnimJoint203 := THAnimJointNode.Create;
HAnimJoint203.NameField := 'r_radiocarpal';
HAnimJoint203.Center := Vector3(-7.808,31.459999,-0.05849);
HAnimJoint203.SetUlimit([0,0,0]);
HAnimJoint203.SetLlimit([0,0,0]);
HAnimSegment204 := THAnimSegmentNode.Create;
HAnimSegment204.NameField := 'r_carpal';
Transform205 := TTransformNode.Create;
Transform205.Translation := Vector3(-7.808,31.459999,-0.05849);
Shape206 := TShapeNode.Create;
Appearance207 := TAppearanceNode.Create;
Material208 := TMaterialNode.Create;
Material208.DiffuseColor := Vector3(0.588,0.588,0.588);
{ .SetMaterial }
Appearance207.Material := Material208;
ImageTexture209 := TImageTextureNode.Create;
ImageTexture209 := ImageTexture39;
{ .SetTexture }
Appearance207.Texture := ImageTexture209;
{ .SetAppearance }
Shape206.Appearance := Appearance207;
IndexedFaceSet210 := TIndexedFaceSetNode.Create;
IndexedFaceSet210.SetCoordIndex([4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,22,23,27,-1,26,24,25,-1]);
IndexedFaceSet210.CreaseAngle := 3.14159;
IndexedFaceSet210.SetTexCoordIndex([4,7,5,-1,5,6,4,-1,2,0,1,-1,1,3,2,-1,14,17,15,-1,15,16,14,-1,8,4,6,-1,6,9,8,-1,38,41,39,-1,39,40,38,-1,18,37,36,-1,36,19,18,-1,10,8,9,-1,9,11,10,-1,42,38,40,-1,40,43,42,-1,20,18,19,-1,19,21,20,-1,22,23,24,-1,24,23,25,-1,25,26,24,-1,27,30,28,-1,28,29,27,-1,31,32,25,-1,25,23,31,-1,33,34,31,-1,34,35,32,-1,32,31,34,-1,20,21,35,-1,35,34,20,-1,8,13,12,-1,12,4,8,-1,22,29,28,-1,28,23,22,-1,23,28,30,-1,30,31,23,-1,31,30,27,-1,27,33,31,-1,14,26,24,-1,14,24,16,-1]);
Coordinate211 := TCoordinateNode.Create;
Coordinate211.SetPoint([Vector3(-1.247,0.07,0.7975),Vector3(-1.209,0.0872,-1.349),Vector3(0.7098,-0.0015,0.8912),Vector3(0.7183,0.0002,-1.283),Vector3(0.9295,-0.613,1.478),Vector3(-1.647,-0.4252,1.388),Vector3(-1.589,-0.3921,-1.989),Vector3(1.044,-0.5947,-1.984),Vector3(0.8227,-2.521,2.408),Vector3(-1.951,-2.334,2.08),Vector3(-1.892,-2.301,-2.409),Vector3(1.192,-2.614,-2.248),Vector3(0.5703,-3.958,1.694),Vector3(-0.8836,-4.2,1.75),Vector3(-0.8251,-4.167,-2.071),Vector3(0.7842,-3.968,-1.934),Vector3(1.037,-0.5968,-0.1872),Vector3(1.642,-2.561,1.941),Vector3(1.951,-0.9492,0.058),Vector3(1.914,-1.016,1.885),Vector3(1.649,-2.56,0.1377),Vector3(1.066,-2.61,-0.2014),Vector3(-1.209,0.0872,-1.349),Vector3(0.7183,0.0002,-1.283),Vector3(0.7098,-0.0015,0.8912),Vector3(-1.247,0.07,0.7975),Vector3(-1.209,0.0872,-1.349),Vector3(0.7098,-0.0015,0.8912)]);
{ .SetCoord }
IndexedFaceSet210.Coord := Coordinate211;
TextureCoordinate212 := TTextureCoordinateNode.Create;
TextureCoordinate212.SetPoint([Vector2(0.8107,0.9924),Vector2(0.8122,0.9033),Vector2(0.7694,0.9912),Vector2(0.7683,0.9026),Vector2(0.1329,0.0347),Vector2(0.0307,0.0051),Vector2(0.0134,0.0353),Vector2(0.1366,0.0058),Vector2(0.1249,0.1081),Vector2(0.0147,0.117),Vector2(0.1349,0.1856),Vector2(0.0462,0.1842),Vector2(0.1559,0.0454),Vector2(0.148,0.1033),Vector2(0.3244,0.0096),Vector2(0.1758,0.0039),Vector2(0.1759,0.011),Vector2(0.3241,0.0033),Vector2(0.173,0.1764),Vector2(0.3074,0.1757),Vector2(0.1732,0.1519),Vector2(0.3074,0.1513),Vector2(0.1756,0.032),Vector2(0.2159,0.0368),Vector2(0.1791,0.0165),Vector2(0.3169,0.0458),Vector2(0.3158,0.0193),Vector2(0.172,0.0594),Vector2(0.2087,0.0476),Vector2(0.1736,0.0504),Vector2(0.2073,0.064),Vector2(0.2362,0.0821),Vector2(0.3267,0.0796),Vector2(0.1717,0.0822),Vector2(0.1726,0.1297),Vector2(0.3077,0.1289),Vector2(0.3074,0.1865),Vector2(0.1742,0.184),Vector2(0.0061,0.1086),Vector2(0.1366,0.0368),Vector2(0.1241,0.1189),Vector2(0.0168,0.0309),Vector2(0.0211,0.1882),Vector2(0.14,0.1857)]);
{ .SetTexCoord }
IndexedFaceSet210.TexCoord := TextureCoordinate212;
{ .SetGeometry }
Shape206.Geometry := IndexedFaceSet210;
{ .AddChild }
Transform205.AddChildren([Shape206]);
{ .AddChildren }
HAnimSegment204.AddChildren([Transform205]);
{ .AddChildren }
HAnimJoint203.AddChildren([HAnimSegment204]);
{ .AddChildren }
HAnimJoint193.AddChildren([HAnimJoint203]);
{ .AddChildren }
HAnimJoint183.AddChildren([HAnimJoint193]);
{ .AddChildren }
HAnimJoint143.AddChildren([HAnimJoint183]);
{ .AddChildren }
HAnimJoint133.AddChildren([HAnimJoint143]);
{ .AddChildren }
HAnimJoint33.AddChildren([HAnimJoint133]);
{ .AddSkeleton }
HAnimHumanoid24.SetSkeleton([HAnimJoint33]);
HAnimJoint213 := THAnimJointNode.Create;
HAnimJoint213 := HAnimJoint33;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint213;
HAnimJoint214 := THAnimJointNode.Create;
HAnimJoint214 := HAnimJoint43;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint214;
HAnimJoint215 := THAnimJointNode.Create;
HAnimJoint215 := HAnimJoint133;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint215;
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216 := HAnimJoint143;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint216;
HAnimJoint217 := THAnimJointNode.Create;
HAnimJoint217 := HAnimJoint163;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint217;
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218 := HAnimJoint193;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint218;
HAnimJoint219 := THAnimJointNode.Create;
HAnimJoint219 := HAnimJoint53;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint219;
HAnimJoint220 := THAnimJointNode.Create;
HAnimJoint220 := HAnimJoint93;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint220;
HAnimJoint221 := THAnimJointNode.Create;
HAnimJoint221 := HAnimJoint63;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint221;
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222 := HAnimJoint103;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint222;
HAnimJoint223 := THAnimJointNode.Create;
HAnimJoint223 := HAnimJoint83;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint223;
HAnimJoint224 := THAnimJointNode.Create;
HAnimJoint224 := HAnimJoint123;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint224;
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225 := HAnimJoint173;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint225;
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226 := HAnimJoint203;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint226;
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227 := HAnimJoint153;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint227;
HAnimJoint228 := THAnimJointNode.Create;
HAnimJoint228 := HAnimJoint183;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint228;
HAnimJoint229 := THAnimJointNode.Create;
HAnimJoint229 := HAnimJoint73;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint229;
HAnimJoint230 := THAnimJointNode.Create;
HAnimJoint230 := HAnimJoint113;
{ .AddJoints }
HAnimHumanoid24.Joints := HAnimJoint230;
{ .AddChildren }
Group20.AddChildren([HAnimHumanoid24]);
{ .AddGroup }
X3D0.AddChildren([Group20]);
Result := X3D0;
end;
