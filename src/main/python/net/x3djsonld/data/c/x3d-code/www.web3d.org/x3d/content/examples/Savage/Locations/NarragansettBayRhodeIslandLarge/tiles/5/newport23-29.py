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
        texture=ImageTexture(url=['../../images/5/newport23-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,58,60,64,70,72,69,65,64,62,59,55,53,56,63,69,67,64,61,55,50,49,54,57,57,62,68,70,65,62,60,59,57,51,51,54,61,68,67,63,57,51,45,45,53,54,56,61,64,64,61,60,58,55,51,49,49,53,60,66,63,58,51,46,43,42,55,53,55,58,60,59,57,57,56,53,48,46,47,53,61,63,59,51,45,43,39,39,58,56,53,55,55,55,54,53,52,48,44,43,46,50,55,50,45,44,41,39,39,39,58,59,53,53,53,52,51,49,47,45,43,44,44,46,44,45,43,40,39,39,39,39,56,55,54,54,53,51,50,47,46,43,43,43,43,45,44,45,42,39,39,39,39,39,53,52,52,52,53,53,50,48,46,44,43,44,44,43,43,42,39,39,39,39,39,39,53,52,53,53,55,56,54,51,49,47,46,44,43,41,41,40,39,39,39,39,39,39,56,55,56,57,59,58,56,53,50,49,48,46,45,44,42,41,40,40,39,39,39,39,58,59,60,61,62,61,59,56,54,51,50,47,45,43,41,42,41,39,39,39,39,39,59,62,62,64,64,63,62,60,56,53,50,48,45,45,43,41,41,39,39,39,39,39,59,62,66,67,67,65,63,61,58,57,51,48,46,44,43,42,41,41,39,39,39,39,58,61,68,70,70,70,61,59,58,56,52,48,46,43,42,41,42,41,40,39,39,39,60,64,67,71,71,68,62,56,52,51,50,48,44,43,42,41,41,41,44,41,39,39,61,65,68,70,69,66,59,56,50,48,47,44,43,43,42,41,40,41,44,41,43,44,62,66,69,70,66,62,59,57,50,46,47,45,45,44,43,40,41,41,42,41,44,44,62,66,69,69,65,57,56,55,51,47,44,45,44,44,42,41,40,40,40,41,41,41,66,67,67,65,60,55,52,51,49,47,44,43,43,42,41,40,40,40,41,42,41,41,67,66,63,60,58,56,54,51,49,46,44,42,41,42,41,41,40,40,40,42,42,42,67,65,62,59,59,57,55,54,50,46,44,42,40,42,40,39,40,40,41,42,42,42,67,65,63,61,60,58,59,58,52,47,44,40,38,38,39,40,42,41,43,42,41,41,68,67,65,65,64,63,62,59,54,50,46,43,37,37,38,40,42,43,38,39,40,40,69,68,66,66,64,63,62,59,54,50,46,43,38,37,38,40,42,43,38,39,40,40],
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
