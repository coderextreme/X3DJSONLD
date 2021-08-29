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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Figure18_20bTextureCoordinatePizzaSlice.x3d',name='title'),
    meta(content='Figure 18.20b, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch18/18fig20b.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A pizza texture with a slice selected mapped to a triangular face. Also see Figure 18.20b and Figure 18.21 for comparison.',name='description'),
    meta(content='Figure18_21TextureCoordinatePizzaSlice.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18TextureMapping/Figure18_20bTextureCoordinatePizzaSlice.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure18_20bTextureCoordinatePizzaSlice.x3d'),
    Viewpoint(description='Hey got more?',orientation=(1,0,0,-0.4),position=(1,1,3)),
    Shape(
      appearance=Appearance(
        texture=ImageTexture(url=["pizza.jpg","https://www.web3d.org/x3d/content/examples/Chapter18TextureMapping/Vrml2Sourcebook/pizza.jpg"])),
      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5],solid=False,texCoordIndex=[0,1,2,3,4,5],
        coord=Coordinate(point=[(0.50,0,0.50),(0.88,0,1.42),(1.06,0,1.33),(1.21,0,1.21),(1.33,0,1.06),(1.42,0,0.88)]),
        texCoord=TextureCoordinate(point=[(0.50,0.50),(0.68,0.07),(0.76,0.11),(0.83,0.17),(0.89,0.24),(0.93,0.32)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure18_20bTextureCoordinatePizzaSlice.py")
