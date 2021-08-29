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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='driver.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3dForWebAuthorsTextFontStyleFigure2.11.png',name='reference'),
    meta(content='X3dForWebAuthorsTextFontStyleFigure2.12.png',name='reference'),
    meta(content='Test all possible combinations of "horizontal", "justify", "leftToRight" and "topToBottom" for major and minor Text axes. The viewer can select any combination of buttons and verify the correct Text orientation and spacing using the example images to the left of the browser window.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/driver.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='driver.x3d'),
    Viewpoint(description='Click white boxes to change settings',position=(0,0,26)),
    Transform(DEF='MYTRANS',scale=(0.9,0.9,0.9),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(DEF='MYTEXT',string=["Read","some text","today!"],
          fontStyle=FontStyle(DEF='MYFONT',style_='BOLD')))]),
    Transform(scale=(0.9,0.9,0.9),
      children=[
      Shape(
        geometry=IndexedLineSet(DEF='LINES',coordIndex=[0,1,-1,1,2,-1,3,4,-1,4,5,-1,6,7,-1,7,8,-1,9,10,-1,10,11,-1,12,13,-1,13,14,-1,15,16,-1,16,17,-1,18,19,-1,19,20,-1,21,22,-1,22,23,-1,24,25,-1,25,26,-1,27,28,-1,28,29,-1,30,31,-1,31,32,-1,33,34,-1,34,35,-1,36,37,-1,37,38,-1,39,40,-1,40,41,-1,42,43,-1,43,44,-1,45,46,-1,46,47,-1,48,49,-1,49,50,-1,51,52,-1,52,53,-1,54,55,-1,55,56,-1,57,58,-1,58,59,-1],
          coord=Coordinate(point=[(-10,-5,0),(0,-5,0),(10,-5,0),(-10,-4,0),(0,-4,0),(10,-4,0),(-10,-3,0),(0,-3,0),(10,-3,0),(-10,-2,0),(0,-2,0),(10,-2,0),(-10,-1,0),(0,-1,0),(10,-1,0),(-10,1,0),(0,1,0),(10,1,0),(-10,2,0),(0,2,0),(10,2,0),(-10,3,0),(0,3,0),(10,3,0),(-10,4,0),(0,4,0),(10,4,0),(-10,5,0),(0,5,0),(10,5,0),(-4,6,0),(0,6,0),(4,6,0),(-4,7,0),(0,7,0),(4,7,0),(-4,8,0),(0,8,0),(4,8,0),(-4,9,0),(0,9,0),(4,9,0),(-4,10,0),(0,10,0),(4,10,0),(-4,-6,0),(0,-6,0),(4,-6,0),(-4,-7,0),(0,-7,0),(4,-7,0),(-4,-8,0),(0,-8,0),(4,-8,0),(-4,-9,0),(0,-9,0),(4,-9,0),(-4,-10,0),(0,-10,0),(4,-10,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0))))]),
    Transform(DEF='AXES',scale=(0.9,0.9,0.9),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0))),
        geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1],
          coord=Coordinate(point=[(-10,0,0),(10,0,0),(0,10,0),(0,-10,0)])))]),
    Transform(DEF='BEGIN_TRANS',
      children=[
      Transform(translation=(-12.5,7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='BEGINMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='BEGIN',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","BEGIN","(major)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHBEGIN',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='FIRST_TRANS',
      children=[
      Transform(translation=(-6,7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='FIRSTMATERIAL',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='FIRST',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","FIRST","(major)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHFIRST',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='MIDDLE_TRANS',
      children=[
      Transform(translation=(6,7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='MIDDLEMATERIAL',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='MIDDLE',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","MIDDLE","(major)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHMIDDLE',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='END_TRANS',
      children=[
      Transform(translation=(12.5,7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='ENDMATERIAL',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='END',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","END","(major)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHEND',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='BEGIN_TRANS_MINOR',
      children=[
      Transform(translation=(-12.5,-7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='BEGINMATERIAL_MINOR',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='BEGIN_MINOR',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","BEGIN","(minor)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHBEGIN_MINOR',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='FIRST_TRANS_MINOR',
      children=[
      Transform(translation=(-6,-7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='FIRSTMATERIAL_MINOR',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='FIRST_MINOR',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","FIRST","(minor)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHFIRST_MINOR',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='MIDDLE_TRANS_MINOR',
      children=[
      Transform(translation=(6,-7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='MIDDLEMATERIAL_MINOR',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='MIDDLE_MINOR',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","MIDDLE","(minor)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHMIDDLE_MINOR',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='END_TRANS_MINOR',
      children=[
      Transform(translation=(12.5,-7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='ENDMATERIAL_MINOR',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='END_MINOR',size=(4.5,3,0.1))),
        Transform(translation=(-1.2,0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["justify","END","(minor)"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHEND_MINOR',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='LEFTTORIGHT_true_TRANS',
      children=[
      Transform(translation=(-12.5,-3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='LEFTTORIGHT_trueMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='LEFTTORIGHT_true',size=(4.5,2,0.1))),
        Transform(translation=(-2,0.2,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["leftToRight","true"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHLEFTTORIGHT_true',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='HORIZONTAL_true_TRANS',
      children=[
      Transform(translation=(-12.5,3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='HORIZONTAL_trueMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='HORIZONTAL_true',size=(4.5,2,0.1))),
        Transform(translation=(-1.8,0.2,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["horizontal","true"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHHORIZONTAL_true',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='LEFTTORIGHT_false_TRANS',
      children=[
      Transform(translation=(12.5,-3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='LEFTTORIGHT_falseMATERIAL',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='LEFTTORIGHT_false',size=(4.5,2,0.1))),
        Transform(translation=(-2,0.2,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["leftToRight","false"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHLEFTTORIGHT_false',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='HORIZONTAL_false_TRANS',
      children=[
      Transform(translation=(12.5,3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='HORIZONTAL_falseMATERIAL',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='HORIZONTAL_false',size=(4.5,2,0.1))),
        Transform(translation=(-1.8,0.2,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["horizontal","false"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHHORIZONTAL_false',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='TOPTOBOTTOM_true_TRANS',
      children=[
      Transform(translation=(-12.5,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='TOPTOBOTTOM_trueMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='TOPTOBOTTOM_true',size=(4.5,2,0.1))),
        Transform(translation=(-1.8,0.2,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["topToBottom","true"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHTOPTOBOTTOM_true',description='reset Fontstyle to indicated setting')]),
    Transform(DEF='TOPTOBOTTOM_false_TRANS',
      children=[
      Transform(translation=(12.5,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='TOPTOBOTTOM_falseMATERIAL',ambientIntensity=1,diffuseColor=(1,1,1))),
          geometry=Box(DEF='TOPTOBOTTOM_false',size=(4.5,2,0.1))),
        Transform(translation=(-1.8,0.2,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["topToBottom","false"],
              fontStyle=FontStyle(size=0.8,style_='BOLD')))])]),
      TouchSensor(DEF='TOUCHTOPTOBOTTOM_false',description='reset Fontstyle to indicated setting')]),
    Script(DEF='TEXT_SCRIPT',directOutput=True,url=["driver.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/driver.js"],
      field=[
      field(accessType='initializeOnly',name='axes',type='SFNode',
        children=[
        Transform(USE='AXES')]),
      field(accessType='initializeOnly',name='myTrans',type='SFNode',
        children=[
        Transform(USE='MYTRANS')]),
      field(accessType='initializeOnly',name='myFont',type='SFNode',
        children=[
        FontStyle(USE='MYFONT')]),
      field(accessType='initializeOnly',name='justify',type='MFString',value=["BEGIN"]),
      field(accessType='initializeOnly',name='myURL',type='SFString',value='../../html/write_list.cgi?'),
      field(accessType='initializeOnly',name='cgiString',type='SFString',value='+FontStyle+Appearance'),
      field(accessType='initializeOnly',name='myParameter',type='MFString',value=["target=_top"]),
      field(accessType='initializeOnly',name='green',type='SFColor',value=(0,1,0)),
      field(accessType='initializeOnly',name='white',type='SFColor',value=(1,1,1)),
      field(accessType='initializeOnly',name='myFalse',type='SFString',value='false'),
      field(accessType='initializeOnly',name='myTrue',type='SFString',value='true'),
      field(accessType='initializeOnly',name='begin',type='SFString',value='BEGIN'),
      field(accessType='initializeOnly',name='middle',type='SFString',value='MIDDLE'),
      field(accessType='initializeOnly',name='end',type='SFString',value='END'),
      field(accessType='initializeOnly',name='first',type='SFString',value='FIRST'),
      field(accessType='initializeOnly',name='moveUp',type='SFVec3f',value=(0,4,0)),
      field(accessType='initializeOnly',name='moveDown',type='SFVec3f',value=(0,-4,0)),
      field(accessType='initializeOnly',name='topToBottomTrueMaterial',type='SFNode',
        children=[
        Material(USE='TOPTOBOTTOM_trueMATERIAL')]),
      field(accessType='initializeOnly',name='topToBottomFalseMaterial',type='SFNode',
        children=[
        Material(USE='TOPTOBOTTOM_falseMATERIAL')]),
      field(accessType='initializeOnly',name='leftToRightFalseMaterial',type='SFNode',
        children=[
        Material(USE='LEFTTORIGHT_falseMATERIAL')]),
      field(accessType='initializeOnly',name='leftToRightTrueMaterial',type='SFNode',
        children=[
        Material(USE='LEFTTORIGHT_trueMATERIAL')]),
      field(accessType='initializeOnly',name='horizontalFalseMaterial',type='SFNode',
        children=[
        Material(USE='HORIZONTAL_falseMATERIAL')]),
      field(accessType='initializeOnly',name='horizontalTrueMaterial',type='SFNode',
        children=[
        Material(USE='HORIZONTAL_trueMATERIAL')]),
      field(accessType='initializeOnly',name='beginMaterialMinor',type='SFNode',
        children=[
        Material(USE='BEGINMATERIAL_MINOR')]),
      field(accessType='initializeOnly',name='firstMaterialMinor',type='SFNode',
        children=[
        Material(USE='FIRSTMATERIAL_MINOR')]),
      field(accessType='initializeOnly',name='middleMaterialMinor',type='SFNode',
        children=[
        Material(USE='MIDDLEMATERIAL_MINOR')]),
      field(accessType='initializeOnly',name='endMaterialMinor',type='SFNode',
        children=[
        Material(USE='ENDMATERIAL_MINOR')]),
      field(accessType='initializeOnly',name='beginMaterial',type='SFNode',
        children=[
        Material(USE='BEGINMATERIAL')]),
      field(accessType='initializeOnly',name='firstMaterial',type='SFNode',
        children=[
        Material(USE='FIRSTMATERIAL')]),
      field(accessType='initializeOnly',name='middleMaterial',type='SFNode',
        children=[
        Material(USE='MIDDLEMATERIAL')]),
      field(accessType='initializeOnly',name='endMaterial',type='SFNode',
        children=[
        Material(USE='ENDMATERIAL')]),
      field(accessType='inputOnly',name='topToBottomTrue',type='SFTime'),
      field(accessType='inputOnly',name='topToBottomFalse',type='SFTime'),
      field(accessType='inputOnly',name='leftToRightTrue',type='SFTime'),
      field(accessType='inputOnly',name='leftToRightFalse',type='SFTime'),
      field(accessType='inputOnly',name='horizontalTrue',type='SFTime'),
      field(accessType='inputOnly',name='horizontalFalse',type='SFTime'),
      field(accessType='inputOnly',name='justifyMajorBegin',type='SFTime'),
      field(accessType='inputOnly',name='justifyMajorFirst',type='SFTime'),
      field(accessType='inputOnly',name='justifyMajorMiddle',type='SFTime'),
      field(accessType='inputOnly',name='justifyMajorEnd',type='SFTime'),
      field(accessType='inputOnly',name='justifyMinorBegin',type='SFTime'),
      field(accessType='inputOnly',name='justifyMinorFirst',type='SFTime'),
      field(accessType='inputOnly',name='justifyMinorMiddle',type='SFTime'),
      field(accessType='inputOnly',name='justifyMinorEnd',type='SFTime'),
      field(accessType='inputOnly',name='getFile',type='SFTime'),
      field(accessType='initializeOnly',name='justifyMajor',type='SFString',value='BEGIN'),
      field(accessType='initializeOnly',name='justifyMinor',type='SFString',value='FIRST'),
      field(accessType='initializeOnly',name='topToBottom',type='SFString',value='true'),
      field(accessType='initializeOnly',name='leftToRight',type='SFString',value='true'),
      field(accessType='initializeOnly',name='horizontal',type='SFString',value='true')]),
    ROUTE(fromField='touchTime',fromNode='TOUCHTOPTOBOTTOM_true',toField='topToBottomTrue',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHTOPTOBOTTOM_false',toField='topToBottomFalse',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHLEFTTORIGHT_true',toField='leftToRightTrue',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHLEFTTORIGHT_false',toField='leftToRightFalse',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHHORIZONTAL_true',toField='horizontalTrue',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHHORIZONTAL_false',toField='horizontalFalse',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHBEGIN',toField='justifyMajorBegin',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHFIRST',toField='justifyMajorFirst',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHMIDDLE',toField='justifyMajorMiddle',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHEND',toField='justifyMajorEnd',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHBEGIN_MINOR',toField='justifyMinorBegin',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHFIRST_MINOR',toField='justifyMinorFirst',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHMIDDLE_MINOR',toField='justifyMinorMiddle',toNode='TEXT_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHEND_MINOR',toField='justifyMinorEnd',toNode='TEXT_SCRIPT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for driver.py")
