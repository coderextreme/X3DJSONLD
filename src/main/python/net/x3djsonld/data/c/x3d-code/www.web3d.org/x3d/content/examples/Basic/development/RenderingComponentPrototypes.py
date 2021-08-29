###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='RenderingComponentPrototypes.x3d',name='title'),
    meta(content='Prototype implementations of X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet) implemented as prototypes for backwards compatibility with VRML 97.',name='description'),
    meta(content='X3dToVrml97.xslt translation stylesheet automatically invokes these prototypes upon encountering any new Rendering nodes.',name='info'),
    meta(content='Don Brutzman, George Dabrowski, Ken Curtin, Duane Davis, Christos Kalogrias',name='creator'),
    meta(content='17 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='RenderingComponentExamples.x3d',name='reference'),
    meta(content='RenderingComponentExternProtoDefinitions.x3d',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter13-PointsLinesFaces/Figure13.11IndexedLineSetBoxWireframe.x3d',name='reference'),
    meta(content='X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    children=[
    WorldInfo(title='RenderingComponentPrototypes.x3d'),
    ProtoDeclare(appinfo='ColorRGBA defines a set of RGBA colors. Warning: VRML 97 support does not include alpha values.',name='ColorRGBA',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='locally override MFColorRGBA type (which is not supported in VRML 97) in order to downgrade to Color RGB',name='color',type='MFRotation',
          #  The color field is a 4-tuple float array, and so we map it to an MFOrientation for backwards compatibility with VRML 97. 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Color(DEF='ColorRGB',color=[(0.8,0.8,0.8)]),
        #  remaining nodes are not rendered 
        OrientationInterpolator(DEF='ColorRGBAholder',
          IS=IS(
            connect=[
            connect(nodeField='keyValue',protoField='color')])),
        Script(DEF='ConvertColorRGBAtoRGB',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='colorRGBAnode',type='SFNode',
            children=[
            OrientationInterpolator(USE='ColorRGBAholder')]),
          field(accessType='initializeOnly',name='colorRGBnode',type='SFNode',
            children=[
            Color(USE='ColorRGB')])]),
        Group(
          metadata=MetadataSet(
            IS=IS(
              connect=[
              connect(nodeField='metadata',protoField='metadata')])))])),
    #  ==================== 
    ProtoDeclare(appinfo='IndexedTriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.',name='IndexedTriangleFanSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo='[0 infinity] or -1',name='set_index',type='MFInt32'),
        field(accessType='initializeOnly',appinfo='[0 infinity] or -1',name='index',type='MFInt32',
          #  default initialization is NULL array [] to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='RenderedITFS',
          IS=IS(
            connect=[
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord')])),
        Group(DEF='UnrenderedITFS',
          children=[
          Shape(
            #  is this really needed at all?? 
            geometry=IndexedFaceSet(DEF='NodesHolderITFS',
              IS=IS(
                connect=[
                connect(nodeField='color',protoField='color'),
                connect(nodeField='coord',protoField='coord'),
                connect(nodeField='normal',protoField='normal'),
                connect(nodeField='texCoord',protoField='texCoord')]))),
          Script(DEF='IndexedTriangleFanSetToIndexedFaceSet',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='index',type='MFInt32'),
            field(accessType='inputOnly',name='set_index',type='MFInt32'),
            field(accessType='initializeOnly',name='renderedITFS',type='SFNode',
              children=[
              IndexedFaceSet(USE='RenderedITFS')]),
            field(accessType='initializeOnly',name='nodesHolder',type='SFNode',
              children=[
              IndexedFaceSet(USE='NodesHolderITFS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )],
            IS=IS(
              connect=[
              connect(nodeField='index',protoField='index'),
              connect(nodeField='set_index',protoField='set_index')])),
          Group(
            metadata=MetadataString(
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  ==================== 
    ProtoDeclare(appinfo='IndexedTriangleSet represents a 3D shape composed of a collection of individual triangles.',name='IndexedTriangleSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo='[0 infinity] or -1',name='set_index',type='MFInt32'),
        field(accessType='initializeOnly',appinfo='[0 infinity] or -1',name='index',type='MFInt32',
          #  default initialization is NULL array [] to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='RenderedITS',
          IS=IS(
            connect=[
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord')])),
        Group(DEF='UnrenderedITS',
          children=[
          Shape(
            #  is this really needed at all?? 
            geometry=IndexedFaceSet(DEF='NodesHolderITS',
              IS=IS(
                connect=[
                connect(nodeField='color',protoField='color'),
                connect(nodeField='coord',protoField='coord'),
                connect(nodeField='normal',protoField='normal'),
                connect(nodeField='texCoord',protoField='texCoord')]))),
          Script(DEF='IndexedTriangleSetToIndexedFaceSet',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='index',type='MFInt32'),
            field(accessType='inputOnly',name='set_index',type='MFInt32'),
            field(accessType='initializeOnly',name='renderedITS',type='SFNode',
              children=[
              IndexedFaceSet(USE='RenderedITS')]),
            field(accessType='initializeOnly',name='nodesHolder',type='SFNode',
              children=[
              IndexedFaceSet(USE='NodesHolderITS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )],
            IS=IS(
              connect=[
              connect(nodeField='index',protoField='index'),
              connect(nodeField='set_index',protoField='set_index')])),
          Group(
            metadata=MetadataString(
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  ==================== 
    ProtoDeclare(appinfo='IndexedTriangleStripSet represents a 3D shape composed of strips of triangles.',name='IndexedTriangleStripSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_index',type='MFInt32'),
        field(accessType='initializeOnly',name='index',type='MFInt32',
          #  default initialization is NULL array [] to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='RenderedTSS',
          IS=IS(
            connect=[
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord')])),
        Group(
          children=[
          Shape(
            #  is this really needed at all?? 
            geometry=IndexedFaceSet(DEF='NodesHolderTSS',
              IS=IS(
                connect=[
                connect(nodeField='color',protoField='color'),
                connect(nodeField='coord',protoField='coord'),
                connect(nodeField='normal',protoField='normal'),
                connect(nodeField='texCoord',protoField='texCoord')]))),
          Script(DEF='IndexedTriangleStripSetToIndexedFaceSet',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='index',type='MFInt32'),
            field(accessType='inputOnly',name='set_index',type='MFInt32'),
            field(accessType='initializeOnly',name='renderedTSS',type='SFNode',
              children=[
              IndexedFaceSet(USE='RenderedTSS')]),
            field(accessType='initializeOnly',name='nodesHolder',type='SFNode',
              children=[
              IndexedFaceSet(USE='NodesHolderTSS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )],
            IS=IS(
              connect=[
              connect(nodeField='index',protoField='index'),
              connect(nodeField='set_index',protoField='set_index')])),
          Group(
            metadata=MetadataString(
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  ==================== 
    ProtoDeclare(appinfo='LineSet represents a 3D geometry formed by constructing polylines from 3D vertices.',name='LineSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='vertexCount',type='MFInt32',
          #  default initialization is NULL array [] to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(DEF='RenderedILS',
          IS=IS(
            connect=[
            connect(nodeField='color',protoField='color')])),
        Group(
          children=[
          Shape(
            geometry=IndexedLineSet(DEF='NodesHolderILS',
              IS=IS(
                connect=[
                connect(nodeField='color',protoField='color'),
                connect(nodeField='coord',protoField='coord')])),
            appearance=Appearance(DEF='UnusedAppearance',
              material=Material(emissiveColor=(0.8,0.8,0.8)))),
          Script(DEF='LineSetToIndexedLineSet',directOutput=True,
            field=[
            field(accessType='inputOutput',name='vertexCount',type='MFInt32',
              #  default initialization is NULL array [] to match X3D specification 
              ),
            field(accessType='initializeOnly',name='renderedILS',type='SFNode',
              children=[
              IndexedLineSet(USE='RenderedILS')]),
            field(accessType='initializeOnly',name='nodesHolder',type='SFNode',
              children=[
              IndexedLineSet(USE='NodesHolderILS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )],
            IS=IS(
              connect=[
              connect(nodeField='vertexCount',protoField='vertexCount')])),
          Group(
            metadata=MetadataString(
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  ==================== 
    ProtoDeclare(appinfo='TriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.',name='TriangleFanSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='fanCount',type='MFInt32',
          #  default initialization is NULL array [] to match X3D specification 
          ),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='RenderedTFS',
          IS=IS(
            connect=[
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='colorPerVertex',protoField='colorPerVertex'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord')])),
        Group(DEF='UnrenderedTFS',
          children=[
          Shape(
            #  is this really needed at all?? 
            geometry=IndexedFaceSet(DEF='NodesHolderTFS',
              IS=IS(
                connect=[
                connect(nodeField='color',protoField='color'),
                connect(nodeField='coord',protoField='coord'),
                connect(nodeField='normal',protoField='normal'),
                connect(nodeField='texCoord',protoField='texCoord')]))),
          Script(DEF='TriangleFanSetToIndexedFaceSet',directOutput=True,
            field=[
            field(accessType='inputOutput',name='fanCount',type='MFInt32',
              #  default initialization is NULL array [] to match X3D specification 
              ),
            field(accessType='initializeOnly',name='renderedTFS',type='SFNode',
              children=[
              IndexedFaceSet(USE='RenderedTFS')]),
            field(accessType='initializeOnly',name='nodesHolder',type='SFNode',
              children=[
              IndexedFaceSet(USE='NodesHolderTFS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )],
            IS=IS(
              connect=[
              connect(nodeField='fanCount',protoField='fanCount')])),
          Group(
            metadata=MetadataString(
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  ==================== 
    ProtoDeclare(appinfo='TriangleSet represents a 3D shape that represents a collection of individual triangles.',name='TriangleSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='RenderedTS',
          IS=IS(
            connect=[
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord')])),
        Group(DEF='UnrenderedTS',
          children=[
          Shape(
            #  is this really needed at all?? 
            geometry=IndexedFaceSet(DEF='NodesHolderTS',
              IS=IS(
                connect=[
                connect(nodeField='color',protoField='color'),
                connect(nodeField='coord',protoField='coord'),
                connect(nodeField='normal',protoField='normal'),
                connect(nodeField='texCoord',protoField='texCoord')]))),
          Script(DEF='TriangleSetToIndexedFaceSet',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='index',type='MFInt32',
              #  default initialization is NULL 
              ),
            field(accessType='inputOnly',name='set_index',type='MFInt32'),
            field(accessType='initializeOnly',name='renderedTS',type='SFNode',
              children=[
              IndexedFaceSet(USE='RenderedTS')]),
            field(accessType='initializeOnly',name='nodesHolder',type='SFNode',
              children=[
              IndexedFaceSet(USE='NodesHolderTS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )]),
          Group(
            metadata=MetadataString(
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  ==================== 
    ProtoDeclare(appinfo='TriangleStripSet represents a 3D shape composed of strips of triangles.',name='TriangleStripSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='stripCount',type='MFInt32',
          #  default initialization is NULL array [] to match X3D specification 
          ),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Color ColorRGBA node only',name='color',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Coordinate node only',name='coord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Normal node only',name='normal',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='TextureCoordinate node only',name='texCoord',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          ),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default initialization is NULL node to match X3D specification 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(),])),
    #  ==================== 
    #  ProtoInstance examples are found in RenderingComponentExamples.x3d 
    Background(groundColor=[(0.2,0.2,0.2)],skyColor=[(0.2,0.2,0.2)]),
    Anchor(DEF='LinkToExamples',description='link to examples',url=["RenderingComponentExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d","RenderingComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Text(string=["RenderingComponentPrototypes","is a developmental file.","Click this text to view","RenderingComponentExamples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      #  Selectable Text has transparent Box and TouchSensor description as a tooltip 
      Shape(
        geometry=Box(size=(12,5,.001)),
        appearance=Appearance(
          material=Material(transparency=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RenderingComponentPrototypes.py")
