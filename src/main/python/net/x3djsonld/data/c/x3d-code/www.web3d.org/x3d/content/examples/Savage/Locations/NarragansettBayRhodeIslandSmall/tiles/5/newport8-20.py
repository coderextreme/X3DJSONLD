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
        texture=ImageTexture(url=['../../images/5/newport8-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[40,41,41,41,42,42,42,41,40,40,38,37,35,34,31,30,28,26,24,23,21,21,20,39,40,42,44,45,45,43,40,39,39,37,36,34,32,31,29,27,26,26,25,23,23,20,39,39,42,45,46,46,43,41,39,39,37,35,34,32,31,29,27,27,28,26,25,24,21,40,40,42,46,45,43,42,42,41,40,38,35,34,33,31,29,29,28,27,26,25,24,22,43,42,43,44,43,41,40,40,41,40,37,35,34,34,32,31,30,29,26,26,25,24,23,45,44,44,44,43,42,41,40,39,39,38,37,34,32,32,32,31,30,29,28,27,26,24,46,44,44,43,43,43,43,42,39,39,39,39,35,33,32,32,31,29,30,28,26,25,23,46,45,45,44,43,44,43,42,41,39,37,36,35,33,33,34,33,31,30,28,27,24,24,46,46,47,45,44,43,43,41,40,38,36,37,37,36,34,33,32,31,31,30,29,27,26,49,48,47,46,45,43,43,41,39,37,38,38,39,38,36,33,32,31,30,29,28,28,27,53,50,48,46,46,45,44,42,40,38,39,40,39,38,35,33,32,31,31,31,30,29,30,52,51,49,47,46,44,43,41,40,40,41,41,41,40,37,34,34,33,32,31,30,30,31,49,49,48,48,47,45,44,43,42,41,41,41,41,40,38,35,34,33,32,32,31,30,34,48,48,49,48,47,46,45,44,44,43,42,41,40,39,38,35,35,33,34,33,33,32,34,48,48,49,48,47,46,46,46,45,45,43,42,40,38,39,38,36,34,33,33,32,32,30,51,50,49,48,48,47,46,46,45,45,43,42,40,39,39,38,37,36,33,32,31,32,31,53,52,51,50,49,45,45,45,45,44,43,42,41,40,39,38,38,37,35,32,32,32,32,53,51,50,49,47,43,43,44,46,46,45,44,43,41,40,38,37,34,35,33,33,33,33,53,53,49,49,49,49,47,45,46,46,45,44,43,42,40,38,36,34,34,34,35,34,34,52,53,49,51,52,54,52,50,47,44,44,42,41,41,39,38,36,36,35,34,34,33,32,50,51,49,50,53,54,54,54,51,45,42,40,39,41,42,42,39,37,36,35,34,34,34,53,52,50,52,52,51,52,52,50,46,43,41,40,43,45,45,41,40,36,34,33,33,33,55,54,52,52,51,49,51,50,49,47,44,43,43,45,46,45,43,41,36,33,33,33,33],
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
