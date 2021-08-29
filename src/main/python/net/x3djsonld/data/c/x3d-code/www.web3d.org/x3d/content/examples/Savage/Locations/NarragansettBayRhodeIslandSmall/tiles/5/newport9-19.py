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
        texture=ImageTexture(url=['../../images/5/newport9-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[42,43,45,48,51,53,53,53,54,55,56,58,59,60,60,58,57,56,57,57,55,54,55,42,43,46,49,53,53,53,52,53,55,57,59,61,60,60,58,58,59,58,56,54,52,55,40,43,46,50,52,51,51,51,53,56,58,60,60,59,59,60,60,59,57,55,55,54,55,38,42,44,48,49,50,50,51,53,56,59,60,60,61,62,62,61,59,59,57,56,56,57,38,42,44,47,48,50,51,53,55,56,58,59,59,61,63,63,61,60,60,58,57,56,55,37,41,44,45,48,50,52,53,54,55,56,59,60,61,62,62,61,60,58,57,56,55,53,37,40,42,44,47,50,50,51,53,54,55,58,60,61,60,60,61,60,58,57,56,55,53,38,40,41,44,48,50,48,47,51,54,57,58,60,60,60,60,59,59,58,57,56,55,53,38,39,42,45,49,50,47,47,50,54,58,58,58,58,60,60,59,58,57,57,56,54,54,37,39,42,45,49,51,50,50,52,54,56,58,57,58,59,59,58,57,57,56,55,54,54,39,40,42,44,47,49,51,52,54,54,54,56,57,58,58,60,59,57,55,54,54,54,53,39,41,42,44,46,48,51,53,53,53,54,56,58,58,59,60,58,57,56,55,54,54,54,38,41,45,45,46,48,52,54,53,53,56,58,59,59,59,57,56,57,57,56,54,54,53,38,41,43,45,48,48,50,53,55,55,56,57,58,58,57,55,54,57,58,56,54,55,55,38,41,43,47,47,47,49,53,55,56,57,57,59,61,60,59,57,57,58,57,57,56,56,40,41,44,49,49,48,49,51,53,55,59,59,61,62,62,62,62,61,60,60,59,58,57,39,40,43,46,47,47,49,52,53,57,60,60,60,60,62,63,64,65,64,63,62,60,59,41,42,44,47,47,48,48,51,53,56,60,59,60,61,63,65,66,66,65,64,63,62,61,40,42,45,48,48,49,49,51,53,56,59,60,61,63,64,65,65,67,67,66,64,64,63,41,43,45,48,49,48,49,51,55,57,58,60,61,63,65,65,66,67,70,68,65,66,65,43,44,45,47,48,49,50,52,55,56,59,59,61,63,63,63,65,67,68,67,68,66,64,45,45,45,45,48,48,50,51,53,56,60,60,61,64,65,64,65,67,68,67,68,66,65,45,46,46,45,46,48,50,51,51,55,59,60,62,65,66,66,67,67,68,67,67,66,65],
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
