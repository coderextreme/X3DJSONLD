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
        texture=ImageTexture(url=['../../images/5/newport24-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,53,39,42,44,47,48,53,57,64,63,62,66,65,61,58,57,57,57,56,55,54,57,56,39,40,43,46,48,50,58,67,70,59,59,58,58,57,56,56,57,54,51,50,60,55,46,41,43,46,45,48,54,67,70,62,54,48,50,51,52,52,53,54,53,52,60,60,60,44,39,39,40,44,51,66,67,64,62,55,47,46,45,48,50,52,48,46,60,63,55,41,39,39,39,41,49,61,62,60,57,51,45,45,44,46,48,51,44,42,60,57,52,44,39,39,39,42,47,52,55,53,49,45,44,43,42,42,43,48,47,47,55,48,44,43,40,39,39,43,49,47,49,48,47,45,44,43,42,41,37,39,42,43,51,45,41,41,39,39,39,41,48,46,45,46,46,45,43,42,42,39,42,39,36,36,51,45,42,42,39,39,41,39,37,40,39,41,44,44,40,42,42,43,48,46,47,47,49,45,42,42,40,39,42,43,35,36,37,38,43,42,42,42,45,45,48,51,51,51,48,47,46,43,39,40,47,51,40,33,35,42,43,42,42,43,47,49,53,57,55,55,49,48,47,48,43,46,51,52,39,33,35,40,43,44,44,48,52,54,61,61,60,59,50,50,50,49,49,49,50,44,39,32,38,42,44,47,51,52,54,60,64,63,63,63,51,51,51,52,54,53,50,49,38,36,44,46,47,51,57,57,58,64,69,67,67,68,53,53,53,53,54,53,50,48,34,41,48,51,53,57,61,62,66,69,71,71,69,68,56,55,54,53,53,52,51,38,33,45,48,51,56,60,64,68,70,69,70,68,66,67,63,63,57,53,52,50,49,39,33,43,47,54,60,65,68,76,77,74,74,72,69,69,71,68,60,55,52,50,46,39,31,37,46,55,62,67,73,79,78,77,76,78,77,77,77,72,65,59,53,48,42,40,33,26,41,52,63,70,76,78,79,78,76,72,70,70,79,70,63,57,50,45,40,38,36,26,38,51,61,68,74,77,78,76,74,70,65,64,70,65,64,55,45,40,37,35,34,26,32,45,55,64,70,73,73,72,69,65,61,61,65,59,53,48,41,38,36,36,38,34,25,43,50,59,65,67,65,62,58,54,48,47,64,58,55,45,41,37,33,33,36,36,31,24,40,53,57,58,54,50,46,40,34,33,63,57,53,44,40,37,33,32,34,35,32,24,35,51,56,56,52,48,45,39,32,31],
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
