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
        texture=ImageTexture(url=['../../images/5/newport13-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[51,53,53,53,52,51,52,54,55,56,56,56,56,56,54,53,53,54,52,52,53,53,54,52,52,53,53,53,51,51,53,54,56,55,56,57,57,55,54,54,55,56,56,58,58,56,53,53,55,56,55,53,52,53,54,54,54,56,57,57,56,56,56,56,57,58,58,57,53,56,56,57,56,54,54,54,54,54,53,52,54,56,57,57,57,58,57,57,57,56,54,51,57,55,56,56,54,54,54,54,54,52,52,54,55,55,55,57,58,58,56,58,58,57,54,55,55,54,56,56,55,55,55,54,53,53,56,56,55,55,55,56,56,57,56,55,56,57,56,56,54,56,57,56,54,54,54,55,57,58,57,55,54,53,54,54,54,52,52,55,58,57,57,56,56,55,54,53,52,53,56,59,57,56,54,53,53,55,54,51,50,53,57,59,57,57,57,56,55,55,54,54,55,55,55,55,55,54,54,54,54,55,55,55,55,57,58,57,56,56,55,56,56,55,56,56,55,54,54,55,55,55,54,53,55,58,58,57,59,60,58,55,53,54,56,60,59,58,57,55,53,51,52,55,56,56,55,57,56,55,57,60,59,59,57,54,55,58,60,59,58,57,56,53,49,50,55,57,57,56,55,55,53,54,57,57,61,62,59,58,58,57,58,59,58,55,50,48,48,54,57,57,56,56,56,54,53,55,56,61,61,59,57,57,56,57,58,57,53,49,48,50,54,57,56,56,57,58,57,55,55,56,57,58,57,57,56,56,58,56,55,54,53,52,54,56,57,57,55,58,59,58,56,55,54,56,57,56,57,57,55,56,56,55,55,55,56,56,55,57,56,56,58,58,56,56,55,55,57,57,55,57,57,58,57,56,55,57,58,58,56,56,56,56,57,56,56,56,56,56,56,55,55,55,55,54,56,55,55,56,57,59,60,58,58,57,57,57,57,58,58,56,55,54,52,52,55,55,54,55,55,55,56,59,58,58,58,58,58,57,58,57,57,56,54,53,50,48,52,56,56,56,55,56,55,57,59,59,58,58,59,59,60,59,57,56,56,56,53,49,50,54,56,54,54,56,58,58,57,56,58,60,60,61,60,59,58,56,56,57,58,50,48,52,54,55,55,54,56,57,58,57,56,57,61,61,61,60,59,58,56,55,57,54,48,48,51,52,53,56,56,57,57,57,58,58,57,60,61,61,60,60,59,57,55,56,50,48,48],
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
