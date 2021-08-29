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
    meta(content='Geometry2dComponentPrototypes.x3d',name='title'),
    meta(content='X3D Geometry2D component nodes, implemented as prototypes for developmental use to provide backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. ArcClose2D specifies a portion of a circle. Circle2D specifies a 2D circular line. Disk2D specifies a 2D circular disk. Polyline2D specifies 2D line segments. Polypoint2D specifies 2D point array. Rectangle2D specifies a 2D rectangle. TriangleSet2D specifies 2D triangles. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs).',name='description'),
    meta(content='Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis',name='creator'),
    meta(content='14 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='These examples are complete but only used for developmental testing, not regular X3D authoring.',name='warning'),
    meta(content='Geometry2dComponentExternProtos.x3d',name='reference'),
    meta(content='Geometry2dComponentExamples.x3d',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html',name='reference'),
    meta(content='Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    children=[
    WorldInfo(title='Geometry2dComponentPrototypes.x3d'),
    ProtoDeclare(name='Arc2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='startAngle',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='endAngle',type='SFFloat',value=1.5707963265),
        field(accessType='initializeOnly',name='radius',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        #  Only the first node counts as the node type of a prototype. This node must be a geometry node. 
        children=[
        IndexedLineSet(DEF='ArcIndexPoints',
          coord=Coordinate(DEF='Arc3DPoints')),
        #  Any nodes after initial node in a ProtoBody is not rendered. 
        Group(
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]),
          children=[
          Script(DEF='Arc2dToFaceSet3d',
            field=[
            field(accessType='initializeOnly',name='startAngle',type='SFFloat'),
            field(accessType='initializeOnly',name='endAngle',type='SFFloat'),
            field(accessType='initializeOnly',name='radius',type='SFFloat'),
            field(accessType='outputOnly',name='arcSet3d',type='MFVec3f'),
            field(accessType='outputOnly',name='arcIndexSet3d',type='MFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='startAngle',protoField='startAngle'),
              connect(nodeField='endAngle',protoField='endAngle'),
              connect(nodeField='radius',protoField='radius')])),
          ROUTE(fromField='arcSet3d',fromNode='Arc2dToFaceSet3d',toField='point',toNode='Arc3DPoints'),
          ROUTE(fromField='arcIndexSet3d',fromNode='Arc2dToFaceSet3d',toField='set_coordIndex',toNode='ArcIndexPoints')])])),
    #  ==================== 
    ProtoDeclare(name='ArcClose2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='startAngle',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='endAngle',type='SFFloat',value=1.5707963265),
        field(accessType='initializeOnly',name='radius',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='closureType',type='SFString',value='PIE'),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='ArcPointFaceIndex',
          coord=Coordinate(DEF='ArcClose2DFaceCoordinate')),
        Group(
          children=[
          Script(DEF='ArcClose2dToFaceSet3d',
            field=[
            field(accessType='initializeOnly',name='closureType',type='SFString'),
            field(accessType='initializeOnly',name='startAngle',type='SFFloat'),
            field(accessType='initializeOnly',name='endAngle',type='SFFloat'),
            field(accessType='initializeOnly',name='radius',type='SFFloat'),
            field(accessType='outputOnly',name='arcSet3d',type='MFVec3f'),
            field(accessType='outputOnly',name='pointIndex',type='MFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='closureType',protoField='closureType'),
              connect(nodeField='startAngle',protoField='startAngle'),
              connect(nodeField='endAngle',protoField='endAngle'),
              connect(nodeField='radius',protoField='radius')])),
          ROUTE(fromField='arcSet3d',fromNode='ArcClose2dToFaceSet3d',toField='point',toNode='ArcClose2DFaceCoordinate'),
          ROUTE(fromField='pointIndex',fromNode='ArcClose2dToFaceSet3d',toField='set_coordIndex',toNode='ArcPointFaceIndex')])])),
    #  ArcClose2DUnfilled also provided since FillProperties not available in VRML 97 
    ProtoDeclare(name='ArcClose2DUnfilled',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='startAngle',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='endAngle',type='SFFloat',value=1.5707963265),
        field(accessType='initializeOnly',name='radius',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='closureType',type='SFString',value='PIE'),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(DEF='ArcPointLineIndex',
          coord=Coordinate(DEF='ArcClose2DLineCoordinate')),
        Group(
          children=[
          Script(DEF='ArcClose2dToLineSet3d',
            field=[
            field(accessType='initializeOnly',name='closureType',type='SFString'),
            field(accessType='initializeOnly',name='startAngle',type='SFFloat'),
            field(accessType='initializeOnly',name='endAngle',type='SFFloat'),
            field(accessType='initializeOnly',name='radius',type='SFFloat'),
            field(accessType='outputOnly',name='arcSet3d',type='MFVec3f'),
            field(accessType='outputOnly',name='pointIndex',type='MFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='closureType',protoField='closureType'),
              connect(nodeField='startAngle',protoField='startAngle'),
              connect(nodeField='endAngle',protoField='endAngle'),
              connect(nodeField='radius',protoField='radius')])),
          ROUTE(fromField='arcSet3d',fromNode='ArcClose2dToLineSet3d',toField='point',toNode='ArcClose2DLineCoordinate'),
          ROUTE(fromField='pointIndex',fromNode='ArcClose2dToLineSet3d',toField='set_coordIndex',toNode='ArcPointLineIndex')])])),
    #  ==================== 
    ProtoDeclare(name='Circle2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='radius',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(DEF='Circ3DPointsIndex',
          coord=Coordinate(DEF='Circ3DPoints')),
        Group(
          children=[
          Script(DEF='Circ2dToLineSet3d',
            field=[
            field(accessType='initializeOnly',name='radius',type='SFFloat'),
            field(accessType='outputOnly',name='circSet3d',type='MFVec3f'),
            field(accessType='outputOnly',name='circIndexSet3d',type='MFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='radius',protoField='radius')])),
          ROUTE(fromField='circSet3d',fromNode='Circ2dToLineSet3d',toField='point',toNode='Circ3DPoints'),
          ROUTE(fromField='circIndexSet3d',fromNode='Circ2dToLineSet3d',toField='set_coordIndex',toNode='Circ3DPointsIndex')])])),
    #  ==================== 
    ProtoDeclare(name='Disk2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='innerRadius',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='outerRadius',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='DiskPointsIndex',
          coord=Coordinate(DEF='Disk3DPoints')),
        Group(
          children=[
          Script(DEF='Disk2dToFaceSet3d',
            field=[
            field(accessType='initializeOnly',name='innerRadius',type='SFFloat'),
            field(accessType='initializeOnly',name='outerRadius',type='SFFloat'),
            field(accessType='outputOnly',name='diskSet3d',type='MFVec3f'),
            field(accessType='outputOnly',name='diskIndexSet3d',type='MFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='innerRadius',protoField='innerRadius'),
              connect(nodeField='outerRadius',protoField='outerRadius')])),
          ROUTE(fromField='diskSet3d',fromNode='Disk2dToFaceSet3d',toField='point',toNode='Disk3DPoints'),
          ROUTE(fromField='diskIndexSet3d',fromNode='Disk2dToFaceSet3d',toField='set_coordIndex',toNode='DiskPointsIndex')])])),
    #  ==================== 
    ProtoDeclare(name='Polyline2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='lineSegments',type='MFVec2f'),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(DEF='LinesSegmentsIndexPoints',
          coord=Coordinate(DEF='LineSegments3DPoints')),
        Group(
          children=[
          Script(DEF='LineSegments2dToLineSet3d',
            field=[
            field(accessType='initializeOnly',name='lineSegments',type='MFVec2f'),
            field(accessType='outputOnly',name='lineSegments3D',type='MFVec3f'),
            field(accessType='outputOnly',name='lineSegmentsIndex',type='MFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='lineSegments',protoField='lineSegments')])),
          ROUTE(fromField='lineSegments3D',fromNode='LineSegments2dToLineSet3d',toField='point',toNode='LineSegments3DPoints'),
          ROUTE(fromField='lineSegmentsIndex',fromNode='LineSegments2dToLineSet3d',toField='set_coordIndex',toNode='LinesSegmentsIndexPoints')])])),
    #  ==================== 
    ProtoDeclare(name='Polypoint2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='point',type='MFVec2f'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        PointSet(
          coord=Coordinate(DEF='Points3D')),
        Group(
          children=[
          Script(DEF='Points2dToLineSet3d',
            field=[
            field(accessType='initializeOnly',name='point',type='MFVec2f'),
            field(accessType='outputOnly',name='points3D',type='MFVec3f')],
            IS=IS(
              connect=[
              connect(nodeField='point',protoField='point')])),
          ROUTE(fromField='points3D',fromNode='Points2dToLineSet3d',toField='point',toNode='Points3D')])])),
    #  ==================== 
    ProtoDeclare(appinfo='Default filled matching default FillProperties filled=true.',name='Rectangle2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='size',type='SFVec2f',value=(2,2)),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(coordIndex=[0,1,2,0,-1,2,3,0,2],solid=False,
          coord=Coordinate(DEF='RectanglePoints')),
        Group(
          children=[
          Script(DEF='Rect2dToFaceSet3d',
            field=[
            field(accessType='initializeOnly',name='size',type='SFVec2f'),
            field(accessType='outputOnly',name='pointSet3d',type='MFVec3f'),
            field(accessType='outputOnly',name='fillNoFillSelection',type='SFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='size',protoField='size')])),
          ROUTE(fromField='pointSet3d',fromNode='Rect2dToFaceSet3d',toField='point',toNode='RectanglePoints')])])),
    #  Rectangle2DUnfilled also provided since FillProperties not available in VRML 97 
    ProtoDeclare(name='Rectangle2DUnfilled',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='size',type='SFVec2f',value=(2,2)),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(coordIndex=[0,1,2,3,0],
          coord=Coordinate(DEF='RectanglePointsLine')),
        Group(
          children=[
          Script(DEF='Rect2dToLineSet3d',
            field=[
            field(accessType='initializeOnly',name='size',type='SFVec2f'),
            field(accessType='outputOnly',name='pointSet3d',type='MFVec3f'),
            field(accessType='outputOnly',name='fillNoFillSelection',type='SFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='size',protoField='size')])),
          ROUTE(fromField='pointSet3d',fromNode='Rect2dToLineSet3d',toField='point',toNode='RectanglePointsLine')])])),
    #  ==================== 
    ProtoDeclare(name='TriangleSet2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='vertices',type='MFVec2f'),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='TriangleSetIndexPoints',solid=False,
          coord=Coordinate(DEF='TriangleSet3DPoints')),
        Group(
          children=[
          Script(DEF='TriangleSet2dToLineSet3d',
            field=[
            field(accessType='initializeOnly',name='vertices',type='MFVec2f'),
            field(accessType='outputOnly',name='triangleSet3D',type='MFVec3f'),
            field(accessType='outputOnly',name='triangleSetIndex',type='MFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='vertices',protoField='vertices')])),
          ROUTE(fromField='triangleSet3D',fromNode='TriangleSet2dToLineSet3d',toField='point',toNode='TriangleSet3DPoints'),
          ROUTE(fromField='triangleSetIndex',fromNode='TriangleSet2dToLineSet3d',toField='set_coordIndex',toNode='TriangleSetIndexPoints')])])),
    #  ==================== 
    Background(groundColor=[(0.25,0.25,0.25)],skyColor=[(0.25,0.25,0.25)]),
    Anchor(DEF='LinkToExamples',description='link to examples',url=["Geometry2dComponentExternProtos.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d","Geometry2dComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.6,0.2))),
        geometry=Text(string=["Geometry2dComponentPrototypes","is a developmental file.","Click this text to view","Geometry2dComponentExamples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.75)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Geometry2dComponentPrototypes.py")
