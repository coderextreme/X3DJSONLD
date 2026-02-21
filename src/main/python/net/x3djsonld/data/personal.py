####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python personal.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(name='title',content='personal.x3d'),
    meta(name='identifier',content='https://someAddress/somePath/personal.x3d'),
    meta(name='description',content="John's Portfolio"),
    meta(name='generator',content='vim and X3D-Edit, https://savage.nps.edu/X3D-Edit')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Tour Views',position=(0,0,12)),
    Switch(DEF='SceneSwitcher',whichChoice=0,
      children=[
      Comment(' <Inline url=\'"../data/myextrusion.x3d"  "https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"\'/> '),
      Comment(' <Inline url=\'"../data/ballx_ite.x3d"  "https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d"\'/> '),
      Comment(' <Inline url=\'"../data/flower.x3d"     "https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d"\'/> '),
      Comment(' <Inline url=\'"../data/flower3.x3d"    "https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"\'/> '),
      Comment(' <Inline url=\'"../data/flowers.x3d"    "https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d"\'/> '),
      Comment(' <Inline url=\'"../data/flowers2.x3d"   "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"\'/> '),
      Comment(' <Inline url=\'"../data/flowers4.x3d"   "https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"\'/> '),
      Comment(' <Inline url=\'"../data/flowers7.x3d"   "https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"\'/> '),
      Inline(url=["../data/force-tidy.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"])]),
    Comment(' <Script DEF="Choice0"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 4 0"> '),
    Comment(' <TouchSensor description="Ball Prism" DEF="BallPrism_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Ball Prism"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="BallPrism_Sensor" fromField="touchTime" toNode="Choice0" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice0" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice1"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 3 0"> '),
    Comment(' <TouchSensor description="Floating Extrusion" DEF="FloatingExtrusion_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Floating Extrusion"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="FloatingExtrusion_Sensor" fromField="touchTime" toNode="Choice1" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice1" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice2"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 2 0"> '),
    Comment(' <TouchSensor description="Flower" DEF="Flower_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Flower"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="Flower_Sensor" fromField="touchTime" toNode="Choice2" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice2" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice3"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 1 0"> '),
    Comment(' <TouchSensor description="Flower 3" DEF="Flower3_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Flower 3"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="Flower3_Sensor" fromField="touchTime" toNode="Choice3" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice3" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice4"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform> '),
    Comment(' <TouchSensor description="Flowers" DEF="Flowers_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Flowers"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="Flowers_Sensor" fromField="touchTime" toNode="Choice4" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice4" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice5"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 -1 0"> '),
    Comment(' <TouchSensor description="Flowers 2" DEF="Flowers2_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Flowers 2"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="Flowers2_Sensor" fromField="touchTime" toNode="Choice5" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice5" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice6"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 -2 0"> '),
    Comment(' <TouchSensor description="Flowers 4" DEF="Flowers4_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Flowers 4"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="Flowers4_Sensor" fromField="touchTime" toNode="Choice6" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice6" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice7"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 -3 0"> '),
    Comment(' <TouchSensor description="Flowers 7 Inner Brow Raiser" DEF="Flowers7_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Flowers 7"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="Flowers7_Sensor" fromField="touchTime" toNode="Choice7" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice7" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),
    Comment(' <Script DEF="Choice8"> '),
    Comment(' <field name="touchTime" type="SFTime" accessType="inputOnly"/> '),
    Comment(' <field name="choice" type="SFInt32" accessType="outputOnly"/> '),
    Comment(' <![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]> '),
    Comment(' </Script> '),
    Comment(' <Transform translation="0 -4 0"> '),
    Comment(' <TouchSensor description="Force" DEF="Force_Sensor"/> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="1 1 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <Text string=\'"Force"\'> '),
    Comment(' <FontStyle size="2.4" spacing="1.2" justify=\'"MIDDLE" "MIDDLE"\'/> '),
    Comment(' </Text> '),
    Comment(' </Shape> '),
    Comment(' <Shape> '),
    Comment(' <Appearance> '),
    Comment(' <Material diffuseColor="0 0 1"/> '),
    Comment(' </Appearance> '),
    Comment(' <IndexedFaceSet coordIndex=\'0 1 2 3 -1\'> '),
    Comment(' <Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/> '),
    Comment(' </IndexedFaceSet> '),
    Comment(' </Shape> '),
    Comment(' </Transform> '),
    Comment(' <ROUTE fromNode="Force_Sensor" fromField="touchTime" toNode="Choice8" toField="touchTime"/> '),
    Comment(' <ROUTE fromNode="Choice8" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/> '),],])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for personal.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python personal.py load and self-test diagnostics complete.")
