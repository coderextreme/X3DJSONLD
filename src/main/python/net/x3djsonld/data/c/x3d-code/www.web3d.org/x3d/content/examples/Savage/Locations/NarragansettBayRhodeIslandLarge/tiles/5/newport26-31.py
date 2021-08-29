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
        texture=ImageTexture(url=['../../images/5/newport26-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[62,67,69,70,73,75,72,66,61,55,47,42,39,39,39,39,39,39,39,41,45,46,67,70,72,73,76,74,71,67,63,57,50,45,40,39,39,39,39,39,39,43,43,44,71,72,71,73,76,74,71,69,65,62,56,51,43,40,39,39,39,40,40,41,42,43,69,70,69,69,71,71,69,68,66,63,59,52,48,41,39,39,39,39,42,44,44,44,62,63,64,66,65,67,69,66,65,62,62,55,50,42,38,39,39,40,41,43,45,45,59,58,61,62,61,62,67,68,63,59,57,54,46,42,39,40,40,40,40,41,44,44,58,58,58,59,60,65,66,66,65,60,54,51,47,41,39,40,40,41,41,41,44,44,58,59,59,60,63,66,66,66,64,61,57,52,49,43,40,40,41,42,42,44,51,51,59,59,61,62,65,67,66,65,66,63,57,55,49,47,41,41,41,43,45,46,48,48,62,62,62,64,67,68,68,67,65,63,59,57,54,48,43,42,45,45,46,49,50,50,63,63,63,66,68,67,67,67,67,62,58,57,55,50,46,46,47,48,50,52,52,52,62,63,64,67,66,66,66,65,62,59,59,55,55,52,49,48,48,51,53,54,54,54,62,63,63,63,62,64,64,64,62,59,56,55,54,52,49,47,47,49,54,55,51,51,58,59,59,59,63,64,65,65,64,61,56,53,51,49,48,48,50,52,52,51,50,50,57,56,56,57,60,63,66,66,65,61,53,52,50,47,49,48,50,55,54,53,51,51,55,55,55,56,56,58,61,62,61,57,54,50,47,48,49,51,53,56,57,54,51,51,54,54,55,55,56,55,54,54,54,55,56,49,47,51,49,50,55,57,57,55,50,50,52,52,54,55,55,55,54,53,52,54,54,50,47,49,51,53,58,61,59,55,52,52,47,53,56,57,57,57,56,53,52,50,48,46,49,51,53,58,60,62,62,59,54,53,48,54,57,59,58,57,56,54,53,50,46,43,44,47,53,61,65,64,61,58,55,55,49,52,57,58,58,57,56,55,54,52,47,44,43,47,55,63,66,66,63,60,58,58,45,50,54,56,57,56,54,53,53,53,42,46,49,53,60,67,70,67,65,62,62,63,43,47,50,52,53,53,52,49,45,41,46,49,53,56,63,70,72,71,69,68,67,67,42,46,49,51,52,52,51,48,44,40,47,50,52,57,62,69,73,71,70,70,69,69],
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
