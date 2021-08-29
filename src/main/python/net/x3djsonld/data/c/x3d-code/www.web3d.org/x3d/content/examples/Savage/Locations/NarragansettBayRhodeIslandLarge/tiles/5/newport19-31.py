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
        texture=ImageTexture(url=['../../images/5/newport19-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[35,34,34,35,39,44,45,43,44,44,42,40,39,39,38,39,41,42,43,43,44,44,36,34,36,39,41,45,49,50,49,48,47,44,42,41,42,40,41,42,43,43,44,44,35,35,39,42,46,49,50,52,52,51,49,47,46,46,43,41,41,42,43,43,44,44,36,37,42,46,50,53,54,55,54,52,50,49,47,46,44,43,42,43,43,44,45,46,34,39,42,46,51,55,57,57,55,54,52,49,50,48,47,45,43,44,44,45,47,48,38,43,46,49,53,56,58,56,55,54,52,50,49,49,47,46,44,43,44,46,48,48,42,44,46,50,55,59,59,57,55,53,51,50,50,50,48,47,44,43,44,44,44,45,42,46,48,52,57,61,59,57,55,53,53,53,54,52,50,47,44,43,44,43,45,45,43,47,49,53,59,60,58,56,55,55,55,55,56,54,51,47,45,45,43,44,46,46,45,48,50,57,61,60,58,56,56,62,56,55,57,57,54,49,47,47,44,43,46,46,45,48,54,63,64,60,57,55,57,63,60,56,55,58,54,49,47,47,43,44,48,48,47,49,58,62,62,60,56,55,57,59,60,58,55,54,52,47,48,45,43,45,46,46,48,51,60,62,60,58,55,55,57,59,58,58,56,54,52,48,45,44,45,46,46,46,49,55,61,60,58,56,56,57,58,60,59,57,54,53,50,47,45,45,48,49,48,48,48,58,60,57,55,55,56,58,59,60,58,56,53,52,49,46,46,47,50,49,48,47,49,58,58,54,54,54,56,58,60,60,57,55,54,51,49,46,47,49,49,47,47,47,49,56,54,52,52,53,57,59,61,59,56,54,52,50,47,46,49,51,49,47,45,45,50,55,52,52,52,53,56,59,60,58,56,54,53,49,46,46,49,51,50,47,44,44,55,55,52,52,52,53,55,58,58,57,56,54,52,47,46,48,52,52,50,47,44,43,56,53,52,52,52,54,57,58,56,55,55,54,50,46,46,48,51,50,48,45,41,41,57,52,52,52,53,55,57,57,56,55,54,52,49,46,46,47,49,48,47,43,40,39,55,52,52,53,54,55,56,56,56,55,54,53,47,46,46,47,48,48,46,43,40,39,54,52,53,54,56,57,56,56,55,54,54,52,47,47,48,47,51,49,47,43,41,41,54,52,53,54,57,57,57,56,55,54,54,51,48,47,49,48,51,49,47,43,41,41],
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
