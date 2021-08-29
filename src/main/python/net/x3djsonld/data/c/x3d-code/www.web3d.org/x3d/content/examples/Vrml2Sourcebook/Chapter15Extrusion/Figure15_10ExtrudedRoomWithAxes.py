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
    meta(content='Figure15_10ExtrudedRoomWithAxes.x3d',name='title'),
    meta(content='Figure 15.10, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch15/15fig10.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='20 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='An extruded room using a floor plan as the cross section.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter15Extrusion/Figure15_10ExtrudedRoomWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Computational cost of Extrusion compared to IndexedFaceSet: quicker to download, takes time to calculate polygonal faces and normals during initial loading, equally fast at run time. 
    #  Authoring capabilities of Extrusion compared to IndexedFaceSet: can be more complicated to express, but also can provide great detail with much less effort. 
    #  First position and rotate viewpoint into positive-X-Y-Z octant using a Transform 
    children=[
    WorldInfo(title='Figure15_10ExtrudedRoomWithAxes.x3d'),
    Viewpoint(description='Extruded room with a doorway',orientation=(-0.48712,0.83351,0.2607,1.141576),position=(6,5,4)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(1,0.9,0.7))),
      geometry=Extrusion(convex=False,creaseAngle=0.785,crossSection=[(-0.5,1.0),(-0.5,0.8),(-1.8,0.8),(-1.8,-0.8),(1.8,-0.8),(1.8,0.8),(0.5,0.8),(0.5,1.0),(2.0,1.0),(2.0,-1.0),(-2.0,-1.0),(-2.0,1.0),(-0.5,1.0)],solid=False,spine=[(0,0,0),(0,2,0)])),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Transform(scale=(3,3,3),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure15_10ExtrudedRoomWithAxes.py")
