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
    meta(content='bitmanagement-nodes.x3d',name='title'),
    meta(content='Conversion of utility prototype',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='03 December 2011',name='translated'),
    meta(content='03 December 2011',name='modified'),
    meta(content='bitmanagement-nodes.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/originals/bitmanagement-nodes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='Selection',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='select',type='SFBool',value=True),
        field(accessType='inputOutput',name='collide',type='SFBool',value=True),
        field(accessType='initializeOnly',name='bboxSize',type='SFVec3f',value=(-1.0,-1.0,-1.0)),
        field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOutput',name='children',type='MFNode'),
        field(accessType='inputOnly',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',name='removeChildren',type='MFNode'),
        field(accessType='initializeOnly',name='proxy',type='SFNode')]),
      ProtoBody=ProtoBody(
        children=[
        Collision(
          IS=IS(
            connect=[
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize'),
            connect(nodeField='enabled',protoField='collide'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren'),
            connect(nodeField='proxy',protoField='proxy')]))]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for bitmanagement-nodes.py")
