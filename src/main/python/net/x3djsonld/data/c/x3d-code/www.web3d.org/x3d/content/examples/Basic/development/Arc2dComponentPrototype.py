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
    meta(content='Arc2dComponentPrototype.x3d',name='title'),
    meta(content='X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc.',name='description'),
    meta(content='Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis',name='creator'),
    meta(content='14 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html',name='reference'),
    meta(content='Geometry2D component node (Arc2D)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    children=[
    WorldInfo(title='Arc2dComponentPrototype.x3d'),
    ProtoDeclare(name='Arc2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='startAngle',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='endAngle',type='SFFloat',value=1.5707963265),
        field(accessType='initializeOnly',name='radius',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
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
          ROUTE(fromField='arcIndexSet3d',fromNode='Arc2dToFaceSet3d',toField='set_coordIndex',toNode='ArcIndexPoints')])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Arc2dComponentPrototype.py")
