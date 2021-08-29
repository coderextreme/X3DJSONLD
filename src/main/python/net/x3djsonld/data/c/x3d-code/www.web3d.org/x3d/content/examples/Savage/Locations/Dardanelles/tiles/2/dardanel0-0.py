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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-0.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/2/dardanel0-0.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_2_00',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(39.79722229877732,26.016671915304816,94618.35388661711),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(39.79722229877732,26.016671915304816,0.0),child1Url=['../../tiles/3/dardanel0-0.x3d'],child2Url=['../../tiles/3/dardanel0-1.x3d'],range=113542.02,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/2/dardanel0-0.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,25.5334665451,0.0),geoSystem=["GD"],height=[1,1,0,1,1,1,0,0,0,1,0,0,1,2,0,0,1,1,0,1,0,1,1,0,1,0,0,0,0,1,0,0,2,0,219,186,4,0,0,0,4,0,1,0,0,1,1,0,1,1,0,2,0,0,0,0,232,222,314,269,91,134,32,1,4,1,0,0,0,0,1,0,0,0,0,1,2,2,75,76,107,252,321,270,332,263,197,151,1,1,0,0,1,1,0,0,0,0,0,1,6,11,187,377,422,380,283,426,436,454,0,0,0,1,1,2,2,1,0,1,0,1,1,56,218,469,477,404,330,321,306,316,0,1,0,1,2,1,1,0,1,2,1,1,2,3,427,426,295,192,189,263,223,219,0,0,0,1,0,2,1,1,0,1,1,1,1,1,166,302,388,312,97,147,257,248,0,0,1,1,2,2,1,2,1,1,1,0,2,5,145,286,339,117,158,108,185,180,0,0,0,0,2,2,2,2,1,1,2,4,1,52,132,170,90,71,136,90,107,112,0,0,0,0,4,1,4,0,2,1,0,42,2,14,81,196,151,46,73,77,68,67,0,0,0,1,0,2,3,2,1,14,43,74,0,4,47,96,122,115,182,168,124,95,0,1,0,0,0,0,0,1,2,1,3,3,2,27,67,46,194,213,321,313,243,213,1,0,1,0,0,0,0,2,2,2,3,2,3,4,34,21,51,202,314,428,330,328,1,0,0,0,0,0,0,1,2,1,2,1,3,4,13,51,91,187,202,383,463,454,-1,0,0,0,0,0,0,0,1,3,4,4,4,2,7,46,67,89,271,388,395,386,0,0,0,-1,0,1,1,1,0,1,2,3,2,3,5,3,2,268,340,324,318,344,-1,0,-1,0,1,1,1,1,0,0,3,2,4,2,9,3,5,2,161,64,243,276,0,0,0,0,0,1,3,1,1,2,2,1,5,6,81,157,63,5,36,209,161,137,0,0,0,126,43,113,162,193,88,10,2,0,6,6,1,98,171,7,3,36,58,53,0,0,1,1,476,335,269,102,259,1,2,0,2,3,2,38,137,86,3,74,80,90,0,0,0,1,469,335,283,100,267,1,1,0,1,3,2,35,143,74,2,71,77,86],normalPerVertex=False,xDimension=22,xSpacing=0.046019558,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel0-0.py")
