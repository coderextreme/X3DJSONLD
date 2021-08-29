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
        texture=ImageTexture(url=['../../images/5/newport14-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[48,48,48,50,58,64,62,61,63,65,64,63,63,66,68,70,72,72,73,74,75,77,77,48,48,48,51,57,62,62,60,62,64,64,63,63,66,67,70,72,75,76,74,75,75,76,48,48,48,52,56,57,59,59,58,61,63,63,65,66,68,71,74,74,75,74,75,75,78,54,54,49,49,50,54,56,56,56,59,62,64,66,67,70,71,71,71,71,74,77,80,83,50,54,56,54,53,56,55,57,57,59,63,63,65,66,68,68,68,68,69,76,78,83,86,48,48,48,50,55,57,57,58,61,62,62,61,62,64,67,67,68,68,70,76,78,78,81,48,48,48,50,55,56,57,58,61,61,60,60,61,65,66,67,69,70,73,75,77,76,76,48,48,48,49,54,55,57,57,58,58,58,62,65,65,65,67,69,69,70,71,72,73,74,48,48,48,48,51,54,54,53,54,54,57,62,65,65,64,65,66,66,68,67,69,70,71,48,48,48,48,51,55,53,53,54,55,57,60,63,63,63,64,64,65,65,66,68,68,67,48,48,48,48,50,52,54,57,58,57,57,59,61,61,62,63,62,63,64,65,65,65,63,48,48,48,48,51,54,57,61,61,58,58,60,60,59,59,57,54,54,58,62,61,63,63,48,48,48,48,49,53,57,59,60,59,59,61,59,54,54,53,53,53,53,54,56,59,59,48,48,48,48,48,51,54,57,59,59,57,56,55,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,52,55,56,58,58,59,56,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,53,56,57,60,60,61,56,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,52,56,56,58,59,60,55,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,52,56,55,56,58,59,55,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,51,56,57,56,56,57,54,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,49,52,55,55,55,56,54,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,48,49,54,56,56,58,55,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,48,49,55,57,57,59,55,53,53,53,53,53,53,53,53,53,53,53,48,48,48,48,48,48,50,55,56,57,59,55,53,53,53,53,53,53,53,53,53,53,53],
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
