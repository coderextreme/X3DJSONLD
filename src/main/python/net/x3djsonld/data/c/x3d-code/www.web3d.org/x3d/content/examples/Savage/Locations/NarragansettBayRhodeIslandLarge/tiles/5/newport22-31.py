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
        texture=ImageTexture(url=['../../images/5/newport22-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[59,54,49,49,49,49,49,50,56,56,54,53,52,52,52,52,52,51,51,51,51,51,59,53,49,49,49,49,49,52,56,56,53,53,52,52,52,52,51,51,51,51,50,50,58,54,49,48,49,49,51,55,56,56,53,52,52,52,52,52,52,51,51,52,52,52,55,51,49,49,49,49,53,56,56,57,55,52,52,52,52,52,52,52,52,54,52,51,51,49,49,49,49,49,55,57,58,58,56,52,52,52,52,52,52,53,54,53,51,50,50,49,49,49,49,53,56,58,59,58,56,53,52,53,52,52,52,53,54,54,52,51,48,49,56,55,54,54,56,57,58,57,56,54,53,52,52,52,52,54,55,54,51,50,46,47,51,53,53,56,56,58,59,58,56,54,53,52,52,52,52,55,56,54,49,48,46,46,47,48,50,56,56,59,61,59,58,56,53,52,52,52,54,57,57,53,47,47,46,46,46,47,48,51,56,60,59,58,56,55,54,52,52,53,55,56,56,52,47,46,46,46,46,46,46,49,56,58,57,57,56,55,54,54,55,60,59,57,55,50,49,49,46,46,46,46,46,48,56,58,57,56,56,55,54,54,56,60,64,61,54,50,51,51,46,46,46,45,46,49,56,58,59,58,56,55,55,55,57,59,61,57,52,49,49,49,46,47,46,46,48,51,56,59,60,58,56,56,55,55,57,59,59,55,51,51,48,48,46,47,46,45,48,52,56,57,60,59,56,55,55,56,58,60,58,53,49,47,47,47,47,48,46,44,44,50,55,57,59,56,55,55,55,56,59,60,56,52,48,47,45,45,48,46,44,41,43,48,55,56,57,56,55,55,55,55,56,56,53,50,49,48,46,46,49,45,41,41,41,47,55,56,56,56,55,55,55,54,54,51,48,46,48,48,47,46,48,45,41,41,41,47,56,56,56,56,55,55,55,54,52,48,47,44,44,45,44,43,47,42,40,40,42,48,56,56,56,57,56,56,55,53,50,47,46,44,43,43,43,42,46,41,40,40,44,51,57,60,58,57,57,56,54,52,48,46,45,46,45,45,42,43,43,40,39,40,44,55,60,60,59,58,57,56,53,49,46,43,41,45,44,41,45,46,40,39,39,40,46,56,60,60,58,57,56,53,51,48,44,40,40,40,40,42,47,46,40,39,39,40,46,56,60,59,58,57,56,53,50,48,44,40,40,40,40,42,47,46],
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
