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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='CadGeometryPrototypes.x3d',name='title'),
    meta(content='This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0.',name='description'),
    meta(content='Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman',name='creator'),
    meta(content='28 April 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Do not use these prototypes in an up-to-date X3D browser that already provides CAD support.',name='warning'),
    meta(content='Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser.',name='information'),
    meta(content='These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK.',name='information'),
    meta(content='CadGeometryExternPrototypes.x3d',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/CADInterchange.html',name='reference'),
    meta(content='CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  =========================================== 
    children=[
    WorldInfo(title='CadGeometryPrototypes.x3d'),
    ProtoDeclare(appinfo='The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet',name='IndexedQuadSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='range [0..∞) or -1',name='set_index',type='MFInt32',
          #  No specific initialization value 
          ),
        field(accessType='inputOutput',appinfo='[X3DVertexAttributeNode]',name='attrib',type='MFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DColorNode]',name='color',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DCoordinateNode]',name='coord',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[FogCoordinate]',name='fogCoord',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DNormalNode]',name='normal',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DTextureCoordinateNode]',name='texCoord',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='colorPerVertex ignored in IndexedQuadSet, and always treated as true',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='range [0..∞) or -1',name='index',type='MFInt32',
          #  No specific initialization value 
          ),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='RenderedIQS',
          IS=IS(
            connect=[
            connect(nodeField='attrib',protoField='attrib'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='colorPerVertex',protoField='colorPerVertex'),
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='fogCoord',protoField='fogCoord'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord'),
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid')])),
        #  Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered 
        Group(DEF='UnrenderedIQS',
          children=[
          Script(DEF='IndexedQuadSetToIndexedFaceSet',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='index',type='MFInt32'),
            field(accessType='inputOnly',name='set_index',type='MFInt32'),
            field(accessType='initializeOnly',name='renderedIQS',type='SFNode',
              children=[
              IndexedFaceSet(USE='RenderedIQS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )],
            IS=IS(
              connect=[
              connect(nodeField='index',protoField='index'),
              connect(nodeField='set_index',protoField='set_index')])),
          Group(
            metadata=MetadataString(name='metadataHolder',
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  =========================================== 
    ProtoDeclare(appinfo='The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#QuadSet',name='QuadSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='[X3DVertexAttributeNode]',name='attrib',type='MFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DColorNode]',name='color',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DCoordinateNode]',name='coord',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[FogCoordinate]',name='fogCoord',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DNormalNode]',name='normal',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='[X3DTextureCoordinateNode]',name='texCoord',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='colorPerVertex ignored in QuadSet, and always treated as true',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='RenderedQS',
          IS=IS(
            connect=[
            connect(nodeField='attrib',protoField='attrib'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='colorPerVertex',protoField='colorPerVertex'),
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='fogCoord',protoField='fogCoord'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='texCoord',protoField='texCoord'),
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid')])),
        #  Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered 
        Group(DEF='UnrenderedQS',
          children=[
          Script(DEF='QuadSetToIndexedFaceSet',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='index',type='MFInt32',
              #  initialized in ecmascript 
              ),
            field(accessType='inputOnly',name='set_index',type='MFInt32'),
            field(accessType='initializeOnly',name='renderedQS',type='SFNode',
              children=[
              IndexedFaceSet(USE='RenderedQS')]),
            field(accessType='initializeOnly',name='localTraceEnabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='coordIndexNew',type='MFInt32',
              #  constructed during initialization 
              )]),
          Group(
            metadata=MetadataString(name='metadataHolder',
              IS=IS(
                connect=[
                connect(nodeField='metadata',protoField='metadata')])))])])),
    #  ======================================== 
    ProtoDeclare(appinfo='The CADAssembly node holds a set of assemblies or parts grouped together.',name='CADAssembly',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',name='removeChildren',type='MFNode'),
        field(accessType='inputOutput',appinfo='The children field can contain X3DProductStructureChildNode types. Each child will be either a sub-assembly or a part.',name='children',type='MFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='The name field documents the name of this CADAssembly.',name='name',type='SFString'),
        field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          IS=IS(
            connect=[
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize')])),
        Group(
          metadata=MetadataString(name='metadataHolder',
            IS=IS(
              connect=[
              connect(nodeField='metadata',protoField='metadata')])),
          #  name holder 
          children=[
          Anchor(url=["#hideWarning1"],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')]))])])),
    #  ======================================== 
    ProtoDeclare(appinfo='local dummy node to hold value for CADFace',name='ShapeHolder',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='shape',type='SFNode',
          #  no initialization value 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='HoldShapeNodeScript',directOutput=True,
          field=[
          field(accessType='inputOutput',appinfo='holder for IS field',name='shape',type='SFNode',
            #  no initialization node 
            )],
          IS=IS(
            connect=[
            connect(nodeField='shape',protoField='shape')]))])),
    #  = = = = = 
    ProtoDeclare(appinfo='The CADFace node holds the geometry representing a face of a part.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart',name='CADFace',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='The name field documents the name of this CADFace.',name='name',type='SFString'),
        field(accessType='inputOutput',appinfo='[X3DShapeNode | LOD]',name='shape',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        ProtoInstance(name='ShapeHolder',
          IS=IS(
            connect=[
            connect(nodeField='shape',protoField='shape')])),
        Group(
          IS=IS(
            connect=[
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize')]),
          metadata=MetadataString(name='metadataHolder',
            IS=IS(
              connect=[
              connect(nodeField='metadata',protoField='metadata')])),
          #  name holder 
          children=[
          Anchor(url=["#hideWarning2"],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')]))])])),
    #  ======================================== 
    ProtoDeclare(appinfo='The CADLayer node defines a hierarchy of nodes used for showing layer structure.',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart',name='CADLayer',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',name='removeChildren',type='MFNode'),
        field(accessType='inputOutput',appinfo='The children field can contain X3DChildNode types.',name='children',type='MFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',appinfo='The name field documents the name of this CADLayer.',name='name',type='SFString'),
        field(accessType='inputOutput',appinfo='specifies whether a particular child and its subchildren are visible. If the number of values is less than the number of children the remaining children shall be visible.',name='visible',type='MFBool'),
        field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          IS=IS(
            connect=[
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize')])),
        Group(
          metadata=MetadataString(name='metadataHolder',
            IS=IS(
              connect=[
              connect(nodeField='metadata',protoField='metadata')])),
          #  name holder 
          children=[
          Anchor(url=["#hideWarning3"],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')]))]),
        Script(DEF='HoldMFBoolFieldScript',
          field=[
          field(accessType='inputOutput',name='visible',type='MFBool',
            #  no initialization node 
            )],
          IS=IS(
            connect=[
            connect(nodeField='visible',protoField='visible')]))]
        #  No support for MFBool in VRML97, so no functionality provided for visible 
        )),
    #  ======================================== 
    ProtoDeclare(appinfo='CADPart represents the location and faces that constitute apart',documentation='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart',name='CADPart',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',name='removeChildren',type='MFNode'),
        field(accessType='inputOutput',appinfo='The children field can only contain CADFace nodes.',name='children',type='MFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='scaleOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren'),
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize')])),
        Group(
          metadata=MetadataString(name='metadataHolder',
            IS=IS(
              connect=[
              connect(nodeField='metadata',protoField='metadata')])),
          #  name holder 
          children=[
          Anchor(url=["#hideWarning4"],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')]))])])),
    #  ======================================== 
    Anchor(description='CadGeometryExternPrototypes',parameter=["target=_blank"],url=["CadGeometryExternPrototypes.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.x3d","CadGeometryExternPrototypes.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.wrl"],
      children=[
      Shape(
        geometry=Text(string=["CadGeometryExternPrototypes","defines prototype examples","","Click text to see","CadGeometryExternPrototypes"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))]),
    #  ======================================== 
    Transform(translation=(-3,2,0),
      children=[
      Shape(
        appearance=Appearance(DEF='White',
          material=Material(diffuseColor=(1,1,1))),
        geometry=ProtoInstance(name='IndexedQuadSet',
          fieldValue=[
          fieldValue(name='index',value=[0,3,2,1,4,5,6,7,2,7,9,8,2,3,4,7]),
          fieldValue(name='coord',
            children=[
            Coordinate(point=[(-1.5,0,0),(-1.5,1,-1),(-.5,1,-1),(-.5,0,0),(0.5,0,0),(1.5,0,0),(1.5,1,-1),(0.5,1,-1),(-0.5,2,-1),(0.5,2,-1)])])]))]),
    Transform(translation=(3,2,0),
      children=[
      Shape(
        appearance=Appearance(USE='White'),
        geometry=ProtoInstance(name='QuadSet',
          fieldValue=[
          fieldValue(name='coord',
            children=[
            Coordinate(point=[(-1.5,0,0),(-1.5,1,-1),(-0.5,1,-1),(-0.5,0,0),(0.5,0,0),(1.5,0,0),(1.5,1,-1),(0.5,1,-1)])])]))]),
    #  ======================================== 
    #  Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead. 
    ProtoInstance(name='CADLayer',
      fieldValue=[
      fieldValue(name='children',
        children=[
        ProtoInstance(name='CADAssembly',
          fieldValue=[
          fieldValue(name='children',
            children=[
            ProtoInstance(name='CADPart',
              fieldValue=[
              fieldValue(name='children',
                children=[
                ProtoInstance(name='CADFace',
                  fieldValue=[
                  fieldValue(name='shape',
                    children=[
                    Shape(
                      geometry=Cylinder(bottom=False,height=0.000001,radius=0.000001,side=False),
                      appearance=Appearance(
                        material=Material(),))])])])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CadGeometryPrototypes.py")
