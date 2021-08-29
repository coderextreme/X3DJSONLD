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
        texture=ImageTexture(url=['../../images/5/newport11-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[66,66,63,60,58,58,57,57,57,58,60,59,60,58,57,54,53,52,53,52,50,49,49,60,61,59,59,58,54,51,51,54,59,62,63,64,61,59,57,55,54,53,53,54,52,53,62,62,58,58,56,52,48,49,53,59,63,67,64,60,57,59,58,56,55,55,56,53,55,61,60,57,57,58,55,53,54,57,62,64,65,60,56,55,58,57,56,54,54,55,55,55,58,58,57,58,61,61,60,60,61,62,61,61,57,56,56,56,54,54,52,52,52,52,55,57,59,59,59,63,66,65,61,59,58,57,58,57,57,57,55,52,52,51,51,50,51,53,56,60,61,61,63,64,64,61,57,55,53,52,52,54,54,52,52,54,52,53,54,52,50,56,58,58,59,60,60,61,59,56,54,51,51,53,53,53,52,53,55,54,54,55,53,53,56,56,55,57,59,60,61,59,57,54,54,54,55,54,52,52,52,53,54,54,54,54,56,55,54,56,57,60,61,62,61,59,57,56,54,54,53,53,53,52,51,51,52,53,54,53,54,54,57,58,60,60,61,61,60,59,56,55,54,53,53,53,52,51,50,51,51,51,51,55,56,56,59,60,60,59,60,58,56,53,53,54,54,54,54,53,52,51,51,51,51,50,57,58,58,59,58,55,57,58,55,50,49,50,52,55,55,54,53,52,52,52,52,52,51,57,57,58,57,56,52,52,55,55,52,48,46,49,54,55,54,53,53,52,51,51,51,50,54,56,56,54,54,51,51,53,55,56,54,50,51,54,54,53,53,53,52,51,50,49,49,55,56,55,52,52,52,54,56,56,57,57,55,54,55,55,54,53,51,51,51,51,51,51,54,55,54,52,53,54,57,58,58,59,59,59,58,56,55,55,53,52,51,50,50,51,52,53,54,56,55,53,53,57,58,57,56,58,59,58,57,55,55,54,53,52,51,51,53,52,53,55,57,59,56,56,59,57,54,53,57,57,58,59,57,56,54,55,54,54,54,54,54,54,55,57,58,56,55,57,58,56,54,56,58,58,60,59,58,57,55,55,55,55,56,55,55,54,54,55,54,54,53,55,58,59,60,61,60,59,59,59,59,59,58,58,59,58,58,53,53,54,54,55,55,53,53,58,62,66,65,63,59,60,61,61,63,61,61,61,59,58,52,53,54,54,55,56,54,54,58,62,65,66,64,62,61,61,61,63,62,62,62,59,59],
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
