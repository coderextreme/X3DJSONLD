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
        texture=ImageTexture(url=['../../images/5/newport12-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[39,40,40,39,38,38,38,39,39,40,39,39,38,36,36,38,42,43,43,45,45,46,47,40,40,40,39,37,37,37,37,37,38,38,38,38,37,38,39,39,41,43,45,45,44,46,42,41,41,39,38,37,37,36,37,38,36,37,37,37,39,40,40,42,42,42,42,45,46,45,43,41,39,39,39,38,37,38,38,37,36,36,37,39,39,41,41,41,42,44,47,48,46,44,42,40,40,41,41,38,38,37,36,36,36,38,39,40,41,41,42,45,46,46,48,45,44,43,42,42,42,40,39,38,38,37,37,38,38,39,40,41,41,42,44,45,46,45,47,47,44,42,42,41,40,40,39,38,38,38,38,38,39,39,39,40,41,44,46,47,47,48,47,44,43,42,42,41,40,39,39,40,38,38,38,38,40,40,40,42,44,45,45,50,46,46,45,45,43,41,41,41,40,40,39,39,40,40,41,42,42,42,43,43,43,45,47,46,47,47,44,42,42,42,42,40,41,40,41,42,41,40,42,44,44,45,45,43,44,45,46,46,48,45,43,43,43,42,41,42,41,40,41,40,39,41,45,48,47,45,45,44,44,48,45,45,45,43,42,41,41,42,42,41,40,42,44,43,44,45,45,46,44,44,44,45,48,44,45,46,44,42,41,41,42,41,41,41,42,43,42,42,42,42,44,44,46,47,48,48,46,47,46,44,43,43,41,42,41,42,41,42,42,41,41,42,43,44,45,50,50,51,49,47,47,47,44,43,43,42,42,41,42,44,43,42,43,44,44,44,45,47,51,51,50,50,48,47,47,46,45,44,44,46,46,44,44,43,44,44,44,45,44,44,47,50,50,51,50,48,45,46,48,46,44,44,46,45,45,44,44,44,44,44,45,44,44,46,48,50,53,49,49,47,48,50,49,45,43,43,41,42,44,44,44,45,44,47,46,44,44,47,50,54,50,50,48,47,48,46,46,45,44,44,45,46,44,45,46,45,47,49,47,46,47,48,50,52,51,49,46,47,46,46,46,46,48,47,45,44,46,46,45,46,50,50,49,50,49,48,51,49,49,48,49,48,45,44,44,45,46,45,45,46,45,45,47,49,51,50,51,52,50,52,49,49,48,48,48,46,46,46,47,45,44,45,45,46,48,50,50,50,49,50,51,51,52,50,49,48,47,48,46,48,48,48,46,45,46,45,47,49,51,50,50,50,50,51,51],
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
