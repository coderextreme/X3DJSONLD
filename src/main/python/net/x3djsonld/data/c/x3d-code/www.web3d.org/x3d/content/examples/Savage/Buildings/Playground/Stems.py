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
    meta(content='Stems.x3d',name='title'),
    meta(content='Stems for flowers',name='description'),
    meta(content='Kok Keng Ng',name='translator'),
    meta(content='10 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/Stems.x3d',name='identifier'),
    meta(content='Garden flowers',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Computational cost of Extrusion compared to IndexedFaceSet: quicker to download, takes time to calculate polygonal faces and normals during initial loading, equally fast at run time. 
    #  Authoring capabilities of Extrusion compared to IndexedFaceSet: can be more complicated to express, but also can provide great detail with much less effort. 
    #  Ring 
    children=[
    Transform(scale=(5,5,5),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    Transform(scale=(0.5,0.5,0.5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,1,0.1),emissiveColor=(0.1,0.1,0.1))),
        geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(0,0,0),(0,14,0),(1,17,0),(2,18.5,0)])),
      Transform(
        children=[
        Transform(rotation=(1,0,0,0.5),scale=(.2,0.5,.2),translation=(0,4,0),
          children=[
          Shape(DEF='Leave',
            geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(0,0,0),(0,10,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,1,0.1),emissiveColor=(0.1,0.1,0.1))))]),
        Transform(
          children=[
          Transform(rotation=(1,0,0,-0.5),scale=(.3,0.5,.3),translation=(0,6,0),
            children=[
            Shape(USE='Leave')])]),
        Transform(
          children=[
          Transform(
            children=[
            Transform(rotation=(0,1,0,-1.575),
              children=[
              Transform(rotation=(0,0,1,-0.3),
                children=[
                Transform(translation=(0,9,-5),
                  children=[
                  Transform(scale=(4,0.1,1),
                    children=[
                    Shape(
                      geometry=Sphere(),)])])])])])]),
        Transform(),]),
      Transform(),]),
    Viewpoint(position=(0,1,-10))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Stems.py")
