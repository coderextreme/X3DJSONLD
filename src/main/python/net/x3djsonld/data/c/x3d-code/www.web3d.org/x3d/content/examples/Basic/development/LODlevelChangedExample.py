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
    meta(content='LODlevelChangedExample.x3d',name='title'),
    meta(content='Example use of (proposed) LOD level_changed outputOnly field to trigger loading of Inline nodes in subsequent levels.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Chris Thorne',name='motivation'),
    meta(content='26 May 2004',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development, evaluating a proposed specification change',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/LODlevelChangedExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LODlevelChangedExample.x3d'),
    LOD(DEF='activeLOD',range=[6,10],
      children=[
      Shape(DEF='ShapeLevel0',
        geometry=Text(string=["developmental test scene","LODlevelChangedExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Inline(DEF='InlineLevel1',load=False),
      Inline(DEF='InlineLevel2',load=False)]
      #  etc. 
      ),
    Group(DEF='PreloadActivationGroup',
      children=[
      Script(DEF='PreloadLevelsScript',
        field=[
        field(accessType='inputOnly',name='level_changed',type='SFInt32'),
        field(accessType='outputOnly',name='activateLevel1',type='SFBool'),
        field(accessType='outputOnly',name='activateLevel2',type='SFBool')]),
      ROUTE(fromField='level_changed',fromNode='activeLOD',toField='level_changed',toNode='PreloadLevelsScript'),
      ROUTE(fromField='activateLevel1',fromNode='PreloadLevelsScript',toField='load',toNode='InlineLevel1'),
      ROUTE(fromField='activateLevel2',fromNode='PreloadLevelsScript',toField='load',toNode='InlineLevel2')]),
    Group(DEF='ViewpointGroup',
      children=[
      Viewpoint(description='level 0',position=(0,0,4)),
      Viewpoint(description='level 1',position=(0,0,8)),
      Viewpoint(description='level 2',position=(0,0,12))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LODlevelChangedExample.py")
