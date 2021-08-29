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
    meta(content='Figure15_12Torus.x3d',name='title'),
    meta(content='A torus built using a circular cross section swept along a circular spine.',name='description'),
    meta(content='Figure 15.12, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch15/15fig12.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='20 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Figure15_12TorusXj3D.png',name='Image'),
    meta(content='Xj3DViewerExtrusionBugFix.pdf',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ExtrusionEdgeCases.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter15Extrusion/Figure15_12Torus.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure15_12Torus.x3d'),
    NavigationInfo(),
    #  Computational cost of Extrusion node compared to IndexedFaceSet or other triangle meshes: quicker to download, takes time to calculate polygonal faces and normals during initial loading, equally fast at run time. 
    #  Authoring capabilities of Extrusion compared to IndexedFaceSet or other triangle meshes: can provide great detail with much less effort. 
    Viewpoint(description='Torus from above',orientation=(-0.37796,0.91249,0.15656,0.85225),position=(10,5,10)),
    Viewpoint(description='Torus from ahead'),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(1,0,1))),
      geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,-0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],endCap=False,spine=[(2,0,0),(1.85,0,0.77),(1.41,0,1.41),(0.77,0,1.85),(0,0,2),(-0.77,0,1.85),(-1.41,0,1.41),(-1.85,0,0.77),(-2,0,0),(-1.85,0,-0.77),(-1.41,0,-1.41),(-0.77,0,-1.85),(0,0,-2),(0.77,0,-1.85),(1.41,0,-1.41),(1.85,0,-0.77),(2,0,0)],
        #  spine is closed, crossSection is closed 
        ))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure15_12Torus.py")
