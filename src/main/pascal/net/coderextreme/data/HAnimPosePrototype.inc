function HAnimPosePrototype: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
ProtoDeclare14: TProtoDeclareNode;
ProtoInterface15: TProtoInterfaceNode;
field16: TfieldNode;
field17: TfieldNode;
field18: TfieldNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
field22: TfieldNode;
field23: TfieldNode;
field24: TfieldNode;
field25: TfieldNode;
field26: TfieldNode;
ProtoBody27: TProtoBodyNode;
Switch28: TSwitchNode;
IS29: TISNode;
connect30: TconnectNode;
connect31: TconnectNode;
connect32: TconnectNode;
connect33: TconnectNode;
MetadataString34: TMetadataStringNode;
Script35: TScriptNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
IS47: TISNode;
connect48: TconnectNode;
connect49: TconnectNode;
connect50: TconnectNode;
connect51: TconnectNode;
connect52: TconnectNode;
connect53: TconnectNode;
connect54: TconnectNode;
connect55: TconnectNode;
connect56: TconnectNode;
connect57: TconnectNode;
connect58: TconnectNode;
WorldInfo59: TWorldInfoNode;
NavigationInfo60: TNavigationInfoNode;
ProtoInstance61: TProtoInstanceNode;
fieldValue62: TfieldValueNode;
fieldValue63: TfieldValueNode;
fieldValue64: TfieldValueNode;
fieldValue65: TfieldValueNode;
ProtoInstance66: TProtoInstanceNode;
fieldValue67: TfieldValueNode;
fieldValue68: TfieldValueNode;
fieldValue69: TfieldValueNode;
fieldValue70: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HAnimPosePrototype.x3d';
X3D0.Meta['description'] := 'Define an experimental new node to simply capture a single pose for an HAnimHumanoid model.';
X3D0.Meta['created'] := '4 April 2025';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:20:09 GMT';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['creator'] := 'Joe Williams';
X3D0.Meta['warning'] := 'under development';
X3D0.Meta['reference'] := 'HAnimPoseDesignNotes19MAR2025.pdf';
X3D0.Meta['reference'] := 'HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures';
X3D0.Meta['reference'] := 'HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d';
Group13 := TGroupNode.Create;
ProtoDeclare14 := TProtoDeclareNode.Create;
ProtoDeclare14.NameField := 'HAnimPose';
ProtoDeclare14.Appinfo := 'Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values';
ProtoInterface15 := TProtoInterfaceNode.Create;
field16 := TfieldNode.Create;
field16.AccessType := 'inputOutput';
field16.Type := 'SFBool';
field16.NameField := 'enabled';
field16.Value := 'true';
field16.Appinfo := 'default value true';
{ .AddField }
ProtoInterface15.Field := field16;
field17 := TfieldNode.Create;
field17.AccessType := 'inputOnly';
field17.Type := 'SFBool';
field17.NameField := 'setPose';
field17.Appinfo := 'this event tells the HAnimPose node to do it's thing!';
{ .AddField }
ProtoInterface15.Field := field17;
field18 := TfieldNode.Create;
field18.AccessType := 'inputOutput';
field18.Type := 'SFString';
field18.NameField := 'name';
field18.Value := 'PoseName';
field18.Appinfo := 'name of this pose';
{ .AddField }
ProtoInterface15.Field := field18;
field19 := TfieldNode.Create;
field19.AccessType := 'inputOutput';
field19.Type := 'MFString';
field19.NameField := 'namesPoseJoints';
field19.Value := '\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"';
field19.Appinfo := 'names of joints in pose';
{ .AddField }
ProtoInterface15.Field := field19;
field20 := TfieldNode.Create;
field20.AccessType := 'inputOutput';
field20.Type := 'MFVec3f';
field20.NameField := 'positionsPoseJoints';
field20.Appinfo := 'positions of joints in pose';
{ .AddField }
ProtoInterface15.Field := field20;
field21 := TfieldNode.Create;
field21.AccessType := 'inputOutput';
field21.Type := 'MFRotation';
field21.NameField := 'rotationsPoseJoints';
field21.Appinfo := 'rotations of joints in pose';
{ .AddField }
ProtoInterface15.Field := field21;
field22 := TfieldNode.Create;
field22.AccessType := 'inputOutput';
field22.Type := 'SFInt32';
field22.NameField := 'whichChoice';
field22.Appinfo := 'selects one of the HAnimHumanoid nodes';
{ .AddField }
ProtoInterface15.Field := field22;
field23 := TfieldNode.Create;
field23.AccessType := 'inputOutput';
field23.Type := 'MFNode';
field23.NameField := 'children';
field23.Appinfo := 'references one or more HAnimHumanoid nodes, typically via USE references';
{ .AddField }
ProtoInterface15.Field := field23;
field24 := TfieldNode.Create;
field24.AccessType := 'inputOnly';
field24.Type := 'MFNode';
field24.NameField := 'addChildren';
field24.Appinfo := 'references one or more HAnimHumanoid nodes, typically via USE references';
{ .AddField }
ProtoInterface15.Field := field24;
field25 := TfieldNode.Create;
field25.AccessType := 'inputOnly';
field25.Type := 'MFNode';
field25.NameField := 'removeChildren';
field25.Appinfo := 'references one or more HAnimHumanoid nodes, typically via USE references';
{ .AddField }
ProtoInterface15.Field := field25;
field26 := TfieldNode.Create;
field26.AccessType := 'inputOutput';
field26.Type := 'SFBool';
field26.NameField := 'traceEnabled';
field26.Value := 'true';
field26.Appinfo := 'debug trace to Browser output console';
{ .AddField }
ProtoInterface15.Field := field26;
{ .SetProtoInterface }
ProtoDeclare14.ProtoInterface := ProtoInterface15;
ProtoBody27 := TProtoBodyNode.Create;
Switch28 := TSwitchNode.Create;
IS29 := TISNode.Create;
connect30 := TconnectNode.Create;
connect30.NodeField := 'whichChoice';
connect30.ProtoField := 'whichChoice';
{ .AddConnect }
IS29.Connect := connect30;
connect31 := TconnectNode.Create;
connect31.NodeField := 'addChildren';
connect31.ProtoField := 'addChildren';
{ .AddConnect }
IS29.Connect := connect31;
connect32 := TconnectNode.Create;
connect32.NodeField := 'removeChildren';
connect32.ProtoField := 'removeChildren';
{ .AddConnect }
IS29.Connect := connect32;
connect33 := TconnectNode.Create;
connect33.NodeField := 'children';
connect33.ProtoField := 'children';
{ .AddConnect }
IS29.Connect := connect33;
{ .SetIS }
Switch28.IS := IS29;
{ .AddChildren }
ProtoBody27.AddChildren([Switch28]);
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'interface';
MetadataString34.Reference := 'https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy';
MetadataString34.SetValue(['X3DGroupingNode']);
{ .AddChildren }
ProtoBody27.AddChildren([MetadataString34]);
Script35 := TScriptNode.Create;
Script35.DirectOutput := True;
field36 := TfieldNode.Create;
field36.AccessType := 'inputOutput';
field36.Type := 'SFBool';
field36.NameField := 'enabled';
field36.Appinfo := 'default value true';
{ .AddField }
Script35.Field := field36;
field37 := TfieldNode.Create;
field37.AccessType := 'inputOnly';
field37.Type := 'SFBool';
field37.NameField := 'setPose';
field37.Appinfo := 'this event tells the HAnimPose node to do it's thing!';
{ .AddField }
Script35.Field := field37;
field38 := TfieldNode.Create;
field38.AccessType := 'inputOutput';
field38.Type := 'SFString';
field38.NameField := 'name';
field38.Appinfo := 'name of this pose';
{ .AddField }
Script35.Field := field38;
field39 := TfieldNode.Create;
field39.AccessType := 'inputOutput';
field39.Type := 'MFString';
field39.NameField := 'namesPoseJoints';
field39.Appinfo := 'names of joints in pose';
{ .AddField }
Script35.Field := field39;
field40 := TfieldNode.Create;
field40.AccessType := 'inputOutput';
field40.Type := 'MFVec3f';
field40.NameField := 'positionsPoseJoints';
field40.Appinfo := 'positions of joints in pose';
{ .AddField }
Script35.Field := field40;
field41 := TfieldNode.Create;
field41.AccessType := 'inputOutput';
field41.Type := 'MFRotation';
field41.NameField := 'rotationsPoseJoints';
field41.Appinfo := 'rotations of joints in pose';
{ .AddField }
Script35.Field := field41;
field42 := TfieldNode.Create;
field42.AccessType := 'inputOutput';
field42.Type := 'SFInt32';
field42.NameField := 'whichChoice';
field42.Appinfo := 'selects one of the HAnimHumanoid nodes';
{ .AddField }
Script35.Field := field42;
field43 := TfieldNode.Create;
field43.AccessType := 'inputOutput';
field43.Type := 'MFNode';
field43.NameField := 'children';
field43.Appinfo := 'references one or more HAnimHumanoid nodes, typically via USE references';
{ .AddField }
Script35.Field := field43;
field44 := TfieldNode.Create;
field44.AccessType := 'inputOnly';
field44.Type := 'MFNode';
field44.NameField := 'addChildren';
field44.Appinfo := 'references one or more HAnimHumanoid nodes, typically via USE references';
{ .AddField }
Script35.Field := field44;
field45 := TfieldNode.Create;
field45.AccessType := 'inputOnly';
field45.Type := 'MFNode';
field45.NameField := 'removeChildren';
field45.Appinfo := 'references one or more HAnimHumanoid nodes, typically via USE references';
{ .AddField }
Script35.Field := field45;
field46 := TfieldNode.Create;
field46.AccessType := 'inputOutput';
field46.Type := 'SFBool';
field46.NameField := 'traceEnabled';
field46.Appinfo := 'debug trace to Browser output console';
{ .AddField }
Script35.Field := field46;

Script35.SetSourceCode('''ecmascript:\n"+
"\n"+
"// Needed functionality:\n"+
"// a. get access to a humanoid\n"+
"// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose\n"+
"// c. walk the tree for all joints, then set transation, scale, rotation to default values\n"+
"// d. for each name/position/rotation triplet in the pose arrays, update the appropriate\n"+
"//    HAnimJoint nodes to that corresponding set of values\n"+
"\n"+
"var scriptName='HAnimPoseScript';\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    // TODO author initialization code (if any) goes here\n"+
"    \n"+
"    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints\n"+
"    \n"+
"    // check humanoid connectivity\n"+
"\n"+
"    tracePrint ('initialization() successful');\n"+
"}\n"+
"function set_enabled (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field enabled\n"+
"    enabled = eventValue;\n"+
"    tracePrint ('enabled = ' + enabled);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function setPose (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOnly field setPose\n"+
"    setPose = eventValue;\n"+
"\n"+
"    tracePrint ('setPose = ' + setPose);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_name (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field name\n"+
"    name = eventValue;\n"+
"    tracePrint ('name = ' + name);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_namesPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field namesPoseJoints\n"+
"    namesPoseJoints = eventValue;\n"+
"    tracePrint ('namesPoseJoints = ' + namesPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_positionsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field positionsPoseJoints\n"+
"    positionsPoseJoints = eventValue;\n"+
"    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_rotationsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field rotationsPoseJoints\n"+
"    rotationsPoseJoints = eventValue;\n"+
"    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_humanoid (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field humanoid\n"+
"    humanoid = eventValue;\n"+
"    tracePrint ('humanoid = ' + humanoid);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"// ================== Trace output functions ==================\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"   // if traceEnabled is true, print outputString on X3D browser console\n"+
"   if (traceEnabled)\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"      // always print outputString on X3D browser console\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function set_traceEnabled (eventValue)\n"+
"{\n"+
"      // input eventValue received for inputOutput field\n"+
"      traceEnabled = eventValue;\n"+
"}\n"+
"// ===========================================================''');
IS47 := TISNode.Create;
connect48 := TconnectNode.Create;
connect48.NodeField := 'enabled';
connect48.ProtoField := 'enabled';
{ .AddConnect }
IS47.Connect := connect48;
connect49 := TconnectNode.Create;
connect49.NodeField := 'setPose';
connect49.ProtoField := 'setPose';
{ .AddConnect }
IS47.Connect := connect49;
connect50 := TconnectNode.Create;
connect50.NodeField := 'name';
connect50.ProtoField := 'name';
{ .AddConnect }
IS47.Connect := connect50;
connect51 := TconnectNode.Create;
connect51.NodeField := 'namesPoseJoints';
connect51.ProtoField := 'namesPoseJoints';
{ .AddConnect }
IS47.Connect := connect51;
connect52 := TconnectNode.Create;
connect52.NodeField := 'positionsPoseJoints';
connect52.ProtoField := 'positionsPoseJoints';
{ .AddConnect }
IS47.Connect := connect52;
connect53 := TconnectNode.Create;
connect53.NodeField := 'rotationsPoseJoints';
connect53.ProtoField := 'rotationsPoseJoints';
{ .AddConnect }
IS47.Connect := connect53;
connect54 := TconnectNode.Create;
connect54.NodeField := 'whichChoice';
connect54.ProtoField := 'whichChoice';
{ .AddConnect }
IS47.Connect := connect54;
connect55 := TconnectNode.Create;
connect55.NodeField := 'children';
connect55.ProtoField := 'children';
{ .AddConnect }
IS47.Connect := connect55;
connect56 := TconnectNode.Create;
connect56.NodeField := 'addChildren';
connect56.ProtoField := 'addChildren';
{ .AddConnect }
IS47.Connect := connect56;
connect57 := TconnectNode.Create;
connect57.NodeField := 'removeChildren';
connect57.ProtoField := 'removeChildren';
{ .AddConnect }
IS47.Connect := connect57;
connect58 := TconnectNode.Create;
connect58.NodeField := 'traceEnabled';
connect58.ProtoField := 'traceEnabled';
{ .AddConnect }
IS47.Connect := connect58;
{ .SetIS }
Script35.IS := IS47;
{ .AddChildren }
ProtoBody27.AddChildren([Script35]);
{ .SetProtoBody }
ProtoDeclare14.ProtoBody := ProtoBody27;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare14]);
WorldInfo59 := TWorldInfoNode.Create;
WorldInfo59.Title := 'HAnimPose Prototype';
WorldInfo59.SetInfo(['Design to illustrate a potential HAnimPose node']);
{ .AddChildren }
Group13.AddChildren([WorldInfo59]);
NavigationInfo60 := TNavigationInfoNode.Create;
{ .AddChildren }
Group13.AddChildren([NavigationInfo60]);
ProtoInstance61 := TProtoInstanceNode.Create;
ProtoInstance61.NameField := 'HAnimPose';
fieldValue62 := TfieldValueNode.Create;
fieldValue62.NameField := 'name';
fieldValue62.Value := 'A';
{ .AddFieldValue }
ProtoInstance61.FieldValue := fieldValue62;
fieldValue63 := TfieldValueNode.Create;
fieldValue63.NameField := 'namesPoseJoints';
fieldValue63.Value := '\"l_hip\" \"r_hip\"';
{ .AddFieldValue }
ProtoInstance61.FieldValue := fieldValue63;
fieldValue64 := TfieldValueNode.Create;
fieldValue64.NameField := 'positionsPoseJoints';
fieldValue64.Value := '0 0 0 0 0 0';
{ .AddFieldValue }
ProtoInstance61.FieldValue := fieldValue64;
fieldValue65 := TfieldValueNode.Create;
fieldValue65.NameField := 'rotationsPoseJoints';
fieldValue65.Value := '0 0 1 0.2 0 0 1 -0.2';
{ .AddFieldValue }
ProtoInstance61.FieldValue := fieldValue65;
{ .AddChildren }
Group13.AddChildren([ProtoInstance61]);
ProtoInstance66 := TProtoInstanceNode.Create;
ProtoInstance66.NameField := 'HAnimPose';
fieldValue67 := TfieldValueNode.Create;
fieldValue67.NameField := 'name';
fieldValue67.Value := 'T';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue67;
fieldValue68 := TfieldValueNode.Create;
fieldValue68.NameField := 'namesPoseJoints';
fieldValue68.Value := '\"l_shoulder\" \"r_shoulder\"';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue68;
fieldValue69 := TfieldValueNode.Create;
fieldValue69.NameField := 'positionsPoseJoints';
fieldValue69.Value := '0 0 0 0 0 0';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue69;
fieldValue70 := TfieldValueNode.Create;
fieldValue70.NameField := 'rotationsPoseJoints';
fieldValue70.Value := '0 0 1 1.57 0 0 1 -1.57';
{ .AddFieldValue }
ProtoInstance66.FieldValue := fieldValue70;
{ .AddChildren }
Group13.AddChildren([ProtoInstance66]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;
