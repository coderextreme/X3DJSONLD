function VolumeEmitter: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
WorldInfo12: TWorldInfoNode;
MetadataSet13: TMetadataSetNode;
MetadataSet14: TMetadataSetNode;
MetadataString15: TMetadataStringNode;
MetadataSet16: TMetadataSetNode;
MetadataDouble17: TMetadataDoubleNode;
MetadataDouble18: TMetadataDoubleNode;
MetadataDouble19: TMetadataDoubleNode;
MetadataSet20: TMetadataSetNode;
MetadataSet21: TMetadataSetNode;
Background22: TBackgroundNode;
OrthoViewpoint23: TOrthoViewpointNode;
Viewpoint24: TViewpointNode;
ParticleSystem25: TParticleSystemNode;
VolumeEmitter26: TVolumeEmitterNode;
Coordinate27: TCoordinateNode;
Appearance28: TAppearanceNode;
PointProperties29: TPointPropertiesNode;
ClipPlane30: TClipPlaneNode;
ClipPlane31: TClipPlaneNode;
Transform32: TTransformNode;
Shape33: TShapeNode;
IndexedLineSet34: TIndexedLineSetNode;
Color35: TColorNode;
Coordinate36: TCoordinateNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['ParticleSystems'] := 3;
X3D0.Meta['comment'] := 'World of Titania';
X3D0.Meta['created'] := 'Sun, 01 May 2016 01:57:45 GMT';
X3D0.Meta['creator'] := 'holger';
X3D0.Meta['creator'] := 'Holger Seelig';
X3D0.Meta['generator'] := 'Titania V1.4.2, http://titania.create3000.de';
X3D0.Meta['generator'] := 'Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/';
X3D0.Meta['identifier'] := 'file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/VolumeEmitter.x3d';
X3D0.Meta['modified'] := 'Mon, 22 Apr 2024 19:55:06 GMT';
Group11 := TGroupNode.Create;
WorldInfo12 := TWorldInfoNode.Create;
WorldInfo12.Title := 'VolumeEmitter';
MetadataSet13 := TMetadataSetNode.Create;
MetadataSet13.NameField := 'Titania';
MetadataSet13.Reference := 'http://titania.create3000.de';
MetadataSet14 := TMetadataSetNode.Create;
MetadataSet14.NameField := 'NavigationInfo';
MetadataSet14.Reference := 'http://titania.create3000.de';
MetadataString15 := TMetadataStringNode.Create;
MetadataString15.NameField := 'type';
MetadataString15.Reference := 'http://titania.create3000.de';
MetadataString15.SetValue(['EXAMINE']);
{ .SetValue }
MetadataSet14.Value := MetadataString15;
{ .SetValue }
MetadataSet13.Value := MetadataSet14;
MetadataSet16 := TMetadataSetNode.Create;
MetadataSet16.NameField := 'Viewpoint';
MetadataSet16.Reference := 'http://titania.create3000.de';
MetadataDouble17 := TMetadataDoubleNode.Create;
MetadataDouble17.NameField := 'position';
MetadataDouble17.Reference := 'http://titania.create3000.de';
MetadataDouble17.SetValue(0,0,10);
{ .SetValue }
MetadataSet16.Value := MetadataDouble17;
MetadataDouble18 := TMetadataDoubleNode.Create;
MetadataDouble18.NameField := 'orientation';
MetadataDouble18.Reference := 'http://titania.create3000.de';
MetadataDouble18.SetValue(0,0,1,0);
{ .SetValue }
MetadataSet16.Value := MetadataDouble18;
MetadataDouble19 := TMetadataDoubleNode.Create;
MetadataDouble19.NameField := 'centerOfRotation';
MetadataDouble19.Reference := 'http://titania.create3000.de';
MetadataDouble19.SetValue(0,0,0);
{ .SetValue }
MetadataSet16.Value := MetadataDouble19;
{ .SetValue }
MetadataSet13.Value := MetadataSet16;
MetadataSet20 := TMetadataSetNode.Create;
MetadataSet20.NameField := 'Selection';
MetadataSet20.Reference := 'http://titania.create3000.de';
MetadataSet21 := TMetadataSetNode.Create;
MetadataSet21.NameField := 'previous';
MetadataSet21.Reference := 'http://titania.create3000.de';
{ .SetValue }
MetadataSet20.Value := MetadataSet21;
{ .SetValue }
MetadataSet13.Value := MetadataSet20;
{ .SetMetadata }
WorldInfo12.Metadata := MetadataSet13;
{ .AddChildren }
Group11.AddChildren([WorldInfo12]);
Background22 := TBackgroundNode.Create;
Background22.SetSkyColor([Vector3(0.2,0.2,0.2)]);
{ .AddChildren }
Group11.AddChildren([Background22]);
OrthoViewpoint23 := TOrthoViewpointNode.Create;
OrthoViewpoint23.Description := 'OrthoViewpoint';
OrthoViewpoint23.FieldOfView := Vector3(-1.5,-1.5,1.5,1.5);
{ .AddChildren }
Group11.AddChildren([OrthoViewpoint23]);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.Description := 'Viewpoint';
Viewpoint24.Position := Vector3(0,0,8);
{ .AddChildren }
Group11.AddChildren([Viewpoint24]);
ParticleSystem25 := TParticleSystemNode.Create;
ParticleSystem25.GeometryType := 'POINT';
ParticleSystem25.MaxParticles := 100000;
ParticleSystem25.ParticleLifetime := 60;
ParticleSystem25.LifetimeVariation := 0.01;
ParticleSystem25.ParticleSize := Vector2(0.1,0.1);
ParticleSystem25.SetColorKey([0,0.1,0.4,1]);
VolumeEmitter26 := TVolumeEmitterNode.Create;
VolumeEmitter26.Direction := Vector3(0,0,0);
VolumeEmitter26.Mass := 0.01;
VolumeEmitter26.SurfaceArea := 0.01;
Coordinate27 := TCoordinateNode.Create;
Coordinate27.SetPoint([Vector3(0.0277709,-1,1),Vector3(2.02777,-1,1),Vector3(2.02777,1,1),Vector3(0.0277709,1,1),Vector3(0.0277709,-1,-1),Vector3(2.02777,-1,-1),Vector3(2.02777,1,-1),Vector3(0.0277709,1,-1),Vector3(-1.01983,1,0),Vector3(-1.01983,0.974928,-0.222521),Vector3(-1.06609,0.974928,-0.217658),Vector3(-1.11034,0.974928,-0.203283),Vector3(-1.15062,0.974928,-0.180023),Vector3(-1.18519,0.974928,-0.148896),Vector3(-1.21254,0.974928,-0.11126),Vector3(-1.23146,0.974928,-0.0687627),Vector3(-1.24113,0.974928,-0.0232598),Vector3(-1.24113,0.974928,0.0232598),Vector3(-1.23146,0.974928,0.0687627),Vector3(-1.21254,0.974928,0.11126),Vector3(-1.18519,0.974928,0.148896),Vector3(-1.15062,0.974928,0.180023),Vector3(-1.11034,0.974928,0.203283),Vector3(-1.06609,0.974928,0.217658),Vector3(-1.01983,0.974928,0.222521),Vector3(-0.973561,0.974928,0.217658),Vector3(-0.929318,0.974928,0.203283),Vector3(-0.889031,0.974928,0.180023),Vector3(-0.85446,0.974928,0.148896),Vector3(-0.827116,0.974928,0.11126),Vector3(-0.808195,0.974928,0.0687627),Vector3(-0.798523,0.974928,0.0232598),Vector3(-0.798523,0.974928,-0.0232598),Vector3(-0.808195,0.974928,-0.0687627),Vector3(-0.827116,0.974928,-0.11126),Vector3(-0.85446,0.974928,-0.148896),Vector3(-0.889031,0.974928,-0.180023),Vector3(-0.929318,0.974928,-0.203283),Vector3(-0.973561,0.974928,-0.217658),Vector3(-1.01983,0.900969,-0.433884),Vector3(-1.11004,0.900969,-0.424402),Vector3(-1.19631,0.900969,-0.396373),Vector3(-1.27486,0.900969,-0.351019),Vector3(-1.34227,0.900969,-0.290325),Vector3(-1.39558,0.900969,-0.216942),Vector3(-1.43248,0.900969,-0.134077),Vector3(-1.45134,0.900969,-0.0453532),Vector3(-1.45134,0.900969,0.0453532),Vector3(-1.43248,0.900969,0.134077),Vector3(-1.39558,0.900969,0.216942),Vector3(-1.34227,0.900969,0.290325),Vector3(-1.27486,0.900969,0.351019),Vector3(-1.19631,0.900969,0.396373),Vector3(-1.11004,0.900969,0.424402),Vector3(-1.01983,0.900969,0.433884),Vector3(-0.929616,0.900969,0.424402),Vector3(-0.843349,0.900969,0.396373),Vector3(-0.764795,0.900969,0.351019),Vector3(-0.697387,0.900969,0.290325),Vector3(-0.644071,0.900969,0.216942),Vector3(-0.607177,0.900969,0.134077),Vector3(-0.588318,0.900969,0.0453532),Vector3(-0.588318,0.900969,-0.0453532),Vector3(-0.607177,0.900969,-0.134077),Vector3(-0.644071,0.900969,-0.216942),Vector3(-0.697387,0.900969,-0.290325),Vector3(-0.764795,0.900969,-0.351019),Vector3(-0.843349,0.900969,-0.396373),Vector3(-0.929616,0.900969,-0.424402),Vector3(-1.01983,0.781832,-0.62349),Vector3(-1.14946,0.781832,-0.609865),Vector3(-1.27343,0.781832,-0.569586),Vector3(-1.38631,0.781832,-0.504414),Vector3(-1.48317,0.781832,-0.417196),Vector3(-1.55979,0.781832,-0.311745),Vector3(-1.6128,0.781832,-0.192669),Vector3(-1.6399,0.781832,-0.0651724),Vector3(-1.6399,0.781832,0.0651724),Vector3(-1.6128,0.781832,0.192669),Vector3(-1.55979,0.781832,0.311745),Vector3(-1.48317,0.781832,0.417196),Vector3(-1.38631,0.781832,0.504414),Vector3(-1.27343,0.781832,0.569586),Vector3(-1.14946,0.781832,0.609865),Vector3(-1.01983,0.781832,0.62349),Vector3(-0.890194,0.781832,0.609865),Vector3(-0.766229,0.781832,0.569586),Vector3(-0.653347,0.781832,0.504414),Vector3(-0.556482,0.781832,0.417196),Vector3(-0.479867,0.781832,0.311745),Vector3(-0.426851,0.781832,0.192669),Vector3(-0.399751,0.781832,0.0651724),Vector3(-0.399751,0.781832,-0.0651724),Vector3(-0.426851,0.781832,-0.192669),Vector3(-0.479867,0.781832,-0.311745),Vector3(-0.556482,0.781832,-0.417196),Vector3(-0.653347,0.781832,-0.504414),Vector3(-0.766229,0.781832,-0.569586),Vector3(-0.890194,0.781832,-0.609865),Vector3(-1.01983,0.62349,-0.781832),Vector3(-1.18238,0.62349,-0.764747),Vector3(-1.33783,0.62349,-0.714239),Vector3(-1.47938,0.62349,-0.632515),Vector3(-1.60084,0.62349,-0.523147),Vector3(-1.69692,0.62349,-0.390916),Vector3(-1.7634,0.62349,-0.241599),Vector3(-1.79738,0.62349,-0.0817236),Vector3(-1.79738,0.62349,0.0817236),Vector3(-1.7634,0.62349,0.241599),Vector3(-1.69692,0.62349,0.390916),Vector3(-1.60084,0.62349,0.523147),Vector3(-1.47938,0.62349,0.632515),Vector3(-1.33783,0.62349,0.714239),Vector3(-1.18238,0.62349,0.764747),Vector3(-1.01983,0.62349,0.781832),Vector3(-0.857273,0.62349,0.764747),Vector3(-0.701826,0.62349,0.714239),Vector3(-0.560276,0.62349,0.632515),Vector3(-0.438811,0.62349,0.523147),Vector3(-0.342739,0.62349,0.390916),Vector3(-0.276259,0.62349,0.241599),Vector3(-0.242277,0.62349,0.0817236),Vector3(-0.242277,0.62349,-0.0817236),Vector3(-0.276259,0.62349,-0.241599),Vector3(-0.342739,0.62349,-0.390916),Vector3(-0.438811,0.62349,-0.523147),Vector3(-0.560276,0.62349,-0.632515),Vector3(-0.701826,0.62349,-0.714239),Vector3(-0.857273,0.62349,-0.764747),Vector3(-1.01983,0.433884,-0.900969),Vector3(-1.20715,0.433884,-0.881281),Vector3(-1.38629,0.433884,-0.823076),Vector3(-1.54941,0.433884,-0.728899),Vector3(-1.68938,0.433884,-0.602866),Vector3(-1.80009,0.433884,-0.450484),Vector3(-1.8767,0.433884,-0.278415),Vector3(-1.91586,0.433884,-0.0941769),Vector3(-1.91586,0.433884,0.0941769),Vector3(-1.8767,0.433884,0.278415),Vector3(-1.80009,0.433884,0.450484),Vector3(-1.68938,0.433884,0.602866),Vector3(-1.54941,0.433884,0.728899),Vector3(-1.38629,0.433884,0.823076),Vector3(-1.20715,0.433884,0.881281),Vector3(-1.01983,0.433884,0.900969),Vector3(-0.832503,0.433884,0.881281),Vector3(-0.653368,0.433884,0.823076),Vector3(-0.490249,0.433884,0.728899),Vector3(-0.350275,0.433884,0.602866),Vector3(-0.239563,0.433884,0.450484),Vector3(-0.162953,0.433884,0.278415),Vector3(-0.123792,0.433884,0.0941769),Vector3(-0.123792,0.433884,-0.0941769),Vector3(-0.162953,0.433884,-0.278415),Vector3(-0.239563,0.433884,-0.450484),Vector3(-0.350275,0.433884,-0.602866),Vector3(-0.490249,0.433884,-0.728899),Vector3(-0.653368,0.433884,-0.823076),Vector3(-0.832503,0.433884,-0.881281),Vector3(-1.01983,0.222521,-0.974928),Vector3(-1.22253,0.222521,-0.953623),Vector3(-1.41637,0.222521,-0.890641),Vector3(-1.59288,0.222521,-0.788733),Vector3(-1.74434,0.222521,-0.652354),Vector3(-1.86414,0.222521,-0.487464),Vector3(-1.94704,0.222521,-0.301269),Vector3(-1.98942,0.222521,-0.101908),Vector3(-1.98942,0.222521,0.101908),Vector3(-1.94704,0.222521,0.301269),Vector3(-1.86414,0.222521,0.487464),Vector3(-1.74434,0.222521,0.652354),Vector3(-1.59288,0.222521,0.788733),Vector3(-1.41637,0.222521,0.890641),Vector3(-1.22253,0.222521,0.953623),Vector3(-1.01983,0.222521,0.974928),Vector3(-0.817126,0.222521,0.953623),Vector3(-0.623286,0.222521,0.890641),Vector3(-0.446777,0.222521,0.788733),Vector3(-0.295313,0.222521,0.652354),Vector3(-0.175513,0.222521,0.487464),Vector3(-0.0926139,0.222521,0.301269),Vector3(-0.0502383,0.222521,0.101908),Vector3(-0.0502383,0.222521,-0.101908),Vector3(-0.0926139,0.222521,-0.301269),Vector3(-0.175513,0.222521,-0.487464),Vector3(-0.295313,0.222521,-0.652354),Vector3(-0.446777,0.222521,-0.788733),Vector3(-0.623286,0.222521,-0.890641),Vector3(-0.817126,0.222521,-0.953623),Vector3(-1.01983,6.12323e-17,-1),Vector3(-1.22774,6.12323e-17,-0.978148),Vector3(-1.42657,6.12323e-17,-0.913545),Vector3(-1.60761,6.12323e-17,-0.809017),Vector3(-1.76297,6.12323e-17,-0.669131),Vector3(-1.88585,6.12323e-17,-0.5),Vector3(-1.97089,6.12323e-17,-0.309017),Vector3(-2.01435,6.12323e-17,-0.104528),Vector3(-2.01435,6.12323e-17,0.104528),Vector3(-1.97089,6.12323e-17,0.309017),Vector3(-1.88585,6.12323e-17,0.5),Vector3(-1.76297,6.12323e-17,0.669131),Vector3(-1.60761,6.12323e-17,0.809017),Vector3(-1.42657,6.12323e-17,0.913545),Vector3(-1.22774,6.12323e-17,0.978148),Vector3(-1.01983,6.12323e-17,1),Vector3(-0.811914,6.12323e-17,0.978148),Vector3(-0.613089,6.12323e-17,0.913545),Vector3(-0.43204,6.12323e-17,0.809017),Vector3(-0.27668,6.12323e-17,0.669131),Vector3(-0.1538,6.12323e-17,0.5),Vector3(-0.0687689,6.12323e-17,0.309017),Vector3(-0.0253035,6.12323e-17,0.104528),Vector3(-0.0253035,6.12323e-17,-0.104528),Vector3(-0.0687689,6.12323e-17,-0.309017),Vector3(-0.1538,6.12323e-17,-0.5),Vector3(-0.27668,6.12323e-17,-0.669131),Vector3(-0.43204,6.12323e-17,-0.809017),Vector3(-0.613089,6.12323e-17,-0.913545),Vector3(-0.811914,6.12323e-17,-0.978148),Vector3(-1.01983,-0.222521,-0.974928),Vector3(-1.22253,-0.222521,-0.953623),Vector3(-1.41637,-0.222521,-0.890641),Vector3(-1.59288,-0.222521,-0.788733),Vector3(-1.74434,-0.222521,-0.652354),Vector3(-1.86414,-0.222521,-0.487464),Vector3(-1.94704,-0.222521,-0.301269),Vector3(-1.98942,-0.222521,-0.101908),Vector3(-1.98942,-0.222521,0.101908),Vector3(-1.94704,-0.222521,0.301269),Vector3(-1.86414,-0.222521,0.487464),Vector3(-1.74434,-0.222521,0.652354),Vector3(-1.59288,-0.222521,0.788733),Vector3(-1.41637,-0.222521,0.890641),Vector3(-1.22253,-0.222521,0.953623),Vector3(-1.01983,-0.222521,0.974928),Vector3(-0.817126,-0.222521,0.953623),Vector3(-0.623286,-0.222521,0.890641),Vector3(-0.446777,-0.222521,0.788733),Vector3(-0.295313,-0.222521,0.652354),Vector3(-0.175513,-0.222521,0.487464),Vector3(-0.0926139,-0.222521,0.301269),Vector3(-0.0502383,-0.222521,0.101908),Vector3(-0.0502383,-0.222521,-0.101908),Vector3(-0.0926139,-0.222521,-0.301269),Vector3(-0.175513,-0.222521,-0.487464),Vector3(-0.295313,-0.222521,-0.652354),Vector3(-0.446777,-0.222521,-0.788733),Vector3(-0.623286,-0.222521,-0.890641),Vector3(-0.817126,-0.222521,-0.953623),Vector3(-1.01983,-0.433884,-0.900969),Vector3(-1.20715,-0.433884,-0.881281),Vector3(-1.38629,-0.433884,-0.823076),Vector3(-1.54941,-0.433884,-0.728899),Vector3(-1.68938,-0.433884,-0.602866),Vector3(-1.80009,-0.433884,-0.450484),Vector3(-1.8767,-0.433884,-0.278415),Vector3(-1.91586,-0.433884,-0.0941769),Vector3(-1.91586,-0.433884,0.0941769),Vector3(-1.8767,-0.433884,0.278415),Vector3(-1.80009,-0.433884,0.450484),Vector3(-1.68938,-0.433884,0.602866),Vector3(-1.54941,-0.433884,0.728899),Vector3(-1.38629,-0.433884,0.823076),Vector3(-1.20715,-0.433884,0.881281),Vector3(-1.01983,-0.433884,0.900969),Vector3(-0.832503,-0.433884,0.881281),Vector3(-0.653368,-0.433884,0.823076),Vector3(-0.490249,-0.433884,0.728899),Vector3(-0.350275,-0.433884,0.602866),Vector3(-0.239563,-0.433884,0.450484),Vector3(-0.162953,-0.433884,0.278415),Vector3(-0.123792,-0.433884,0.0941769),Vector3(-0.123792,-0.433884,-0.0941769),Vector3(-0.162953,-0.433884,-0.278415),Vector3(-0.239563,-0.433884,-0.450484),Vector3(-0.350275,-0.433884,-0.602866),Vector3(-0.490249,-0.433884,-0.728899),Vector3(-0.653368,-0.433884,-0.823076),Vector3(-0.832503,-0.433884,-0.881281),Vector3(-1.01983,-0.62349,-0.781832),Vector3(-1.18238,-0.62349,-0.764747),Vector3(-1.33783,-0.62349,-0.714239),Vector3(-1.47938,-0.62349,-0.632515),Vector3(-1.60084,-0.62349,-0.523147),Vector3(-1.69692,-0.62349,-0.390916),Vector3(-1.7634,-0.62349,-0.241599),Vector3(-1.79738,-0.62349,-0.0817236),Vector3(-1.79738,-0.62349,0.0817236),Vector3(-1.7634,-0.62349,0.241599),Vector3(-1.69692,-0.62349,0.390916),Vector3(-1.60084,-0.62349,0.523147),Vector3(-1.47938,-0.62349,0.632515),Vector3(-1.33783,-0.62349,0.714239),Vector3(-1.18238,-0.62349,0.764747),Vector3(-1.01983,-0.62349,0.781832),Vector3(-0.857273,-0.62349,0.764747),Vector3(-0.701826,-0.62349,0.714239),Vector3(-0.560276,-0.62349,0.632515),Vector3(-0.438811,-0.62349,0.523147),Vector3(-0.342739,-0.62349,0.390916),Vector3(-0.276259,-0.62349,0.241599),Vector3(-0.242277,-0.62349,0.0817236),Vector3(-0.242277,-0.62349,-0.0817236),Vector3(-0.276259,-0.62349,-0.241599),Vector3(-0.342739,-0.62349,-0.390916),Vector3(-0.438811,-0.62349,-0.523147),Vector3(-0.560276,-0.62349,-0.632515),Vector3(-0.701826,-0.62349,-0.714239),Vector3(-0.857273,-0.62349,-0.764747),Vector3(-1.01983,-0.781832,-0.62349),Vector3(-1.14946,-0.781832,-0.609865),Vector3(-1.27343,-0.781832,-0.569586),Vector3(-1.38631,-0.781832,-0.504414),Vector3(-1.48317,-0.781832,-0.417196),Vector3(-1.55979,-0.781832,-0.311745),Vector3(-1.6128,-0.781832,-0.192669),Vector3(-1.6399,-0.781832,-0.0651724),Vector3(-1.6399,-0.781832,0.0651724),Vector3(-1.6128,-0.781832,0.192669),Vector3(-1.55979,-0.781832,0.311745),Vector3(-1.48317,-0.781832,0.417196),Vector3(-1.38631,-0.781832,0.504414),Vector3(-1.27343,-0.781832,0.569586),Vector3(-1.14946,-0.781832,0.609865),Vector3(-1.01983,-0.781832,0.62349),Vector3(-0.890194,-0.781832,0.609865),Vector3(-0.766229,-0.781832,0.569586),Vector3(-0.653347,-0.781832,0.504414),Vector3(-0.556482,-0.781832,0.417196),Vector3(-0.479867,-0.781832,0.311745),Vector3(-0.426851,-0.781832,0.192669),Vector3(-0.399751,-0.781832,0.0651724),Vector3(-0.399751,-0.781832,-0.0651724),Vector3(-0.426851,-0.781832,-0.192669),Vector3(-0.479867,-0.781832,-0.311745),Vector3(-0.556482,-0.781832,-0.417196),Vector3(-0.653347,-0.781832,-0.504414),Vector3(-0.766229,-0.781832,-0.569586),Vector3(-0.890194,-0.781832,-0.609865),Vector3(-1.01983,-0.900969,-0.433884),Vector3(-1.11004,-0.900969,-0.424402),Vector3(-1.19631,-0.900969,-0.396373),Vector3(-1.27486,-0.900969,-0.351019),Vector3(-1.34227,-0.900969,-0.290325),Vector3(-1.39558,-0.900969,-0.216942),Vector3(-1.43248,-0.900969,-0.134077),Vector3(-1.45134,-0.900969,-0.0453532),Vector3(-1.45134,-0.900969,0.0453532),Vector3(-1.43248,-0.900969,0.134077),Vector3(-1.39558,-0.900969,0.216942),Vector3(-1.34227,-0.900969,0.290325),Vector3(-1.27486,-0.900969,0.351019),Vector3(-1.19631,-0.900969,0.396373),Vector3(-1.11004,-0.900969,0.424402),Vector3(-1.01983,-0.900969,0.433884),Vector3(-0.929616,-0.900969,0.424402),Vector3(-0.843349,-0.900969,0.396373),Vector3(-0.764795,-0.900969,0.351019),Vector3(-0.697387,-0.900969,0.290325),Vector3(-0.644071,-0.900969,0.216942),Vector3(-0.607177,-0.900969,0.134077),Vector3(-0.588318,-0.900969,0.0453532),Vector3(-0.588318,-0.900969,-0.0453532),Vector3(-0.607177,-0.900969,-0.134077),Vector3(-0.644071,-0.900969,-0.216942),Vector3(-0.697387,-0.900969,-0.290325),Vector3(-0.764795,-0.900969,-0.351019),Vector3(-0.843349,-0.900969,-0.396373),Vector3(-0.929616,-0.900969,-0.424402),Vector3(-1.01983,-0.974928,-0.222521),Vector3(-1.06609,-0.974928,-0.217658),Vector3(-1.11034,-0.974928,-0.203283),Vector3(-1.15062,-0.974928,-0.180023),Vector3(-1.18519,-0.974928,-0.148896),Vector3(-1.21254,-0.974928,-0.11126),Vector3(-1.23146,-0.974928,-0.0687627),Vector3(-1.24113,-0.974928,-0.0232598),Vector3(-1.24113,-0.974928,0.0232598),Vector3(-1.23146,-0.974928,0.0687627),Vector3(-1.21254,-0.974928,0.11126),Vector3(-1.18519,-0.974928,0.148896),Vector3(-1.15062,-0.974928,0.180023),Vector3(-1.11034,-0.974928,0.203283),Vector3(-1.06609,-0.974928,0.217658),Vector3(-1.01983,-0.974928,0.222521),Vector3(-0.973561,-0.974928,0.217658),Vector3(-0.929318,-0.974928,0.203283),Vector3(-0.889031,-0.974928,0.180023),Vector3(-0.85446,-0.974928,0.148896),Vector3(-0.827116,-0.974928,0.11126),Vector3(-0.808195,-0.974928,0.0687627),Vector3(-0.798523,-0.974928,0.0232598),Vector3(-0.798523,-0.974928,-0.0232598),Vector3(-0.808195,-0.974928,-0.0687627),Vector3(-0.827116,-0.974928,-0.11126),Vector3(-0.85446,-0.974928,-0.148896),Vector3(-0.889031,-0.974928,-0.180023),Vector3(-0.929318,-0.974928,-0.203283),Vector3(-0.973561,-0.974928,-0.217658),Vector3(-1.01983,-1,0)]);
{ .SetCoord }
VolumeEmitter26.Coord := Coordinate27;
{ .SetEmitter }
ParticleSystem25.Emitter := VolumeEmitter26;
Appearance28 := TAppearanceNode.Create;
PointProperties29 := TPointPropertiesNode.Create;
PointProperties29.PointSizeScaleFactor := 2;
PointProperties29.PointSizeMaxValue := 2;
{ .SetPointProperties }
Appearance28.PointProperties := PointProperties29;
{ .SetAppearance }
ParticleSystem25.Appearance := Appearance28;
{ .AddChildren }
Group11.AddChildren([ParticleSystem25]);
ClipPlane30 := TClipPlaneNode.Create;
ClipPlane30.Plane := Vector4(0,0,1,0.2);
{ .AddChildren }
Group11.AddChildren([ClipPlane30]);
ClipPlane31 := TClipPlaneNode.Create;
ClipPlane31.Plane := Vector4(0,0,-1,0.2);
{ .AddChildren }
Group11.AddChildren([ClipPlane31]);
Transform32 := TTransformNode.Create;
Shape33 := TShapeNode.Create;
IndexedLineSet34 := TIndexedLineSetNode.Create;
IndexedLineSet34.ColorPerVertex := False;
IndexedLineSet34.SetColorIndex([0,1,2]);
IndexedLineSet34.SetCoordIndex([0,1,-1,2,3,-1,4,5,-1]);
Color35 := TColorNode.Create;
Color35.SetColor([Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet34.Color := Color35;
Coordinate36 := TCoordinateNode.Create;
Coordinate36.SetPoint([Vector3(-1,0,0),Vector3(1,0,0),Vector3(0,-1,0),Vector3(0,1,0),Vector3(0,0,-1),Vector3(0,0,1)]);
{ .SetCoord }
IndexedLineSet34.Coord := Coordinate36;
{ .SetGeometry }
Shape33.Geometry := IndexedLineSet34;
{ .AddChild }
Transform32.AddChildren([Shape33]);
{ .AddChildren }
Group11.AddChildren([Transform32]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
