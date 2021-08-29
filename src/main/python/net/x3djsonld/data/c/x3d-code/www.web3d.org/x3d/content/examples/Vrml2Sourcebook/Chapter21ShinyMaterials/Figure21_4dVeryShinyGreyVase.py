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
    meta(content='Figure21_4dVeryShinyGreyVase.x3d',name='title'),
    meta(content='Figure 21.4d, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch21/21fig04d.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='22 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A very shiny grey vase. Compare Figures 21.4a, 4b, 4c and 4d.',name='description'),
    meta(content='Figure21_4aDullGreyVase.x3d',name='reference'),
    meta(content='Figure21_4bSomewhatShinyGreyVase.x3d',name='reference'),
    meta(content='Figure21_4cShinyGreyVase.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter21ShinyMaterials/Figure21_4dVeryShinyGreyVase.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure21_4dVeryShinyGreyVase.x3d'),
    Viewpoint(description='Very shiny grey vase',orientation=(1,0,0,0),position=(0,2,6)),
    Group(
      children=[
      PointLight(intensity=0.2,location=(3,3,3)),
      Shape(
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,-0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],endCap=False,scale=[(1.8,1.8),(1.95,1.95),(2.0,2.0),(1.95,1.95),(1.8,1.8),(1.5,1.5),(1.2,1.2),(1.05,1.05),(1.0,1.0),(1.05,1.05),(1.15,1.15)],solid=False,spine=[(0,0.0,0),(0,0.4,0),(0,0.8,0),(0,1.2,0),(0,1.6,0),(0,2.0,0),(0,2.4,0),(0,2.8,0),(0,3.2,0),(0,3.6,0),(0,4.0,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.15,0.15,0.15),shininess=0.16,specularColor=(0.7,0.7,0.7))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure21_4dVeryShinyGreyVase.py")
