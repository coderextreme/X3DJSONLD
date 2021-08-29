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
        texture=ImageTexture(url=['../../images/5/newport23-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,39,39,40,46,56,60,59,58,57,56,53,50,48,44,40,40,40,40,42,47,46,39,39,39,40,47,56,58,59,58,56,55,52,49,46,42,41,40,40,41,44,46,45,39,39,39,39,47,56,60,60,57,55,53,50,46,43,40,40,40,40,40,43,45,45,39,39,39,40,46,55,59,59,56,54,52,49,44,40,40,40,40,40,41,42,44,45,39,39,39,40,47,55,60,60,56,54,51,47,43,40,40,40,41,40,39,40,41,41,39,39,39,41,48,57,62,60,57,54,50,46,41,39,40,41,41,40,40,40,40,40,39,39,39,41,49,59,64,60,55,52,49,45,41,41,40,40,41,40,40,40,40,40,39,39,39,41,51,61,62,58,53,49,47,44,41,39,40,40,40,40,40,40,41,42,39,39,39,41,52,61,61,54,47,47,46,43,41,40,40,40,40,40,40,40,47,47,39,39,39,41,53,60,56,48,45,44,45,43,40,40,40,40,40,40,40,47,47,47,39,39,39,43,50,54,50,46,44,43,43,41,40,40,40,40,40,42,44,47,48,48,39,39,39,42,45,46,46,43,43,44,44,41,40,40,41,42,42,43,44,46,48,49,39,39,39,42,43,43,43,43,43,44,43,41,42,44,43,42,42,43,44,47,50,51,39,40,42,43,44,45,45,44,43,44,44,44,44,43,43,43,43,44,45,48,52,53,42,42,43,44,46,46,44,44,47,45,43,43,43,43,43,43,44,43,46,51,55,55,40,40,41,43,43,42,41,41,42,43,43,44,45,44,43,44,44,45,48,53,56,57,39,39,39,39,39,40,40,41,41,41,41,42,43,44,45,45,45,46,47,52,56,56,39,39,39,39,40,41,40,40,40,41,41,41,41,41,42,44,45,46,48,50,54,54,39,39,39,40,42,42,40,40,43,44,43,42,41,42,44,44,45,46,47,48,53,53,39,39,40,44,44,43,44,44,44,45,43,42,41,42,43,44,45,45,46,48,52,53,39,39,39,43,44,45,46,46,46,46,43,40,40,42,43,43,44,45,46,48,52,53,39,39,39,39,42,42,42,44,46,46,44,41,41,41,42,43,43,45,48,49,52,54,39,39,39,39,39,39,41,43,46,47,45,42,40,41,41,41,43,44,45,48,51,52,39,39,39,39,39,39,40,43,45,46,45,43,40,41,41,41,43,43,45,47,51,52],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
