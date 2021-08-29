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
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,0,0,0,0,0,0,0,0,0,-1,3,0,1,3,4,1,-1,4,0,0,0,3,4,1,1,1,1,1,1,1,1,2,4,5,1,0,0,1,-1,1,-1,1,3,5,5,2,1,1,1,1,1,1,1,0,0,12,0,2,2,0,5,2,1,3,2,0,3,6,1,1,1,1,1,1,1,1,4,-2,-4,0,-5,0,-1,2,5,4,0,0,0,2,4,1,1,1,1,1,1,0,-7,-4,1,-1,3,0,0,2,2,3,-1,2,0,3,4,3,1,1,1,1,1,2,-8,-2,1,1,-2,7,0,0,6,3,1,5,0,0,4,6,2,1,1,1,1,-8,-6,-1,5,1,1,0,2,0,3,0,3,8,4,0,0,2,5,1,1,1,1,7,-1,-1,1,0,4,3,0,0,2,1,1,0,7,2,0,0,3,4,1,1,1,2,3,0,3,-6,1,-1,0,2,-3,2,2,0,5,6,1,0,4,5,3,1,1,1,8,-5,0,-2,2,1,2,2,2,2,4,0,0,9,4,0,0,4,6,1,1,0,0,2,0,0,-1,3,0,0,0,2,3,0,0,0,8,3,0,-10,2,5,1,0,-1,0,0,0,0,1,4,0,0,2,2,0,0,0,0,6,2,-13,-7,3,3,0,8,2,3,0,0,0,0,1,3,0,2,0,0,0,0,8,4,-16,-7,4,6,3,0,3,0,1,2,3,0,0,1,1,0,1,0,-1,0,1,7,-21,10,-1,2,2,0,3,0,0,1,3,0,0,1,3,1,2,0,0,0,3,0,3,9,-2,2,-9,3,-2,0,0,1,2,0,0,3,2,1,1,6,4,2,1,2,3,4,4,0,1,0,0,1,0,0,3,1,0,1,2,1,0,0,4,0,4,0,0,1,1,6,4,2,0,4,0,0,2,0,1,0,2,4,-1,0,0,2,1,2,0,0,2,0,0,4,0,0,2,3,1,2,1,0,3,4,0,1,3,2,2,2,3,1,0,1,-1,5,1,4,-2,0,2,3,2,2,4,1,3,0,0,0,1,3,2,1,0,3,1,2,3,0,-1,1,1,2,1,1,3,2,0,0,4,0,3,0,1,2,0,2,1,0,4,1,1,5,1,0,2,2,3,2,1,0,2,0,2,1,3,3,0,1,1,0,2,1,2,2,0,1,2,1,3,1],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
