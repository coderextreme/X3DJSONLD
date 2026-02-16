####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python .py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(name='comment',content='World of Titania'),
    meta(name='created',content='Fri, 04 Sep 2015 10:19:01 GMT'),
    meta(name='creator',content='Holger Seelig'),
    meta(name='generator',content='Titania V3.0.4, https://titania.create3000.de'),
    meta(name='identifier',content='file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d'),
    meta(name='modified',content='Tue, 25 Jul 2017 09:42:17 GMT'),
    meta(name='title',content='Connectors')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='RoundedRectangle2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFFloat',name='cornerRadius',value=1),
        field(accessType='initializeOnly',type='SFVec2f',name='size',value=(2,2)),
        field(accessType='initializeOnly',type='SFBool',name='solid',value=True)]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='Geometry',
          IS=IS(
            connect=[
            connect(nodeField='solid',protoField='solid')]),
          coord=Coordinate(),),
        Script(DEF='RoundedRectangle2D',directOutput=True,
          field=[
          field(accessType='initializeOnly',type='SFFloat',name='cornerDimension',value=10),
          field(accessType='initializeOnly',type='SFFloat',name='cornerRadius'),
          field(accessType='initializeOnly',type='SFVec2f',name='size'),
          field(accessType='initializeOnly',type='SFNode',name='geometry',
            children=[
            IndexedFaceSet(USE='Geometry')])],
          IS=IS(
            connect=[
            connect(nodeField='cornerRadius',protoField='cornerRadius'),
            connect(nodeField='size',protoField='size')]),

        sourceCode="""
ecmascript:

function initialize ()
{
	var point         = new SFVec3f (cornerRadius, 0, 0);
	var startRotation = new SFRotation ();
	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);
	var corner        = new MFVec3f ();
	var coordIndex    = new MFInt32 ();
	var points        = new MFVec3f ();

	for (var i = 0; i < cornerDimension * 4; ++ i)
		coordIndex [coordIndex .length] = i;

	geometry .coordIndex = coordIndex;

	for (var i = 0; i < cornerDimension; ++i)
		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = corner [i] .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	geometry .coord .point = points;
}
""")])),
    ProtoDeclare(name='Widget',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',type='SFColor',name='fillColor',value=(0.1,0.1,0.1)),
        field(accessType='inputOutput',type='SFColor',name='lineColor',value=(0.4,0.4,0.4)),
        field(accessType='inputOutput',type='SFFloat',name='linewidthScaleFactor',value=1),
        field(accessType='inputOutput',type='SFNode',name='geometry')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='Shape',
          children=[
          Shape(
            IS=IS(
              connect=[
              connect(nodeField='geometry',protoField='geometry')]),
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='fillColor')])))),
          Shape(
            IS=IS(
              connect=[
              connect(nodeField='geometry',protoField='geometry')]),
            appearance=Appearance(
              fillProperties=FillProperties(filled=False,hatched=False),
              lineProperties=LineProperties(
                IS=IS(
                  connect=[
                  connect(nodeField='linewidthScaleFactor',protoField='linewidthScaleFactor')])),
              material=Material(diffuseColor=(0,0,0),
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='lineColor')]))))])])),
    ProtoDeclare(name='Node',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',type='SFVec3f',name='translation')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          PlaneSensor(DEF='PlaneSensor'),
          Transform(DEF='Node',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='translation')]),
            children=[
            ProtoInstance(name='Widget',
              fieldValue=[
              fieldValue(name='geometry',
                children=[
                ProtoInstance(name='RoundedRectangle2D',
                  fieldValue=[
                  fieldValue(name='cornerRadius',value=0.12),
                  fieldValue(name='size',value=(2,1))])])]),
            Transform(DEF='Input',translation=(-1,0,0),
              children=[
              ProtoInstance(name='Widget',
                fieldValue=[
                fieldValue(name='lineColor',value=(0.72,0.14,0.23)),
                fieldValue(name='geometry',
                  children=[
                  Disk2D(DEF='Connector',outerRadius=0.2)])])]),
            Transform(DEF='Output',translation=(1,0,0),
              children=[
              ProtoInstance(name='Widget',
                fieldValue=[
                fieldValue(name='lineColor',value=(0.44,0.5,0.72)),
                fieldValue(name='geometry',
                  children=[
                  Disk2D(USE='Connector')])])])])]),
        Script(directOutput=True,
          field=[
          field(accessType='inputOutput',type='SFVec3f',name='translation'),
          field(accessType='initializeOnly',type='SFNode',name='sensor',
            children=[
            PlaneSensor(USE='PlaneSensor')]),
          field(accessType='initializeOnly',type='SFNode',name='transform',
            children=[
            Transform(USE='Node')])],
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation')]),

        sourceCode="""
ecmascript:
function initialize ()
{
	sensor .offset = translation;
}
"""),
        ROUTE(fromNode='PlaneSensor',fromField='translation_changed',toNode='Node',toField='set_translation')])),
    ProtoDeclare(name='Route',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',type='SFColor',name='lineColor',value=(0.43,0.43,0.98)),
        field(accessType='inputOutput',type='SFFloat',name='linewidthScaleFactor',value=2),
        field(accessType='initializeOnly',type='SFNode',name='output'),
        field(accessType='initializeOnly',type='SFNode',name='input')]),
      ProtoBody=ProtoBody(
        children=[
        Shape(
          appearance=Appearance(
            lineProperties=LineProperties(
              IS=IS(
                connect=[
                connect(nodeField='linewidthScaleFactor',protoField='linewidthScaleFactor')])),
            material=Material(diffuseColor=(0,0,0),
              IS=IS(
                connect=[
                connect(nodeField='emissiveColor',protoField='lineColor')]))),
          geometry=LineSet(DEF='Geometry_1',vertexCount=[2],
            coord=Coordinate(point=[(-1,0,0),(1,0,0)]))),
        Script(DEF='Route',directOutput=True,
          field=[
          field(accessType='inputOnly',type='SFVec3f',name='set_translation'),
          field(accessType='initializeOnly',type='SFInt32',name='routeDimension',value=21),
          field(accessType='initializeOnly',type='SFNode',name='output'),
          field(accessType='initializeOnly',type='SFNode',name='input'),
          field(accessType='initializeOnly',type='SFNode',name='geometry',
            children=[
            LineSet(USE='Geometry_1')]),
          field(accessType='initializeOnly',type='SFNode',name='self',
            children=[
            Script(USE='Route')])],
          IS=IS(
            connect=[
            connect(nodeField='output',protoField='output'),
            connect(nodeField='input',protoField='input')]),

        sourceCode="""
ecmascript:
function initialize ()
{
	Browser .addRoute (output, 'translation_changed', self, 'set_translation');
	Browser .addRoute (input,  'translation_changed', self, 'set_translation');

	set_translation ();
}

function set_translation ()
{
	geometry .vertexCount [0] = routeDimension;

	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));
	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));

	var w = inPoint .x - outPoint .x;
	var h = outPoint .y - inPoint .y;

	for (var i = 0; i < routeDimension; ++ i)
	{
		var t = i / (routeDimension - 1);
		var y = h / 2 * (Math .cos (t * Math .PI) - 1);

		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));
	}
}
""")])),
    NavigationInfo(type=["FLY","ANY"]),
    Background(skyColor=[(0.2,0.2,0.2)]),
    OrthoViewpoint(description='OthoViewpoint',position=(-3.13496,-4.19776,10),centerOfRotation=(-3.13496,-4.19776,0),fieldOfView=(0,0,10,10)),
    Viewpoint(description='Viewpoint'),
    Transform(DEF='Connectors',
      children=[
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',DEF='N1',
            fieldValue=[
            fieldValue(name='translation',value=(-3.98323,2.88948,0))])]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',DEF='N2',
            fieldValue=[
            fieldValue(name='translation',value=(-0.0890862,2.96049,0))])])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N1')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',DEF='N3',
            fieldValue=[
            fieldValue(name='translation',value=(-0.104169,1.16371,0))])])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N1')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',DEF='N4',
            fieldValue=[
            fieldValue(name='translation',value=(-0.0998688,-0.40172,0))])])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N1')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',DEF='N5',
            fieldValue=[
            fieldValue(name='translation',value=(-0.0998687,-2.14742,0))])])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N2')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',DEF='N6',
            fieldValue=[
            fieldValue(name='translation',value=(3.55694,2.4116,0))])])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N3')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',USE='N6')])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N4')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',DEF='N7',
            fieldValue=[
            fieldValue(name='translation',value=(3.75106,-0.0794556,0))])])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N5')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',USE='N7')])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N6')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',DEF='N8',
            fieldValue=[
            fieldValue(name='translation',value=(7.68077,1.21228,0))])])]),
      ProtoInstance(name='Route',
        fieldValue=[
        fieldValue(name='output',
          children=[
          ProtoInstance(name='Node',USE='N7')]),
        fieldValue(name='input',
          children=[
          ProtoInstance(name='Node',USE='N8')])]),
      ProtoInstance(name='Node',USE='N1'),
      ProtoInstance(name='Node',USE='N2'),
      ProtoInstance(name='Node',USE='N3'),
      ProtoInstance(name='Node',USE='N4'),
      ProtoInstance(name='Node',USE='N5'),
      ProtoInstance(name='Node',USE='N6'),
      ProtoInstance(name='Node',USE='N7'),
      ProtoInstance(name='Node',USE='N8')])])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for .py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python .py load and self-test diagnostics complete.")
