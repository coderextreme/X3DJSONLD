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
    meta(content='Figure15_11ExtrudedPlaygroundSlide.x3d',name='title'),
    meta(content='Figure 15.11, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch15/15fig11.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='20 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A playground slide built by extruding a half-circle cross section along a helical spine.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter15Extrusion/Figure15_11ExtrudedPlaygroundSlide.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Computational cost of Extrusion compared to IndexedFaceSet: quicker to download, takes time to calculate polygonal faces and normals during initial loading, equally fast at run time. 
    #  Authoring capabilities of Extrusion compared to IndexedFaceSet: can be more complicated to express, but also can provide great detail with much less effort. 
    #  First position and rotate viewpoint into positive-X-Y-Z octant 
    children=[
    WorldInfo(title='Figure15_11ExtrudedPlaygroundSlide.x3d'),
    Viewpoint(description='Extruded playground slide',orientation=(-0.37796,0.91249,0.15656,0.85225),position=(10,7,10)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0,1,0.7))),
      geometry=Extrusion(beginCap=False,convex=False,creaseAngle=0.785,crossSection=[(-1.00,0.00),(-0.92,-0.38),(-0.71,-0.71),(-0.38,-0.92),(0.00,-1.00),(0.38,-0.92),(0.71,-0.71),(0.92,-0.38),(1.00,0.00)],endCap=False,solid=False,spine=[(2.00,0.00,-0.00),(1.85,0.12,-0.77),(1.41,0.24,-1.41),(0.77,0.36,-1.85),(0.00,0.48,-2.00),(-0.77,0.61,-1.85),(-1.41,0.73,-1.41),(-1.85,0.85,-0.77),(-2.00,0.97,0.00),(-1.85,1.09,0.77),(-1.41,1.21,1.41),(-0.77,1.33,1.85),(0.00,1.45,2.00),(0.77,1.58,1.85),(1.41,1.70,1.41),(1.85,1.82,0.77),(2.00,1.94,0.00),(1.85,2.06,-0.77),(1.41,2.18,-1.41),(0.77,2.30,-1.85),(0.00,2.42,-2.00),(-0.77,2.55,-1.85),(-1.41,2.67,-1.41),(-1.85,2.79,-0.77),(-2.00,2.91,0.00),(-1.85,3.03,0.77),(-1.41,3.15,1.41),(-0.77,3.27,1.85),(0.00,3.39,2.00),(0.77,3.52,1.85),(1.41,3.64,1.41),(1.85,3.76,0.77),(2.00,3.88,0.00)]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure15_11ExtrudedPlaygroundSlide.py")
