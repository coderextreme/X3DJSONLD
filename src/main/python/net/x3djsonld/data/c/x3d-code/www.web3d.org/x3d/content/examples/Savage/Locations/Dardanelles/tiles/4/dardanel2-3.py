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
    meta(content='dardanel2-3.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel2-3.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel2-3.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,26.983082655714444,0.0),geoSystem=["GD"],height=[114,185,242,137,137,106,139,230,196,38,182,344,338,305,306,318,403,226,385,332,321,355,110,201,320,167,136,108,142,164,276,157,35,304,237,311,359,181,295,105,265,524,280,220,123,256,109,170,109,38,48,89,260,240,142,75,161,265,226,188,87,290,353,371,435,388,243,242,162,66,87,72,34,38,114,118,217,27,71,65,110,71,160,240,277,219,317,352,366,281,257,103,58,40,30,27,54,111,81,27,32,89,74,63,112,141,111,225,279,328,284,286,171,100,92,38,32,25,23,32,21,20,27,60,30,53,62,136,86,100,190,231,411,216,144,97,56,46,47,45,46,35,17,18,22,21,29,35,63,88,95,46,100,117,225,146,91,86,85,70,56,100,52,44,42,14,14,29,47,87,111,45,26,24,21,18,106,102,94,136,82,54,62,78,101,32,3,30,12,11,56,67,62,58,45,8,3,0,135,92,90,35,79,40,28,29,21,26,4,4,9,9,9,41,35,11,2,1,0,-6,166,153,112,46,61,88,52,48,28,16,10,11,7,7,6,3,6,0,0,0,0,-2,106,114,84,79,76,157,133,92,51,34,36,13,7,3,2,1,0,-1,-4,-2,-1,-1,102,86,25,84,29,16,79,149,69,62,45,28,32,35,-2,-4,0,-1,0,-2,-1,-2,0,5,1,63,27,59,65,126,149,129,89,87,73,40,-2,-1,0,0,-2,-3,-3,-2,3,3,1,0,69,100,138,138,80,87,122,146,85,40,24,-1,-3,-2,-3,-2,-5,1,2,1,1,5,2,73,142,115,33,51,44,42,83,124,84,1,-1,-1,-1,-3,-3,0,1,2,4,3,1,2,0,0,-1,0,3,101,140,78,-4,1,-1,-4,-2,-2,-5,-3,1,3,3,5,1,1,0,5,2,-1,-5,0,4,0,0,0,-2,0,-5,-3,-1,-1,5,2,3,3,1,3,1,3,0,2,0,4,1,4,0,-1,0,-2,0,-3,-2,-1,2,4,2,1,2,2,3,1,1,3,2,2,1,0,1,2,1,0,-2,0,-3,-1,1,2,0,2,2,2,0,3,0,2,-1,1,3,2,-1,0,0,0,0,-2,-1,-2,0,2,0,3,1,1,1,4,0,0,-2,1,4,0,0,0,0,0,0,0,0,-1],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel2-3.py")
