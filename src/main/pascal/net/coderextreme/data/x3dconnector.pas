unit x3dconnector;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createx3dconnector: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  Viewpoint8: TViewpointNode;
  Background9: TBackgroundNode;
  Transform10: TTransformNode;
  Shape11: TShapeNode;
  Appearance12: TAppearanceNode;
  Material13: TMaterialNode;
  Sphere14: TSphereNode;
  PlaneSensor15: TPlaneSensorNode;
  Transform17: TTransformNode;
  Shape18: TShapeNode;
  Appearance19: TAppearanceNode;
  Material20: TMaterialNode;
  Sphere21: TSphereNode;
  PlaneSensor22: TPlaneSensorNode;
  Transform24: TTransformNode;
  Transform25: TTransformNode;
  Shape26: TShapeNode;
  Appearance27: TAppearanceNode;
  Material28: TMaterialNode;
  Cylinder29: TCylinderNode;
  ProtoDeclare30: TX3DPrototype;
  FieldDecl32: TX3DInterfaceDeclaration;
  FieldVal32: TSFNode;
  FieldDecl33: TX3DInterfaceDeclaration;
  FieldVal33: TSFNode;
  FieldDecl34: TX3DInterfaceDeclaration;
  FieldVal34: TSFNode;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TSFNode;
  FieldDecl36: TX3DInterfaceDeclaration;
  FieldVal36: TX3DEvent;
  FieldDecl37: TX3DInterfaceDeclaration;
  FieldVal37: TX3DEvent;
  Script39: TScriptNode;
  FieldVal40: TSFNode;
  FieldVal41: TSFNode;
  FieldVal42: TSFNode;
  FieldVal43: TSFNode;
  FieldVal44: TX3DEvent;
  FieldVal45: TX3DEvent;
  ProtoInstance46: TX3DPrototypeNode;

procedure Initx3dconnectorPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnector.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0, 0, 5);
Viewpoint8.Description := 'Only Viewpoint';
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Transform10.X3DName := 'G1';
Shape11 := TShapeNode.Create;
Appearance12 := TAppearanceNode.Create;
Material13 := TMaterialNode.Create;
Material13.DiffuseColor := Vector3(0.7, 0.2, 0.2);
Appearance12.Material := Material13;
Shape11.Appearance := Appearance12;
Sphere14 := TSphereNode.Create;
Sphere14.Radius := 0.1;
Shape11.Geometry := Sphere14;
Transform10.FdChildren.Add(Shape11);
PlaneSensor15 := TPlaneSensorNode.Create;
PlaneSensor15.Description := 'Grab to move';
PlaneSensor15.X3DName := 'PS1';
Transform10.FdChildren.Add(PlaneSensor15);
{ ROUTE PS1.translation_changed TO G1.set_translation }
Transform10.AddRoute(PlaneSensor15.EventTranslation_changed, Transform10.FdTranslation.EventIn);
Group7.FdChildren.Add(Transform10);
Transform17 := TTransformNode.Create;
Transform17.X3DName := 'G2';
Transform17.Translation := Vector3(1, -1, 0.01);
Shape18 := TShapeNode.Create;
end;

procedure Initx3dconnectorPart1;
begin
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(0.2, 0.7, 0.2);
Appearance19.Material := Material20;
Shape18.Appearance := Appearance19;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.1;
Shape18.Geometry := Sphere21;
Transform17.FdChildren.Add(Shape18);
PlaneSensor22 := TPlaneSensorNode.Create;
PlaneSensor22.Description := 'Grab to move';
PlaneSensor22.Offset := Vector3(1, -1, 0.01);
PlaneSensor22.X3DName := 'PS2';
Transform17.FdChildren.Add(PlaneSensor22);
{ ROUTE PS2.translation_changed TO G2.set_translation }
Transform17.AddRoute(PlaneSensor22.EventTranslation_changed, Transform17.FdTranslation.EventIn);
Group7.FdChildren.Add(Transform17);
Transform24 := TTransformNode.Create;
Transform24.X3DName := 'transC1';
Transform25 := TTransformNode.Create;
Transform25.X3DName := 'rotscaleC1';
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material28.Transparency := 0.5;
Appearance27.Material := Material28;
Shape26.Appearance := Appearance27;
Cylinder29 := TCylinderNode.Create;
Cylinder29.Radius := 0.05;
Shape26.Geometry := Cylinder29;
Transform25.FdChildren.Add(Shape26);
Transform24.FdChildren.Add(Transform25);
Group7.FdChildren.Add(Transform24);
ProtoDeclare30 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare30.X3DName := 'x3dconnector';
FieldVal32 := TSFNode.CreateUndefined(nil, False, 'startnode');
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
end;

procedure Initx3dconnectorPart2;
begin
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl32);
FieldVal33 := TSFNode.CreateUndefined(nil, False, 'endnode');
FieldDecl33 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl33.FieldOrEvent := FieldVal33;
FieldVal33.ParentInterfaceDeclaration := FieldDecl33;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl33);
FieldVal34 := TSFNode.CreateUndefined(nil, False, 'transnode');
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFNode.CreateUndefined(nil, False, 'rotscalenode');
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl35);
FieldVal36 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl36 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl36.FieldOrEvent := FieldVal36;
FieldVal36.ParentInterfaceDeclaration := FieldDecl36;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl36);
FieldVal37 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl37 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl37.FieldOrEvent := FieldVal37;
FieldVal37.ParentInterfaceDeclaration := FieldDecl37;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl37);
Script39 := TScriptNode.Create;
Script39.X3DName := 'S1';
FieldVal40 := TSFNode.CreateUndefined(Script39, False, 'startnode');
Script39.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFNode.CreateUndefined(Script39, False, 'endnode');
Script39.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFNode.CreateUndefined(Script39, False, 'transnode');
Script39.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFNode.CreateUndefined(Script39, False, 'rotscalenode');
Script39.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFVec3f.CreateEvent(Script39, 'set_startpoint', True);
Script39.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFVec3f.CreateEvent(Script39, 'set_endpoint', True);
Script39.AddCustomFieldOrEvent(FieldVal45);
end;

procedure Initx3dconnectorPart3;
begin
Script39.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script39.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script39.FieldOrEvent('transnode', True).IsClauseNamesAdd('transnode');
Script39.FieldOrEvent('rotscalenode', True).IsClauseNamesAdd('rotscalenode');
Script39.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script39.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
Script39.SetSourceCode('ecmascript:' + LineEnding +
  '        function recompute(startpoint,endpoint){' + LineEnding +
  '	    if (typeof endpoint === ''undefined'') {\n		return;\n	    }\n            var dif = endpoint.subtract(startpoint);\n            var dist = dif.length()*0.5;\n            var dif2 = dif.multiply(0.5);\n            var norm = dif.normalize();\n            var transl = startpoint.add(dif2);\n	    if (typeof Quaternion !== ''undefined'') {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    } else {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    }' + LineEnding +
  '	}' + LineEnding +
  '	function recompute_and_route(startpoint, endpoint) {' + LineEnding +
  '	      var trafo = recompute(startpoint, endpoint);' + LineEnding +
  '	      if (trafo) {' + LineEnding +
  '		      transnode.translation = trafo.translation;' + LineEnding +
  '		      rotscalenode.rotation = trafo.rotation;' + LineEnding +
  '		      rotscalenode.scale = trafo.scale;' + LineEnding +
  '	      }' + LineEnding +
  '	}' + LineEnding +
  '        function initialize(){' + LineEnding +
  '            recompute_and_route(startnode.translation,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_startpoint(val,t){' + LineEnding +
  '            recompute_and_route(val,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_endpoint(val,t){' + LineEnding +
  '            recompute_and_route(startnode.translation,val);' + LineEnding +
  '        }');
ProtoDeclare30.Node.AddChildren([Script39]);
X3D0.AddPrototype(ProtoDeclare30);
ProtoInstance46 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
ProtoInstance46.X3DName := 'connector1';
(ProtoInstance46.Field('startnode') as TSFNode).Value := Transform10;
(ProtoInstance46.Field('endnode') as TSFNode).Value := Transform17;
(ProtoInstance46.Field('transnode') as TSFNode).Value := Transform24;
(ProtoInstance46.Field('rotscalenode') as TSFNode).Value := Transform25;
{ <fieldValue name='set_startpoint'> }
{ </fieldValue> }
{ <fieldValue name='set_endpoint'> }
{ </fieldValue> }
Group7.FdChildren.Add(ProtoInstance46.Instantiate);
{ ROUTE G1.translation_changed TO connector1.set_startpoint }
Group7.AddRoute(Transform10.EventTranslation_changed, ProtoInstance46.EventSet_startpoint);
{ ROUTE G2.translation_changed TO connector1.set_endpoint }
Group7.AddRoute(Transform17.EventTranslation_changed, ProtoInstance46.EventSet_endpoint);
X3D0.AddChildren([Group7]);
end;

function Createx3dconnector: TX3DRootNode;
begin
  Initx3dconnectorPart0;
  Initx3dconnectorPart1;
  Initx3dconnectorPart2;
  Initx3dconnectorPart3;
  Result := X3D0;
end;

begin
end.
