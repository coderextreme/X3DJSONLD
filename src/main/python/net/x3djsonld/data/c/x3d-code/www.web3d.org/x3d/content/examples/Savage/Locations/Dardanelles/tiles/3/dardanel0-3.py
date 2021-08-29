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
    meta(content='dardanel0-3.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/3/dardanel0-3.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_03',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(39.79722229877732,27.22468534081685,67800.45584024992),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(39.79722229877732,27.22468534081685,0.0),child1Url=['../../tiles/4/dardanel0-3.x3d'],child2Url=['../../tiles/4/dardanel1-3.x3d'],range=81360.55,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/3/dardanel0-3.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.983082655714444,0.0),geoSystem=["GD"],height=[235,128,270,382,381,303,641,905,926,821,982,546,436,550,363,564,571,348,441,621,523,497,86,91,297,514,521,575,754,678,480,762,657,574,816,554,384,618,409,324,311,386,300,346,23,17,33,73,283,413,423,422,382,569,609,842,647,638,521,454,328,418,425,393,401,352,5,10,15,22,41,109,256,259,266,318,455,575,454,658,655,482,492,257,338,341,368,351,3,10,18,30,33,104,64,62,186,144,154,346,231,423,568,491,322,363,252,243,234,238,74,99,152,98,144,246,275,183,195,318,540,426,418,550,513,538,461,460,464,279,240,221,380,449,183,185,189,324,339,631,371,442,686,548,669,717,630,883,657,462,469,394,309,315,561,975,549,905,794,788,689,744,635,662,591,506,620,648,589,744,586,552,554,469,409,437,1131,1085,1070,603,657,996,901,972,487,603,708,536,477,353,523,701,548,588,469,466,307,373,1165,764,546,472,380,389,384,362,440,599,462,345,269,275,437,552,627,518,627,520,453,398,976,979,711,553,466,481,311,286,265,269,262,273,338,212,331,252,284,380,591,579,553,580,594,710,797,591,477,404,328,269,242,228,238,220,213,298,210,295,265,295,353,382,419,406,345,338,515,691,787,809,882,836,736,673,391,495,369,425,314,198,162,158,174,255,312,276,329,401,468,576,699,645,659,593,444,462,633,652,674,455,386,278,212,235,217,483,507,538,256,280,238,393,502,552,462,422,418,393,354,276,246,227,221,208,302,353,176,230,529,543,156,159,100,112,162,199,224,523,474,320,340,263,345,498,596,518,356,299,448,319,100,169,142,172,84,120,289,157,281,283,540,545,597,321,251,321,410,514,460,360,677,781,632,570,217,178,216,298,152,130,63,189,325,438,474,397,290,376,303,570,486,389,473,670,938,843,327,331,329,311,324,265,208,109,89,207,323,287,429,202,332,546,777,703,519,543,560,489,160,262,228,280,241,270,317,371,231,72,98,362,399,635,517,327,273,676,734,653,598,496,92,90,257,152,91,65,214,207,217,53,112,262,220,390,411,239,212,116,409,296,192,202,93,91,256,157,87,63,211,212,223,58,107,266,216,404,406,238,211,119,397,306,178,198],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel0-3.py")
