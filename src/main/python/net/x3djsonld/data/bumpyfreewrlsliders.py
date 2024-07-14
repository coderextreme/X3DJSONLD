####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python bumpfreewrlsliders.py
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
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    component(level=1,name='Scripting'),
    component(name='EnvironmentalEffects',level=3),
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    component(name='Texturing',level=1),
    component(name='Rendering',level=1),
    # <component name='Shape' level='4'></component>
    component(name='Grouping',level=3),
    component(name='Core',level=1),
    component(name='DIS',level=2),
    meta(content='bumpfreewrlsliders.x3d',name='title'),
    meta(content='*enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='Doug Sanden, Christoph Valentin, John Carlson',name='creator'),
    meta(content='*if manually translating VRML-to-X3D, enter name of person translating here*',name='translator'),
    meta(content='*enter date of initial version here*',name='created'),
    meta(content='*enter date of translation here*',name='translated'),
    meta(content='*enter date of latest revision here*',name='modified'),
    meta(content='*enter version here, if any*',name='version'),
    meta(content='*enter reference citation or relative/online url here*',name='reference'),
    meta(content='*enter additional url/bibliographic reference information here*',name='reference'),
    meta(content='*enter reference resource here if required to support function, delivery, or coherence of content*',name='requires'),
    meta(content='*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024',name='rights'),
    meta(content='*enter drawing filename/url here*',name='drawing'),
    meta(content='*enter movie filename/url here*',name='MovingImage'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='*enter subject keywords here*',name='subject'),
    meta(content='*enter permission statements or url here*',name='accessRights'),
    meta(content='*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*',name='identifier'),
    meta(content='PSPad, http://www.pspad.com/',name='generator'),
    meta(content='license.html',name='license'),
    #  Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L 
    ]),
  #  "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution,
     It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)
     open for their "discussion about the teapot" 
  Scene=Scene(
    #  LayerSet with two layers, navigation happens in layer 1 
    children=[
    LayerSet(activeLayer=1,order=[1,2],
      #  the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" 
      layers=[
      Layer(pickable=True,objectType=["ALL"],
        #  basic nodes, which might be present in any scene 
        children=[
        NavigationInfo(type='"EXAMINE"',avatarSize=[0.25,1.75,0.75]),
        DirectionalLight(ambientIntensity=.2,direction=(0,-1,-0)),
        DirectionalLight(ambientIntensity=.2,direction=(-1,-.1,-1)),
        Viewpoint(description='My Overview',fieldOfView=1.570796,position=(0,1.75,60)),
        #  this group contains the red/green/blue 3D crosshair 
        Group(
          #  Arrow X 
          children=[
          Transform(translation=(25,0,0),rotation=(0,0,-1,1.57),
            children=[
            Shape(
              geometry=Cylinder(DEF='Shaft',radius=.35,height=50),
              appearance=Appearance(
                material=Material(DEF='RED',diffuseColor=(1,0,0),emissiveColor=(1,0,0))))]),
          Transform(translation=(50,0,0),rotation=(0,0,-1,1.57),
            children=[
            Shape(
              geometry=Cone(DEF='Tip',bottomRadius=.8,height=3),
              appearance=Appearance(
                material=Material(USE='RED')))]),
          #  Arrow Y 
          Transform(translation=(0,25,0),
            children=[
            Shape(
              geometry=Cylinder(USE='Shaft'),
              appearance=Appearance(
                material=Material(DEF='GREEN',diffuseColor=(0,1,0),emissiveColor=(0,1,0))))]),
          Transform(translation=(0,50,0),
            children=[
            Shape(
              geometry=Cone(USE='Tip'),
              appearance=Appearance(
                material=Material(USE='GREEN')))]),
          #  Arrow Z 
          Transform(translation=(0,0,25),rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Cylinder(USE='Shaft'),
              appearance=Appearance(
                material=Material(DEF='BLUE',diffuseColor=(0,0,1),emissiveColor=(0,0,1))))]),
          Transform(translation=(0,0,50),rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Cone(USE='Tip'),
              appearance=Appearance(
                material=Material(USE='BLUE')))])]),
        #  the model that is being reviewed by the users of this scene 
        Transform(DEF='FlowerTransform',
          # 
        <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' />
	
          #  Images courtesy of Paul Debevec's Light Probe Image Gallery 
          children=[
          Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
          Shape(
            geometry=Sphere(radius=40),
            appearance=Appearance(
              material=Material(diffuseColor=(.7,.7,.7),specularColor=(.5,.5,.5)),
              texture=ComposedCubeMapTexture(DEF='texture',
                backTexture=ImageTexture(id_='backShader',url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
                bottomTexture=ImageTexture(id_='bottomShader',url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
                frontTexture=ImageTexture(id_='frontShader',url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
                leftTexture=ImageTexture(id_='leftShader',url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
                rightTexture=ImageTexture(id_='rightShader',url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
                topTexture=ImageTexture(id_='topShader',url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])),
              shaders=[
              ComposedShader(DEF='freewrlShader',language='GLSL',
                field=[
                field(name='chromaticDispertion',accessType='inputOnly',type='SFVec3f',value=(0.98,1.0,1.033)),
                field(name='fw_textureCoordGenType',accessType='inputOnly',type='SFInt32',value=0),
                field(name='bias',type='SFFloat',accessType='inputOnly',value=0.5),
                field(name='scale',type='SFFloat',accessType='inputOnly',value=0.5),
                field(name='power',type='SFFloat',accessType='inputOnly',value=2),
                field(name='a',type='SFFloat',accessType='inputOutput',value=15),
                field(name='b',type='SFFloat',accessType='inputOutput',value=5),
                field(name='c',type='SFFloat',accessType='inputOutput',value=5),
                field(name='d',type='SFFloat',accessType='inputOutput',value=5),
                field(name='tdelta',type='SFFloat',accessType='inputOutput',value=0),
                field(name='pdelta',type='SFFloat',accessType='inputOutput',value=0)],
                parts=[
                ShaderPart(url=["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]),
                ShaderPart(url=["../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"],type='FRAGMENT')])]))]),
        #  DIS multiuser facilities 
        DISEntityManager(DEF='EntityManager',networkMode='networkReader',
          children=[
          DISEntityTypeMapping(category=77,specific=1,url=["../data/Leif8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3dv"]),
          DISEntityTypeMapping(category=77,specific=2,url=["../data/Lily8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3dv"]),
          DISEntityTypeMapping(category=77,specific=3,url=["../data/Tufani8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3dv"]),
          DISEntityTypeMapping(category=77,specific=4,url=["../data/Gramps8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3dv"])]),
        Collision(enabled=False,
          children=[
          Group(DEF='AvatarHolder')]),
        ROUTE(fromField='addedEntities',fromNode='EntityManager',toField='addChildren',toNode='AvatarHolder'),
        ROUTE(fromField='removedEntities',fromNode='EntityManager',toField='removeChildren',toNode='AvatarHolder')]),
      #  the second layer contains the sliders that are moved with the user's display
         like a HUD (heads up display) 
      LayoutLayer(pickable=True,objectType=["ALL"],
        #  positioning the LayoutLayer 
        layout=Layout(align=["RIGHT","BOTTOM"],offset=[0.0,0.0],offsetUnits=["WORLD","WORLD"],scaleMode=["NONE","NONE"],size=[0.4,1.0],sizeUnits=["WORLD","WORLD"]),
        #  clipping the LayoutLayer 
        viewport=Viewport(clipBoundary=[0,1,0,1]),
        #  the content (children) of the LayoutLayer 
        #  first, the slider for scaling the model 
        children=[
        Transform(translation=(0,0,-3),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0),transparency=0.7)),
            geometry=Box(size=(100,100,0.02)))]),
        #   the plane sensors  
        Transform(DEF='aSlider',translation=(0,0.7,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(radius=.05,height=2.5))]),
          Transform(DEF='aTransform',translation=(0,0,0.1),
            children=[
            PlaneSensor(DEF='aSensor',minPosition=(-20,0),maxPosition=(20,0)),
            Transform(translation=(0,0.0,0),
              children=[
              TouchSensor(DEF='aTS'),
              Shape(
                geometry=Sphere(radius=0.08),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))))]),
            Shape(
              geometry=Cylinder(radius=0.05,height=0.3),
              appearance=Appearance(
                material=Material(),))]),
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(radius=.05,height=2.5))])]),
        Transform(DEF='bSlider',translation=(0,0.4,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(radius=.05,height=2.5))]),
          Transform(DEF='bTransform',translation=(0,0,0.1),
            children=[
            PlaneSensor(DEF='bSensor',minPosition=(-20,0),maxPosition=(20,0)),
            Transform(translation=(0,0.0,0),
              children=[
              TouchSensor(DEF='bTS'),
              Shape(
                geometry=Sphere(radius=0.08),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))))]),
            Shape(
              geometry=Cylinder(radius=0.05,height=0.3),
              appearance=Appearance(
                material=Material(),))])]),
        Transform(DEF='cSlider',translation=(0,0.1,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(radius=.05,height=2.5))]),
          Transform(DEF='cTransform',translation=(0,0,0.1),
            children=[
            PlaneSensor(DEF='cSensor',minPosition=(-20,0),maxPosition=(20,0)),
            Transform(translation=(0,0.0,0),
              children=[
              TouchSensor(DEF='cTS'),
              Shape(
                geometry=Sphere(radius=0.08),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))))]),
            Shape(
              geometry=Cylinder(radius=0.05,height=0.3),
              appearance=Appearance(
                material=Material(),))])]),
        Transform(DEF='dSlider',translation=(0,-0.2,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(radius=.05,height=2.5))]),
          Transform(DEF='dTransform',translation=(0,0,0.1),
            children=[
            PlaneSensor(DEF='dSensor',minPosition=(-20,0),maxPosition=(20,0)),
            Transform(translation=(0,0.0,0),
              children=[
              TouchSensor(DEF='dTS'),
              Shape(
                geometry=Sphere(radius=0.08),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))))]),
            Shape(
              geometry=Cylinder(radius=0.05,height=0.3),
              appearance=Appearance(
                material=Material(),))])]),
        Transform(DEF='pdeltaSlider',translation=(0,-0.5,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(radius=.05,height=2.5))]),
          Transform(DEF='pdeltaTransform',translation=(0,0,0.1),
            children=[
            PlaneSensor(DEF='pdeltaSensor',minPosition=(-20,0),maxPosition=(20,0)),
            Transform(translation=(0,0.0,0),
              children=[
              TouchSensor(DEF='pdeltaTS'),
              Shape(
                geometry=Sphere(radius=0.08),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))))]),
            Shape(
              geometry=Cylinder(radius=0.05,height=0.3),
              appearance=Appearance(
                material=Material(),))])]),
        Transform(DEF='tdeltaSlider',translation=(0,-0.8,0),
          children=[
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(radius=.05,height=2.5))]),
          Transform(DEF='tdeltaTransform',translation=(0,0,0.1),
            children=[
            PlaneSensor(DEF='tdeltaSensor',minPosition=(-20,0),maxPosition=(20,0)),
            Transform(translation=(0,0.0,0),
              children=[
              TouchSensor(DEF='tdeltaTS'),
              Shape(
                geometry=Sphere(radius=0.08),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))))]),
            Shape(
              geometry=Cylinder(radius=0.05,height=0.3),
              appearance=Appearance(
                material=Material(),))])]),
        Script(DEF='aValueTransformerScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
          field(accessType='outputOnly',name='aValue',type='SFFloat',value=1.0)],

        sourceCode="""
ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }
"""),
        Script(DEF='bValueTransformerScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
          field(accessType='outputOnly',name='bValue',type='SFFloat',value=1.0)],

        sourceCode="""
ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }
"""),
        Script(DEF='cValueTransformerScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
          field(accessType='outputOnly',name='cValue',type='SFFloat',value=1.0)],

        sourceCode="""
ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }
"""),
        Script(DEF='dValueTransformerScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
          field(accessType='outputOnly',name='dValue',type='SFFloat',value=1.0)],

        sourceCode="""
ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }
"""),
        Script(DEF='pdeltaValueTransformerScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
          field(accessType='outputOnly',name='pdeltaValue',type='SFFloat',value=1.0)],

        sourceCode="""
ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }
"""),
        Script(DEF='tdeltaValueTransformerScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
          field(accessType='outputOnly',name='tdeltaValue',type='SFFloat',value=1.0)],

        sourceCode="""
ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }
"""),
        ROUTE(fromField='translation_changed',fromNode='aSensor',toField='set_translation',toNode='aTransform'),
        ROUTE(fromField='translation_changed',fromNode='bSensor',toField='set_translation',toNode='bTransform'),
        ROUTE(fromField='translation_changed',fromNode='cSensor',toField='set_translation',toNode='cTransform'),
        ROUTE(fromField='translation_changed',fromNode='dSensor',toField='set_translation',toNode='dTransform'),
        ROUTE(fromField='translation_changed',fromNode='pdeltaSensor',toField='set_translation',toNode='pdeltaTransform'),
        ROUTE(fromField='translation_changed',fromNode='tdeltaSensor',toField='set_translation',toNode='tdeltaTransform'),
        ROUTE(fromField='translation_changed',fromNode='aSensor',toField='newTranslation',toNode='aValueTransformerScript'),
        ROUTE(fromField='translation_changed',fromNode='bSensor',toField='newTranslation',toNode='bValueTransformerScript'),
        ROUTE(fromField='translation_changed',fromNode='cSensor',toField='newTranslation',toNode='cValueTransformerScript'),
        ROUTE(fromField='translation_changed',fromNode='dSensor',toField='newTranslation',toNode='dValueTransformerScript'),
        ROUTE(fromField='translation_changed',fromNode='pdeltaSensor',toField='newTranslation',toNode='pdeltaValueTransformerScript'),
        ROUTE(fromField='translation_changed',fromNode='tdeltaSensor',toField='newTranslation',toNode='tdeltaValueTransformerScript'),
        ROUTE(fromField='aValue',fromNode='aValueTransformerScript',toField='a',toNode='freewrlShader'),
        ROUTE(fromField='bValue',fromNode='bValueTransformerScript',toField='b',toNode='freewrlShader'),
        ROUTE(fromField='cValue',fromNode='cValueTransformerScript',toField='c',toNode='freewrlShader'),
        ROUTE(fromField='dValue',fromNode='dValueTransformerScript',toField='d',toNode='freewrlShader'),
        ROUTE(fromField='pdeltaValue',fromNode='pdeltaValueTransformerScript',toField='pdelta',toNode='freewrlShader'),
        ROUTE(fromField='tdeltaValue',fromNode='tdeltaValueTransformerScript',toField='tdelta',toNode='freewrlShader')])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for bumpfreewrlsliders.py:')
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

print("python bumpfreewrlsliders.py load and self-test diagnostics complete.")
