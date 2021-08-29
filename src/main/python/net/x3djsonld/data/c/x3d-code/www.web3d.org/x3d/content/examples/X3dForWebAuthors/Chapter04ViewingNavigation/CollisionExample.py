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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='CollisionExample.x3d',name='title'),
    meta(content='Illustrate Collision node operation: set Collision enabled="true" to block user navigation through the Kelp Forest tank glass.',name='description'),
    meta(content='Don Brutzman and Leonard Daly',name='creator'),
    meta(content='1 June 1998',name='created'),
    meta(content='13 June 2004',name='translated'),
    meta(content='14 June 2020',name='modified'),
    meta(content='Contained Inline scene has profile Immersive',name='info'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='http://faculty.nps.edu/brutzman/kelp/KelpForestDesignPaper.pdf',name='reference'),
    meta(content='Kelp Forest 3D models',name='subject'),
    meta(content='Revisions Copyright (c) 2006, Daly Realism and Don Brutzman. Original content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/CollisionExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Collision.x3d'),
    NavigationInfo(speed=3,type=["FLY","WALK","ANY"]),
    Viewpoint(description='Outside Tank, Outside Collision Geometry, Blocked',position=(0,2,40)),
    Viewpoint(description='Outside Tank, Below Collision Geometry, Can Fly In',position=(0,-4,15)),
    Viewpoint(description='Inside Tank',orientation=(0.21,0.97,-0.14,1.202),position=(-1.37,-6.94,0.22)),
    Collision(
      proxy=Shape(
        #  Proxy geometry is not rendered, so we follow it with a duplicate USE node to help see it 
        geometry=Cylinder(DEF='CollisionProxy',bottom=False,height=6,radius=12,top=False)),
      children=[
      Shape(DEF='CollisionProxyVisualization',
        geometry=Cylinder(USE='CollisionProxy'),
        appearance=Appearance(
          material=Material(transparency=0.5))),
      Inline(url=["../KelpForestExhibit/KelpTank.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTank.x3d","../KelpForestExhibit/KelpTank.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTank.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CollisionExample.py")
