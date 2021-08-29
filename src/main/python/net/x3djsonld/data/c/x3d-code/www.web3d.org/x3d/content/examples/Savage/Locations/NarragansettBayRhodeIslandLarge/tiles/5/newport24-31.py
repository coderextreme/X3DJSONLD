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
        texture=ImageTexture(url=['../../images/5/newport24-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[39,39,39,39,39,39,40,43,45,46,45,43,40,41,41,41,43,43,45,47,51,52,39,39,39,39,39,39,40,43,44,44,44,42,41,40,41,40,40,41,43,45,50,51,39,39,39,39,39,39,39,43,44,42,41,41,41,40,40,42,42,43,43,46,50,52,39,39,39,39,39,39,39,40,41,41,41,42,40,40,40,42,42,44,45,47,52,53,39,39,39,39,39,39,39,39,39,39,40,41,40,39,39,39,40,43,46,49,52,54,39,39,39,39,39,39,39,39,39,40,39,39,39,39,39,39,39,40,44,47,53,54,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,43,46,52,53,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,43,49,51,52,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,43,46,49,50,39,39,39,39,39,39,39,39,39,39,40,41,39,39,39,39,39,39,41,45,48,48,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,41,43,47,47,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,42,43,46,47,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,41,45,45,49,50,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,43,48,50,50,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,46,50,51,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,42,47,48,39,39,40,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,41,46,47,40,42,41,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,44,47,48,40,41,43,42,41,42,40,39,39,39,39,39,39,39,39,39,39,39,40,43,48,49,39,39,39,41,43,44,43,42,39,39,39,39,39,39,39,39,39,39,39,42,49,50,39,39,39,39,40,42,45,44,39,39,39,39,39,39,39,39,39,39,40,42,46,47,40,40,40,40,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,44,45,45,41,41,41,42,41,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,41,41,41,41,41,41,40,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,41,41],
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
