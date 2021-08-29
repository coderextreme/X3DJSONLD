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
        texture=ImageTexture(url=['../../images/4/Malacca14-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(6.391418833468429,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[7,6,5,5,5,6,5,5,5,6,5,6,5,4,5,5,6,5,6,6,5,6,10,5,3,4,5,6,5,6,6,6,6,4,6,7,5,6,5,6,5,7,7,6,3,4,4,4,4,4,4,5,6,6,6,5,6,5,5,6,4,5,4,5,4,5,5,4,4,4,4,4,5,4,5,6,6,5,4,6,4,5,5,4,3,5,5,5,5,5,4,4,4,4,4,4,5,5,5,5,5,5,6,5,5,6,5,4,5,4,5,4,5,4,5,4,4,4,5,4,4,5,5,5,7,6,5,8,5,6,6,5,4,5,4,4,5,3,4,3,5,4,4,4,4,3,5,5,7,6,6,5,5,5,4,4,4,4,3,5,5,4,3,4,5,4,4,5,4,4,6,7,6,5,6,5,5,4,4,5,4,4,4,4,3,4,4,5,6,4,4,5,4,6,6,7,7,6,5,4,5,5,4,3,4,4,4,4,4,4,4,3,3,5,5,5,7,6,8,7,4,4,5,5,5,3,4,3,3,3,4,4,3,3,4,3,5,4,5,4,5,6,4,2,5,5,5,4,4,2,4,3,3,4,4,4,3,4,3,4,4,6,5,3,2,4,5,6,6,5,5,5,4,4,4,3,3,3,4,3,3,4,3,5,6,6,4,4,4,5,6,5,5,5,5,3,3,2,3,3,3,4,3,3,3,3,5,6,5,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,6,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
