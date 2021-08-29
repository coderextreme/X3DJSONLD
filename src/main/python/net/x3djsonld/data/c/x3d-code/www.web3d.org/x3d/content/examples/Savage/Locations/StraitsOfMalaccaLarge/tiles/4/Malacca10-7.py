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
        texture=ImageTexture(url=['../../images/4/Malacca10-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[12,10,10,7,4,11,8,3,10,30,20,2,0,0,0,-1,-1,0,0,-3,-2,0,7,6,9,7,2,7,8,2,26,21,9,0,0,0,1,0,0,0,1,1,0,0,10,6,7,10,1,6,7,9,25,10,0,1,0,0,2,1,2,1,0,0,0,0,4,6,2,5,1,2,4,2,8,9,-1,0,0,0,1,2,2,0,1,0,0,1,3,4,1,5,2,3,6,18,19,7,0,-1,0,1,4,2,4,2,2,0,0,1,8,3,2,2,2,5,8,25,12,-3,0,0,0,0,0,1,1,3,2,1,2,0,5,11,1,0,5,4,11,19,2,0,0,-3,0,0,2,0,3,1,4,2,2,3,6,1,0,1,1,4,12,8,0,0,0,0,0,0,0,0,0,0,2,1,1,2,12,0,4,0,8,0,9,0,0,3,2,-1,-1,0,0,0,0,0,0,1,0,0,14,11,1,0,1,0,0,1,2,1,1,0,2,3,1,0,0,0,0,-2,0,2,8,11,1,0,0,1,1,2,1,0,1,1,0,0,2,1,0,0,-1,0,-3,2,1,4,2,0,0,0,0,1,2,1,1,1,1,0,1,2,0,1,1,0,-2,0,9,7,6,1,0,0,1,1,1,1,1,1,1,0,0,0,-1,0,0,0,-2,-10,8,7,0,0,0,2,2,1,0,2,2,1,1,0,2,3,0,0,-3,-9,31,-13,10,0,0,0,1,1,1,2,1,1,1,0,2,1,1,0,0,2,0,-1,-1,-1,0,0,0,0,1,0,2,1,1,1,0,1,1,1,3,0,0,-2,2,-1,-1,-1,0,0,0,1,1,2,0,2,1,2,3,1,1,2,1,2,0,0,0,-14,-1,-1,1,1,1,1,0,1,0,2,1,1,1,1,1,2,1,0,12,0,8,0,-14,0,1,1,0,0,0,2,2,1,0,1,1,2,1,1,2,1,2,0,2,3,0,0,1,1,2,0,1,0,1,1,1,1,1,0,1,1,2,2,1,2,1,0,0,0,0,0,1,0,1,1,1,0,2,1,1,0,1,3,1,1,0,2,0,2,0,3,0,0,2,2,1,1,0,0,2,0,1,1,1,0,1,1,2,1,0,2,0,1],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
