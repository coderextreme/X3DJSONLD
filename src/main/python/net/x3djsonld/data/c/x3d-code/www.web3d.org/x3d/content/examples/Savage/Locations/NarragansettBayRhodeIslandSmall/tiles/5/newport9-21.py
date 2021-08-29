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
        texture=ImageTexture(url=['../../images/5/newport9-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[33,32,32,30,30,34,37,40,40,42,44,42,41,43,48,49,49,48,49,52,53,53,54,31,33,33,33,33,34,35,35,38,40,40,39,41,43,45,46,47,49,51,55,55,53,54,31,32,35,36,36,35,35,36,39,39,39,40,45,46,44,45,48,50,51,54,55,54,55,34,36,38,38,36,36,37,39,41,41,41,44,47,47,46,45,49,51,53,53,53,54,55,35,36,36,37,37,37,37,37,38,40,41,44,46,46,46,47,47,49,51,51,53,54,53,34,34,35,36,37,37,38,38,39,41,42,43,45,44,45,48,49,50,51,52,53,54,54,33,34,35,36,37,39,41,42,42,43,42,41,40,43,45,47,48,50,52,53,52,53,55,33,34,35,36,37,39,39,39,41,42,42,43,44,46,48,47,47,50,52,53,54,53,53,35,36,36,36,38,39,39,39,41,41,43,44,45,47,48,49,50,51,53,54,53,54,55,37,36,36,37,38,39,39,41,41,41,42,44,46,49,49,49,51,52,53,53,52,53,55,37,35,35,37,38,38,40,41,40,40,41,43,46,49,49,49,51,53,54,52,52,53,54,38,37,35,37,38,38,40,41,40,41,42,44,47,47,48,48,51,52,53,55,55,55,56,37,36,36,37,37,38,40,40,41,43,43,45,47,47,48,48,50,52,53,55,56,56,57,37,37,38,37,36,38,40,40,41,42,43,44,46,47,50,50,51,52,54,55,55,55,57,36,37,38,38,41,43,44,41,42,43,43,41,43,46,50,51,49,50,53,57,58,56,55,35,36,38,39,40,42,43,40,41,42,43,44,44,45,50,51,51,49,51,56,58,58,57,33,34,35,35,37,38,40,40,41,43,45,48,47,48,52,54,55,53,54,58,59,59,59,37,36,36,36,38,38,41,45,47,47,47,48,48,49,54,59,61,58,59,60,61,60,60,39,40,40,40,40,40,40,42,44,45,47,47,47,49,52,56,57,57,58,59,60,61,61,42,44,42,42,41,40,39,40,41,43,46,46,47,51,53,55,56,57,58,58,58,62,62,42,43,42,43,44,43,42,44,44,46,45,49,49,49,52,54,57,57,59,58,59,62,63,44,45,43,43,43,41,38,43,45,47,49,50,51,51,51,53,55,57,57,57,60,62,61,45,45,43,42,41,40,38,43,46,49,50,52,51,51,52,52,54,57,57,58,61,61,61],
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
