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
    GeoViewpoint(description='GeoViewpoint_3_46',geoSystem=['GDC'],position=(26.457754674260052,57.084809373449744,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.457754674260052,57.084809373449744,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small8-12.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small8-13.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small9-12.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small9-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small4-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[2,2,2,1,2,2,1,2,2,1,1,2,2,1,2,6,8,13,18,19,22,22,1,1,-1,2,1,0,0,-1,4,2,1,1,2,1,4,5,7,12,16,20,22,26,0,0,-1,2,2,1,0,0,0,4,3,1,1,3,7,7,11,13,18,19,19,20,0,-1,2,2,0,0,0,0,0,2,0,2,2,4,3,7,8,10,15,18,21,19,2,2,0,1,1,3,3,2,3,2,2,2,1,2,5,7,9,11,13,17,19,17,1,1,0,1,1,1,2,3,1,2,1,6,5,4,5,6,9,10,12,16,21,19,1,0,1,3,0,0,2,2,2,4,3,3,3,8,5,7,8,10,12,18,23,23,1,1,0,1,1,0,2,4,0,4,1,6,3,4,8,8,11,12,11,22,24,25,0,0,1,2,0,2,2,1,4,2,10,3,4,6,7,9,14,16,18,19,23,26,2,1,1,2,1,2,3,0,3,3,12,4,4,4,8,10,12,13,17,21,41,55,2,2,3,2,2,3,4,3,2,3,11,5,6,7,8,8,10,15,20,55,47,88,3,1,2,2,0,1,1,1,3,2,6,4,3,9,8,3,12,17,25,33,51,38,2,1,1,4,3,1,1,1,1,2,4,7,5,5,6,9,15,25,48,60,69,45,2,4,1,2,3,2,1,0,2,3,1,2,2,7,5,11,21,38,66,165,53,53,2,1,1,3,0,3,2,2,1,2,5,0,4,3,11,15,31,68,154,267,69,100,1,2,2,1,2,3,1,4,0,5,2,3,7,9,13,22,44,85,128,117,45,43,2,0,1,1,3,3,2,1,3,4,1,4,7,12,15,29,52,98,195,103,45,45,2,0,2,1,2,2,1,1,2,3,2,5,15,18,20,31,70,154,332,67,48,50,0,2,1,2,1,2,0,2,3,4,5,4,12,17,24,44,98,183,138,56,56,57,2,1,1,0,2,4,3,3,1,2,5,6,13,18,26,43,124,314,67,56,65,66,2,4,2,0,2,2,2,1,3,3,2,10,14,20,46,77,133,156,69,72,88,100,1,4,3,0,2,1,3,2,2,3,3,9,14,22,48,73,137,154,68,73,89,101],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
