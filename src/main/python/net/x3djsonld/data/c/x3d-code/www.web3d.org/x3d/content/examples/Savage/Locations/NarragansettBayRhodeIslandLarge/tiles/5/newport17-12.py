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
        texture=ImageTexture(url=['../../images/5/newport17-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[67,62,52,43,39,36,39,41,42,39,37,39,39,38,40,43,50,55,58,60,61,61,70,61,58,56,48,39,36,36,42,44,40,40,39,41,40,40,43,50,54,57,59,59,65,66,68,62,54,48,44,36,40,40,40,40,38,39,39,43,43,47,53,52,52,53,69,69,68,62,61,55,51,45,36,41,36,39,38,38,41,43,44,43,49,49,51,51,70,71,67,68,66,58,50,47,42,37,37,38,36,38,41,44,46,45,42,46,49,49,66,73,74,71,69,62,54,44,39,36,39,39,39,37,39,41,44,46,47,45,44,44,62,70,75,75,73,70,63,51,41,35,36,38,37,40,40,43,43,42,48,45,43,43,61,70,74,76,75,72,65,55,45,40,36,40,39,38,41,36,43,44,43,42,39,38,61,68,77,76,73,69,66,58,52,42,36,39,42,37,37,40,43,46,45,42,35,35,62,67,74,78,77,73,63,55,51,46,41,38,41,40,42,44,44,44,40,41,41,40,60,67,72,77,75,70,68,63,58,49,44,39,41,42,45,46,44,44,43,37,40,42,61,70,75,76,75,73,66,66,62,53,46,41,42,44,45,50,47,47,46,49,46,46,57,67,74,76,79,72,68,64,59,54,47,42,42,46,46,51,53,51,51,51,52,52,54,60,68,75,77,73,70,60,50,51,47,42,41,45,50,53,57,50,48,50,55,55,52,53,61,68,70,69,68,55,49,47,46,42,44,46,49,47,47,52,51,50,50,51,48,50,55,60,62,61,58,54,49,44,43,41,43,46,47,49,49,52,53,50,50,51,47,47,48,51,52,50,50,48,45,41,42,44,47,47,49,52,52,51,56,54,49,49,46,46,44,44,45,46,45,45,43,44,43,46,46,49,51,53,56,52,55,57,52,51,47,44,40,40,40,40,40,40,41,46,47,50,48,51,54,55,55,56,54,56,57,56,44,46,46,44,46,47,40,41,47,47,49,49,52,50,55,55,56,55,55,55,55,55,48,51,49,50,47,47,46,47,48,52,53,52,51,54,54,53,53,55,53,53,53,53,52,51,52,47,46,47,49,51,53,55,53,53,54,52,49,50,50,55,47,43,44,45,48,52,52,50,50,52,53,53,55,54,53,55,54,52,53,49,46,46,51,49,48,49,48,51,52,50,51,53,53,53,55,54,51,56,55,53,53,51,47,46,51,50,50,50],
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
