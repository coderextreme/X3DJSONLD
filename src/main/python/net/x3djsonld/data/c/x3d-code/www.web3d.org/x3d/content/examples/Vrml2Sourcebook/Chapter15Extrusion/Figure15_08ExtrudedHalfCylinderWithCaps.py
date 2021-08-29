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
    meta(content='Figure15_08ExtrudedHalfCylinderWithCaps.x3d',name='title'),
    meta(content='Figure 15.8, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch15/15fig08.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='20 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='An extruded half cylinder built using half of a circular cross section swept along a straight spine. Also see Figure 15.9 for comparison.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter15Extrusion/Figure15_08ExtrudedHalfCylinderWithCaps.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  First position and rotate viewpoint into positive-X-Y-Z octant 
    children=[
    WorldInfo(title='Figure15_08ExtrudedHalfCylinderWithCaps.x3d'),
    Viewpoint(description='Extruded half cylinder with end caps',orientation=(-0.29785,0.94661,0.12337,0.824949),position=(4,1.5,4)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0,0.7,1))),
      geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00)],solid=False,spine=[(0,-1,0),(0,1,0)]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure15_08ExtrudedHalfCylinderWithCaps.py")
