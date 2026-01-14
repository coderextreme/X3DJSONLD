function HAnimPrototypes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group21: TGroupNode;
ProtoDeclare22: TProtoDeclareNode;
ProtoInterface23: TProtoInterfaceNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
field27: TfieldNode;
field28: TfieldNode;
field29: TfieldNode;
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
ProtoBody43: TProtoBodyNode;
Transform44: TTransformNode;
Group45: TGroupNode;
IS46: TISNode;
connect47: TconnectNode;
Group48: TGroupNode;
IS49: TISNode;
connect50: TconnectNode;
Group51: TGroupNode;
IS52: TISNode;
connect53: TconnectNode;
IS54: TISNode;
connect55: TconnectNode;
connect56: TconnectNode;
connect57: TconnectNode;
connect58: TconnectNode;
connect59: TconnectNode;
connect60: TconnectNode;
connect61: TconnectNode;
ProtoDeclare62: TProtoDeclareNode;
ProtoInterface63: TProtoInterfaceNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
field67: TfieldNode;
field68: TfieldNode;
field69: TfieldNode;
field70: TfieldNode;
field71: TfieldNode;
field72: TfieldNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
field76: TfieldNode;
field77: TfieldNode;
field78: TfieldNode;
field79: TfieldNode;
field80: TfieldNode;
ProtoBody81: TProtoBodyNode;
Transform82: TTransformNode;
IS83: TISNode;
connect84: TconnectNode;
connect85: TconnectNode;
connect86: TconnectNode;
connect87: TconnectNode;
connect88: TconnectNode;
connect89: TconnectNode;
connect90: TconnectNode;
connect91: TconnectNode;
connect92: TconnectNode;
connect93: TconnectNode;
ProtoDeclare94: TProtoDeclareNode;
ProtoInterface95: TProtoInterfaceNode;
field96: TfieldNode;
field97: TfieldNode;
field98: TfieldNode;
field99: TfieldNode;
field100: TfieldNode;
field101: TfieldNode;
field102: TfieldNode;
field103: TfieldNode;
field104: TfieldNode;
field105: TfieldNode;
field106: TfieldNode;
ProtoBody107: TProtoBodyNode;
Group108: TGroupNode;
IS109: TISNode;
connect110: TconnectNode;
connect111: TconnectNode;
connect112: TconnectNode;
connect113: TconnectNode;
connect114: TconnectNode;
ProtoDeclare115: TProtoDeclareNode;
ProtoInterface116: TProtoInterfaceNode;
field117: TfieldNode;
field118: TfieldNode;
field119: TfieldNode;
field120: TfieldNode;
field121: TfieldNode;
field122: TfieldNode;
field123: TfieldNode;
field124: TfieldNode;
field125: TfieldNode;
field126: TfieldNode;
field127: TfieldNode;
ProtoBody128: TProtoBodyNode;
Transform129: TTransformNode;
IS130: TISNode;
connect131: TconnectNode;
connect132: TconnectNode;
connect133: TconnectNode;
connect134: TconnectNode;
connect135: TconnectNode;
connect136: TconnectNode;
connect137: TconnectNode;
connect138: TconnectNode;
connect139: TconnectNode;
connect140: TconnectNode;
ProtoDeclare141: TProtoDeclareNode;
ProtoInterface142: TProtoInterfaceNode;
field143: TfieldNode;
field144: TfieldNode;
field145: TfieldNode;
ProtoBody146: TProtoBodyNode;
WorldInfo147: TWorldInfoNode;
Shape148: TShapeNode;
Appearance149: TAppearanceNode;
Material150: TMaterialNode;
Text151: TTextNode;
FontStyle152: TFontStyleNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HAnimPrototypes.x3d';
X3D0.Meta['description'] := 'Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.';
X3D0.Meta['warning'] := 'These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.';
X3D0.Meta['warning'] := 'Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).';
X3D0.Meta['warning'] := 'Need support for skin';
X3D0.Meta['creator'] := 'Ozan APAYDIN, Don Brutzman';
X3D0.Meta['translator'] := 'Ozan APAYDIN, Don Brutzman';
X3D0.Meta['created'] := '15 November 2001';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:20:09 GMT';
X3D0.Meta['TODO'] := 'upgrade to match support requirements for HAnim 2.2';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html';
X3D0.Meta['reference'] := 'https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html';
X3D0.Meta['reference'] := 'http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications/HAnim2001';
X3D0.Meta['reference'] := 'http://www.HAnim.org';
X3D0.Meta['reference'] := 'http://HAnim.org/Models';
X3D0.Meta['reference'] := 'http://HAnim.org/Specifications';
X3D0.Meta['reference'] := 'InterchangableActorsViaDynamicRoutingPrototypes.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d';
Group21 := TGroupNode.Create;
ProtoDeclare22 := TProtoDeclareNode.Create;
ProtoDeclare22.NameField := 'Humanoid1_1';
ProtoDeclare22.Appinfo := 'The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.';
ProtoDeclare22.Documentation := 'http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html';
ProtoInterface23 := TProtoInterfaceNode.Create;
field24 := TfieldNode.Create;
field24.AccessType := 'inputOutput';
field24.Type := 'SFString';
field24.NameField := 'name';
{ .AddField }
ProtoInterface23.Field := field24;
field25 := TfieldNode.Create;
field25.AccessType := 'inputOutput';
field25.Type := 'SFString';
field25.NameField := 'version';
field25.Value := '1.1';
field25.Appinfo := 'legal values: 1.1 or 2.0';
{ .AddField }
ProtoInterface23.Field := field25;
field26 := TfieldNode.Create;
field26.AccessType := 'inputOutput';
field26.Type := 'SFString';
field26.NameField := 'humanoidVersion';
field26.Appinfo := 'Version of the humanoid being modeled. Hint: HAnim version 2.0';
{ .AddField }
ProtoInterface23.Field := field26;
field27 := TfieldNode.Create;
field27.AccessType := 'inputOutput';
field27.Type := 'MFString';
field27.NameField := 'info';
{ .AddField }
ProtoInterface23.Field := field27;
field28 := TfieldNode.Create;
field28.AccessType := 'inputOutput';
field28.Type := 'SFVec3f';
field28.NameField := 'translation';
{ .AddField }
ProtoInterface23.Field := field28;
field29 := TfieldNode.Create;
field29.AccessType := 'inputOutput';
field29.Type := 'SFRotation';
field29.NameField := 'rotation';
{ .AddField }
ProtoInterface23.Field := field29;
field30 := TfieldNode.Create;
field30.AccessType := 'inputOutput';
field30.Type := 'SFVec3f';
field30.NameField := 'center';
{ .AddField }
ProtoInterface23.Field := field30;
field31 := TfieldNode.Create;
field31.AccessType := 'inputOutput';
field31.Type := 'SFVec3f';
field31.NameField := 'scale';
field31.Value := '1 1 1';
{ .AddField }
ProtoInterface23.Field := field31;
field32 := TfieldNode.Create;
field32.AccessType := 'inputOutput';
field32.Type := 'SFRotation';
field32.NameField := 'scaleOrientation';
{ .AddField }
ProtoInterface23.Field := field32;
field33 := TfieldNode.Create;
field33.AccessType := 'initializeOnly';
field33.Type := 'SFVec3f';
field33.NameField := 'bboxCenter';
{ .AddField }
ProtoInterface23.Field := field33;
field34 := TfieldNode.Create;
field34.AccessType := 'initializeOnly';
field34.Type := 'SFVec3f';
field34.NameField := 'bboxSize';
field34.Value := '-1 -1 -1';
{ .AddField }
ProtoInterface23.Field := field34;
field35 := TfieldNode.Create;
field35.AccessType := 'inputOutput';
field35.Type := 'MFNode';
field35.NameField := 'humanoidBody';
field35.Appinfo := 'HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.';
field35.Documentation := 'http://HAnim.org/Specifications/HAnim1.1/#humanoid';
{ .AddField }
ProtoInterface23.Field := field35;
field36 := TfieldNode.Create;
field36.AccessType := 'inputOutput';
field36.Type := 'MFNode';
field36.NameField := 'skeleton';
field36.Appinfo := 'HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody';
field36.Documentation := 'http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html';
{ .AddField }
ProtoInterface23.Field := field36;
field37 := TfieldNode.Create;
field37.AccessType := 'inputOutput';
field37.Type := 'MFNode';
field37.NameField := 'joints';
field37.Appinfo := 'Container field for Joint nodes';
{ .AddField }
ProtoInterface23.Field := field37;
field38 := TfieldNode.Create;
field38.AccessType := 'inputOutput';
field38.Type := 'MFNode';
field38.NameField := 'segments';
field38.Appinfo := 'Container field for Segment nodes';
{ .AddField }
ProtoInterface23.Field := field38;
field39 := TfieldNode.Create;
field39.AccessType := 'inputOutput';
field39.Type := 'MFNode';
field39.NameField := 'sites';
field39.Appinfo := 'Container field for Site nodes';
{ .AddField }
ProtoInterface23.Field := field39;
field40 := TfieldNode.Create;
field40.AccessType := 'inputOutput';
field40.Type := 'MFNode';
field40.NameField := 'viewpoints';
field40.Appinfo := 'Container field for Viewpoint nodes';
{ .AddField }
ProtoInterface23.Field := field40;
field41 := TfieldNode.Create;
field41.AccessType := 'inputOutput';
field41.Type := 'SFNode';
field41.NameField := 'skinCoord';
field41.Appinfo := 'Hint: HAnim version 2.0';
{ .AddField }
ProtoInterface23.Field := field41;
field42 := TfieldNode.Create;
field42.AccessType := 'inputOutput';
field42.Type := 'SFNode';
field42.NameField := 'skinNormal';
field42.Appinfo := 'Hint: HAnim version 2.0';
{ .AddField }
ProtoInterface23.Field := field42;
{ .SetProtoInterface }
ProtoDeclare22.ProtoInterface := ProtoInterface23;
ProtoBody43 := TProtoBodyNode.Create;
Transform44 := TTransformNode.Create;
Group45 := TGroupNode.Create;
IS46 := TISNode.Create;
connect47 := TconnectNode.Create;
connect47.NodeField := 'children';
connect47.ProtoField := 'humanoidBody';
{ .AddConnect }
IS46.Connect := connect47;
{ .SetIS }
Group45.IS := IS46;
{ .AddChildren }
Transform44.AddChildren([Group45]);
Group48 := TGroupNode.Create;
IS49 := TISNode.Create;
connect50 := TconnectNode.Create;
connect50.NodeField := 'children';
connect50.ProtoField := 'skeleton';
{ .AddConnect }
IS49.Connect := connect50;
{ .SetIS }
Group48.IS := IS49;
{ .AddChildren }
Transform44.AddChildren([Group48]);
Group51 := TGroupNode.Create;
IS52 := TISNode.Create;
connect53 := TconnectNode.Create;
connect53.NodeField := 'children';
connect53.ProtoField := 'viewpoints';
{ .AddConnect }
IS52.Connect := connect53;
{ .SetIS }
Group51.IS := IS52;
{ .AddChildren }
Transform44.AddChildren([Group51]);
IS54 := TISNode.Create;
connect55 := TconnectNode.Create;
connect55.NodeField := 'translation';
connect55.ProtoField := 'translation';
{ .AddConnect }
IS54.Connect := connect55;
connect56 := TconnectNode.Create;
connect56.NodeField := 'rotation';
connect56.ProtoField := 'rotation';
{ .AddConnect }
IS54.Connect := connect56;
connect57 := TconnectNode.Create;
connect57.NodeField := 'scale';
connect57.ProtoField := 'scale';
{ .AddConnect }
IS54.Connect := connect57;
connect58 := TconnectNode.Create;
connect58.NodeField := 'scaleOrientation';
connect58.ProtoField := 'scaleOrientation';
{ .AddConnect }
IS54.Connect := connect58;
connect59 := TconnectNode.Create;
connect59.NodeField := 'center';
connect59.ProtoField := 'center';
{ .AddConnect }
IS54.Connect := connect59;
connect60 := TconnectNode.Create;
connect60.NodeField := 'bboxSize';
connect60.ProtoField := 'bboxSize';
{ .AddConnect }
IS54.Connect := connect60;
connect61 := TconnectNode.Create;
connect61.NodeField := 'bboxCenter';
connect61.ProtoField := 'bboxCenter';
{ .AddConnect }
IS54.Connect := connect61;
{ .SetIS }
Transform44.IS := IS54;
{ .AddChildren }
ProtoBody43.AddChildren([Transform44]);
{ .SetProtoBody }
ProtoDeclare22.ProtoBody := ProtoBody43;
{ .AddChildren }
Group21.AddChildren([ProtoDeclare22]);
ProtoDeclare62 := TProtoDeclareNode.Create;
ProtoDeclare62.NameField := 'Joint';
ProtoDeclare62.Appinfo := 'The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.';
ProtoDeclare62.Documentation := 'http://HAnim.org/Specifications/HAnim2001/part1/Joint.html';
ProtoInterface63 := TProtoInterfaceNode.Create;
field64 := TfieldNode.Create;
field64.AccessType := 'inputOutput';
field64.Type := 'SFString';
field64.NameField := 'name';
{ .AddField }
ProtoInterface63.Field := field64;
field65 := TfieldNode.Create;
field65.AccessType := 'inputOutput';
field65.Type := 'MFFloat';
field65.NameField := 'ulimit';
{ .AddField }
ProtoInterface63.Field := field65;
field66 := TfieldNode.Create;
field66.AccessType := 'inputOutput';
field66.Type := 'MFFloat';
field66.NameField := 'llimit';
{ .AddField }
ProtoInterface63.Field := field66;
field67 := TfieldNode.Create;
field67.AccessType := 'inputOutput';
field67.Type := 'SFRotation';
field67.NameField := 'limitOrientation';
{ .AddField }
ProtoInterface63.Field := field67;
field68 := TfieldNode.Create;
field68.AccessType := 'inputOutput';
field68.Type := 'MFInt32';
field68.NameField := 'skinCoordIndex';
{ .AddField }
ProtoInterface63.Field := field68;
field69 := TfieldNode.Create;
field69.AccessType := 'inputOutput';
field69.Type := 'MFFloat';
field69.NameField := 'skinCoordWeight';
{ .AddField }
ProtoInterface63.Field := field69;
field70 := TfieldNode.Create;
field70.AccessType := 'inputOutput';
field70.Type := 'MFFloat';
field70.NameField := 'stiffness';
field70.Value := '0 0 0';
{ .AddField }
ProtoInterface63.Field := field70;
field71 := TfieldNode.Create;
field71.AccessType := 'inputOutput';
field71.Type := 'SFVec3f';
field71.NameField := 'translation';
{ .AddField }
ProtoInterface63.Field := field71;
field72 := TfieldNode.Create;
field72.AccessType := 'inputOutput';
field72.Type := 'SFRotation';
field72.NameField := 'rotation';
{ .AddField }
ProtoInterface63.Field := field72;
field73 := TfieldNode.Create;
field73.AccessType := 'inputOutput';
field73.Type := 'SFVec3f';
field73.NameField := 'scale';
field73.Value := '1 1 1';
{ .AddField }
ProtoInterface63.Field := field73;
field74 := TfieldNode.Create;
field74.AccessType := 'inputOutput';
field74.Type := 'SFRotation';
field74.NameField := 'scaleOrientation';
{ .AddField }
ProtoInterface63.Field := field74;
field75 := TfieldNode.Create;
field75.AccessType := 'inputOutput';
field75.Type := 'SFVec3f';
field75.NameField := 'center';
{ .AddField }
ProtoInterface63.Field := field75;
field76 := TfieldNode.Create;
field76.AccessType := 'initializeOnly';
field76.Type := 'SFVec3f';
field76.NameField := 'bboxCenter';
{ .AddField }
ProtoInterface63.Field := field76;
field77 := TfieldNode.Create;
field77.AccessType := 'initializeOnly';
field77.Type := 'SFVec3f';
field77.NameField := 'bboxSize';
field77.Value := '-1 -1 -1';
{ .AddField }
ProtoInterface63.Field := field77;
field78 := TfieldNode.Create;
field78.AccessType := 'inputOutput';
field78.Type := 'MFNode';
field78.NameField := 'children';
{ .AddField }
ProtoInterface63.Field := field78;
field79 := TfieldNode.Create;
field79.AccessType := 'inputOnly';
field79.Type := 'MFNode';
field79.NameField := 'addChildren';
{ .AddField }
ProtoInterface63.Field := field79;
field80 := TfieldNode.Create;
field80.AccessType := 'inputOnly';
field80.Type := 'MFNode';
field80.NameField := 'removeChildren';
{ .AddField }
ProtoInterface63.Field := field80;
{ .SetProtoInterface }
ProtoDeclare62.ProtoInterface := ProtoInterface63;
ProtoBody81 := TProtoBodyNode.Create;
Transform82 := TTransformNode.Create;
IS83 := TISNode.Create;
connect84 := TconnectNode.Create;
connect84.NodeField := 'translation';
connect84.ProtoField := 'translation';
{ .AddConnect }
IS83.Connect := connect84;
connect85 := TconnectNode.Create;
connect85.NodeField := 'rotation';
connect85.ProtoField := 'rotation';
{ .AddConnect }
IS83.Connect := connect85;
connect86 := TconnectNode.Create;
connect86.NodeField := 'scale';
connect86.ProtoField := 'scale';
{ .AddConnect }
IS83.Connect := connect86;
connect87 := TconnectNode.Create;
connect87.NodeField := 'scaleOrientation';
connect87.ProtoField := 'scaleOrientation';
{ .AddConnect }
IS83.Connect := connect87;
connect88 := TconnectNode.Create;
connect88.NodeField := 'center';
connect88.ProtoField := 'center';
{ .AddConnect }
IS83.Connect := connect88;
connect89 := TconnectNode.Create;
connect89.NodeField := 'bboxSize';
connect89.ProtoField := 'bboxSize';
{ .AddConnect }
IS83.Connect := connect89;
connect90 := TconnectNode.Create;
connect90.NodeField := 'bboxCenter';
connect90.ProtoField := 'bboxCenter';
{ .AddConnect }
IS83.Connect := connect90;
connect91 := TconnectNode.Create;
connect91.NodeField := 'addChildren';
connect91.ProtoField := 'addChildren';
{ .AddConnect }
IS83.Connect := connect91;
connect92 := TconnectNode.Create;
connect92.NodeField := 'removeChildren';
connect92.ProtoField := 'removeChildren';
{ .AddConnect }
IS83.Connect := connect92;
connect93 := TconnectNode.Create;
connect93.NodeField := 'children';
connect93.ProtoField := 'children';
{ .AddConnect }
IS83.Connect := connect93;
{ .SetIS }
Transform82.IS := IS83;
{ .AddChildren }
ProtoBody81.AddChildren([Transform82]);
{ .SetProtoBody }
ProtoDeclare62.ProtoBody := ProtoBody81;
{ .AddChildren }
Group21.AddChildren([ProtoDeclare62]);
ProtoDeclare94 := TProtoDeclareNode.Create;
ProtoDeclare94.NameField := 'Segment';
ProtoDeclare94.Appinfo := 'The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.';
ProtoDeclare94.Documentation := 'http://HAnim.org/Specifications/HAnim2001/part1/Segment.html';
ProtoInterface95 := TProtoInterfaceNode.Create;
field96 := TfieldNode.Create;
field96.AccessType := 'inputOutput';
field96.Type := 'SFString';
field96.NameField := 'name';
{ .AddField }
ProtoInterface95.Field := field96;
field97 := TfieldNode.Create;
field97.AccessType := 'inputOutput';
field97.Type := 'SFFloat';
field97.NameField := 'mass';
{ .AddField }
ProtoInterface95.Field := field97;
field98 := TfieldNode.Create;
field98.AccessType := 'inputOutput';
field98.Type := 'SFVec3f';
field98.NameField := 'centerOfMass';
{ .AddField }
ProtoInterface95.Field := field98;
field99 := TfieldNode.Create;
field99.AccessType := 'inputOutput';
field99.Type := 'MFFloat';
field99.NameField := 'momentsOfInertia';
field99.Value := '0 0 0 0 0 0 0 0 0';
{ .AddField }
ProtoInterface95.Field := field99;
field100 := TfieldNode.Create;
field100.AccessType := 'initializeOnly';
field100.Type := 'SFVec3f';
field100.NameField := 'bboxCenter';
{ .AddField }
ProtoInterface95.Field := field100;
field101 := TfieldNode.Create;
field101.AccessType := 'initializeOnly';
field101.Type := 'SFVec3f';
field101.NameField := 'bboxSize';
field101.Value := '-1 -1 -1';
{ .AddField }
ProtoInterface95.Field := field101;
field102 := TfieldNode.Create;
field102.AccessType := 'inputOutput';
field102.Type := 'MFNode';
field102.NameField := 'children';
{ .AddField }
ProtoInterface95.Field := field102;
field103 := TfieldNode.Create;
field103.AccessType := 'inputOnly';
field103.Type := 'MFNode';
field103.NameField := 'addChildren';
{ .AddField }
ProtoInterface95.Field := field103;
field104 := TfieldNode.Create;
field104.AccessType := 'inputOnly';
field104.Type := 'MFNode';
field104.NameField := 'removeChildren';
{ .AddField }
ProtoInterface95.Field := field104;
field105 := TfieldNode.Create;
field105.AccessType := 'inputOutput';
field105.Type := 'SFNode';
field105.NameField := 'coord';
field105.Appinfo := 'contains Coordinate nodes';
{ .AddField }
ProtoInterface95.Field := field105;
field106 := TfieldNode.Create;
field106.AccessType := 'inputOutput';
field106.Type := 'MFNode';
field106.NameField := 'displacers';
field106.Appinfo := 'contains Displacer nodes';
{ .AddField }
ProtoInterface95.Field := field106;
{ .SetProtoInterface }
ProtoDeclare94.ProtoInterface := ProtoInterface95;
ProtoBody107 := TProtoBodyNode.Create;
Group108 := TGroupNode.Create;
IS109 := TISNode.Create;
connect110 := TconnectNode.Create;
connect110.NodeField := 'bboxSize';
connect110.ProtoField := 'bboxSize';
{ .AddConnect }
IS109.Connect := connect110;
connect111 := TconnectNode.Create;
connect111.NodeField := 'bboxCenter';
connect111.ProtoField := 'bboxCenter';
{ .AddConnect }
IS109.Connect := connect111;
connect112 := TconnectNode.Create;
connect112.NodeField := 'addChildren';
connect112.ProtoField := 'addChildren';
{ .AddConnect }
IS109.Connect := connect112;
connect113 := TconnectNode.Create;
connect113.NodeField := 'removeChildren';
connect113.ProtoField := 'removeChildren';
{ .AddConnect }
IS109.Connect := connect113;
connect114 := TconnectNode.Create;
connect114.NodeField := 'children';
connect114.ProtoField := 'children';
{ .AddConnect }
IS109.Connect := connect114;
{ .SetIS }
Group108.IS := IS109;
{ .AddChildren }
ProtoBody107.AddChildren([Group108]);
{ .SetProtoBody }
ProtoDeclare94.ProtoBody := ProtoBody107;
{ .AddChildren }
Group21.AddChildren([ProtoDeclare94]);
ProtoDeclare115 := TProtoDeclareNode.Create;
ProtoDeclare115.NameField := 'Site';
ProtoDeclare115.Appinfo := 'The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).';
ProtoDeclare115.Documentation := 'http://HAnim.org/Specifications/HAnim2001/part1/Site.html';
ProtoInterface116 := TProtoInterfaceNode.Create;
field117 := TfieldNode.Create;
field117.AccessType := 'inputOutput';
field117.Type := 'SFString';
field117.NameField := 'name';
{ .AddField }
ProtoInterface116.Field := field117;
field118 := TfieldNode.Create;
field118.AccessType := 'inputOutput';
field118.Type := 'SFVec3f';
field118.NameField := 'translation';
{ .AddField }
ProtoInterface116.Field := field118;
field119 := TfieldNode.Create;
field119.AccessType := 'inputOutput';
field119.Type := 'SFRotation';
field119.NameField := 'rotation';
{ .AddField }
ProtoInterface116.Field := field119;
field120 := TfieldNode.Create;
field120.AccessType := 'inputOutput';
field120.Type := 'SFVec3f';
field120.NameField := 'scale';
field120.Value := '1 1 1';
{ .AddField }
ProtoInterface116.Field := field120;
field121 := TfieldNode.Create;
field121.AccessType := 'inputOutput';
field121.Type := 'SFRotation';
field121.NameField := 'scaleOrientation';
{ .AddField }
ProtoInterface116.Field := field121;
field122 := TfieldNode.Create;
field122.AccessType := 'inputOutput';
field122.Type := 'SFVec3f';
field122.NameField := 'center';
{ .AddField }
ProtoInterface116.Field := field122;
field123 := TfieldNode.Create;
field123.AccessType := 'initializeOnly';
field123.Type := 'SFVec3f';
field123.NameField := 'bboxCenter';
{ .AddField }
ProtoInterface116.Field := field123;
field124 := TfieldNode.Create;
field124.AccessType := 'initializeOnly';
field124.Type := 'SFVec3f';
field124.NameField := 'bboxSize';
field124.Value := '-1 -1 -1';
{ .AddField }
ProtoInterface116.Field := field124;
field125 := TfieldNode.Create;
field125.AccessType := 'inputOutput';
field125.Type := 'MFNode';
field125.NameField := 'children';
{ .AddField }
ProtoInterface116.Field := field125;
field126 := TfieldNode.Create;
field126.AccessType := 'inputOnly';
field126.Type := 'MFNode';
field126.NameField := 'addChildren';
{ .AddField }
ProtoInterface116.Field := field126;
field127 := TfieldNode.Create;
field127.AccessType := 'inputOnly';
field127.Type := 'MFNode';
field127.NameField := 'removeChildren';
{ .AddField }
ProtoInterface116.Field := field127;
{ .SetProtoInterface }
ProtoDeclare115.ProtoInterface := ProtoInterface116;
ProtoBody128 := TProtoBodyNode.Create;
Transform129 := TTransformNode.Create;
IS130 := TISNode.Create;
connect131 := TconnectNode.Create;
connect131.NodeField := 'translation';
connect131.ProtoField := 'translation';
{ .AddConnect }
IS130.Connect := connect131;
connect132 := TconnectNode.Create;
connect132.NodeField := 'rotation';
connect132.ProtoField := 'rotation';
{ .AddConnect }
IS130.Connect := connect132;
connect133 := TconnectNode.Create;
connect133.NodeField := 'scale';
connect133.ProtoField := 'scale';
{ .AddConnect }
IS130.Connect := connect133;
connect134 := TconnectNode.Create;
connect134.NodeField := 'scaleOrientation';
connect134.ProtoField := 'scaleOrientation';
{ .AddConnect }
IS130.Connect := connect134;
connect135 := TconnectNode.Create;
connect135.NodeField := 'center';
connect135.ProtoField := 'center';
{ .AddConnect }
IS130.Connect := connect135;
connect136 := TconnectNode.Create;
connect136.NodeField := 'bboxSize';
connect136.ProtoField := 'bboxSize';
{ .AddConnect }
IS130.Connect := connect136;
connect137 := TconnectNode.Create;
connect137.NodeField := 'bboxCenter';
connect137.ProtoField := 'bboxCenter';
{ .AddConnect }
IS130.Connect := connect137;
connect138 := TconnectNode.Create;
connect138.NodeField := 'addChildren';
connect138.ProtoField := 'addChildren';
{ .AddConnect }
IS130.Connect := connect138;
connect139 := TconnectNode.Create;
connect139.NodeField := 'removeChildren';
connect139.ProtoField := 'removeChildren';
{ .AddConnect }
IS130.Connect := connect139;
connect140 := TconnectNode.Create;
connect140.NodeField := 'children';
connect140.ProtoField := 'children';
{ .AddConnect }
IS130.Connect := connect140;
{ .SetIS }
Transform129.IS := IS130;
{ .AddChildren }
ProtoBody128.AddChildren([Transform129]);
{ .SetProtoBody }
ProtoDeclare115.ProtoBody := ProtoBody128;
{ .AddChildren }
Group21.AddChildren([ProtoDeclare115]);
ProtoDeclare141 := TProtoDeclareNode.Create;
ProtoDeclare141.NameField := 'Displacer';
ProtoDeclare141.Appinfo := 'A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.';
ProtoDeclare141.Documentation := 'http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html';
ProtoInterface142 := TProtoInterfaceNode.Create;
field143 := TfieldNode.Create;
field143.AccessType := 'inputOutput';
field143.Type := 'SFString';
field143.NameField := 'name';
{ .AddField }
ProtoInterface142.Field := field143;
field144 := TfieldNode.Create;
field144.AccessType := 'inputOutput';
field144.Type := 'MFInt32';
field144.NameField := 'coordIndex';
{ .AddField }
ProtoInterface142.Field := field144;
field145 := TfieldNode.Create;
field145.AccessType := 'inputOutput';
field145.Type := 'MFVec3f';
field145.NameField := 'displacements';
{ .AddField }
ProtoInterface142.Field := field145;
{ .SetProtoInterface }
ProtoDeclare141.ProtoInterface := ProtoInterface142;
ProtoBody146 := TProtoBodyNode.Create;
WorldInfo147 := TWorldInfoNode.Create;
WorldInfo147.SetInfo(['null body node']);
{ .AddChildren }
ProtoBody146.AddChildren([WorldInfo147]);
{ .SetProtoBody }
ProtoDeclare141.ProtoBody := ProtoBody146;
{ .AddChildren }
Group21.AddChildren([ProtoDeclare141]);
Shape148 := TShapeNode.Create;
Appearance149 := TAppearanceNode.Create;
Material150 := TMaterialNode.Create;
Material150.AmbientIntensity := 0.25;
Material150.DiffuseColor := Vector3(0.795918,0.505869,0.093315);
Material150.SpecularColor := Vector3(0.923469,0.428866,0.006369);
Material150.Shininess := 0.39;
{ .SetMaterial }
Appearance149.Material := Material150;
{ .SetAppearance }
Shape148.Appearance := Appearance149;
Text151 := TTextNode.Create;
Text151.SetText(['Humanoid Animation','(HAnim) prototype','implementations']);
FontStyle152 := TFontStyleNode.Create;
FontStyle152.Justify := fjMiddle;
FontStyle152.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text151.FontStyle := FontStyle152;
{ .SetGeometry }
Shape148.Geometry := Text151;
{ .AddChildren }
Group21.AddChildren([Shape148]);
{ .AddGroup }
X3D0.AddChildren([Group21]);
Result := X3D0;
end;
