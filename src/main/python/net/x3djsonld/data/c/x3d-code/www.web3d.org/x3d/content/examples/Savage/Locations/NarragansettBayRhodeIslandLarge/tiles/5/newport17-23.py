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
        texture=ImageTexture(url=['../../images/5/newport17-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[38,39,46,51,52,52,50,53,52,55,60,60,59,63,64,61,58,55,48,48,51,51,42,43,49,53,53,52,52,52,55,57,60,59,60,62,63,61,58,56,51,50,49,50,48,49,52,51,50,50,50,54,52,55,56,72,76,58,61,57,53,51,53,50,52,53,45,53,53,53,52,51,50,49,53,57,63,59,60,58,50,62,61,57,54,54,50,48,44,49,51,50,50,51,50,48,51,57,56,58,58,62,60,60,57,53,51,55,52,52,45,47,48,49,51,48,45,50,52,55,57,56,57,59,58,51,54,53,54,54,52,52,45,48,49,49,46,45,47,49,50,51,52,54,55,60,61,56,53,53,51,51,53,53,44,45,44,45,46,47,41,49,51,51,57,55,57,55,54,49,54,53,51,49,52,52,42,43,44,45,45,46,46,45,50,51,52,53,55,53,58,59,56,54,50,52,56,55,37,41,44,45,45,45,48,47,50,51,52,54,55,55,58,56,60,57,56,55,56,57,39,37,38,43,45,49,55,49,54,53,54,54,54,57,57,64,64,64,63,62,59,60,38,36,39,42,46,52,51,55,53,59,54,54,58,59,59,59,64,68,68,66,67,66,38,38,39,42,46,53,54,56,53,55,54,52,55,61,61,69,68,71,70,75,70,69,41,41,40,46,44,47,51,58,56,51,55,56,54,58,65,66,72,74,77,76,74,74,41,42,41,44,49,52,51,53,54,56,56,57,55,59,64,67,70,72,80,82,81,82,46,43,44,44,50,52,53,51,59,51,53,54,53,57,61,66,72,79,83,81,85,85,47,44,45,49,48,50,56,55,51,56,52,53,53,55,63,67,71,76,80,81,86,86,48,46,49,50,51,53,51,55,56,54,54,54,55,60,60,64,69,72,77,81,83,84,46,49,51,54,56,57,54,54,54,57,57,56,52,55,55,64,63,71,74,77,83,84,46,49,56,55,56,55,56,54,58,54,54,52,58,56,56,57,65,69,72,73,81,82,49,53,54,56,57,56,56,56,54,55,55,57,58,50,52,56,65,65,74,75,78,79,49,50,51,58,59,60,57,58,47,57,56,53,56,53,56,58,62,71,70,74,78,78,52,50,53,52,56,56,55,55,56,57,58,56,55,58,56,58,65,69,71,75,79,78,52,50,53,50,56,55,57,55,57,56,57,56,55,59,56,59,65,68,71,76,79,79],
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
